/*
 * XREFs of StorPortDeviceReady @ 0x1C0030440
 * Callers:
 *     StorPortDeviceReadyVrfy @ 0x1C006A180 (StorPortDeviceReadyVrfy.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0003D6C (RaidQueueDeferredItem.c)
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C002C0BC (WPP_SF_ddd.c)
 */

char __fastcall StorPortDeviceReady(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  unsigned __int8 v5; // si
  int v7; // ebx
  __int64 v8; // rdi
  __int64 Unit; // rax
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v15; // [rsp+70h] [rbp+8h]

  v4 = a3;
  v5 = a4;
  v7 = (unsigned __int8)a3;
  v8 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0056210 & 0x200) != 0 )
    DbgLogRequest(
      v8,
      21,
      retaddr,
      v8,
      0LL,
      (unsigned __int8)a4 | (unsigned __int64)(((unsigned __int8)a3 | (a2 << 8)) << 8),
      0LL);
  if ( !v8 )
    return 0;
  LOBYTE(v15) = a2;
  BYTE1(v15) = v4;
  BYTE2(v15) = v5;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    LODWORD(v13) = v5;
    LODWORD(v12) = v7;
    WPP_SF_ddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x14u,
      (__int64)&WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids,
      a2,
      v12,
      v13);
  }
  Unit = RaidAdapterFindUnit(v8, v15, a3, a4);
  if ( !Unit )
    return 0;
  v11 = Unit + 1280;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1296), 134684676, 134684677) != 134684677 )
    v11 = 0LL;
  if ( !v11 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0056210 & 0x800) != 0 )
      DbgLogRequest(v8, 22, retaddr, 937LL, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(v11 + 32) = 10;
  *(_DWORD *)(v11 + 36) = v15;
  RaidQueueDeferredItem((char *)(v8 + 1088), (struct _SLIST_ENTRY *)v11);
  return 1;
}
