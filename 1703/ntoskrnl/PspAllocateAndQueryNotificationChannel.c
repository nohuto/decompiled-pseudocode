/*
 * XREFs of PspAllocateAndQueryNotificationChannel @ 0x140560A90
 * Callers:
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x140025A40 (ExConvertExclusiveToSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14017F7A0 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x14017F940 (ZwDeleteWnfStateName.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x140479E68 (PspUnlockJobConditionally.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1404A1C40 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     ObReleaseObjectSecurity @ 0x1404F4870 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1404F49F0 (ObpGetObjectSecurity.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     PsReferenceEffectiveToken @ 0x14050B1D0 (PsReferenceEffectiveToken.c)
 *     RtlpAddKnownAce @ 0x14050C130 (RtlpAddKnownAce.c)
 *     PspDispatchWakeNotification @ 0x14055FBD8 (PspDispatchWakeNotification.c)
 *     PspLockRootJobExclusive @ 0x140560DC4 (PspLockRootJobExclusive.c)
 *     PspComputeReportWakeFilter @ 0x140560E2C (PspComputeReportWakeFilter.c)
 */

__int64 __fastcall PspAllocateAndQueryNotificationChannel(__int64 a1, __int64 a2, _OWORD *a3)
{
  _DWORD *v3; // r12
  char v4; // r13
  bool v5; // zf
  char v9; // r15
  __int64 v10; // rdi
  int ObjectSecurity; // edi
  PSECURITY_DESCRIPTOR v13; // r12
  void *v14; // r15
  unsigned __int8 **v15; // r15
  ACL *PoolWithTag; // rax
  ACL *v17; // rdi
  __int64 v18; // r9
  char *v19; // rcx
  PCWNF_TYPE_ID TypeId; // [rsp+20h] [rbp-79h]
  BOOLEAN MemoryAllocated; // [rsp+40h] [rbp-59h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+41h] [rbp-58h] BYREF
  bool v23; // [rsp+42h] [rbp-57h] BYREF
  ULONG AclLength[2]; // [rsp+48h] [rbp-51h] BYREF
  int v25; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v26; // [rsp+58h] [rbp-41h] BYREF
  PSID Owner; // [rsp+60h] [rbp-39h] BYREF
  PACL Dacl; // [rsp+68h] [rbp-31h]
  int v29; // [rsp+70h] [rbp-29h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-21h] BYREF
  PVOID TokenInformation; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v32[40]; // [rsp+88h] [rbp-11h] BYREF
  _WNF_STATE_NAME StateName; // [rsp+B0h] [rbp+17h] BYREF

  v3 = 0LL;
  v4 = 0;
  v26 = 0LL;
  v5 = (*(_DWORD *)(a2 + 1304) & 0x800) == 0;
  StateName = 0LL;
  if ( !v5 )
  {
    v9 = 1;
    PspLockRootJobExclusive(a2, a1, AclLength);
    v10 = *(_QWORD *)AclLength;
    if ( a2 != *(_QWORD *)AclLength )
    {
      ExConvertExclusiveToSharedLite((PERESOURCE)(*(_QWORD *)AclLength + 56LL));
      ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
    }
    goto LABEL_4;
  }
  ObjectSecurity = ObpGetObjectSecurity(a2, &SecurityDescriptor, &MemoryAllocated, 0);
  if ( ObjectSecurity < 0 )
    return (unsigned int)ObjectSecurity;
  v13 = SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    ObjectSecurity = -1073741790;
LABEL_25:
    ObReleaseObjectSecurity(v13, MemoryAllocated);
    return (unsigned int)ObjectSecurity;
  }
  ObjectSecurity = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &OwnerDefaulted);
  if ( ObjectSecurity < 0 )
    goto LABEL_25;
  v14 = PsReferenceEffectiveToken(a1, &v25, &v23, &v29, 0LL);
  ObjectSecurity = SeQueryInformationToken(v14, TokenUser, &TokenInformation);
  if ( v25 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a1 + 184) + 856LL), (unsigned __int64)v14);
  }
  else if ( v14 )
  {
    ObfDereferenceObject(v14);
  }
  if ( ObjectSecurity < 0 )
    goto LABEL_25;
  v15 = (unsigned __int8 **)TokenInformation;
  AclLength[0] = 4 * (*((unsigned __int8 *)Owner + 1) + *(unsigned __int8 *)(*(_QWORD *)TokenInformation + 1LL)) + 48;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, AclLength[0], 0x66577350u);
  Dacl = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_24;
  RtlCreateAcl(PoolWithTag, AclLength[0], 2u);
  v17 = Dacl;
  RtlpAddKnownAce(Dacl, 2u, 0, 0x80000000, (unsigned __int8 *)Owner, 0);
  RtlpAddKnownAce(v17, 2u, 0, 0x80000000, *v15, 0);
  RtlCreateSecurityDescriptor(v32, 1u);
  RtlSetDaclSecurityDescriptor(v32, 1u, v17, 0);
  ObjectSecurity = ZwCreateWnfStateName(&StateName, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 0, v32);
  ExFreePoolWithTag(Dacl, 0x66577350u);
  if ( ObjectSecurity < 0 )
  {
LABEL_24:
    ExFreePoolWithTag(v15, 0);
    goto LABEL_25;
  }
  v9 = 0;
  PspLockRootJobExclusive(a2, a1, AclLength);
  if ( (*(_DWORD *)(a2 + 1304) & 0x800) != 0 )
  {
    v10 = *(_QWORD *)AclLength;
    v4 = 1;
    v3 = v26;
  }
  else
  {
    *(_WNF_STATE_NAME *)(a2 + 880) = StateName;
    v3 = &v26;
    PspComputeReportWakeFilter(a2, &v26, a2 + 952, 0LL);
    PspEnumJobsAndProcessesInJobHierarchy(
      v19,
      0,
      (int)PspEnableWakeCounters,
      (int)PspEnableProcessWakeCounters,
      v18 & (unsigned __int64)TypeId,
      2);
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 1304), 0xBu);
    _InterlockedIncrement64(&PspJobTimeLimitsRequest);
    v10 = *(_QWORD *)AclLength;
  }
LABEL_4:
  *a3 = *(_OWORD *)(a2 + 880);
  a3[1] = *(_OWORD *)(a2 + 896);
  a3[2] = *(_OWORD *)(a2 + 912);
  a3[3] = *(_OWORD *)(a2 + 928);
  if ( v9 )
    PspUnlockJobConditionally(a2, AclLength);
  PspUnlockJob(v10, a1);
  if ( v4 )
  {
    ZwDeleteWnfStateName(&StateName);
  }
  else if ( !v9 )
  {
    PspDispatchWakeNotification((PVOID)a2, v3, (__int64)a3);
  }
  return 0LL;
}
