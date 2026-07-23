/*
 * XREFs of SepDuplicateToken @ 0x1404C6BB0
 * Callers:
 *     SepGetAnonymousToken @ 0x140101C60 (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x1401523CC (SepLinkLogonSessions.c)
 *     SepSetLogonSessionToken @ 0x14045A9BC (SepSetLogonSessionToken.c)
 *     SeCopyClientToken @ 0x140487120 (SeCopyClientToken.c)
 *     SeSubProcessToken @ 0x14048CA94 (SeSubProcessToken.c)
 *     NtQueryInformationToken @ 0x1404A40D0 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x1404C5CB0 (NtOpenThreadTokenEx.c)
 *     NtDuplicateToken @ 0x1404C66A0 (NtDuplicateToken.c)
 *     NtImpersonateAnonymousToken @ 0x140512CF4 (NtImpersonateAnonymousToken.c)
 *     NtCreateLowBoxToken @ 0x140549290 (NtCreateLowBoxToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x14072DFDC (SeDuplicateTokenAndAddOriginClaim.c)
 *     SeGetLinkedToken @ 0x14072E300 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x14072E3F0 (SeGetLogonSessionToken.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlSidHashInitialize @ 0x140089560 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140089720 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepReferenceLuidToIndexEntry @ 0x140089BF4 (SepReferenceLuidToIndexEntry.c)
 *     MmGetSessionObjectById @ 0x14008A93C (MmGetSessionObjectById.c)
 *     RtlWalkFrameChain @ 0x1400D5800 (RtlWalkFrameChain.c)
 *     RtlUIntAdd @ 0x1400DF340 (RtlUIntAdd.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SepReferenceLogonSession @ 0x14045CEC8 (SepReferenceLogonSession.c)
 *     SepSetTokenCapabilities @ 0x1404888F8 (SepSetTokenCapabilities.c)
 *     SepDuplicateSid @ 0x14049C980 (SepDuplicateSid.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     SepSetTokenPackage @ 0x1405646C8 (SepSetTokenPackage.c)
 *     SepMakeTokenEffectiveOnly @ 0x140570650 (SepMakeTokenEffectiveOnly.c)
 *     SepModifyTokenPolicyCounter @ 0x14072886C (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x14072E934 (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x14072EF40 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x1407312A0 (SepDuplicateTokenClaims.c)
 */

