/*
 * XREFs of PopNetEvaluationWorkerCallback @ 0x1405EAC60
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x1401325F0 (PopOkayToQueueNextWorkItem.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x1405EAD74 (PopTraceStandbyConnectivityUpdate.c)
 *     PopNetPublishWnfStateUpdate @ 0x1405EAEA4 (PopNetPublishWnfStateUpdate.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x1405EAF04 (PopNetUpdateCsConsumptionFlags.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140707C54 (PopNetSetResiliencyPhaseBias.c)
 */

__int64 PopNetEvaluationWorkerCallback()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // ebp
  char v3; // r15
  int v4; // esi
  char v5; // r14
  unsigned int v6; // ebx
  unsigned int v7; // edi
  bool v8; // si

  PopAcquirePolicyLock();
  while ( 1 )
  {
    LOBYTE(v0) = 0;
    v2 = PopNetStandbyState;
    v3 = 0;
    v4 = PopNetStandbyReason;
    v5 = 0;
    if ( (PopNetStandbyStateMask & 4) != 0 )
    {
      v6 = 2;
      v7 = 2;
      goto LABEL_6;
    }
    if ( (PopNetStandbyStateMask & 8) != 0 )
    {
      v6 = 2;
      v7 = 3;
      goto LABEL_6;
    }
    if ( (PopNetStandbyStateMask & 0x40) != 0 )
    {
      v6 = 2;
      v7 = 6;
      goto LABEL_6;
    }
    if ( !PopNetResiliencyEngaged )
      goto LABEL_28;
    if ( (PopNetStandbyStateMask & 2) != 0 )
    {
      v6 = 2;
      v7 = 1;
      goto LABEL_6;
    }
    if ( (PopNetStandbyStateMask & 0x80u) != 0 )
    {
      v6 = 2;
      v7 = 7;
    }
    else
    {
LABEL_28:
      v6 = 0;
      v7 = 0;
    }
LABEL_6:
    if ( v6 == PopNetStandbyState )
      goto LABEL_10;
    if ( PopNetStandbyState == 2 )
    {
      v5 = 1;
    }
    else if ( v6 != 2 )
    {
      goto LABEL_10;
    }
    LOBYTE(v0) = 1;
    if ( PopNetResiliencyEngaged )
    {
      LOBYTE(v0) = 1;
      if ( *((_QWORD *)&xmmword_14038D500 + 1) )
      {
        LOBYTE(v1) = 1;
        v3 = 1;
        PopNetSetResiliencyPhaseBias(v1);
        LOBYTE(v0) = 1;
      }
    }
LABEL_10:
    if ( v7 != v4 )
      PopNetStandbyReason = v7;
    v8 = v7 != v4;
    if ( v6 != v2 )
    {
      v8 = 1;
      PopNetStandbyState = v6;
      PopNetUpdateCsConsumptionFlags(v1, v0);
    }
    if ( (_BYTE)v0 )
    {
      LOBYTE(v1) = v5;
      PopNetPublishWnfStateUpdate(v1);
      if ( v3 )
        PopNetSetResiliencyPhaseBias(0LL);
    }
    if ( !v8 )
      break;
    if ( PopDiagHandleRegistered )
      PopTraceStandbyConnectivityUpdate(v6, v7);
    else
      PopNetDeferLogRequest = 1;
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_1403647C8);
  return PopReleasePolicyLock();
}
