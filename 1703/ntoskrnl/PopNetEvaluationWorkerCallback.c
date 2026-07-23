/*
 * XREFs of PopNetEvaluationWorkerCallback @ 0x1405D0C70
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14003CC9C (PopOkayToQueueNextWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x1405D0DC0 (PopTraceStandbyConnectivityUpdate.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x1405D0EF0 (PopNetUpdateCsConsumptionFlags.c)
 */

__int64 PopNetEvaluationWorkerCallback()
{
  int i; // edx
  bool v1; // si
  int v2; // r14d
  char v3; // r12
  int v4; // ebp
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // edi
  int v8; // r15d
  bool v9; // bp
  __int64 v11; // rcx
  int Buffer; // [rsp+78h] [rbp+10h] BYREF
  int Buffer_4; // [rsp+7Ch] [rbp+14h]

  PopAcquirePolicyLock();
LABEL_2:
  for ( i = 1; ; i = 1 )
  {
    v1 = 0;
    v2 = PopNetStandbyState;
    v3 = 0;
    v4 = PopNetStandbyReason;
    v5 = 2LL;
    if ( (PopNetStandbyStateMask & 4) != 0 )
    {
      v6 = 2;
      v7 = 2;
      goto LABEL_7;
    }
    if ( (PopNetStandbyStateMask & 8) != 0 )
    {
      v6 = 2;
      v7 = 3;
      goto LABEL_7;
    }
    if ( (PopNetStandbyStateMask & 0x40) != 0 )
    {
      v6 = 2;
      v7 = 6;
      goto LABEL_7;
    }
    if ( !PopNetResiliencyEngaged || PopNetCompliantMbnPresent )
      goto LABEL_31;
    if ( (PopNetStandbyStateMask & 2) != 0 )
    {
      v6 = 2;
      v7 = 1;
      goto LABEL_7;
    }
    if ( (PopNetStandbyStateMask & 0x80u) == 0 )
    {
LABEL_31:
      v6 = 0;
      v7 = 0;
    }
    else
    {
      v6 = 2;
      v7 = 7;
    }
LABEL_7:
    if ( v6 == PopNetStandbyState )
      goto LABEL_10;
    if ( PopNetStandbyState != 2 )
    {
      v1 = v6 == 2;
LABEL_10:
      v8 = 0;
      if ( !v1 )
        goto LABEL_12;
      goto LABEL_11;
    }
    v1 = 1;
    v8 = 1;
LABEL_11:
    if ( PopNetResiliencyEngaged && *((_QWORD *)&xmmword_14036E710 + 1) )
    {
      v3 = 1;
      PopReleasePolicyLock();
      LOBYTE(v11) = 1;
      (*((void (__fastcall **)(__int64))&xmmword_14036E710 + 1))(v11);
      PopAcquirePolicyLock();
      i = 1;
    }
LABEL_12:
    if ( v7 != v4 )
      PopNetStandbyReason = v7;
    v9 = v7 != v4;
    if ( v6 != v2 )
    {
      v9 = 1;
      PopNetStandbyState = v6;
      PopNetUpdateCsConsumptionFlags(v5);
    }
    if ( v1 )
    {
      Buffer_4 = -1;
      Buffer = i | (2 * v8);
      ZwUpdateWnfStateData(&WNF_SEB_NETWORK_CONNECTIVITY_IN_STANDBY, &Buffer, 8u, 0LL, 0LL, 0, 0);
      if ( v3 )
      {
        PopReleasePolicyLock();
        (*((void (__fastcall **)(_QWORD))&xmmword_14036E710 + 1))(0LL);
        PopAcquirePolicyLock();
      }
    }
    if ( !v9 )
      break;
    if ( PopDiagHandleRegistered )
    {
      PopTraceStandbyConnectivityUpdate(v6, v7);
      goto LABEL_2;
    }
    PopNetDeferLogRequest = 1;
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_14034A168);
  return PopReleasePolicyLock();
}
