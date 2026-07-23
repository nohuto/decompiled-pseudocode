/*
 * XREFs of SepFilterToken @ 0x140542044
 * Callers:
 *     NtFilterToken @ 0x14057C3B8 (NtFilterToken.c)
 *     SeFilterToken @ 0x14062CB20 (SeFilterToken.c)
 * Callees:
 *     RtlUIntAdd @ 0x1400382D0 (RtlUIntAdd.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14005C310 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlSidHashInitialize @ 0x14005C860 (RtlSidHashInitialize.c)
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     SepDuplicateLogonSessionReference @ 0x1400D1B50 (SepDuplicateLogonSessionReference.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlWalkFrameChain @ 0x1401309E0 (RtlWalkFrameChain.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SeIsSystemContext @ 0x1402A0B24 (SeIsSystemContext.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SepSetTokenTrust @ 0x1404C0758 (SepSetTokenTrust.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SepSetTokenPackage @ 0x1404D5088 (SepSetTokenPackage.c)
 *     RtlIsSandboxedToken @ 0x1404DD0B0 (RtlIsSandboxedToken.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1404DF338 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepSetTokenSessionById @ 0x1404F0508 (SepSetTokenSessionById.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1404F0B3C (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     RtlIsCapabilitySid @ 0x1405414D8 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x140541F64 (RtlIsPackageSid.c)
 *     SepSetTokenCapabilities @ 0x140543800 (SepSetTokenCapabilities.c)
 *     RtlCopySidAndAttributesArray @ 0x1405442F0 (RtlCopySidAndAttributesArray.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x140547274 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x140547488 (SepSidInSidAndAttributes.c)
 *     SepSetLogonSessionToken @ 0x140547FB4 (SepSetLogonSessionToken.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SepModifyTokenPolicyCounter @ 0x14078CBEC (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1407929D8 (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x140793000 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x140794B8C (SepDuplicateTokenClaims.c)
 */

__int64 __fastcall SepFilterToken(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        PSID *a9,
        UINT uAddend,
        _QWORD *a11)
{
  char v11; // bl
  PVOID *v14; // r14
  unsigned int v16; // esi
  PSID *v17; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v19; // rsi
  _QWORD *v20; // rax
  PVOID *v21; // rcx
  struct _ERESOURCE *v22; // r15
  int v23; // ebx
  _QWORD *v24; // rbx
  _QWORD *v25; // rdx
  PVOID v26; // r15
  UINT v27; // eax
  ULONG v28; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v30; // rbx
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  _DWORD *v33; // r14
  __int128 v34; // xmm0
  int v35; // esi
  struct _KTHREAD *v36; // rcx
  _DWORD *v37; // rcx
  __int64 v38; // rdx
  _KPROCESS *Process; // rcx
  PACCESS_TOKEN v40; // rbx
  _SID_AND_ATTRIBUTES *v41; // r14
  int v42; // eax
  unsigned int v43; // eax
  _SID_AND_ATTRIBUTES **v44; // r13
  unsigned int v45; // r12d
  _SID_AND_ATTRIBUTES *v46; // r12
  __int64 v47; // r8
  ULONG v48; // r8d
  NTSTATUS v49; // eax
  unsigned int v50; // r13d
  _SID_AND_ATTRIBUTES *v51; // r14
  PSID *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned int v55; // ecx
  size_t v56; // r14
  char *v57; // r12
  char v58; // al
  _DWORD *v59; // rcx
  PSID_AND_ATTRIBUTES *v60; // r13
  __int64 v61; // rax
  unsigned int v62; // r14d
  __int64 v63; // r9
  unsigned __int8 *v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rdx
  char *v68; // rbx
  int v69; // ecx
  KPROCESSOR_MODE v70; // di
  struct _KTHREAD *v71; // rax
  PERESOURCE *PrimaryToken; // rbx
  int v73; // edx
  PSID SidArea; // [rsp+28h] [rbp-E0h]
  UINT puResult[2]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  UINT v77[2]; // [rsp+68h] [rbp-A0h] BYREF
  PSID RemainingSidArea; // [rsp+70h] [rbp-98h] BYREF
  __int64 v79; // [rsp+78h] [rbp-90h]
  PSID_AND_ATTRIBUTES *v80; // [rsp+80h] [rbp-88h]
  _DWORD *v81; // [rsp+88h] [rbp-80h]
  _QWORD *v82; // [rsp+90h] [rbp-78h]
  _QWORD *v83; // [rsp+98h] [rbp-70h]
  _QWORD *v84; // [rsp+A0h] [rbp-68h]
  _QWORD *v85; // [rsp+A8h] [rbp-60h]
  PSID_AND_ATTRIBUTES *v86; // [rsp+B0h] [rbp-58h]
  PSID_AND_ATTRIBUTES *v87; // [rsp+B8h] [rbp-50h]
  PSID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+C0h] [rbp-48h]
  ULONG *v89; // [rsp+C8h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-38h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v91; // [rsp+F0h] [rbp-18h] BYREF

  v77[1] = 0;
  v11 = a3;
  v14 = 0LL;
  memset(&v91, 0, sizeof(v91));
  BYTE1(v77[0]) = KeGetCurrentThread()->PreviousMode;
  LODWORD(v79) = v11 & 8;
  if ( (v11 & 8) != 0 && (*(_DWORD *)(a1 + 200) & 0x58) != 0 )
    return 3221225485LL;
  v16 = 0;
  if ( a8 )
  {
    v17 = a9;
    while ( !RtlIsPackageSid(*v17) && !RtlIsCapabilitySid(*v17) )
    {
      ++v16;
      v17 += 2;
      if ( v16 >= a8 )
        goto LABEL_9;
    }
    return 3221225485LL;
  }
