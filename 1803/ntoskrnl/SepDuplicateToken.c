/*
 * XREFs of SepDuplicateToken @ 0x1404C28D0
 * Callers:
 *     SepGetAnonymousToken @ 0x14009F040 (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x1400A1590 (SepLinkLogonSessions.c)
 *     NtOpenThreadTokenEx @ 0x1404C0990 (NtOpenThreadTokenEx.c)
 *     NtDuplicateToken @ 0x1404DCD80 (NtDuplicateToken.c)
 *     SeSubProcessToken @ 0x1404F0580 (SeSubProcessToken.c)
 *     NtImpersonateAnonymousToken @ 0x14051C480 (NtImpersonateAnonymousToken.c)
 *     NtCreateLowBoxToken @ 0x140540EB0 (NtCreateLowBoxToken.c)
 *     SepSetLogonSessionToken @ 0x140547FB4 (SepSetLogonSessionToken.c)
 *     SeCopyClientToken @ 0x14055EC24 (SeCopyClientToken.c)
 *     NtQueryInformationToken @ 0x140597890 (NtQueryInformationToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x1407922C8 (SeDuplicateTokenAndAddOriginClaim.c)
 *     SeGetLinkedToken @ 0x1407923A0 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x140792490 (SeGetLogonSessionToken.c)
 * Callees:
 *     RtlUIntAdd @ 0x1400382D0 (RtlUIntAdd.c)
 *     MmGetSessionObjectById @ 0x14005A340 (MmGetSessionObjectById.c)
 *     SepReferenceLuidToIndexEntry @ 0x14005C2EC (SepReferenceLuidToIndexEntry.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14005C310 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlSidHashInitialize @ 0x14005C860 (RtlSidHashInitialize.c)
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlWalkFrameChain @ 0x1401309E0 (RtlWalkFrameChain.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     SepDuplicateSid @ 0x1404D2FD0 (SepDuplicateSid.c)
 *     SepSetTokenPackage @ 0x1404D5088 (SepSetTokenPackage.c)
 *     SepSetTokenCapabilities @ 0x140543800 (SepSetTokenCapabilities.c)
 *     SepReferenceLogonSession @ 0x14054491C (SepReferenceLogonSession.c)
 *     SepMakeTokenEffectiveOnly @ 0x140560DD8 (SepMakeTokenEffectiveOnly.c)
 *     SepModifyTokenPolicyCounter @ 0x14078CBEC (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1407929D8 (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x140793000 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x140794B8C (SepDuplicateTokenClaims.c)
 */

