/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x14057A2B0
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400702C0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1400701C0 (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x140138370 (PopSetPowerActionState.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 */

__int64 PopPolicyWorkerActionPromote()
{
  char v1; // bl
  int v2; // ecx

  PopAcquirePolicyLock();
  if ( !PopAction )
    goto LABEL_2;
  v1 = PopAction;
  if ( !byte_14034B181 )
  {
    if ( (PopAction & 2) == 0 )
      goto LABEL_2;
    PopSetPowerActionState(1);
    v2 = 2;
    goto LABEL_12;
  }
  if ( byte_14034B181 != 2 )
    goto LABEL_2;
  if ( (int)PopIssueActionRequest(1, (POWER_ACTION)qword_14034B184, SHIDWORD(qword_14034B184), dword_14034B18C) >= 0 )
  {
    PopAction &= ~v1;
    goto LABEL_2;
  }
  if ( byte_14034B181 != 2 )
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
