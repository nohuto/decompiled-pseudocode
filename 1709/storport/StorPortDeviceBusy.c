/*
 * XREFs of StorPortDeviceBusy @ 0x1C0033C50
 * Callers:
 *     StorPortDeviceBusyVrfy @ 0x1C006B160 (StorPortDeviceBusyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0001F0C (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C0004198 (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x1C00061C8 (RaidAdapterFindUnit.c)
 *     WPP_SF_dddd @ 0x1C0036510 (WPP_SF_dddd.c)
 */

char __fastcall StorPortDeviceBusy(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  unsigned __int8 v6; // si
  __int64 v8; // rdi
  __int64 Unit; // rax
  __int64 v11; // rdx
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v13; // [rsp+70h] [rbp+8h]

  v6 = a3;
  v8 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0056210 & 0x200) != 0 )
    DbgLogRequest(
      **(_QWORD **)(a1 - 16),
      20,
      retaddr,
      **(_QWORD **)(a1 - 16),
      a5,
      a4 | (unsigned __int64)(((unsigned __int8)a3 | (a2 << 8)) << 8),
      0LL);
  if ( !v8 )
    return 0;
  LOBYTE(v13) = a2;
  BYTE1(v13) = v6;
  BYTE2(v13) = a4;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_dddd(WPP_GLOBAL_Control->AttachedDevice, v6, a3, a2, v6, a4, a5);
  }
  Unit = RaidAdapterFindUnit(v8, v13);
  if ( !Unit )
    return 0;
  ++*(_DWORD *)(Unit + 1868);
  v11 = Unit + 1200;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1216), 134684676, 134684677) != 134684677 )
    v11 = 0LL;
  if ( !v11 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0056210 & 0x800) != 0 )
      DbgLogRequest(v8, 22, retaddr, 847LL, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(v11 + 32) = 9;
  *(_DWORD *)(v11 + 36) = v13;
  *(_DWORD *)(v11 + 40) = a5;
  RaidQueueDeferredItem((char *)(v8 + 1088), (struct _SLIST_ENTRY *)v11);
  return 1;
}
