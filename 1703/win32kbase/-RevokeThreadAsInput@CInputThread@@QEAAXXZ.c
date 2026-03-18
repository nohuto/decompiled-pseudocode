/*
 * XREFs of ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C0048F2C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall CInputThread::RevokeThreadAsInput(CInputThread *this)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  RIMLockExclusive(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement);
  memset((void *)(v1 + 16), 0, 0x20uLL);
  *(_QWORD *)(v1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
