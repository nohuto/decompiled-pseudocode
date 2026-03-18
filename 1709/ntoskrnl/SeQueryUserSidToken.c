/*
 * XREFs of SeQueryUserSidToken @ 0x1405034B0
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x140447AF4 (PiDqOpenUserObjectRegKey.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1404593A4 (PopEtGetProcessSidAndPackageIdentity.c)
 *     AlpcpCheckConnectionSecurity @ 0x140467994 (AlpcpCheckConnectionSecurity.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1405033D4 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpQuerySidToken @ 0x140505068 (AlpcpQuerySidToken.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1405626DC (AlpcpPortQueryConnectedSidInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140573710 (EtwQueryProcessTelemetryInfo.c)
 *     PspAssignProcessQuotaBlock @ 0x140582A58 (PspAssignProcessQuotaBlock.c)
 *     CmpGetVirtualizationID @ 0x1406921DC (CmpGetVirtualizationID.c)
 *     PiDqSameUserHive @ 0x1406C4974 (PiDqSameUserHive.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlCopySid @ 0x14049CB70 (RtlCopySid.c)
 */

__int64 __fastcall SeQueryUserSidToken(__int64 a1, void *a2, ULONG a3, ULONG *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebp
  unsigned __int8 *v10; // r8
  ULONG v11; // edi

  CurrentThread = KeGetCurrentThread();
  v9 = -1073741789;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v10 = **(unsigned __int8 ***)(a1 + 152);
  v11 = 4 * v10[1] + 8;
  if ( a3 >= v11 )
  {
    RtlCopySid(v11, a2, v10);
    v9 = 0;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( a4 )
    *a4 = v11;
  return v9;
}
