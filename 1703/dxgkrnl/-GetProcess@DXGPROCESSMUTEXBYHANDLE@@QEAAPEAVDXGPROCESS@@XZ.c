/*
 * XREFs of ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001DCC
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C008AD40 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C009AD60 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C009AE30 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryStatistics @ 0x1C017D700 (DxgkQueryStatistics.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C017DD40 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C017F8F0 (DxgkChangeVideoMemoryReservation.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01936E4 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C0194244 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C01A2790 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C01A2B00 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C01A2C40 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C01A2FD0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C01A3910 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     <none>
 */

struct DXGPROCESS *__fastcall DXGPROCESSMUTEXBYHANDLE::GetProcess(DXGPROCESSMUTEXBYHANDLE *this)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( !*((_BYTE *)this + 28) )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v3 + 24) = 1188LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( !*((_QWORD *)this + 2) )
  {
    v4 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v4 + 24) = 1189LL;
    WdLogEvent5_WdAssertion(v4);
  }
  return (struct DXGPROCESS *)*((_QWORD *)this + 2);
}
