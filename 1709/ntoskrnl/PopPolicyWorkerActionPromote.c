/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x1406FD630
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400B0E10 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1400B11B4 (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x1402422E8 (PopSetPowerActionState.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 */

__int64 PopPolicyWorkerActionPromote()
{
  char v0; // bl
  int v1; // ecx

  PopAcquirePolicyLock();
  if ( PopAction )
  {
    v0 = PopAction;
    if ( !byte_1403657E1 )
    {
      if ( (PopAction & 2) == 0 )
        goto LABEL_11;
      PopSetPowerActionState(1);
      v1 = 2;
      goto LABEL_10;
    }
    if ( byte_1403657E1 != 2 )
      goto LABEL_11;
    if ( (int)PopIssueActionRequest(1, (POWER_ACTION)qword_1403657E4, SHIDWORD(qword_1403657E4), dword_1403657EC) >= 0 )
    {
      PopAction &= ~v0;
      goto LABEL_11;
    }
    if ( byte_1403657E1 != 2 )
    {
      v1 = 1;
LABEL_10:
      PopGetPolicyWorker(v1);
    }
  }
LABEL_11:
  PopReleasePolicyLock();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
