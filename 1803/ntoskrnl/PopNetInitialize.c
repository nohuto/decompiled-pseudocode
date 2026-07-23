/*
 * XREFs of PopNetInitialize @ 0x1408A7F78
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     PopInitializeIRTimer @ 0x140171B48 (PopInitializeIRTimer.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlInitializeSid @ 0x140541FB0 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x140544040 (RtlLengthRequiredSid.c)
 *     PopNetSetConnectivityConstraint @ 0x1406278B4 (PopNetSetConnectivityConstraint.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x14064FC34 (PopTraceStandbyConnectivityUpdate.c)
 *     PopNetPublishWnfStateUpdate @ 0x14064FD64 (PopNetPublishWnfStateUpdate.c)
 */

__int64 __fastcall PopNetInitialize(int a1)
{
  int v1; // ecx
  NTSTATUS v2; // edi
  _DWORD *v3; // rbx
  ULONG v5; // edi
  _DWORD *PoolWithTag; // rax
  __int64 v7; // r8
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+20h] [rbp-28h]
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp+10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  if ( a1 )
  {
    if ( a1 == 3 )
    {
      if ( PopNetDeferLogRequest )
        PopTraceStandbyConnectivityUpdate(PopNetStandbyState, PopNetStandbyReason);
      if ( PopEnforceDisconnectedStandby )
      {
        v1 = 2;
LABEL_9:
        PopNetSetConnectivityConstraint(v1);
        goto LABEL_10;
      }
      if ( !PopNetStandbyStateMask )
      {
        if ( PopPlatformAoAc )
        {
          if ( !PopNetStandbyStatePublished && !PopNetStandbyState )
            PopNetPublishWnfStateUpdate(1);
          goto LABEL_10;
        }
        v1 = 6;
        goto LABEL_9;
      }
    }
LABEL_10:
    v2 = 0;
    v3 = 0LL;
    goto LABEL_11;
  }
  v5 = RtlLengthRequiredSid(6u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x74654E50u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, v5);
  v2 = RtlInitializeSid(v3, &IdentifierAuthority, 6u);
  if ( v2 >= 0 )
  {
    v3[2] = 80;
    v3[3] = 1988685059;
    v3[4] = 1921232356;
    v3[5] = 378231328;
    v3[6] = -1590824699;
    v3[7] = 890457928;
    PopNetBIServiceSid = v3;
    PopInitializeIRTimer(
      (__int64)&PopNetEvaluationTimer,
      (__int64)PopNetEvaluationTimerCallback,
      v7,
      (__int64)PopNetEvaluationWorkerCallback,
      v9,
      0,
      v11);
    PopInitializeIRTimer(
      (__int64)&PopNetRefreshTimer,
      (__int64)PopNetRefreshTimerCallback,
      v8,
      (__int64)PopNetRefreshWorkerCallback,
      v10,
      5,
      v12);
    goto LABEL_10;
  }
LABEL_11:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x74654E50u);
  return (unsigned int)v2;
}
