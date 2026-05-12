/*
 * XREFs of StorPortPauseDevice @ 0x1C0003880
 * Callers:
 *     StorPortPauseDeviceVrfy @ 0x1C006A680 (StorPortPauseDeviceVrfy.c)
 * Callees:
 *     RaidPauseUnitQueue @ 0x1C00039F8 (RaidPauseUnitQueue.c)
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0003D6C (RaidQueueDeferredItem.c)
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C002C0BC (WPP_SF_ddd.c)
 *     McTemplateK0pqqccc @ 0x1C002EF38 (McTemplateK0pqqccc.c)
 */

char __fastcall StorPortPauseDevice(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int8 v5; // di
  unsigned __int8 v6; // r14
  int v8; // ebx
  __int64 v9; // rsi
  int v10; // ecx
  __int64 Unit; // rax
  __int64 v12; // rbp
  _DWORD *v13; // rdi
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v16; // [rsp+90h] [rbp+8h]

  v5 = a4;
  v6 = a3;
  v8 = a1;
  v9 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0056210 & 0x200) != 0 )
    DbgLogRequest(
      **(_QWORD **)(a1 - 16),
      16,
      (_DWORD)retaddr,
      v9,
      a5,
      (unsigned __int8)a4 | (unsigned __int64)(((unsigned __int8)a3 | (a2 << 8)) << 8),
      0LL);
  v10 = 255;
  if ( v9 )
    v10 = *(_DWORD *)(v9 + 56);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 4) != 0 )
    McTemplateK0pqqccc(v10, a2, a3, v8, a5, v10, a2, v6, v5);
  if ( v9 )
  {
    LOBYTE(v16) = a2;
    BYTE1(v16) = v6;
    BYTE2(v16) = v5;
    Unit = RaidAdapterFindUnit(v9, v16, a3, a4);
    v12 = Unit;
    if ( Unit )
    {
      ++*(_DWORD *)(Unit + 1864);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        WPP_SF_ddd(
          WPP_GLOBAL_Control->AttachedDevice,
          17LL,
          &WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids,
          a2,
          v6,
          v5);
      }
      v13 = (_DWORD *)(v12 + 1040);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 1056), 134684676, 134684677) != 134684677 )
        v13 = 0LL;
      if ( v13 )
      {
        v13[8] = 5;
        v13[9] = v16;
        v13[10] = a5;
        RaidPauseUnitQueue(v12);
        RaidQueueDeferredItem((PVOID)(v9 + 1088));
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_1C0056210 & 0x800) != 0 )
        DbgLogRequest(v9, 22, (_DWORD)retaddr, 530, 0LL, 0LL, 0LL);
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_ddd(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids, a2, v6, v5);
    }
  }
  return 0;
}
