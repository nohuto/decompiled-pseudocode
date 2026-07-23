/*
 * XREFs of SepDuplicateToken @ 0x14050CF30
 * Callers:
 *     SepGetAnonymousToken @ 0x14003D7D8 (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x14014A49C (SepLinkLogonSessions.c)
 *     SeCopyClientToken @ 0x14043D254 (SeCopyClientToken.c)
 *     SepSetLogonSessionToken @ 0x140456ACC (SepSetLogonSessionToken.c)
 *     NtDuplicateToken @ 0x140476350 (NtDuplicateToken.c)
 *     SeSubProcessToken @ 0x1404A138C (SeSubProcessToken.c)
 *     NtCreateLowBoxToken @ 0x1404A48A0 (NtCreateLowBoxToken.c)
 *     NtQueryInformationToken @ 0x140508720 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x140510670 (NtOpenThreadTokenEx.c)
 *     NtImpersonateAnonymousToken @ 0x14055FD94 (NtImpersonateAnonymousToken.c)
 *     SeGetLinkedToken @ 0x1406F67E0 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x1406F68D0 (SeGetLogonSessionToken.c)
 * Callees:
 *     RtlUIntAdd @ 0x14004C5F0 (RtlUIntAdd.c)
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     RtlSidHashInitialize @ 0x140093A10 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140093E50 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepReferenceLuidToIndexEntry @ 0x140094304 (SepReferenceLuidToIndexEntry.c)
 *     MmGetSessionObjectById @ 0x140094330 (MmGetSessionObjectById.c)
 *     RtlWalkFrameChain @ 0x1400E4A90 (RtlWalkFrameChain.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepMakeTokenEffectiveOnly @ 0x14043DA58 (SepMakeTokenEffectiveOnly.c)
 *     SepReferenceLogonSession @ 0x14046F448 (SepReferenceLogonSession.c)
 *     SepSetTokenCapabilities @ 0x14046FF44 (SepSetTokenCapabilities.c)
 *     SepDuplicateSid @ 0x1404F19E4 (SepDuplicateSid.c)
 *     SepSetTokenPackage @ 0x1404F1A70 (SepSetTokenPackage.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     SepModifyTokenPolicyCounter @ 0x1406F0E4C (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1406F6E14 (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1406F7430 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x1406F9850 (SepDuplicateTokenClaims.c)
 */

