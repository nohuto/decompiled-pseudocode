/*
 * XREFs of NtSetUuidSeed @ 0x1405CDB60
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x14008C0C0 (RtlSubAuthoritySid.c)
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x1404A47F0 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x14050C130 (RtlpAddKnownAce.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 */

NTSTATUS __stdcall NtSetUuidSeed(PUCHAR UuidSeed)
{
  PVOID PoolWithTag; // rax
  void *v3; // r15
  int v4; // eax
  __int64 i; // rsi
  ULONG v6; // ebx
  ULONG v7; // esi
  ACL *v8; // rax
  ACL *v9; // rbx
  int Acl; // eax
  NTSTATUS v11; // eax
  int v12; // eax
  int v13; // eax
  struct _KTHREAD *CurrentThread; // r15
  PRTL_BALANCED_NODE v15; // rax
  PRTL_BALANCED_NODE v16; // rsi
  NTSTATUS v18; // ebx
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-B4h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp-B0h] BYREF
  int v23; // [rsp+64h] [rbp-A4h]
  __int16 v24; // [rsp+68h] [rbp-A0h]
  int v25; // [rsp+6Ch] [rbp-9Ch]
  ULONG v26; // [rsp+70h] [rbp-98h]
  PVOID P; // [rsp+78h] [rbp-90h]
  PVOID v28; // [rsp+80h] [rbp-88h]
  int v29; // [rsp+88h] [rbp-80h]
  ACCESS_MASK GrantedAccess; // [rsp+8Ch] [rbp-7Ch] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+90h] [rbp-78h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v33[6]; // [rsp+D8h] [rbp-30h]

  v33[0] = 80;
  v33[1] = 521322694;
  v33[2] = 906040134;
  v33[3] = -430256637;
  v33[4] = 1525148216;
  v33[5] = -843743134;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v28 = 0LL;
  v26 = 0;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  v29 = 32;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x64695555u);
  v3 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  v4 = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 6u);
  AccessStatus = v4;
  if ( v4 < 0 )
    RtlRaiseStatus(v4);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v25 = i;
    if ( (unsigned int)i >= 6 )
      break;
    v6 = v33[i];
    *RtlSubAuthoritySid(v3, i) = v6;
  }
  v7 = RtlLengthSid(v3) + 20;
  v26 = v7;
  v8 = (ACL *)ExAllocatePoolWithTag(PagedPool, v7, 0x64695555u);
  v9 = v8;
  v28 = v8;
  if ( !v8 )
    RtlRaiseStatus(-1073741670);
  Acl = RtlCreateAcl(v8, v7, 2u);
  AccessStatus = Acl;
  if ( Acl < 0 )
    RtlRaiseStatus(Acl);
  v11 = RtlpAddKnownAce(v9, 2u, 0, 1, (unsigned __int8 *)v3, 0);
  AccessStatus = v11;
  if ( v11 < 0 )
    RtlRaiseStatus(v11);
  v12 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  AccessStatus = v12;
  if ( v12 < 0 )
    RtlRaiseStatus(v12);
  v13 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
  AccessStatus = v13;
  if ( v13 < 0 )
    RtlRaiseStatus(v13);
  if ( !SeAccessCheck(
          SecurityDescriptor,
          &SubjectSecurityContext,
          0,
          1u,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpUuidSeedGenericMapping,
          1,
          &GrantedAccess,
          &AccessStatus) )
    RtlRaiseStatus(-1073741790);
  v23 = *(_DWORD *)UuidSeed;
  v24 = *((_WORD *)UuidSeed + 2);
  AccessStatus = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v15, (ULONG_PTR)&ExpUuidLock);
  if ( v16 )
    BYTE2(v16[1].Left) |= 1u;
  *(int *)((char *)&dword_1407AC2AC + 2) = v23;
  word_1407AC2B2 = v24;
  ExpUuidCacheValid = (unsigned __int8)v23 >> 7 == 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
  KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  v18 = AccessStatus;
  SeReleaseSubjectContext(&SubjectSecurityContext);
  return v18;
}
