/*
 * XREFs of SepFilterToken @ 0x14046CA74
 * Callers:
 *     NtFilterToken @ 0x14045464C (NtFilterToken.c)
 *     SeFilterToken @ 0x1406F0AF0 (SeFilterToken.c)
 * Callees:
 *     SepDuplicateLogonSessionReference @ 0x14003DE38 (SepDuplicateLogonSessionReference.c)
 *     RtlUIntAdd @ 0x14004C5F0 (RtlUIntAdd.c)
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     RtlSidHashInitialize @ 0x140093A10 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140093E50 (AuthzBasepDuplicateSecurityAttributes.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlWalkFrameChain @ 0x1400E4A90 (RtlWalkFrameChain.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SeIsSystemContext @ 0x140247954 (SeIsSystemContext.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14044BE4C (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x14044C020 (SepSidInSidAndAttributes.c)
 *     SepSetLogonSessionToken @ 0x140456ACC (SepSetLogonSessionToken.c)
 *     RtlIsPackageSid @ 0x14046A0F8 (RtlIsPackageSid.c)
 *     RtlCopySidAndAttributesArray @ 0x14046ED30 (RtlCopySidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x14046FF44 (SepSetTokenCapabilities.c)
 *     RtlIsSandboxedToken @ 0x1404767C0 (RtlIsSandboxedToken.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1404A17E0 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepSetTokenSessionById @ 0x1404A19EC (SepSetTokenSessionById.c)
 *     RtlIsCapabilitySid @ 0x1404A4EC8 (RtlIsCapabilitySid.c)
 *     SepSetTokenPackage @ 0x1404F1A70 (SepSetTokenPackage.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     SepSetTokenTrust @ 0x140511010 (SepSetTokenTrust.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140560360 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepModifyTokenPolicyCounter @ 0x1406F0E4C (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1406F6E14 (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1406F7430 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x1406F9850 (SepDuplicateTokenClaims.c)
 */

