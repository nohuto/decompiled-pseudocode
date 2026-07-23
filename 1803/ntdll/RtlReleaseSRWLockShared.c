/*
 * XREFs of RtlReleaseSRWLockShared @ 0x180010990
 * Callers:
 *     sub_1800031BC @ 0x1800031BC (sub_1800031BC.c)
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 *     sub_180005A98 @ 0x180005A98 (sub_180005A98.c)
 *     sub_1800107D4 @ 0x1800107D4 (sub_1800107D4.c)
 *     sub_180011148 @ 0x180011148 (sub_180011148.c)
 *     sub_180018770 @ 0x180018770 (sub_180018770.c)
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 *     sub_18001E320 @ 0x18001E320 (sub_18001E320.c)
 *     RtlSleepConditionVariableSRW @ 0x180025E20 (RtlSleepConditionVariableSRW.c)
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     sub_1800299E8 @ 0x1800299E8 (sub_1800299E8.c)
 *     sub_18003B5F8 @ 0x18003B5F8 (sub_18003B5F8.c)
 *     RtlProcessFlsData @ 0x180048090 (RtlProcessFlsData.c)
 *     sub_18004865C @ 0x18004865C (sub_18004865C.c)
 *     sub_180049998 @ 0x180049998 (sub_180049998.c)
 *     sub_180049C00 @ 0x180049C00 (sub_180049C00.c)
 *     sub_18004A0A0 @ 0x18004A0A0 (sub_18004A0A0.c)
 *     sub_18005088C @ 0x18005088C (sub_18005088C.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 *     sub_18005E47C @ 0x18005E47C (sub_18005E47C.c)
 *     sub_18005EE34 @ 0x18005EE34 (sub_18005EE34.c)
 *     sub_18006008C @ 0x18006008C (sub_18006008C.c)
 *     sub_18006073C @ 0x18006073C (sub_18006073C.c)
 *     sub_1800607D4 @ 0x1800607D4 (sub_1800607D4.c)
 *     sub_180060EC8 @ 0x180060EC8 (sub_180060EC8.c)
 *     sub_1800633D4 @ 0x1800633D4 (sub_1800633D4.c)
 *     sub_180063438 @ 0x180063438 (sub_180063438.c)
 *     sub_18006AC08 @ 0x18006AC08 (sub_18006AC08.c)
 *     sub_18006DD40 @ 0x18006DD40 (sub_18006DD40.c)
 *     sub_18006DE80 @ 0x18006DE80 (sub_18006DE80.c)
 *     sub_180070F60 @ 0x180070F60 (sub_180070F60.c)
 *     RtlQueryProtectedPolicy @ 0x1800712C0 (RtlQueryProtectedPolicy.c)
 *     sub_180072114 @ 0x180072114 (sub_180072114.c)
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 *     sub_18007D27C @ 0x18007D27C (sub_18007D27C.c)
 *     TpTrimPools @ 0x18007F020 (TpTrimPools.c)
 *     sub_1800D09C4 @ 0x1800D09C4 (sub_1800D09C4.c)
 *     RtlQueryProcessLockInformation @ 0x1800D2B90 (RtlQueryProcessLockInformation.c)
 *     sub_1800D8AD0 @ 0x1800D8AD0 (sub_1800D8AD0.c)
 *     Callback @ 0x1800D8F60 (Callback.c)
 *     sub_1800DB794 @ 0x1800DB794 (sub_1800DB794.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E1EC0 (RtlQueryCriticalSectionOwner.c)
 *     RtlBarrier_0 @ 0x1800E65E0 (RtlBarrier_0.c)
 *     sub_1800FCA5C @ 0x1800FCA5C (sub_1800FCA5C.c)
 *     sub_1800FD510 @ 0x1800FD510 (sub_1800FD510.c)
 *     sub_1800FD70C @ 0x1800FD70C (sub_1800FD70C.c)
 *     sub_1800FD780 @ 0x1800FD780 (sub_1800FD780.c)
 *     EtwEnumerateProcessRegGuids @ 0x180106590 (EtwEnumerateProcessRegGuids.c)
 *     sub_18010D1CC @ 0x18010D1CC (sub_18010D1CC.c)
 *     sub_18010DCE8 @ 0x18010DCE8 (sub_18010DCE8.c)
 * Callees:
 *     sub_180070AAC @ 0x180070AAC (sub_180070AAC.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 */

void __cdecl RtlReleaseSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  signed __int64 v1; // rax
  signed __int64 v2; // r9
  signed __int64 v3; // rtt
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rdx
  signed __int64 v7; // r9
  signed __int64 v8; // rdx
  signed __int64 v9; // rtt
  _QWORD *v10; // rdx
  __int64 i; // r9

  v1 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 17LL);
  if ( v1 == 17 )
    return;
  if ( (v1 & 1) == 0 )
    RtlRaiseStatus(-1073741212);
  if ( (v1 & 2) != 0 )
  {
LABEL_9:
    if ( (v1 & 8) != 0 )
    {
      v10 = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0uLL);
      for ( i = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v10[1] )
        v10 = (_QWORD *)*v10;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
        return;
      v4 = -9LL;
      v5 = -5LL;
    }
    else
    {
      v4 = -1LL;
      v5 = 3LL;
    }
    do
    {
      v6 = v5;
      v7 = v1 & 6;
      if ( v7 != 2 )
        v6 = v4;
      v8 = v1 + v6;
      v9 = v1;
      v1 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v8, v1);
    }
    while ( v9 != v1 );
    if ( v7 == 2 )
      sub_180070AAC(SRWLock, v8, 0LL);
    return;
  }
  while ( 1 )
  {
    v2 = 0LL;
    if ( (v1 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v2 = v1 - 16;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v2, v1);
    if ( v3 == v1 )
      break;
    if ( (v1 & 2) != 0 )
      goto LABEL_9;
  }
}
