/*
 * XREFs of StorPortResumeDevice @ 0x1C0003C30
 * Callers:
 *     StorPortResumeDeviceVrfy @ 0x1C006A6E0 (StorPortResumeDeviceVrfy.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0003D6C (RaidQueueDeferredItem.c)
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C002C0BC (WPP_SF_ddd.c)
 *     McTemplateK0pqccc @ 0x1C002EE8C (McTemplateK0pqccc.c)
 */

char __fastcall StorPortResumeDevice(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // si
  int v7; // r14d
  __int64 v8; // rdi
  int v9; // ecx
  __int64 Unit; // rax
  __int64 v11; // rdx
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v14; // [rsp+70h] [rbp+8h]

  v4 = a4;
  v5 = a3;
  v7 = a1;
  v8 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0056210 & 0x200) != 0 )
    DbgLogRequest(
      v8,
      17,
      retaddr,
      **(_QWORD **)(a1 - 16),
      0LL,
      (unsigned __int8)a4 | (unsigned __int64)(((unsigned __int8)a3 | (a2 << 8)) << 8),
      0LL);
  v9 = 255;
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 56);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 4) != 0 )
    McTemplateK0pqccc(v9, a2, a3, v7, v9, a2, v5, v4);
  if ( v8 )
  {
    LOBYTE(v14) = a2;
    BYTE1(v14) = v5;
    BYTE2(v14) = v4;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_ddd(WPP_GLOBAL_Control->AttachedDevice, 18LL, &WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids, a2, v5, v4);
    }
    Unit = RaidAdapterFindUnit(v8, v14, a3, a4);
    if ( Unit )
    {
      v11 = Unit + 1120;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1136), 134684676, 134684677) != 134684677 )
        v11 = 0LL;
      if ( v11 )
      {
        *(_DWORD *)(v11 + 32) = 6;
        *(_DWORD *)(v11 + 36) = v14;
        RaidQueueDeferredItem((PVOID)(v8 + 1088));
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_1C0056210 & 0x800) != 0 )
        DbgLogRequest(v8, 22, retaddr, 642LL, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