__int64 __fastcall SepFilterToken(
        __int64 a1,
        char a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        unsigned int a8,
        PSID *a9,
        UINT uAddend,
        _QWORD *a11)
{
  PVOID *v14; // r14
  unsigned int v16; // esi
  PSID *v17; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v19; // rsi
  _QWORD *v20; // rax
  PVOID *v21; // rcx
  struct _ERESOURCE *v22; // r15
  int v23; // ebx
  int v24; // r9d
  int v25; // ecx
  _QWORD *v26; // rbx
  _QWORD *v27; // rdx
  PVOID v28; // r15
  UINT v29; // eax
  ULONG v30; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v32; // rbx
  _DWORD *v33; // rcx
  __int64 v34; // rdx
  _DWORD *v35; // r14
  __int128 v36; // xmm0
  int v37; // esi
  _DWORD *v38; // rcx
  __int64 v39; // rdx
  _KPROCESS *Process; // rcx
  PACCESS_TOKEN v41; // rbx
  _SID_AND_ATTRIBUTES *v42; // r14
  int v43; // eax
  unsigned int v44; // eax
  _SID_AND_ATTRIBUTES **v45; // r13
  unsigned int v46; // r12d
  _SID_AND_ATTRIBUTES *SidArea; // r12
  __int64 v48; // r8
  ULONG v49; // r8d
  NTSTATUS v50; // eax
  unsigned int v51; // r13d
  _SID_AND_ATTRIBUTES *v52; // r14
  char **v53; // rbx
  unsigned int v54; // edx
  __int64 v55; // rax
  unsigned int v56; // ecx
  size_t v57; // r14
  char *v58; // r12
  char v59; // al
  _DWORD *v60; // rcx
  PSID_AND_ATTRIBUTES *v61; // r13
  unsigned int v62; // r14d
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rdx
  char *v68; // rbx
  PVOID v69; // rcx
  struct _KTHREAD *v70; // rax
  PERESOURCE *PrimaryToken; // rbx
  int v72; // edx
  UINT puResult[2]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h]
  UINT v75[2]; // [rsp+68h] [rbp-A0h] BYREF
  PSID RemainingSidArea; // [rsp+70h] [rbp-98h] BYREF
  __int64 v77; // [rsp+78h] [rbp-90h]
  PSID_AND_ATTRIBUTES *v78; // [rsp+80h] [rbp-88h]
  _DWORD *v79; // [rsp+88h] [rbp-80h]
  _QWORD *v80; // [rsp+90h] [rbp-78h]
  _QWORD *v81; // [rsp+98h] [rbp-70h]
  _QWORD *v82; // [rsp+A0h] [rbp-68h]
  _QWORD *v83; // [rsp+A8h] [rbp-60h]
  PSID_AND_ATTRIBUTES *v84; // [rsp+B0h] [rbp-58h]
  PSID_AND_ATTRIBUTES *v85; // [rsp+B8h] [rbp-50h]
  PSID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+C0h] [rbp-48h]
  ULONG *v87; // [rsp+C8h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-38h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v89; // [rsp+F0h] [rbp-18h] BYREF

  v75[1] = 0;
  v14 = 0LL;
  memset(&v89, 0, sizeof(v89));
  BYTE1(v75[0]) = KeGetCurrentThread()->PreviousMode;
  LODWORD(v77) = a3 & 8;
  if ( (a3 & 8) != 0 && (*(_DWORD *)(a1 + 200) & 0x58) != 0 )
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
      v23 = RtlUIntAdd(0x490u, puResult[0], &v75[1]);
      if ( v23 >= 0 )
      {
        v25 = *(_DWORD *)(a1 + 136);
        LOBYTE(v24) = a2;
        LOBYTE(v25) = a2;
        v23 = ObCreateObjectEx(v25, (_DWORD)SeTokenObjectType, 0, v24);
        if ( v23 >= 0 )
        {
          v26 = Object;
          *((_QWORD *)Object + 6) = v22;
          ExInitializeResourceLite(v22);
          v27 = Object;
          v26[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          v28 = Object;
          v27[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          *((_BYTE *)v28 + 204) = 0;
          *((_QWORD *)v28 + 3) = *(_QWORD *)(a1 + 24);
          v29 = puResult[0];
          *(_OWORD *)v28 = *(_OWORD *)a1;
          *((_DWORD *)v28 + 35) = 0;
          *((_DWORD *)v28 + 32) = 0;
          *((_DWORD *)v28 + 33) = v29;
          *((_QWORD *)v28 + 4) = *(_QWORD *)(a1 + 16);
          *((_DWORD *)v28 + 48) = *(_DWORD *)(a1 + 192);
          *((_DWORD *)v28 + 49) = *(_DWORD *)(a1 + 196);
          *((_QWORD *)v28 + 5) = *(_QWORD *)(a1 + 40);
          *((_QWORD *)v28 + 28) = *(_QWORD *)(a1 + 224);
          *((_QWORD *)v28 + 140) = 0LL;
          *((_QWORD *)v28 + 141) = 0LL;
          *((_QWORD *)v28 + 137) = 0LL;
          *((_QWORD *)v28 + 143) = v14;
          *((_DWORD *)v28 + 30) = 0;
          *((_QWORD *)v28 + 145) = 0LL;
          if ( SeTokenLeakTracking )
          {
            v30 = RtlWalkFrameChain(v14 + 5, 0x1Eu, 0);
            if ( KeGetCurrentIrql() < 2u )
              RtlWalkFrameChain((PVOID *)(*((_QWORD *)v28 + 143) + 40LL + 8LL * v30), 30 - v30, 1u);
          }
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
          v32 = (char *)Object;
          v33 = Object;
          *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
          v33[36] = *(_DWORD *)(a1 + 144);
          SepSetTokenSessionById((_DWORD)v33, *(_DWORD *)(a1 + 120), 0, 0, 0LL);
          v35 = v32 + 200;
          *((_DWORD *)v32 + 50) = *(_DWORD *)(a1 + 200) & 0xFFFFFBD7;
          v36 = *(_OWORD *)(a1 + 88);
          v79 = v32 + 200;
          *(_OWORD *)(v32 + 88) = v36;
          *((_QWORD *)v32 + 13) = *(_QWORD *)(a1 + 104);
          *((_DWORD *)v32 + 28) = *(_DWORD *)(a1 + 112);
          *((_WORD *)v32 + 58) = *(_WORD *)(a1 + 116);
          v32[118] = *(_BYTE *)(a1 + 118);
          *((_DWORD *)v32 + 52) = *(_DWORD *)(a1 + 208);
          *((_DWORD *)v32 + 53) = *(_DWORD *)(a1 + 212);
          *((_OWORD *)v32 + 4) = *(_OWORD *)(a1 + 64);
          *((_QWORD *)v32 + 10) = *(_QWORD *)(a1 + 80);
          *((_QWORD *)v32 + 97) = v19;
          if ( v32[118] == 2 )
          {
            LOBYTE(v34) = 1;
            SepModifyTokenPolicyCounter(v32 + 88, v34);
          }
          *((_QWORD *)v32 + 135) = 0LL;
          v81 = v32 + 1080;
          *((_QWORD *)v32 + 136) = 0LL;
          v82 = v32 + 1088;
          *((_QWORD *)v32 + 144) = 0LL;
          v83 = v32 + 1152;
          *((_QWORD *)v32 + 99) = 0LL;
          v85 = (PSID_AND_ATTRIBUTES *)(v32 + 792);
          *((_QWORD *)v32 + 98) = 0LL;
          v87 = (ULONG *)(v32 + 800);
          *((_DWORD *)v32 + 200) = 0;
          SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)(v32 + 808);
          memset(v32 + 808, 0, 0x110uLL);
          *((_QWORD *)v32 + 22) = 0LL;
          *((_QWORD *)v32 + 138) = 0LL;
          *((_QWORD *)v32 + 139) = 0LL;
          *((_QWORD *)v32 + 142) = 0LL;
          v80 = v32 + 176;
          v37 = SepDuplicateLogonSessionReference((__int64)v32, a1);
          if ( v37 < 0 )
            goto LABEL_28;
          SepRefDerefLuidToIndexEntryIfNecessary(a1, 0LL);
          *((_QWORD *)v32 + 142) = *(_QWORD *)(a1 + 1136);
          v38 = *(_DWORD **)(a1 + 776);
          if ( *v38 )
          {
            v37 = AuthzBasepDuplicateSecurityAttributes((__int64)v38, *((_QWORD *)v32 + 97), 0);
            if ( v37 < 0 )
              goto LABEL_28;
          }
          if ( *(_QWORD *)(a1 + 1096) )
          {
            v37 = SepDuplicateTokenClaims(a1, v32);
            if ( v37 < 0 )
              goto LABEL_28;
          }
          if ( SeTokenLeakTracking )
          {
            **((_QWORD **)v28 + 143) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
            *(_QWORD *)(*((_QWORD *)v28 + 143) + 8LL) = KeGetCurrentThread()[1].KernelStack;
            *(_DWORD *)(*((_QWORD *)v28 + 143) + 32LL) = 15;
            *(_DWORD *)(*((_QWORD *)v28 + 143) + 280LL) = 0;
            *(_DWORD *)(*((_QWORD *)v28 + 143) + 284LL) = 0;
            v39 = *((_QWORD *)v28 + 143);
            v32 = (char *)Object;
            Process = KeGetCurrentThread()->ApcState.Process;
            *(_QWORD *)(v39 + 16) = Process[1].ActiveProcessors.Bitmap[12];
            *(_DWORD *)(v39 + 24) = Process[1].ActiveProcessors.Bitmap[13];
            *(_WORD *)(v39 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[13]);
            *(_BYTE *)(v39 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[13]);
            SepAddTokenLogonSession(v32);
          }
          if ( (a3 & 2) != 0 )
          {
            v41 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
            if ( (int)SeIsSystemContext(v41, v75) >= 0 && LOBYTE(v75[0]) )
              *v35 |= 0x40u;
            ObfDereferenceObject(v41);
            v32 = (char *)Object;
          }
          v42 = (_SID_AND_ATTRIBUTES *)(v32 + 1168);
          v43 = ((_BYTE)v32 - 112) & 7;
          if ( (((_BYTE)v32 - 112) & 7) != 0 )
          {
            v42 = (_SID_AND_ATTRIBUTES *)((char *)v42 + (unsigned int)(8 - v43));
            puResult[0] -= 8 - v43;
          }
          v44 = *(_DWORD *)(a1 + 128);
          v45 = (_SID_AND_ATTRIBUTES **)(v32 + 152);
          v46 = a8;
          v84 = (PSID_AND_ATTRIBUTES *)(v32 + 152);
          if ( v44 > a8 )
            v46 = v44;
          SidArea = &v42[*(_DWORD *)(a1 + 124) + v46];
          *v45 = v42;
          RemainingSidArea = SidArea;
          if ( SepTokenSidSharingEnabled )
          {
            v37 = SepDuplicateTokenUserAndGroups(a1, v32);
            if ( v37 < 0 )
            {
              *v45 = 0LL;
              goto LABEL_28;
            }
          }
          else
          {
            v49 = puResult[0];
            *((_DWORD *)v32 + 31) = *(_DWORD *)(a1 + 124);
            v50 = RtlCopySidAndAttributesArray(
                    *(_DWORD *)(a1 + 124),
                    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
                    v49,
                    v42,
                    SidArea,
                    &RemainingSidArea,
                    puResult);
            SidArea = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
            v37 = v50;
          }
          v51 = 0;
          v52 = (_SID_AND_ATTRIBUTES *)((char *)v42 + (unsigned int)(16 * *(_DWORD *)(a1 + 124)));
          v78 = (PSID_AND_ATTRIBUTES *)(v32 + 160);
          *((_QWORD *)v32 + 20) = v52;
          if ( a8 )
          {
            v53 = (char **)a9;
            do
            {
              v54 = *(_DWORD *)(a1 + 128);
              if ( !v54 || SepSidInSidAndAttributes(*(unsigned __int8 ***)(a1 + 160), v54, v48, *v53) )
              {
                v37 = RtlCopySidAndAttributesArray(
                        1u,
                        (PSID_AND_ATTRIBUTES)&a9[2 * v51],
                        puResult[0],
                        v52,
                        SidArea,
                        &RemainingSidArea,
                        puResult);
                SidArea = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
                ++v52;
                (*v78)[(*((_DWORD *)v28 + 32))++].Attributes = 7;
              }
              ++v51;
              v53 += 2;
            }
            while ( v51 < a8 );
            v32 = (char *)Object;
          }
          v55 = *(_QWORD *)(a1 + 184);
          v56 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
          if ( v55 )
            v56 += *(unsigned __int16 *)(v55 + 2);
          v57 = v56;
          v58 = (char *)ExAllocatePoolWithTag(PagedPool, v56, 0x64546553u);
          *v80 = v58;
          if ( v58 )
          {
            if ( !*(_DWORD *)(a1 + 128) || *((_DWORD *)v28 + 32) )
            {
              v59 = 0;
              v60 = v79;
              v61 = v78;
              if ( *((_DWORD *)v28 + 32) )
              {
                *v79 |= 0x810u;
                v59 = 1;
              }
              else
              {
                *v78 = 0LL;
              }
              if ( (_DWORD)v77 )
              {
                *v60 |= 0x18u;
                v59 = 1;
              }
              if ( v59 )
                SepSetLogonSessionToken(a1);
              memmove(v58, *(const void **)(a1 + 176), v57);
              if ( *(_QWORD *)(a1 + 184) )
                *((_QWORD *)v32 + 23) = &v58[*(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 176)];
              else
                *((_QWORD *)v32 + 23) = 0LL;
              v62 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
              v63 = *(unsigned int *)(a1 + 800);
              if ( (_DWORD)v63 )
                v37 = SepSetTokenCapabilities(v32, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v63);
              if ( v37 >= 0 )
              {
                v64 = *(_QWORD *)(a1 + 784);
                if ( v64 )
                  v37 = SepSetTokenPackage(v32, v64);
                if ( v37 >= 0 )
                {
                  v65 = *(_QWORD *)(a1 + 1080);
                  if ( v65 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v65 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v32 = (char *)Object;
                    *v81 = *(_QWORD *)(a1 + 1080);
                  }
                  v66 = *(_QWORD *)(a1 + 1088);
                  if ( v66 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v66 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v32 = (char *)Object;
                    *v82 = *(_QWORD *)(a1 + 1088);
                  }
                  v67 = *(_QWORD *)(a1 + 1152);
                  if ( v67 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v67 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v32 = (char *)Object;
                    *v83 = *(_QWORD *)(a1 + 1152);
                  }
                  v37 = SepSetTokenTrust(v32, *(_QWORD *)(a1 + 1104));
                  if ( v37 >= 0 )
                  {
                    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
                    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                    v68 = (char *)Object;
                    v69 = Object;
                    *((_QWORD *)Object + 21) = &v58[v62];
                    SepRemoveDisabledGroupsAndPrivileges((__int64)v69, a3, a4, a5, a6, a7);
                    RtlSidHashInitialize(*v84, *((_DWORD *)v68 + 31), (PSID_AND_ATTRIBUTES_HASH)(v68 + 232));
                    RtlSidHashInitialize(*v61, *((_DWORD *)v28 + 32), (PSID_AND_ATTRIBUTES_HASH)(v68 + 504));
                    SeCaptureSubjectContext(&SubjectContext);
                    v89.PrimaryToken = SubjectContext.PrimaryToken;
                    if ( (unsigned __int8)RtlIsSandboxedToken(&SubjectContext)
                      && (unsigned __int8)RtlIsSandboxedToken(&v89) )
                    {
                      v70 = KeGetCurrentThread();
                      --v70->KernelApcDisable;
                      PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
                      ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
                      v37 = SepNewTokenAsRestrictedAsProcessToken(Object, PrimaryToken);
                      ExReleaseResourceLite(PrimaryToken[6]);
                      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                      if ( v37 < 0 || !BYTE2(v75[0]) )
                      {
                        ObfDereferenceObject(Object);
                        SeReleaseSubjectContext(&SubjectContext);
                        return (unsigned int)v37;
                      }
                      v68 = (char *)Object;
                    }
                    SeReleaseSubjectContext(&SubjectContext);
                    if ( *v85 )
                      RtlSidHashInitialize(*v85, *v87, SidAttrHash);
                    if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 15 )
                    {
                      if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
                      {
                        *(_DWORD *)(*((_QWORD *)v28 + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                        v72 = *(_DWORD *)(*((_QWORD *)v28 + 143) + 280LL);
                        if ( v72 >= SepTokenLeakBreakCount )
                        {
                          DbgPrint("\nToken number 0x%x = 0x%p\n", v72, Object);
                          __debugbreak();
                        }
                      }
                      v68 = (char *)Object;
                    }
                    *a11 = v68;
                    return (unsigned int)v37;
                  }
                }
              }
            }
            else
            {
              v37 = -1073741811;
            }
          }
          else
          {
            v37 = -1073741670;
          }
LABEL_28:
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Object);
          return (unsigned int)v37;
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