__int64 __fastcall SepDuplicateToken(
        __int64 a1,
        int a2,
        char a3,
        int a4,
        unsigned int a5,
        unsigned __int8 a6,
        char a7,
        char **a8)
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
  char *v20; // rdi
  int v21; // r14d
  void *v22; // rcx
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // rax
  _DWORD *v26; // rcx
  PSID_AND_ATTRIBUTES *v27; // r13
  unsigned __int64 v28; // r14
  _SID_AND_ATTRIBUTES *v29; // rcx
  int i; // eax
  __int64 v31; // rax
  char *v32; // rax
  ULONG j; // ecx
  __int64 v34; // rax
  unsigned int v35; // ecx
  size_t v36; // r12
  char *v37; // r14
  __int64 v38; // rax
  char *v39; // r14
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  void *v45; // rcx
  __int64 v46; // rdx
  _KPROCESS *Process; // rcx
  int v48; // edx
  char *Object; // [rsp+50h] [rbp-98h]
  PSID_AND_ATTRIBUTES *v50; // [rsp+58h] [rbp-90h]
  ULONG *v51; // [rsp+68h] [rbp-80h]
  PVOID *v52; // [rsp+90h] [rbp-58h]
  PSID_AND_ATTRIBUTES *v53; // [rsp+98h] [rbp-50h]
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
      v20 = Object;
      *((_QWORD *)Object + 7) = *(_QWORD *)(a1 + 56);
      *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
      *((_DWORD *)Object + 36) = *(_DWORD *)(a1 + 144);
      *((_DWORD *)Object + 32) = *(_DWORD *)(a1 + 128);
      *((_DWORD *)Object + 33) = *(_DWORD *)(a1 + 132);
      v51 = (ULONG *)(Object + 128);
      *((_DWORD *)Object + 50) = *(_DWORD *)(a1 + 200) & 0xFFFFFBDF;
      v21 = *(_DWORD *)(a1 + 120);
      if ( *((_DWORD *)Object + 30) != v21 )
      {
        *((_DWORD *)Object + 30) = v21;
        if ( !SeTokenDoesNotTrackSessionObject )
        {
          v22 = (void *)*((_QWORD *)Object + 145);
          if ( v22 )
            ObfDereferenceObject(v22);
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
      *((_QWORD *)Object + 136) = 0LL;
      *((_QWORD *)Object + 144) = 0LL;
      *((_QWORD *)Object + 99) = 0LL;
      v53 = (PSID_AND_ATTRIBUTES *)(Object + 792);
      *((_QWORD *)Object + 98) = 0LL;
      *((_DWORD *)Object + 200) = 0;
      memset(Object + 808, 0, 0x110uLL);
      *((_QWORD *)Object + 22) = 0LL;
      *((_QWORD *)Object + 138) = 0LL;
      *((_QWORD *)Object + 139) = 0LL;
      *((_QWORD *)Object + 142) = 0LL;
      v52 = (PVOID *)(Object + 1104);
      if ( Object[118] == 2 )
        SepModifyTokenPolicyCounter(Object + 88, 1LL);
      if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
      {
        v24 = SepReferenceLogonSession(a1 + 24, Object + 216);
        if ( v24 < 0 )
        {
          *((_DWORD *)Object + 50) |= 0x20u;
          *((_QWORD *)Object + 27) = 0LL;
          goto LABEL_41;
        }
      }
      else
      {
        v23 = *(_QWORD *)(a1 + 216);
        *((_QWORD *)Object + 27) = v23;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24)) <= 1 )
          __fastfail(0xEu);
        v20 = Object;
        v24 = 0;
      }
      v25 = *(_QWORD *)(a1 + 1136);
      if ( v25 )
      {
        SepReferenceLuidToIndexEntry(*(_QWORD *)(a1 + 1136));
        v25 = *(_QWORD *)(a1 + 1136);
      }
      *((_QWORD *)Object + 142) = v25;
      v26 = *(_DWORD **)(a1 + 776);
      if ( *v26 )
      {
        v24 = AuthzBasepDuplicateSecurityAttributes((__int64)v26, *((_QWORD **)Object + 97), a7);
        if ( v24 < 0 )
          goto LABEL_41;
      }
      memmove(v20 + 1168, (const void *)(a1 + 1168), *(unsigned int *)(a1 + 132));
      v27 = (PSID_AND_ATTRIBUTES *)(v20 + 152);
      v28 = (unsigned __int64)&v20[-a1];
      if ( SepTokenSidSharingEnabled )
      {
        *v27 = (PSID_AND_ATTRIBUTES)(v28 + *(_QWORD *)(a1 + 152));
        v24 = SepDuplicateTokenUserAndGroups(a1, v20);
        if ( v24 < 0 )
        {
          *v27 = 0LL;
          goto LABEL_41;
        }
      }
      else
      {
        *((_DWORD *)v20 + 31) = *(_DWORD *)(a1 + 124);
        v29 = (_SID_AND_ATTRIBUTES *)(v28 + *(_QWORD *)(a1 + 152));
        *v27 = v29;
        for ( i = *((_DWORD *)v20 + 31); i; --i )
        {
          v29->Sid = (char *)v29->Sid + v28;
          ++v29;
        }
      }
      v31 = *(_QWORD *)(a1 + 160);
      v50 = (PSID_AND_ATTRIBUTES *)(v20 + 160);
      *((_QWORD *)v20 + 20) = v31;
      if ( v31 )
      {
        v32 = (char *)(v28 + v31);
        *((_QWORD *)v20 + 20) = v32;
        for ( j = *v51; j; --j )
        {
          *(_QWORD *)v32 += v28;
          v32 += 16;
        }
      }
      v34 = *(_QWORD *)(a1 + 184);
      v35 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
      if ( v34 )
        v35 += *(unsigned __int16 *)(v34 + 2);
      v36 = v35;
      v37 = (char *)ExAllocatePoolWithTag(PagedPool, v35, 0x64546553u);
      *((_QWORD *)Object + 22) = v37;
      if ( !v37 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v20);
        return 3221225626LL;
      }
      memmove(v37, *(const void **)(a1 + 176), v36);
      v38 = *(_QWORD *)(a1 + 184);
      v39 = &v37[-*(_QWORD *)(a1 + 176)];
      *((_QWORD *)v20 + 23) = v38;
      if ( v38 )
        *((_QWORD *)v20 + 23) = &v39[v38];
      *((_QWORD *)v20 + 21) = &v39[*(_QWORD *)(a1 + 168)];
      v40 = *(unsigned int *)(a1 + 800);
      if ( (_DWORD)v40 )
        v24 = SepSetTokenCapabilities(v20, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v40);
      if ( v24 >= 0 )
      {
        v41 = *(_QWORD *)(a1 + 784);
        if ( v41 )
          v24 = SepSetTokenPackage(v20, v41);
        if ( v24 >= 0 )
        {
          v42 = *(_QWORD *)(a1 + 1080);
          if ( v42 )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v42 + 24)) <= 1 )
              __fastfail(0xEu);
            v20 = Object;
            *((_QWORD *)Object + 135) = *(_QWORD *)(a1 + 1080);
          }
          v43 = *(_QWORD *)(a1 + 1088);
          if ( v43 )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v43 + 24)) <= 1 )
              __fastfail(0xEu);
            v20 = Object;
            *((_QWORD *)Object + 136) = *(_QWORD *)(a1 + 1088);
          }
          v44 = *(_QWORD *)(a1 + 1152);
          if ( v44 )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v44 + 24)) <= 1 )
              __fastfail(0xEu);
            v20 = Object;
            *((_QWORD *)Object + 144) = *(_QWORD *)(a1 + 1152);
          }
          if ( !*(_QWORD *)(a1 + 1096) || (v24 = SepDuplicateTokenClaims(a1, v20), v24 >= 0) )
          {
            v45 = *(void **)(a1 + 1104);
            v24 = 0;
            if ( !v45 || (v24 = SepDuplicateSid(v45), v24 >= 0) )
            {
              if ( *v52 )
              {
                ExFreePoolWithTag(*v52, 0);
                *v52 = 0LL;
              }
              *v52 = 0LL;
            }
            ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
            KeLeaveCriticalRegion();
            if ( v24 >= 0 )
            {
              if ( SeTokenLeakTracking )
              {
                **((_QWORD **)Object + 143) = KeGetCurrentThread()[1].CycleTime;
                *(_QWORD *)(*((_QWORD *)Object + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
                *(_DWORD *)(*((_QWORD *)Object + 143) + 32LL) = 13;
                *(_DWORD *)(*((_QWORD *)Object + 143) + 280LL) = 0;
                *(_DWORD *)(*((_QWORD *)Object + 143) + 284LL) = 0;
                v46 = *((_QWORD *)Object + 143);
                v20 = Object;
                Process = KeGetCurrentThread()->ApcState.Process;
                *(_QWORD *)(v46 + 16) = Process[1].ActiveProcessors.Bitmap[12];
                *(_DWORD *)(v46 + 24) = Process[1].ActiveProcessors.Bitmap[13];
                *(_WORD *)(v46 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[13]);
                *(_BYTE *)(v46 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[13]);
                SepAddTokenLogonSession();
              }
              if ( a3 )
                SepMakeTokenEffectiveOnly(v20);
              RtlSidHashInitialize(*v27, *((_DWORD *)v20 + 31), (PSID_AND_ATTRIBUTES_HASH)(v20 + 232));
              RtlSidHashInitialize(*v50, *v51, (PSID_AND_ATTRIBUTES_HASH)(v20 + 504));
              if ( *v53 )
                RtlSidHashInitialize(*v53, *((_DWORD *)Object + 200), (PSID_AND_ATTRIBUTES_HASH)(Object + 808));
              if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 13 )
              {
                if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
                {
                  *(_DWORD *)(*((_QWORD *)Object + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                  v48 = *(_DWORD *)(*((_QWORD *)Object + 143) + 280LL);
                  if ( v48 >= SepTokenLeakBreakCount )
                  {
                    DbgPrint("\nToken number 0x%x = 0x%p\n", v48, Object);
                    __debugbreak();
                  }
                }
                v20 = Object;
              }
              *a8 = v20;
              return (unsigned int)v24;
            }
LABEL_42:
            ObfDereferenceObject(v20);
            return (unsigned int)v24;
          }
        }
      }
LABEL_41:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
      goto LABEL_42;
    }
  }
  ExFreePoolWithTag(v14, 0);
  ExFreePoolWithTag(v16, 0);
  if ( SeTokenLeakTracking )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v17;
}