__int64 __fastcall SepDuplicateToken(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned int a5,
        char a6,
        char a7,
        _QWORD *a8)
{
  unsigned int v8; // r12d
  PVOID *v11; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // rsi
  _QWORD *v15; // rax
  struct _ERESOURCE *v16; // r14
  int v17; // ebp
  _BYTE *v18; // rbp
  ULONG v19; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v21; // rdi
  unsigned int v22; // eax
  int v23; // r14d
  void *v24; // rcx
  __int128 v25; // xmm0
  _QWORD *v26; // r13
  bool v27; // zf
  __int64 v28; // rcx
  int v29; // esi
  __int64 v30; // rcx
  _DWORD *v31; // rcx
  PSID_AND_ATTRIBUTES *v32; // r13
  unsigned __int64 v33; // r14
  _SID_AND_ATTRIBUTES *v34; // rcx
  int i; // eax
  __int64 v36; // rax
  char *v37; // rax
  ULONG j; // ecx
  __int64 v39; // rax
  unsigned int v40; // ecx
  size_t v41; // r12
  char *v42; // r14
  __int64 v43; // rax
  char *v44; // r14
  ULONG v45; // r9d
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  unsigned __int8 *v50; // rcx
  void *v51; // r14
  PVOID *v52; // r12
  __int64 v53; // rdx
  _KPROCESS *Process; // rcx
  int v55; // edx
  __int64 v56; // [rsp+20h] [rbp-C8h]
  PVOID Object; // [rsp+50h] [rbp-98h] BYREF
  PSID_AND_ATTRIBUTES *v58; // [rsp+58h] [rbp-90h]
  void *v59; // [rsp+60h] [rbp-88h] BYREF
  ULONG *v60; // [rsp+68h] [rbp-80h]
  _QWORD *v61; // [rsp+70h] [rbp-78h]
  _QWORD *v62; // [rsp+78h] [rbp-70h]
  _QWORD *v63; // [rsp+80h] [rbp-68h]
  _QWORD *v64; // [rsp+88h] [rbp-60h]
  PVOID *v65; // [rsp+90h] [rbp-58h]
  PSID_AND_ATTRIBUTES *v66; // [rsp+98h] [rbp-50h]
  PSID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+A0h] [rbp-48h]
  ULONG *v68; // [rsp+A8h] [rbp-40h]
  UINT puResult; // [rsp+108h] [rbp+20h] BYREF

  v8 = a5;
  v11 = 0LL;
  if ( a4 == 2 && a5 > 3 )
    return 3221225637LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0;
  v15 = PoolWithTag + 2;
  v15[1] = v15;
  *v15 = v15;
  v14[6] = 0;
  *((_QWORD *)v14 + 5) = v14 + 8;
  *((_QWORD *)v14 + 4) = v14 + 8;
  if ( SeTokenLeakTracking )
  {
    v11 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
    if ( !v11 )
    {
      ExFreePoolWithTag(v14, 0);
      return 3221225626LL;
    }
  }
  v16 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
  if ( !v16 )
  {
    ExFreePoolWithTag(v14, 0);
    if ( SeTokenLeakTracking )
      ExFreePoolWithTag(v11, 0);
    return 3221225626LL;
  }
  v17 = RtlUIntAdd(0x490u, *(_DWORD *)(a1 + 132), &puResult);
  if ( v17 >= 0 )
  {
    v17 = ObCreateObjectEx(a6, SeTokenObjectType, a2, a6, v56, puResult, *(_DWORD *)(a1 + 136), puResult, &Object, 0LL);
    if ( v17 >= 0 )
    {
      v18 = Object;
      *((_QWORD *)Object + 2) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      v18[204] = 0;
      *((_DWORD *)v18 + 48) = a4;
      *((_DWORD *)v18 + 49) = v8;
      *((_QWORD *)v18 + 6) = v16;
      ExInitializeResourceLite(v16);
      *((_QWORD *)v18 + 3) = *(_QWORD *)(a1 + 24);
      *(_OWORD *)v18 = *(_OWORD *)a1;
      *((_DWORD *)v18 + 35) = 0;
      *((_QWORD *)v18 + 4) = *(_QWORD *)(a1 + 32);
      *((_QWORD *)v18 + 5) = *(_QWORD *)(a1 + 40);
      *((_QWORD *)v18 + 28) = *(_QWORD *)(a1 + 224);
      *((_QWORD *)v18 + 140) = 0LL;
      *((_QWORD *)v18 + 141) = 0LL;
      *((_QWORD *)v18 + 137) = 0LL;
      *((_QWORD *)v18 + 143) = v11;
      *((_DWORD *)v18 + 30) = 0;
      *((_QWORD *)v18 + 145) = 0LL;
      if ( SeTokenLeakTracking )
      {
        v19 = RtlWalkFrameChain(v11 + 5, 0x1Eu, 0);
        if ( KeGetCurrentIrql() < 2u )
          RtlWalkFrameChain((PVOID *)(*((_QWORD *)v18 + 143) + 40LL + 8LL * v19), 30 - v19, 1u);
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
      v21 = (char *)Object;
      *((_QWORD *)Object + 7) = *(_QWORD *)(a1 + 56);
      *((_DWORD *)v21 + 34) = *(_DWORD *)(a1 + 136);
      *((_DWORD *)v21 + 36) = *(_DWORD *)(a1 + 144);
      *((_DWORD *)v21 + 32) = *(_DWORD *)(a1 + 128);
      *((_DWORD *)v21 + 33) = *(_DWORD *)(a1 + 132);
      v22 = *(_DWORD *)(a1 + 200) & 0xFFFFFBDF;
      v60 = (ULONG *)(v21 + 128);
      *((_DWORD *)v21 + 50) = v22;
      v23 = *(_DWORD *)(a1 + 120);
      if ( *((_DWORD *)v18 + 30) != v23 )
      {
        *((_DWORD *)v18 + 30) = v23;
        if ( !SeTokenDoesNotTrackSessionObject )
        {
          v24 = (void *)*((_QWORD *)v18 + 145);
          if ( v24 )
            ObfDereferenceObject(v24);
          *((_QWORD *)v18 + 145) = MmGetSessionObjectById(v23);
        }
      }
      *(_OWORD *)(v21 + 88) = *(_OWORD *)(a1 + 88);
      *((_QWORD *)v21 + 13) = *(_QWORD *)(a1 + 104);
      *((_DWORD *)v21 + 28) = *(_DWORD *)(a1 + 112);
      *((_WORD *)v21 + 58) = *(_WORD *)(a1 + 116);
      v21[118] = *(_BYTE *)(a1 + 118);
      *((_DWORD *)v21 + 52) = *(_DWORD *)(a1 + 208);
      *((_DWORD *)v21 + 53) = *(_DWORD *)(a1 + 212);
      v25 = *(_OWORD *)(a1 + 64);
      v58 = (PSID_AND_ATTRIBUTES *)(v21 + 776);
      *((_OWORD *)v21 + 4) = v25;
      *((_QWORD *)v21 + 10) = *(_QWORD *)(a1 + 80);
      *((_QWORD *)v21 + 97) = v14;
      *((_QWORD *)v21 + 135) = 0LL;
      v62 = v21 + 1080;
      *((_QWORD *)v21 + 136) = 0LL;
      v63 = v21 + 1088;
      *((_QWORD *)v21 + 144) = 0LL;
      v64 = v21 + 1152;
      *((_QWORD *)v21 + 99) = 0LL;
      v66 = (PSID_AND_ATTRIBUTES *)(v21 + 792);
      *((_QWORD *)v21 + 98) = 0LL;
      v68 = (ULONG *)(v21 + 800);
      *((_DWORD *)v21 + 200) = 0;
      SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)(v21 + 808);
      memset(v21 + 808, 0, 0x110uLL);
      *((_QWORD *)v21 + 22) = 0LL;
      v61 = v21 + 176;
      *((_QWORD *)v21 + 138) = 0LL;
      *((_QWORD *)v21 + 139) = 0LL;
      v26 = v21 + 1136;
      *((_QWORD *)v21 + 142) = 0LL;
      v27 = v21[118] == 2;
      v65 = (PVOID *)(v21 + 1104);
      if ( v27 )
        SepModifyTokenPolicyCounter(v21 + 88, 1LL);
      if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
      {
        v29 = SepReferenceLogonSession(a1 + 24, (__int64)(v21 + 216));
        if ( v29 < 0 )
        {
          *((_DWORD *)v21 + 50) |= 0x20u;
          *((_QWORD *)v21 + 27) = 0LL;
LABEL_41:
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v21);
          return (unsigned int)v29;
        }
      }
      else
      {
        v28 = *(_QWORD *)(a1 + 216);
        *((_QWORD *)v21 + 27) = v28;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v28 + 24)) <= 1 )
          __fastfail(0xEu);
        v21 = (char *)Object;
        v29 = 0;
      }
      v30 = *(_QWORD *)(a1 + 1136);
      if ( v30 )
        SepReferenceLuidToIndexEntry(v30);
      *v26 = *(_QWORD *)(a1 + 1136);
      v31 = *(_DWORD **)(a1 + 776);
      if ( *v31 )
      {
        v29 = AuthzBasepDuplicateSecurityAttributes((__int64)v31, *v58, a7);
        if ( v29 < 0 )
          goto LABEL_41;
      }
      memmove(v21 + 1168, (const void *)(a1 + 1168), *(unsigned int *)(a1 + 132));
      v32 = (PSID_AND_ATTRIBUTES *)(v21 + 152);
      v33 = (unsigned __int64)&v21[-a1];
      if ( SepTokenSidSharingEnabled )
      {
        *v32 = (PSID_AND_ATTRIBUTES)(v33 + *(_QWORD *)(a1 + 152));
        v29 = SepDuplicateTokenUserAndGroups(a1, v21);
        if ( v29 < 0 )
        {
          *v32 = 0LL;
          goto LABEL_41;
        }
      }
      else
      {
        *((_DWORD *)v21 + 31) = *(_DWORD *)(a1 + 124);
        v34 = (_SID_AND_ATTRIBUTES *)(v33 + *(_QWORD *)(a1 + 152));
        *v32 = v34;
        for ( i = *((_DWORD *)v21 + 31); i; --i )
        {
          v34->Sid = (char *)v34->Sid + v33;
          ++v34;
        }
      }
      v36 = *(_QWORD *)(a1 + 160);
      v58 = (PSID_AND_ATTRIBUTES *)(v21 + 160);
      *((_QWORD *)v21 + 20) = v36;
      if ( v36 )
      {
        v37 = (char *)(v33 + v36);
        *((_QWORD *)v21 + 20) = v37;
        for ( j = *v60; j; --j )
        {
          *(_QWORD *)v37 += v33;
          v37 += 16;
        }
      }
      v39 = *(_QWORD *)(a1 + 184);
      v40 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
      if ( v39 )
        v40 += *(unsigned __int16 *)(v39 + 2);
      v41 = v40;
      v42 = (char *)ExAllocatePoolWithTag(PagedPool, v40, 0x64546553u);
      *v61 = v42;
      if ( !v42 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v21);
        return 3221225626LL;
      }
      memmove(v42, *(const void **)(a1 + 176), v41);
      v43 = *(_QWORD *)(a1 + 184);
      v44 = &v42[-*(_QWORD *)(a1 + 176)];
      *((_QWORD *)v21 + 23) = v43;
      if ( v43 )
        *((_QWORD *)v21 + 23) = &v44[v43];
      *((_QWORD *)v21 + 21) = &v44[*(_QWORD *)(a1 + 168)];
      v45 = *(_DWORD *)(a1 + 800);
      if ( v45 )
        v29 = SepSetTokenCapabilities((__int64)v21, *(void **)(a1 + 784), *(void **)(a1 + 792), v45);
      if ( v29 < 0 )
        goto LABEL_41;
      v46 = *(_QWORD *)(a1 + 784);
      if ( v46 )
        v29 = SepSetTokenPackage(v21, v46);
      if ( v29 < 0 )
        goto LABEL_41;
      v47 = *(_QWORD *)(a1 + 1080);
      if ( v47 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v47 + 24)) <= 1 )
          __fastfail(0xEu);
        v21 = (char *)Object;
        *v62 = *(_QWORD *)(a1 + 1080);
      }
      v48 = *(_QWORD *)(a1 + 1088);
      if ( v48 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v48 + 24)) <= 1 )
          __fastfail(0xEu);
        v21 = (char *)Object;
        *v63 = *(_QWORD *)(a1 + 1088);
      }
      v49 = *(_QWORD *)(a1 + 1152);
      if ( v49 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v49 + 24)) <= 1 )
          __fastfail(0xEu);
        v21 = (char *)Object;
        *v64 = *(_QWORD *)(a1 + 1152);
      }
      if ( *(_QWORD *)(a1 + 1096) )
      {
        v29 = SepDuplicateTokenClaims(a1, v21);
        if ( v29 < 0 )
          goto LABEL_41;
      }
      v50 = *(unsigned __int8 **)(a1 + 1104);
      v51 = 0LL;
      v29 = 0;
      v59 = 0LL;
      if ( v50 )
      {
        v29 = SepDuplicateSid(v50, &v59);
        if ( v29 < 0 )
          goto LABEL_41;
        v51 = v59;
      }
      v52 = v65;
      if ( *v65 )
      {
        ExFreePoolWithTag(*v65, 0);
        *v52 = 0LL;
      }
      *v52 = v51;
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
      if ( SeTokenLeakTracking )
      {
        **((_QWORD **)v18 + 143) = KeGetCurrentThread()[1].CycleTime;
        *(_QWORD *)(*((_QWORD *)v18 + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(*((_QWORD *)v18 + 143) + 32LL) = 13;
        *(_DWORD *)(*((_QWORD *)v18 + 143) + 280LL) = 0;
        *(_DWORD *)(*((_QWORD *)v18 + 143) + 284LL) = 0;
        v53 = *((_QWORD *)v18 + 143);
        v21 = (char *)Object;
        Process = KeGetCurrentThread()->ApcState.Process;
        *(_QWORD *)(v53 + 16) = Process[1].ActiveProcessors.Bitmap[12];
        *(_DWORD *)(v53 + 24) = Process[1].ActiveProcessors.Bitmap[13];
        *(_WORD *)(v53 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[13]);
        *(_BYTE *)(v53 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[13]);
        SepAddTokenLogonSession(v21);
      }
      if ( a3 )
        SepMakeTokenEffectiveOnly(v21);
      RtlSidHashInitialize(*v32, *((_DWORD *)v21 + 31), (PSID_AND_ATTRIBUTES_HASH)(v21 + 232));
      RtlSidHashInitialize(*v58, *v60, (PSID_AND_ATTRIBUTES_HASH)(v21 + 504));
      if ( *v66 )
        RtlSidHashInitialize(*v66, *v68, SidAttrHash);
      if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 13 )
      {
        if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
        {
          *(_DWORD *)(*((_QWORD *)v18 + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
          v55 = *(_DWORD *)(*((_QWORD *)v18 + 143) + 280LL);
          if ( v55 >= SepTokenLeakBreakCount )
          {
            DbgPrint("\nToken number 0x%x = 0x%p\n", v55, Object);
            __debugbreak();
          }
        }
        v21 = (char *)Object;
      }
      *a8 = v21;
      return (unsigned int)v29;
    }
  }
  ExFreePoolWithTag(v14, 0);
  ExFreePoolWithTag(v16, 0);
  if ( SeTokenLeakTracking )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v17;
}
