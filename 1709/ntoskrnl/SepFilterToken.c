/*
 * XREFs of SepFilterToken @ 0x14045B120
 * Callers:
 *     NtFilterToken @ 0x14045ACFC (NtFilterToken.c)
 *     SeFilterToken @ 0x140728510 (SeFilterToken.c)
 * Callees:
 *     SepDuplicateLogonSessionReference @ 0x14001373C (SepDuplicateLogonSessionReference.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlSidHashInitialize @ 0x140089560 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140089720 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlWalkFrameChain @ 0x1400D5800 (RtlWalkFrameChain.c)
 *     RtlUIntAdd @ 0x1400DF340 (RtlUIntAdd.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SeIsSystemContext @ 0x14025F074 (SeIsSystemContext.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SepSetLogonSessionToken @ 0x14045A9BC (SepSetLogonSessionToken.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14045AA90 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x14045AC68 (SepSidInSidAndAttributes.c)
 *     RtlCopySidAndAttributesArray @ 0x14045C7B0 (RtlCopySidAndAttributesArray.c)
 *     SepSetTokenTrust @ 0x1404884A4 (SepSetTokenTrust.c)
 *     SepSetTokenCapabilities @ 0x1404888F8 (SepSetTokenCapabilities.c)
 *     SepSetTokenSessionById @ 0x14048C960 (SepSetTokenSessionById.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x14048CF60 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     RtlIsSandboxedToken @ 0x1404C69F0 (RtlIsSandboxedToken.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14051357C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     RtlIsCapabilitySid @ 0x1405498A0 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x140549BD8 (RtlIsPackageSid.c)
 *     SepSetTokenPackage @ 0x1405646C8 (SepSetTokenPackage.c)
 *     SepModifyTokenPolicyCounter @ 0x14072886C (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x14072E934 (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x14072EF40 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x1407312A0 (SepDuplicateTokenClaims.c)
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
  int v24; // ecx
  _QWORD *v25; // rbx
  _QWORD *v26; // rdx
  PVOID v27; // r15
  UINT v28; // eax
  ULONG v29; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v31; // rbx
  _DWORD *v32; // rcx
  __int64 v33; // rdx
  _DWORD *v34; // r14
  __int128 v35; // xmm0
  int v36; // esi
  _DWORD *v37; // rcx
  __int64 v38; // rdx
  _KPROCESS *Process; // rcx
  PACCESS_TOKEN v40; // rbx
  _SID_AND_ATTRIBUTES *v41; // r14
  int v42; // eax
  unsigned int v43; // eax
  int v44; // r12d
  unsigned int v45; // ecx
  _SID_AND_ATTRIBUTES *SidArea; // r12
  __int64 v47; // r8
  ULONG v48; // r8d
  NTSTATUS v49; // eax
  unsigned int v50; // r13d
  _SID_AND_ATTRIBUTES *v51; // r14
  char **v52; // rbx
  unsigned int v53; // edx
  __int64 v54; // rax
  unsigned int v55; // ecx
  size_t v56; // r14
  char *v57; // r12
  char v58; // al
  _DWORD *v59; // rcx
  PSID_AND_ATTRIBUTES *v60; // r13
  unsigned int v61; // r14d
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rdx
  char *v67; // rbx
  PVOID v68; // rcx
  struct _KTHREAD *v69; // rax
  PERESOURCE *PrimaryToken; // rbx
  int v71; // edx
  UINT puResult[2]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h]
  UINT v74[2]; // [rsp+68h] [rbp-A0h] BYREF
  PSID RemainingSidArea; // [rsp+70h] [rbp-98h] BYREF
  __int64 v76; // [rsp+78h] [rbp-90h]
  PSID_AND_ATTRIBUTES *v77; // [rsp+80h] [rbp-88h]
  _DWORD *v78; // [rsp+88h] [rbp-80h]
  _QWORD *v79; // [rsp+90h] [rbp-78h]
  _QWORD *v80; // [rsp+98h] [rbp-70h]
  _QWORD *v81; // [rsp+A0h] [rbp-68h]
  _QWORD *v82; // [rsp+A8h] [rbp-60h]
  PSID_AND_ATTRIBUTES *v83; // [rsp+B0h] [rbp-58h]
  PSID_AND_ATTRIBUTES *v84; // [rsp+B8h] [rbp-50h]
  PSID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+C0h] [rbp-48h]
  ULONG *v86; // [rsp+C8h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-38h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v88; // [rsp+F0h] [rbp-18h] BYREF

  v74[1] = 0;
  v14 = 0LL;
  memset(&v88, 0, sizeof(v88));
  BYTE1(v74[0]) = KeGetCurrentThread()->PreviousMode;
  LODWORD(v76) = a3 & 8;
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
      v23 = RtlUIntAdd(0x490u, puResult[0], &v74[1]);
      if ( v23 >= 0 )
      {
        v24 = *(_DWORD *)(a1 + 136);
        LOBYTE(v24) = a2;
        v23 = ObCreateObjectEx(v24, (_DWORD)SeTokenObjectType, 0, a2);
        if ( v23 >= 0 )
        {
          v25 = Object;
          *((_QWORD *)Object + 6) = v22;
          ExInitializeResourceLite(v22);
          v26 = Object;
          v25[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          v27 = Object;
          v26[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          *((_BYTE *)v27 + 204) = 0;
          *((_QWORD *)v27 + 3) = *(_QWORD *)(a1 + 24);
          v28 = puResult[0];
          *(_OWORD *)v27 = *(_OWORD *)a1;
          *((_DWORD *)v27 + 35) = 0;
          *((_DWORD *)v27 + 32) = 0;
          *((_DWORD *)v27 + 33) = v28;
          *((_QWORD *)v27 + 4) = *(_QWORD *)(a1 + 16);
          *((_DWORD *)v27 + 48) = *(_DWORD *)(a1 + 192);
          *((_DWORD *)v27 + 49) = *(_DWORD *)(a1 + 196);
          *((_QWORD *)v27 + 5) = *(_QWORD *)(a1 + 40);
          *((_QWORD *)v27 + 28) = *(_QWORD *)(a1 + 224);
          *((_QWORD *)v27 + 140) = 0LL;
          *((_QWORD *)v27 + 141) = 0LL;
          *((_QWORD *)v27 + 137) = 0LL;
          *((_QWORD *)v27 + 143) = v14;
          *((_DWORD *)v27 + 30) = 0;
          *((_QWORD *)v27 + 145) = 0LL;
          if ( SeTokenLeakTracking )
          {
            v29 = RtlWalkFrameChain(v14 + 5, 0x1Eu, 0);
            if ( KeGetCurrentIrql() < 2u )
              RtlWalkFrameChain((PVOID *)(*((_QWORD *)v27 + 143) + 40LL + 8LL * v29), 30 - v29, 1u);
          }
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
          v31 = (char *)Object;
          v32 = Object;
          *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
          v32[36] = *(_DWORD *)(a1 + 144);
          SepSetTokenSessionById((_DWORD)v32, *(_DWORD *)(a1 + 120), 0, 0, 0LL);
          v34 = v31 + 200;
          *((_DWORD *)v31 + 50) = *(_DWORD *)(a1 + 200) & 0xFFFFFBD7;
          v35 = *(_OWORD *)(a1 + 88);
          v78 = v31 + 200;
          *(_OWORD *)(v31 + 88) = v35;
          *((_QWORD *)v31 + 13) = *(_QWORD *)(a1 + 104);
          *((_DWORD *)v31 + 28) = *(_DWORD *)(a1 + 112);
          *((_WORD *)v31 + 58) = *(_WORD *)(a1 + 116);
          v31[118] = *(_BYTE *)(a1 + 118);
          *((_DWORD *)v31 + 52) = *(_DWORD *)(a1 + 208);
          *((_DWORD *)v31 + 53) = *(_DWORD *)(a1 + 212);
          *((_OWORD *)v31 + 4) = *(_OWORD *)(a1 + 64);
          *((_QWORD *)v31 + 10) = *(_QWORD *)(a1 + 80);
          *((_QWORD *)v31 + 97) = v19;
          if ( v31[118] == 2 )
          {
            LOBYTE(v33) = 1;
            SepModifyTokenPolicyCounter(v31 + 88, v33);
          }
          *((_QWORD *)v31 + 135) = 0LL;
          v80 = v31 + 1080;
          *((_QWORD *)v31 + 136) = 0LL;
          v81 = v31 + 1088;
          *((_QWORD *)v31 + 144) = 0LL;
          v82 = v31 + 1152;
          *((_QWORD *)v31 + 99) = 0LL;
          v84 = (PSID_AND_ATTRIBUTES *)(v31 + 792);
          *((_QWORD *)v31 + 98) = 0LL;
          v86 = (ULONG *)(v31 + 800);
          *((_DWORD *)v31 + 200) = 0;
          SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)(v31 + 808);
          memset(v31 + 808, 0, 0x110uLL);
          *((_QWORD *)v31 + 22) = 0LL;
          *((_QWORD *)v31 + 138) = 0LL;
          *((_QWORD *)v31 + 139) = 0LL;
          *((_QWORD *)v31 + 142) = 0LL;
          v79 = v31 + 176;
          v36 = SepDuplicateLogonSessionReference((__int64)v31, a1);
          if ( v36 < 0 )
            goto LABEL_28;
          SepRefDerefLuidToIndexEntryIfNecessary(a1, 0LL);
          *((_QWORD *)v31 + 142) = *(_QWORD *)(a1 + 1136);
          v37 = *(_DWORD **)(a1 + 776);
          if ( *v37 )
          {
            v36 = AuthzBasepDuplicateSecurityAttributes((__int64)v37, *((_QWORD **)v31 + 97), 0);
            if ( v36 < 0 )
              goto LABEL_28;
          }
          if ( *(_QWORD *)(a1 + 1096) )
          {
            v36 = SepDuplicateTokenClaims(a1, v31);
            if ( v36 < 0 )
              goto LABEL_28;
          }
          if ( SeTokenLeakTracking )
          {
            **((_QWORD **)v27 + 143) = KeGetCurrentThread()[1].CycleTime;
            *(_QWORD *)(*((_QWORD *)v27 + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
            *(_DWORD *)(*((_QWORD *)v27 + 143) + 32LL) = 15;
            *(_DWORD *)(*((_QWORD *)v27 + 143) + 280LL) = 0;
            *(_DWORD *)(*((_QWORD *)v27 + 143) + 284LL) = 0;
            v38 = *((_QWORD *)v27 + 143);
            v31 = (char *)Object;
            Process = KeGetCurrentThread()->ApcState.Process;
            *(_QWORD *)(v38 + 16) = Process[1].ActiveProcessors.Bitmap[12];
            *(_DWORD *)(v38 + 24) = Process[1].ActiveProcessors.Bitmap[13];
            *(_WORD *)(v38 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[13]);
            *(_BYTE *)(v38 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[13]);
            SepAddTokenLogonSession(v31);
          }
          if ( (a3 & 2) != 0 )
          {
            v40 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
            if ( (int)SeIsSystemContext(v40, v74) >= 0 && LOBYTE(v74[0]) )
              *v34 |= 0x40u;
            ObfDereferenceObject(v40);
            v31 = (char *)Object;
          }
          v41 = (_SID_AND_ATTRIBUTES *)(v31 + 1168);
          v42 = ((_BYTE)v31 - 112) & 7;
          if ( (((_BYTE)v31 - 112) & 7) != 0 )
          {
            v41 = (_SID_AND_ATTRIBUTES *)((char *)v41 + (unsigned int)(8 - v42));
            puResult[0] -= 8 - v42;
          }
          v43 = *(_DWORD *)(a1 + 128);
          v44 = *(_DWORD *)(a1 + 124);
          v45 = a8;
          *((_QWORD *)v31 + 19) = v41;
          if ( v43 > a8 )
            v45 = v43;
          v83 = (PSID_AND_ATTRIBUTES *)(v31 + 152);
          SidArea = &v41[v45 + v44];
          RemainingSidArea = SidArea;
          if ( SepTokenSidSharingEnabled )
          {
            v36 = SepDuplicateTokenUserAndGroups(a1, v31);
            if ( v36 < 0 )
            {
              *((_QWORD *)v31 + 19) = 0LL;
              goto LABEL_28;
            }
          }
          else
          {
            v48 = puResult[0];
            *((_DWORD *)v31 + 31) = *(_DWORD *)(a1 + 124);
            v49 = RtlCopySidAndAttributesArray(
                    *(_DWORD *)(a1 + 124),
                    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
                    v48,
                    v41,
                    SidArea,
                    &RemainingSidArea,
                    puResult);
            SidArea = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
            v36 = v49;
          }
          v50 = 0;
          v51 = (_SID_AND_ATTRIBUTES *)((char *)v41 + (unsigned int)(16 * *(_DWORD *)(a1 + 124)));
          v77 = (PSID_AND_ATTRIBUTES *)(v31 + 160);
          *((_QWORD *)v31 + 20) = v51;
          if ( a8 )
          {
            v52 = (char **)a9;
            do
            {
              v53 = *(_DWORD *)(a1 + 128);
              if ( !v53 || SepSidInSidAndAttributes(*(unsigned __int8 ***)(a1 + 160), v53, v47, *v52) )
              {
                v36 = RtlCopySidAndAttributesArray(
                        1u,
                        (PSID_AND_ATTRIBUTES)&a9[2 * v50],
                        puResult[0],
                        v51,
                        SidArea,
                        &RemainingSidArea,
                        puResult);
                SidArea = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
                ++v51;
                (*v77)[(*((_DWORD *)v27 + 32))++].Attributes = 7;
              }
              ++v50;
              v52 += 2;
            }
            while ( v50 < a8 );
            v31 = (char *)Object;
          }
          v54 = *(_QWORD *)(a1 + 184);
          v55 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
          if ( v54 )
            v55 += *(unsigned __int16 *)(v54 + 2);
          v56 = v55;
          v57 = (char *)ExAllocatePoolWithTag(PagedPool, v55, 0x64546553u);
          *v79 = v57;
          if ( v57 )
          {
            if ( !*(_DWORD *)(a1 + 128) || *((_DWORD *)v27 + 32) )
            {
              v58 = 0;
              v59 = v78;
              v60 = v77;
              if ( *((_DWORD *)v27 + 32) )
              {
                *v78 |= 0x810u;
                v58 = 1;
              }
              else
              {
                *v77 = 0LL;
              }
              if ( (_DWORD)v76 )
              {
                *v59 |= 0x18u;
                v58 = 1;
              }
              if ( v58 )
                SepSetLogonSessionToken(a1);
              memmove(v57, *(const void **)(a1 + 176), v56);
              if ( *(_QWORD *)(a1 + 184) )
                *((_QWORD *)v31 + 23) = &v57[*(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 176)];
              else
                *((_QWORD *)v31 + 23) = 0LL;
              v61 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
              v62 = *(unsigned int *)(a1 + 800);
              if ( (_DWORD)v62 )
                v36 = SepSetTokenCapabilities(v31, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v62);
              if ( v36 >= 0 )
              {
                v63 = *(_QWORD *)(a1 + 784);
                if ( v63 )
                  v36 = SepSetTokenPackage(v31, v63);
                if ( v36 >= 0 )
                {
                  v64 = *(_QWORD *)(a1 + 1080);
                  if ( v64 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v64 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v31 = (char *)Object;
                    *v80 = *(_QWORD *)(a1 + 1080);
                  }
                  v65 = *(_QWORD *)(a1 + 1088);
                  if ( v65 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v65 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v31 = (char *)Object;
                    *v81 = *(_QWORD *)(a1 + 1088);
                  }
                  v66 = *(_QWORD *)(a1 + 1152);
                  if ( v66 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v66 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v31 = (char *)Object;
                    *v82 = *(_QWORD *)(a1 + 1152);
                  }
                  v36 = SepSetTokenTrust(v31, *(_QWORD *)(a1 + 1104));
                  if ( v36 >= 0 )
                  {
                    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
                    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                    v67 = (char *)Object;
                    v68 = Object;
                    *((_QWORD *)Object + 21) = &v57[v61];
                    SepRemoveDisabledGroupsAndPrivileges((__int64)v68, a3, a4, a5, a6, a7);
                    RtlSidHashInitialize(*v83, *((_DWORD *)v67 + 31), (PSID_AND_ATTRIBUTES_HASH)(v67 + 232));
                    RtlSidHashInitialize(*v60, *((_DWORD *)v27 + 32), (PSID_AND_ATTRIBUTES_HASH)(v67 + 504));
                    SeCaptureSubjectContext(&SubjectContext);
                    v88.PrimaryToken = SubjectContext.PrimaryToken;
                    if ( (unsigned __int8)RtlIsSandboxedToken(&SubjectContext)
                      && (unsigned __int8)RtlIsSandboxedToken(&v88) )
                    {
                      v69 = KeGetCurrentThread();
                      --v69->KernelApcDisable;
                      PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
                      ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
                      v36 = SepNewTokenAsRestrictedAsProcessToken(Object, PrimaryToken);
                      ExReleaseResourceLite(PrimaryToken[6]);
                      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                      if ( v36 < 0 || !BYTE2(v74[0]) )
                      {
                        ObfDereferenceObject(Object);
                        SeReleaseSubjectContext(&SubjectContext);
                        return (unsigned int)v36;
                      }
                      v67 = (char *)Object;
                    }
                    SeReleaseSubjectContext(&SubjectContext);
                    if ( *v84 )
                      RtlSidHashInitialize(*v84, *v86, SidAttrHash);
                    if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 15 )
                    {
                      if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
                      {
                        *(_DWORD *)(*((_QWORD *)v27 + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                        v71 = *(_DWORD *)(*((_QWORD *)v27 + 143) + 280LL);
                        if ( v71 >= SepTokenLeakBreakCount )
                        {
                          DbgPrint("\nToken number 0x%x = 0x%p\n", v71, Object);
                          __debugbreak();
                        }
                      }
                      v67 = (char *)Object;
                    }
                    *a11 = v67;
                    return (unsigned int)v36;
                  }
                }
              }
            }
            else
            {
              v36 = -1073741811;
            }
          }
          else
          {
            v36 = -1073741670;
          }
LABEL_28:
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Object);
          return (unsigned int)v36;
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
