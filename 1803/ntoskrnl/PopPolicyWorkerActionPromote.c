/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x1405EF2E0
 * Callers:
 *     PopPolicyWorkerThread @ 0x140073DA0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x140074BCC (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x14014E860 (PopSetPowerActionState.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 */

__int64 PopPolicyWorkerActionPromote()
{
  char v1; // bl
  int v2; // ecx

  PopAcquirePolicyLock();
  if ( !PopAction )
    goto LABEL_2;
  v1 = PopAction;
  if ( !byte_1403AA061 )
  {
    if ( (PopAction & 2) == 0 )
      goto LABEL_2;
    PopSetPowerActionState(1);
    v2 = 2;
    goto LABEL_12;
  }
  if ( byte_1403AA061 != 2 )
    goto LABEL_2;
  if ( (int)PopIssueActionRequest(1, (POWER_ACTION)qword_1403AA064, SHIDWORD(qword_1403AA064), dword_1403AA06C) >= 0 )
  {
    PopAction &= ~v1;
    goto LABEL_2;
  }
  if ( byte_1403AA061 != 2 )
  {
    v2 = 1;
LABEL_12:
    PopGetPolicyWorker(v2);
  }
LABEL_2:
  PopReleasePolicyLock();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
