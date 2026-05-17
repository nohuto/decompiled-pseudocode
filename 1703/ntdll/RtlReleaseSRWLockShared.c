/*
 * XREFs of RtlReleaseSRWLockShared @ 0x180028DE0
 * Callers:
 *     sub_180006420 @ 0x180006420 (sub_180006420.c)
 *     sub_180006F80 @ 0x180006F80 (sub_180006F80.c)
 *     sub_180007C18 @ 0x180007C18 (sub_180007C18.c)
 *     sub_180008F44 @ 0x180008F44 (sub_180008F44.c)
 *     sub_180008F9C @ 0x180008F9C (sub_180008F9C.c)
 *     sub_18000EF18 @ 0x18000EF18 (sub_18000EF18.c)
 *     sub_180013664 @ 0x180013664 (sub_180013664.c)
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_180018508 @ 0x180018508 (sub_180018508.c)
 *     sub_180019B90 @ 0x180019B90 (sub_180019B90.c)
 *     sub_18001B710 @ 0x18001B710 (sub_18001B710.c)
 *     sub_18001EF1C @ 0x18001EF1C (sub_18001EF1C.c)
 *     sub_18001FD40 @ 0x18001FD40 (sub_18001FD40.c)
 *     sub_1800215C8 @ 0x1800215C8 (sub_1800215C8.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_18002FF94 @ 0x18002FF94 (sub_18002FF94.c)
 *     sub_18004CFC0 @ 0x18004CFC0 (sub_18004CFC0.c)
 *     sub_18004FA70 @ 0x18004FA70 (sub_18004FA70.c)
 *     EtwDeliverDataBlock @ 0x1800523B0 (EtwDeliverDataBlock.c)
 *     sub_180052724 @ 0x180052724 (sub_180052724.c)
 *     sub_180058688 @ 0x180058688 (sub_180058688.c)
 *     sub_180058844 @ 0x180058844 (sub_180058844.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     sub_18005905C @ 0x18005905C (sub_18005905C.c)
 *     sub_18006FF7C @ 0x18006FF7C (sub_18006FF7C.c)
 *     RtlProcessFlsData @ 0x180070090 (RtlProcessFlsData.c)
 *     TpTrimPools @ 0x180070D30 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180071060 (RtlSleepConditionVariableSRW.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     sub_1800749F4 @ 0x1800749F4 (sub_1800749F4.c)
 *     sub_1800755BC @ 0x1800755BC (sub_1800755BC.c)
 *     sub_180076A44 @ 0x180076A44 (sub_180076A44.c)
 *     RtlQueryProtectedPolicy @ 0x180077890 (RtlQueryProtectedPolicy.c)
 *     sub_180079B6C @ 0x180079B6C (sub_180079B6C.c)
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 *     sub_18008275C @ 0x18008275C (sub_18008275C.c)
 *     sub_1800857E8 @ 0x1800857E8 (sub_1800857E8.c)
 *     sub_1800D7BCC @ 0x1800D7BCC (sub_1800D7BCC.c)
 *     RtlQueryProcessLockInformation @ 0x1800D97B0 (RtlQueryProcessLockInformation.c)
 *     sub_1800DF250 @ 0x1800DF250 (sub_1800DF250.c)
 *     sub_1800DF6E0 @ 0x1800DF6E0 (sub_1800DF6E0.c)
 *     sub_1800E1AD8 @ 0x1800E1AD8 (sub_1800E1AD8.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E71F0 (RtlQueryCriticalSectionOwner.c)
 *     RtlBarrier_0 @ 0x1800EB020 (RtlBarrier_0.c)
 *     sub_1800FE3D0 @ 0x1800FE3D0 (sub_1800FE3D0.c)
 *     sub_1800FECE0 @ 0x1800FECE0 (sub_1800FECE0.c)
 *     sub_1800FEEB8 @ 0x1800FEEB8 (sub_1800FEEB8.c)
 *     sub_1800FEF2C @ 0x1800FEF2C (sub_1800FEF2C.c)
 *     EtwEnumerateProcessRegGuids @ 0x180104330 (EtwEnumerateProcessRegGuids.c)
 *     sub_18010A41C @ 0x18010A41C (sub_18010A41C.c)
 *     sub_18010AE38 @ 0x18010AE38 (sub_18010AE38.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180077520 @ 0x180077520 (sub_180077520.c)
 */

unsigned __int64 __fastcall RtlReleaseSRWLockShared(volatile signed __int64 *a1)
{
  unsigned __int64 result; // rax
  signed __int64 v3; // rdx
  signed __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 i; // rcx

  result = _InterlockedCompareExchange64(a1, 0LL, 17LL);
  v3 = result;
  if ( result == 17 )
    return result;
  if ( (result & 1) == 0 )
    RtlRaiseStatus(-1073741212);
  if ( (result & 2) != 0 )
  {
LABEL_9:
    if ( (v3 & 8) != 0 )
    {
      result = v3 & 0xFFFFFFFFFFFFFFF0uLL;
      for ( i = *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = *(_QWORD *)(result + 8) )
        result = *(_QWORD *)result;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
        return result;
      v6 = -9LL;
    }
    else
    {
      v6 = -1LL;
    }
    while ( 1 )
    {
      v7 = (v3 & 6) == 2 ? v6 + 4 : v6;
      v8 = v7 + v3;
      result = _InterlockedCompareExchange64(a1, v7 + v3, v3);
      if ( v3 == result )
        break;
      v3 = result;
    }
    if ( (v3 & 6) == 2 )
      return sub_180077520(a1, v8, 0LL);
    return result;
  }
  while ( 1 )
  {
    v4 = v3 - 16;
    if ( (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
      v4 = 0LL;
    result = _InterlockedCompareExchange64(a1, v4, v3);
    v5 = v3 == result;
    v3 = result;
    if ( v5 )
      return result;
    if ( (result & 2) != 0 )
      goto LABEL_9;
  }
}
