/*
 * XREFs of StorPortDeviceReady @ 0x1C0033DF0
 * Callers:
 *     StorPortDeviceReadyVrfy @ 0x1C006B180 (StorPortDeviceReadyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0001F0C (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C0004198 (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x1C00061C8 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C00309E8 (WPP_SF_ddd.c)
 */

char __fastcall StorPortDeviceReady(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  __int64 v7; // rdi
  __int64 Unit; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+28h] [rbp-40h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v14; // [rsp+70h] [rbp+8h]

  v7 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0056210 & 0x200) != 0 )
    DbgLogRequest(v7, 21, retaddr, **(_QWORD **)(a1 - 16), 0LL, a4 | (unsigned __int64)((a3 | (a2 << 8)) << 8), 0LL);
  if ( !v7 )
    return 0;
  LOBYTE(v14) = a2;
  BYTE1(v14) = a3;
  BYTE2(v14) = a4;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    LODWORD(v12) = a4;
    LODWORD(v11) = a3;
    WPP_SF_ddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x14u,
      (__int64)&WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids,
      a2,
      v11,
      v12);
  }
  Unit = RaidAdapterFindUnit(v7, v14);
  if ( !Unit )
    return 0;
  v10 = Unit + 1280;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1296), 134684676, 134684677) != 134684677 )
    v10 = 0LL;
  if ( !v10 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0056210 & 0x800) != 0 )
      DbgLogRequest(v7, 22, retaddr, 937LL, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(v10 + 32) = 10;
  *(_DWORD *)(v10 + 36) = v14;
  RaidQueueDeferredItem((char *)(v7 + 1088), (struct _SLIST_ENTRY *)v10);
  return 1;
}