__int64 __fastcall SepDuplicateToken(
        __int64 a1,
        int a2,
        char a3,
        int a4,
        unsigned int a5,
        unsigned __int8 a6,
        char a7,
        __int64 *a8)
{
  unsigned int v8; // r12d
  PVOID *v11; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // rsi
  _QWORD *v15; // rax
  struct _ERESOURCE *v16; // r14
  int v17; // ebp
  ULONG v18; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rdi
  unsigned int v21; // eax
  int v22; // r14d
  void *v23; // rcx
  bool v24; // zf
  __int64 v25; // rcx
  int v26; // esi
  __int64 v27; // rcx
  _DWORD *v28; // rcx
  PSID_AND_ATTRIBUTES *v29; // r13
  __int64 v30; // r14
  _SID_AND_ATTRIBUTES *v31; // rcx
  int i; // eax
  __int64 v33; // rax
  _QWORD *v34; // rax
  ULONG j; // ecx
  __int64 v36; // rax
  unsigned int v37; // ecx
  size_t v38; // r12
  char *v39; // r14
  __int64 v40; // rax
  char *v41; // r14
  ULONG v42; // r9d
  unsigned __int8 *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned __int8 *v47; // rcx
  void *v48; // r14
  PVOID *v49; // r12
  __int64 v50; // rdx
  _KPROCESS *Process; // rcx
  int v52; // edx
  char *Object; // [rsp+50h] [rbp-98h]
  PSID_AND_ATTRIBUTES *v54; // [rsp+58h] [rbp-90h]
  void *v55; // [rsp+60h] [rbp-88h] BYREF
  ULONG *v56; // [rsp+68h] [rbp-80h]
  _QWORD *v57; // [rsp+70h] [rbp-78h]
  _QWORD *v58; // [rsp+78h] [rbp-70h]
  _QWORD *v59; // [rsp+80h] [rbp-68h]
  _QWORD *v60; // [rsp+88h] [rbp-60h]
  PVOID *v61; // [rsp+90h] [rbp-58h]
  PSID_AND_ATTRIBUTES *v62; // [rsp+98h] [rbp-50h]
  PSID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+A0h] [rbp-48h]
  ULONG *v64; // [rsp+A8h] [rbp-40h]
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
    v17 = ObCreateObjectEx(a6, (_DWORD)SeTokenObjectType, a2, a6);
    if ( v17 >= 0 )
    {
      *((_QWORD *)Object + 2) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      Object[204] = 0;
      *((_DWORD *)Object + 48) = a4;
      *((_DWORD *)Object + 49) = v8;
      *((_QWORD *)Object + 6) = v16;
      ExInitializeResourceLite(v16);
      *((_QWORD *)Object + 3) = *(_QWORD *)(a1 + 24);
      *(_OWORD *)Object = *(_OWORD *)a1;
      *((_DWORD *)Object + 35) = 0;
      *((_QWORD *)Object + 4) = *(_QWORD *)(a1 + 32);
      *((_QWORD *)Object + 5) = *(_QWORD *)(a1 + 40);
      *((_QWORD *)Object + 28) = *(_QWORD *)(a1 + 224);
      *((_QWORD *)Object + 140) = 0LL;
      *((_QWORD *)Object + 141) = 0LL;
      *((_QWORD *)Object + 137) = 0LL;
      *((_QWORD *)Object + 143) = v11;
      *((_DWORD *)Object + 30) = 0;
      *((_QWORD *)Object + 145) = 0LL;
      if ( SeTokenLeakTracking )
      {
        v18 = RtlWalkFrameChain(v11 + 5, 0x1Eu, 0);
        if ( KeGetCurrentIrql() < 2u )
          RtlWalkFrameChain((PVOID *)(*((_QWORD *)Object + 143) + 40LL + 8LL * v18), 30 - v18, 1u);
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
      v20 = (__int64)Object;
      *((_QWORD *)Object + 7) = *(_QWORD *)(a1 + 56);
      *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
      *((_DWORD *)Object + 36) = *(_DWORD *)(a1 + 144);
      *((_DWORD *)Object + 32) = *(_DWORD *)(a1 + 128);
      *((_DWORD *)Object + 33) = *(_DWORD *)(a1 + 132);
      v21 = *(_DWORD *)(a1 + 200) & 0xFFFFFBDF;
      v56 = (ULONG *)(Object + 128);
      *((_DWORD *)Object + 50) = v21;
      v22 = *(_DWORD *)(a1 + 120);
      if ( *((_DWORD *)Object + 30) != v22 )
      {
        *((_DWORD *)Object + 30) = v22;
        if ( !SeTokenDoesNotTrackSessionObject )
        {
          v23 = (void *)*((_QWORD *)Object + 145);
          if ( v23 )
            ObfDereferenceObject(v23);
          *((_QWORD *)Object + 145) = MmGetSessionObjectById();
        }
      }
      *(_OWORD *)(Object + 88) = *(_OWORD *)(a1 + 88);
      *((_QWORD *)Object + 13) = *(_QWORD *)(a1 + 104);
      *((_DWORD *)Object + 28) = *(_DWORD *)(a1 + 112);
      *((_WORD *)Object + 58) = *(_WORD *)(a1 + 116);
      Object[118] = *(_BYTE *)(a1 + 118);
      *((_DWORD *)Object + 52) = *(_DWORD *)(a1 + 208);
      *((_DWORD *)Object + 53) = *(_DWORD *)(a1 + 212);
      *((_OWORD *)Object + 4) = *(_OWORD *)(a1 + 64);
      *((_QWORD *)Object + 10) = *(_QWORD *)(a1 + 80);
      *((_QWORD *)Object + 97) = v14;
      *((_QWORD *)Object + 135) = 0LL;
      v58 = Object + 1080;
      *((_QWORD *)Object + 136) = 0LL;
      v59 = Object + 1088;
      *((_QWORD *)Object + 144) = 0LL;
      v60 = Object + 1152;
      *((_QWORD *)Object + 99) = 0LL;
      v62 = (PSID_AND_ATTRIBUTES *)(Object + 792);
      *((_QWORD *)Object + 98) = 0LL;
      v64 = (ULONG *)(Object + 800);
      *((_DWORD *)Object + 200) = 0;
      SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)(Object + 808);
      memset(Object + 808, 0, 0x110uLL);
      *((_QWORD *)Object + 22) = 0LL;
      v57 = Object + 176;
      *((_QWORD *)Object + 138) = 0LL;
      *((_QWORD *)Object + 139) = 0LL;
      *((_QWORD *)Object + 142) = 0LL;
      v24 = Object[118] == 2;
      v61 = (PVOID *)(Object + 1104);
      if ( v24 )
        SepModifyTokenPolicyCounter(Object + 88, 1LL);
      if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
      {
        v26 = SepReferenceLogonSession(a1 + 24, (__int64)(Object + 216));
        if ( v26 < 0 )
        {
          *((_DWORD *)Object + 50) |= 0x20u;
          *((_QWORD *)Object + 27) = 0LL;
LABEL_41:
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
          KeLeaveCriticalRegion();
          ObfDereferenceObject((PVOID)v20);
          return (unsigned int)v26;
        }
      }
      else
      {
        v25 = *(_QWORD *)(a1 + 216);
        *((_QWORD *)Object + 27) = v25;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v25 + 24)) <= 1 )
          __fastfail(0xEu);
        v20 = (__int64)Object;
        v26 = 0;
      }
      v27 = *(_QWORD *)(a1 + 1136);
      if ( v27 )
        SepReferenceLuidToIndexEntry(v27);
      *((_QWORD *)Object + 142) = *(_QWORD *)(a1 + 1136);
      v28 = *(_DWORD **)(a1 + 776);
      if ( *v28 )
      {
        v26 = AuthzBasepDuplicateSecurityAttributes((__int64)v28, *((_QWORD *)Object + 97), a7);
        if ( v26 < 0 )
          goto LABEL_41;
      }
      memmove((void *)(v20 + 1168), (const void *)(a1 + 1168), *(unsigned int *)(a1 + 132));
      v29 = (PSID_AND_ATTRIBUTES *)(v20 + 152);
      v30 = v20 - a1;
      if ( SepTokenSidSharingEnabled )
      {
        *v29 = (PSID_AND_ATTRIBUTES)(v30 + *(_QWORD *)(a1 + 152));
        v26 = SepDuplicateTokenUserAndGroups(a1, v20);
        if ( v26 < 0 )
        {
          *v29 = 0LL;
          goto LABEL_41;
        }
      }
      else
      {
        *(_DWORD *)(v20 + 124) = *(_DWORD *)(a1 + 124);
        v31 = (_SID_AND_ATTRIBUTES *)(v30 + *(_QWORD *)(a1 + 152));
        *v29 = v31;
        for ( i = *(_DWORD *)(v20 + 124); i; --i )
        {
          v31->Sid = (char *)v31->Sid + v30;
          ++v31;
        }
      }
      v33 = *(_QWORD *)(a1 + 160);
      v54 = (PSID_AND_ATTRIBUTES *)(v20 + 160);
      *(_QWORD *)(v20 + 160) = v33;
      if ( v33 )
      {
        v34 = (_QWORD *)(v30 + v33);
        *(_QWORD *)(v20 + 160) = v34;
        for ( j = *v56; j; --j )
        {
          *v34 += v30;
          v34 += 2;
        }
      }
      v36 = *(_QWORD *)(a1 + 184);
      v37 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
      if ( v36 )
        v37 += *(unsigned __int16 *)(v36 + 2);
      v38 = v37;
      v39 = (char *)ExAllocatePoolWithTag(PagedPool, v37, 0x64546553u);
      *v57 = v39;
      if ( !v39 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
        KeLeaveCriticalRegion();
        ObfDereferenceObject((PVOID)v20);
        return 3221225626LL;
      }
      memmove(v39, *(const void **)(a1 + 176), v38);
      v40 = *(_QWORD *)(a1 + 184);
      v41 = &v39[-*(_QWORD *)(a1 + 176)];
      *(_QWORD *)(v20 + 184) = v40;
      if ( v40 )
        *(_QWORD *)(v20 + 184) = &v41[v40];
      *(_QWORD *)(v20 + 168) = &v41[*(_QWORD *)(a1 + 168)];
      v42 = *(_DWORD *)(a1 + 800);
      if ( v42 )
        v26 = SepSetTokenCapabilities(v20, *(void **)(a1 + 784), *(void **)(a1 + 792), v42);
      if ( v26 < 0 )
        goto LABEL_41;
      v43 = *(unsigned __int8 **)(a1 + 784);
      if ( v43 )
        v26 = SepSetTokenPackage(v20, v43);
      if ( v26 < 0 )
        goto LABEL_41;
      v44 = *(_QWORD *)(a1 + 1080);
      if ( v44 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v44 + 24)) <= 1 )
          __fastfail(0xEu);
        v20 = (__int64)Object;
        *v58 = *(_QWORD *)(a1 + 1080);
      }
      v45 = *(_QWORD *)(a1 + 1088);
      if ( v45 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v45 + 24)) <= 1 )
          __fastfail(0xEu);
        v20 = (__int64)Object;
        *v59 = *(_QWORD *)(a1 + 1088);
      }
      v46 = *(_QWORD *)(a1 + 1152);
      if ( v46 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v46 + 24)) <= 1 )
          __fastfail(0xEu);
        v20 = (__int64)Object;
        *v60 = *(_QWORD *)(a1 + 1152);
      }
      if ( *(_QWORD *)(a1 + 1096) )
      {
        v26 = SepDuplicateTokenClaims(a1, v20);
        if ( v26 < 0 )
          goto LABEL_41;
      }
      v47 = *(unsigned __int8 **)(a1 + 1104);
      v48 = 0LL;
      v26 = 0;
      v55 = 0LL;
      if ( v47 )
      {
        v26 = SepDuplicateSid(v47, &v55);
        if ( v26 < 0 )
          goto LABEL_41;
        v48 = v55;
      }
      v49 = v61;
      if ( *v61 )
      {
        ExFreePoolWithTag(*v61, 0);
        *v49 = 0LL;
      }
      *v49 = v48;
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
      if ( SeTokenLeakTracking )
      {
        **((_QWORD **)Object + 143) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        *(_QWORD *)(*((_QWORD *)Object + 143) + 8LL) = KeGetCurrentThread()[1].KernelStack;
        *(_DWORD *)(*((_QWORD *)Object + 143) + 32LL) = 13;
        *(_DWORD *)(*((_QWORD *)Object + 143) + 280LL) = 0;
        *(_DWORD *)(*((_QWORD *)Object + 143) + 284LL) = 0;
        v50 = *((_QWORD *)Object + 143);
        v20 = (__int64)Object;
        Process = KeGetCurrentThread()->ApcState.Process;
        *(_QWORD *)(v50 + 16) = Process[1].ActiveProcessors.Bitmap[12];
        *(_DWORD *)(v50 + 24) = Process[1].ActiveProcessors.Bitmap[13];
        *(_WORD *)(v50 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[13]);
        *(_BYTE *)(v50 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[13]);
        SepAddTokenLogonSession();
      }
      if ( a3 )
        SepMakeTokenEffectiveOnly(v20);
      RtlSidHashInitialize(*v29, *(_DWORD *)(v20 + 124), (PSID_AND_ATTRIBUTES_HASH)(v20 + 232));
      RtlSidHashInitialize(*v54, *v56, (PSID_AND_ATTRIBUTES_HASH)(v20 + 504));
      if ( *v62 )
        RtlSidHashInitialize(*v62, *v64, SidAttrHash);
      if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 13 )
      {
        if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
        {
          *(_DWORD *)(*((_QWORD *)Object + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
          v52 = *(_DWORD *)(*((_QWORD *)Object + 143) + 280LL);
          if ( v52 >= SepTokenLeakBreakCount )
          {
            DbgPrint("\nToken number 0x%x = 0x%p\n", v52, Object);
            __debugbreak();
          }
        }
        v20 = (__int64)Object;
      }
      *a8 = v20;
      return (unsigned int)v26;
    }
  }
  ExFreePoolWithTag(v14, 0);
  ExFreePoolWithTag(v16, 0);
  if ( SeTokenLeakTracking )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v17;
}
