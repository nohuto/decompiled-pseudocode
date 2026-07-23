/*
 * XREFs of SeComputeCreatorDeniedRights @ 0x1400EDF40
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x1404F2E14 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 * Callees:
 *     SepTokenIsOwner @ 0x14003E128 (SepTokenIsOwner.c)
 *     RtlpOwnerAcesPresent @ 0x14003E400 (RtlpOwnerAcesPresent.c)
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     SepGetScopedPolicySid @ 0x140246AC4 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x140248A28 (SepRmReferenceFindCap.c)
 */

__int64 __fastcall SeComputeCreatorDeniedRights(
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        __int64 a2,
        int a3,
        __int64 a4)
{
  unsigned int v7; // ebp
  __int64 v9; // rax
  __int16 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  ACL *v14; // rcx
  PACCESS_TOKEN ClientToken; // rcx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v18; // rdx
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-28h] BYREF
  __int64 v20; // [rsp+58h] [rbp-20h]
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  GrantedAccess = 0;
  v7 = 0;
  if ( (a3 & 0xC0000) == 0 )
    return 0LL;
  v9 = *(_QWORD *)(a2 + 72);
  if ( *(_QWORD *)(v9 + 48) )
    a4 = *(_QWORD *)(v9 + 48);
  if ( !a4 )
  {
    a4 = *(_QWORD *)(a2 + 64);
    if ( !a4 )
      return 0LL;
  }
  v10 = *(_WORD *)(a4 + 2);
  if ( (~(_BYTE)v10 & 4) != 0 )
  {
    v12 = 0LL;
  }
  else if ( v10 >= 0 )
  {
    v12 = *(_QWORD *)(a4 + 32);
  }
  else
  {
    v11 = *(unsigned int *)(a4 + 16);
    if ( (_DWORD)v11 )
      v12 = a4 + v11;
    else
      v12 = 0LL;
  }
  if ( !RtlpOwnerAcesPresent(0, v12) )
  {
    if ( (~(_BYTE)v10 & 0x10) != 0 )
    {
      v14 = 0LL;
    }
    else if ( v10 >= 0 )
    {
      v14 = *(ACL **)(a4 + 24);
    }
    else
    {
      v13 = *(unsigned int *)(a4 + 12);
      v14 = (_DWORD)v13 ? (ACL *)(a4 + v13) : 0LL;
    }
    v20 = 0LL;
    if ( !SepRmEnforceCap )
      return 0LL;
    if ( !v14 )
      return 0LL;
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v14);
    if ( !ScopedPolicySid )
      return 0LL;
    Cap = SepRmReferenceFindCap(ScopedPolicySid);
    v18 = v20;
    if ( Cap < 0 )
      v18 = SepRmDefaultCap;
    if ( (*(_DWORD *)(v18 + 56) & 1) == 0 )
      return 0LL;
  }
  ClientToken = SubjectSecurityContext->ClientToken;
  if ( !SubjectSecurityContext->ClientToken )
    ClientToken = SubjectSecurityContext->PrimaryToken;
  if ( !(unsigned __int8)SepTokenIsOwner((__int64)ClientToken) )
    return 0LL;
  if ( (a3 & 0x40000) != 0
    && !SeAccessCheck(
          (PSECURITY_DESCRIPTOR)a4,
          SubjectSecurityContext,
          1u,
          0x40000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&StandardBitMapping,
          KeGetCurrentThread()->PreviousMode,
          &GrantedAccess,
          &AccessStatus) )
  {
    v7 = 0x40000;
  }
  if ( (a3 & 0x80000) != 0
    && !SeAccessCheck(
          (PSECURITY_DESCRIPTOR)a4,
          SubjectSecurityContext,
          1u,
          0x80000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&StandardBitMapping,
          KeGetCurrentThread()->PreviousMode,
          &GrantedAccess,
          &AccessStatus) )
  {
    v7 |= 0x80000u;
  }
  return v7;
}
