/*
 * XREFs of StorPortDeviceBusy @ 0x1C00302A0
 * Callers:
 *     StorPortDeviceBusyVrfy @ 0x1C006A160 (StorPortDeviceBusyVrfy.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0003D6C (RaidQueueDeferredItem.c)
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     WPP_SF_dddd @ 0x1C0033C4C (WPP_SF_dddd.c)
 */

char __fastcall StorPortDeviceBusy(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int8 v5; // si
  unsigned __int8 v6; // bp
  char v7; // r15
  int v8; // ebx
  __int64 v9; // rdi
  __int64 Unit; // rax
  __int64 v12; // rdx
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v14; // [rsp+80h] [rbp+8h]

  v5 = a4;
  v6 = a2;
  v7 = a3;
  v8 = (unsigned __int8)a3;
  v9 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0056210 & 0x200) != 0 )
    DbgLogRequest(
      **(_QWORD **)(a1 - 16),
      20,
      retaddr,
      v9,
      a5,
      (unsigned __int8)a4 | (unsigned __int64)(((unsigned __int8)a3 | ((unsigned __int8)a2 << 8)) << 8),
      0LL);
  if ( !v9 )
    return 0;
  LOBYTE(v14) = v6;
  BYTE1(v14) = v7;
  BYTE2(v14) = v5;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_dddd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, v6, v8, v5, a5);
  }
  Unit = RaidAdapterFindUnit(v9, v14, a3, a4);
  if ( !Unit )
    return 0;
  ++*(_DWORD *)(Unit + 1868);
  v12 = Unit + 1200;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1216), 134684676, 134684677) != 134684677 )
    v12 = 0LL;
  if ( !v12 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0056210 & 0x800) != 0 )
      DbgLogRequest(v9, 22, retaddr, 847LL, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(v12 + 32) = 9;
  *(_DWORD *)(v12 + 36) = v14;
  *(_DWORD *)(v12 + 40) = a5;
  RaidQueueDeferredItem((char *)(v9 + 1088), (struct _SLIST_ENTRY *)v12);
  return 1;
}
