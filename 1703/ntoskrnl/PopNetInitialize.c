/*
 * XREFs of PopNetInitialize @ 0x14080C59C
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     PopInitializeIRTimer @ 0x140155A20 (PopInitializeIRTimer.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x14046EA80 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x1404A47F0 (RtlInitializeSid.c)
 *     PopNetSetConnectivityConstraint @ 0x1405A8364 (PopNetSetConnectivityConstraint.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x1405D0DC0 (PopTraceStandbyConnectivityUpdate.c)
 */

__int64 __fastcall PopNetInitialize(int a1)
{
  ULONG v1; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  NTSTATUS v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // ecx
  int v11; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+28h] [rbp-20h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  if ( a1 )
  {
    if ( a1 == 3 )
    {
      if ( PopEnforceDisconnectedStandby )
      {
        v10 = 2;
      }
      else
      {
        if ( PopNetDeferLogRequest )
        {
          PopTraceStandbyConnectivityUpdate(PopNetStandbyState, PopNetStandbyReason);
          goto LABEL_5;
        }
        if ( PopNetStandbyStateMask || PopPlatformAoAc )
          goto LABEL_5;
        v10 = 6;
      }
      PopNetSetConnectivityConstraint(v10);
    }
LABEL_5:
    v6 = 0;
    v3 = 0LL;
    goto LABEL_6;
  }
  v1 = RtlLengthRequiredSid(6u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v1, 0x74654E50u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, v1);
  v6 = RtlInitializeSid(v3, &IdentifierAuthority, 6u);
  if ( v6 >= 0 )
  {
    v3[2] = 80;
    v3[3] = 1988685059;
    v3[4] = 1921232356;
    v3[5] = 378231328;
    v3[6] = -1590824699;
    v3[7] = 890457928;
    PopNetBIServiceSid = v3;
    PopInitializeIRTimer(v5, v4, v7, v8, v11, v12);
    PopIgnoreCsComplianceCheck &= ~4u;
    goto LABEL_5;
  }
LABEL_6:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x74654E50u);
  return (unsigned int)v6;
}