LABEL_9:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0;
  v20 = PoolWithTag + 2;
  v20[1] = v20;
  *v20 = v20;
  v19[6] = 0;
  *((_QWORD *)v19 + 5) = v19 + 8;
  *((_QWORD *)v19 + 4) = v19 + 8;
  if ( SeTokenLeakTracking )
  {
    v14 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
    if ( !v14 )
    {
      v21 = (PVOID *)v19;
      goto LABEL_14;
    }
  }
  v22 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
  if ( !v22 )
  {
    ExFreePoolWithTag(v19, 0);
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v21 = v14;
LABEL_14:
    ExFreePoolWithTag(v21, 0);
    return 3221225626LL;
  }
  v23 = RtlUIntAdd(*(_DWORD *)(a1 + 132), uAddend, puResult);
  if ( v23 >= 0 )
  {
    v23 = RtlUIntAdd(puResult[0], 4u, puResult);
    if ( v23 >= 0 )
    {
      v23 = RtlUIntAdd(0x490u, puResult[0], &v77[1]);
      if ( v23 >= 0 )
      {
        v23 = ObCreateObjectEx(
                a2,
                SeTokenObjectType,
                0,
                a2,
                (__int64)SidArea,
                v77[1],
                *(_DWORD *)(a1 + 136),
                v77[1],
                &Object,
                0LL);
        if ( v23 >= 0 )
        {
          v24 = Object;
          *((_QWORD *)Object + 6) = v22;
          ExInitializeResourceLite(v22);
          v25 = Object;
          v24[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          v26 = Object;
          v25[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          *((_BYTE *)v26 + 204) = 0;
          *((_QWORD *)v26 + 3) = *(_QWORD *)(a1 + 24);
          v27 = puResult[0];
          *(_OWORD *)v26 = *(_OWORD *)a1;
          *((_DWORD *)v26 + 35) = 0;
          *((_DWORD *)v26 + 32) = 0;
          *((_DWORD *)v26 + 33) = v27;
          *((_QWORD *)v26 + 4) = *(_QWORD *)(a1 + 16);
          *((_DWORD *)v26 + 48) = *(_DWORD *)(a1 + 192);
          *((_DWORD *)v26 + 49) = *(_DWORD *)(a1 + 196);
          *((_QWORD *)v26 + 5) = *(_QWORD *)(a1 + 40);
          *((_QWORD *)v26 + 28) = *(_QWORD *)(a1 + 224);
          *((_QWORD *)v26 + 140) = 0LL;
          *((_QWORD *)v26 + 141) = 0LL;
          *((_QWORD *)v26 + 137) = 0LL;
          *((_QWORD *)v26 + 143) = v14;
          *((_DWORD *)v26 + 30) = 0;
          *((_QWORD *)v26 + 145) = 0LL;
          if ( SeTokenLeakTracking )
          {
            v28 = RtlWalkFrameChain(v14 + 5, 0x1Eu, 0);
            if ( KeGetCurrentIrql() < 2u )
              RtlWalkFrameChain((PVOID *)(*((_QWORD *)v26 + 143) + 40LL + 8LL * v28), 30 - v28, 1u);
          }
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
          v30 = (char *)Object;
          v31 = Object;
          *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
          v31[36] = *(_DWORD *)(a1 + 144);
          SepSetTokenSessionById((__int64)v31, *(_DWORD *)(a1 + 120), 0, 0LL, 0LL);
          v33 = v30 + 200;
          *((_DWORD *)v30 + 50) = *(_DWORD *)(a1 + 200) & 0xFFFFFBD7;
          v34 = *(_OWORD *)(a1 + 88);
          v81 = v30 + 200;
          *(_OWORD *)(v30 + 88) = v34;
          *((_QWORD *)v30 + 13) = *(_QWORD *)(a1 + 104);
          *((_DWORD *)v30 + 28) = *(_DWORD *)(a1 + 112);
          *((_WORD *)v30 + 58) = *(_WORD *)(a1 + 116);
          v30[118] = *(_BYTE *)(a1 + 118);
          *((_DWORD *)v30 + 52) = *(_DWORD *)(a1 + 208);
          *((_DWORD *)v30 + 53) = *(_DWORD *)(a1 + 212);
          *((_OWORD *)v30 + 4) = *(_OWORD *)(a1 + 64);
          *((_QWORD *)v30 + 10) = *(_QWORD *)(a1 + 80);
          *((_QWORD *)v30 + 97) = v19;
          if ( v30[118] == 2 )
          {
            LOBYTE(v32) = 1;
            SepModifyTokenPolicyCounter(v30 + 88, v32);
          }
          *((_QWORD *)v30 + 135) = 0LL;
          v83 = v30 + 1080;
          *((_QWORD *)v30 + 136) = 0LL;
          v84 = v30 + 1088;
          *((_QWORD *)v30 + 144) = 0LL;
          v85 = v30 + 1152;
          *((_QWORD *)v30 + 99) = 0LL;
          v87 = (PSID_AND_ATTRIBUTES *)(v30 + 792);
          *((_QWORD *)v30 + 98) = 0LL;
          v89 = (ULONG *)(v30 + 800);
          *((_DWORD *)v30 + 200) = 0;
          SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)(v30 + 808);
          memset(v30 + 808, 0, 0x110uLL);
          *((_QWORD *)v30 + 22) = 0LL;
          *((_QWORD *)v30 + 138) = 0LL;
          *((_QWORD *)v30 + 139) = 0LL;
          *((_QWORD *)v30 + 142) = 0LL;
          v82 = v30 + 176;
          v35 = SepDuplicateLogonSessionReference((__int64)v30, a1);
          if ( v35 < 0 )
            goto LABEL_28;
          SepRefDerefLuidToIndexEntryIfNecessary(a1, 0);
          *((_QWORD *)v30 + 142) = *(_QWORD *)(a1 + 1136);
          v37 = *(_DWORD **)(a1 + 776);
          if ( *v37 )
          {
            v35 = AuthzBasepDuplicateSecurityAttributes((__int64)v37, *((_QWORD **)v30 + 97), 0);
            if ( v35 < 0 )
              goto LABEL_28;
          }
          if ( *(_QWORD *)(a1 + 1096) )
          {
            v35 = SepDuplicateTokenClaims(a1, v30);
            if ( v35 < 0 )
              goto LABEL_28;
          }
          if ( SeTokenLeakTracking )
          {
            **((_QWORD **)v26 + 143) = KeGetCurrentThread()[1].CycleTime;
            *(_QWORD *)(*((_QWORD *)v26 + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
            *(_DWORD *)(*((_QWORD *)v26 + 143) + 32LL) = 15;
            *(_DWORD *)(*((_QWORD *)v26 + 143) + 280LL) = 0;
            *(_DWORD *)(*((_QWORD *)v26 + 143) + 284LL) = 0;
            v38 = *((_QWORD *)v26 + 143);
            v30 = (char *)Object;
            Process = KeGetCurrentThread()->ApcState.Process;
            *(_QWORD *)(v38 + 16) = Process[1].ActiveProcessors.Bitmap[12];
            *(_DWORD *)(v38 + 24) = Process[1].ActiveProcessors.Bitmap[13];
            *(_WORD *)(v38 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[13]);
            *(_BYTE *)(v38 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[13]);
            SepAddTokenLogonSession();
          }
          if ( (a3 & 2) != 0 )
          {
            v40 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
            if ( (int)SeIsSystemContext(v40, v77) >= 0 && LOBYTE(v77[0]) )
              *v33 |= 0x40u;
            ObfDereferenceObject(v40);
            v30 = (char *)Object;
          }
          v41 = (_SID_AND_ATTRIBUTES *)(v30 + 1168);
          v42 = ((_BYTE)v30 - 112) & 7;
          if ( (((_BYTE)v30 - 112) & 7) != 0 )
          {
            v41 = (_SID_AND_ATTRIBUTES *)((char *)v41 + (unsigned int)(8 - v42));
            puResult[0] -= 8 - v42;
          }
          v43 = *(_DWORD *)(a1 + 128);
          v44 = (_SID_AND_ATTRIBUTES **)(v30 + 152);
          v45 = a8;
          v86 = (PSID_AND_ATTRIBUTES *)(v30 + 152);
          if ( v43 > a8 )
            v45 = v43;
          v46 = &v41[*(_DWORD *)(a1 + 124) + v45];
          *v44 = v41;
          RemainingSidArea = v46;
          if ( SepTokenSidSharingEnabled )
          {
            v35 = SepDuplicateTokenUserAndGroups(a1, v30);
            if ( v35 < 0 )
            {
              *v44 = 0LL;
              goto LABEL_28;
            }
          }
          else
          {
            v48 = puResult[0];
            *((_DWORD *)v30 + 31) = *(_DWORD *)(a1 + 124);
            v49 = RtlCopySidAndAttributesArray(
                    *(_DWORD *)(a1 + 124),
                    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
                    v48,
                    v41,
                    v46,
                    &RemainingSidArea,
                    puResult);
            v46 = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
            v35 = v49;
          }
          v50 = 0;
          v51 = (_SID_AND_ATTRIBUTES *)((char *)v41 + (unsigned int)(16 * *(_DWORD *)(a1 + 124)));
          v80 = (PSID_AND_ATTRIBUTES *)(v30 + 160);
          *((_QWORD *)v30 + 20) = v51;
          if ( a8 )
          {
            v52 = a9;
            do
            {
              v53 = *(unsigned int *)(a1 + 128);
              if ( !(_DWORD)v53 || (unsigned __int8)SepSidInSidAndAttributes(*(_QWORD *)(a1 + 160), v53, v47, *v52) )
              {
                v35 = RtlCopySidAndAttributesArray(
                        1u,
                        (PSID_AND_ATTRIBUTES)&a9[2 * v50],
                        puResult[0],
                        v51,
                        v46,
                        &RemainingSidArea,
                        puResult);
                v46 = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
                ++v51;
                (*v80)[(*((_DWORD *)v26 + 32))++].Attributes = 7;
              }
              ++v50;
              v52 += 2;
            }
            while ( v50 < a8 );
            v30 = (char *)Object;
          }
          v54 = *(_QWORD *)(a1 + 184);
          v55 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
          if ( v54 )
            v55 += *(unsigned __int16 *)(v54 + 2);
          v56 = v55;
          v57 = (char *)ExAllocatePoolWithTag(PagedPool, v55, 0x64546553u);
          *v82 = v57;
          if ( v57 )
          {
            if ( !*(_DWORD *)(a1 + 128) || *((_DWORD *)v26 + 32) )
            {
              v58 = 0;
              v59 = v81;
              v60 = v80;
              if ( *((_DWORD *)v26 + 32) )
              {
                *v81 |= 0x810u;
                v58 = 1;
              }
              else
              {
                *v80 = 0LL;
              }
              if ( (_DWORD)v79 )
              {
                *v59 |= 0x18u;
                v58 = 1;
              }
              if ( v58 )
                SepSetLogonSessionToken(a1, 0LL);
              memmove(v57, *(const void **)(a1 + 176), v56);
              v61 = *(_QWORD *)(a1 + 184);
              if ( v61 )
                *((_QWORD *)v30 + 23) = &v57[(unsigned int)(v61 - *(_DWORD *)(a1 + 176))];
              else
                *((_QWORD *)v30 + 23) = 0LL;
              v62 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
              v63 = *(unsigned int *)(a1 + 800);
              if ( (_DWORD)v63 )
                v35 = SepSetTokenCapabilities(v30, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v63);
              if ( v35 >= 0 )
              {
                v64 = *(unsigned __int8 **)(a1 + 784);
                if ( v64 )
                  v35 = SepSetTokenPackage((__int64)v30, v64);
                if ( v35 >= 0 )
                {
                  v65 = *(_QWORD *)(a1 + 1080);
                  if ( v65 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v65 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v30 = (char *)Object;
                    *v83 = *(_QWORD *)(a1 + 1080);
                  }
                  v66 = *(_QWORD *)(a1 + 1088);
                  if ( v66 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v66 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v30 = (char *)Object;
                    *v84 = *(_QWORD *)(a1 + 1088);
                  }
                  v67 = *(_QWORD *)(a1 + 1152);
                  if ( v67 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v67 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v30 = (char *)Object;
                    *v85 = *(_QWORD *)(a1 + 1152);
                  }
                  v35 = SepSetTokenTrust((__int64)v30, *(void **)(a1 + 1104));
                  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
                  v36 = KeGetCurrentThread();
                  if ( v35 >= 0 )
                  {
                    KeLeaveCriticalRegionThread((__int64)v36);
                    v68 = (char *)Object;
                    v69 = (int)Object;
                    *((_QWORD *)Object + 21) = &v57[v62];
                    SepRemoveDisabledGroupsAndPrivileges(v69, a3, a4, a5, a6, a7);
                    RtlSidHashInitialize(*v86, *((_DWORD *)v68 + 31), (PSID_AND_ATTRIBUTES_HASH)(v68 + 232));
                    RtlSidHashInitialize(*v60, *((_DWORD *)v26 + 32), (PSID_AND_ATTRIBUTES_HASH)(v68 + 504));
                    SeCaptureSubjectContext(&SubjectContext);
                    v70 = BYTE1(v77[0]);
                    v91.PrimaryToken = SubjectContext.PrimaryToken;
                    if ( RtlIsSandboxedToken(&SubjectContext, SBYTE1(v77[0])) && RtlIsSandboxedToken(&v91, v70) )
                    {
                      v71 = KeGetCurrentThread();
                      --v71->KernelApcDisable;
                      PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
                      ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
                      v35 = SepNewTokenAsRestrictedAsProcessToken(Object, PrimaryToken, (_BYTE *)v77 + 2);
                      ExReleaseResourceLite(PrimaryToken[6]);
                      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                      if ( v35 < 0 || !BYTE2(v77[0]) )
                      {
                        ObfDereferenceObject(Object);
                        SeReleaseSubjectContext(&SubjectContext);
                        return (unsigned int)v35;
                      }
                      v68 = (char *)Object;
                    }
                    SeReleaseSubjectContext(&SubjectContext);
                    if ( *v87 )
                      RtlSidHashInitialize(*v87, *v89, SidAttrHash);
                    if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 15 )
                    {
                      if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
                      {
                        *(_DWORD *)(*((_QWORD *)v26 + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                        v73 = *(_DWORD *)(*((_QWORD *)v26 + 143) + 280LL);
                        if ( v73 >= SepTokenLeakBreakCount )
                        {
                          DbgPrint("\nToken number 0x%x = 0x%p\n", v73, Object);
                          __debugbreak();
                        }
                      }
                      v68 = (char *)Object;
                    }
                    *a11 = v68;
                    return (unsigned int)v35;
                  }
LABEL_29:
                  KeLeaveCriticalRegionThread((__int64)v36);
                  ObfDereferenceObject(Object);
                  return (unsigned int)v35;
                }
              }
            }
            else
            {
              v35 = -1073741811;
            }
          }
          else
          {
            v35 = -1073741670;
          }
LABEL_28:
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
          v36 = KeGetCurrentThread();
          goto LABEL_29;
        }
      }
    }
  }
  ExFreePoolWithTag(v22, 0);
  ExFreePoolWithTag(v19, 0);
  if ( SeTokenLeakTracking )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)v23;
}
