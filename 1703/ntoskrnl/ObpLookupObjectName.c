/*
 * XREFs of ObpLookupObjectName @ 0x14052F630
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x1404F3D70 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404F3FB0 (ObpInsertOrLocateNamedObject.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14000C280 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     ObpUnlockDirectory @ 0x140041474 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryShared @ 0x140044324 (ObpLockDirectoryShared.c)
 *     ObpLockDirectoryExclusive @ 0x14004439C (ObpLockDirectoryExclusive.c)
 *     PsGetCurrentProcessSessionId @ 0x1400714B0 (PsGetCurrentProcessSessionId.c)
 *     PsGetProcessServerSilo @ 0x140085020 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1400EE140 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     SeSetLearningModeObjectInformation @ 0x1400EE8E0 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x1400EE910 (SeClearLearningModeObjectInformation.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectByPointer @ 0x14012B9D0 (ObReferenceObjectByPointer.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObpInsertDirectoryEntry @ 0x1404408EC (ObpInsertDirectoryEntry.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14046870C (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x140468818 (SeGetTokenDeviceMap.c)
 *     ObfDereferenceDeviceMap @ 0x1404EC890 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x1404EC98C (ObpReferenceDeviceMap.c)
 *     ObCheckCreateObjectAccess @ 0x1404F3120 (ObCheckCreateObjectAccess.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     PsReferenceImpersonationTokenEx @ 0x14050C610 (PsReferenceImpersonationTokenEx.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpIsUnsecureName @ 0x1405D7B9C (ObpIsUnsecureName.c)
 *     ObpCheckTraverseAccess @ 0x1406C1408 (ObpCheckTraverseAccess.c)
 */

NTSTATUS __fastcall ObpLookupObjectName(
        ULONG_PTR BugCheckParameter1,
        __m128i *a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        struct _ACCESS_STATE *a10,
        __int64 a11,
        int *a12,
        PVOID *a13)
{
  __int64 v13; // r12
  __int16 v14; // r13
  struct _OBJECT_TYPE *v15; // rbx
  UNICODE_STRING *v16; // r15
  bool v18; // zf
  PVOID *v19; // rdi
  __int64 v20; // rcx
  int AccessMode; // r14d
  bool v22; // di
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rbx
  NTSTATUS result; // eax
  PVOID v25; // rdi
  UNICODE_STRING v26; // xmm0
  char *i; // r14
  wchar_t *v28; // rcx
  int v29; // edi
  char *v30; // rsi
  struct _OBJECT_TYPE *v31; // rax
  __int64 (__usercall *ParseProcedure)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rbx
  void *v33; // rcx
  NTSTATUS v34; // eax
  NTSTATUS v35; // edi
  char *v36; // rsi
  unsigned __int16 Length; // r13
  wchar_t *Buffer; // r14
  unsigned int v39; // edi
  unsigned __int64 v40; // rsi
  __int64 v41; // rbx
  unsigned int v42; // ebx
  unsigned int v43; // edx
  int v44; // ebx
  char v45; // r15
  unsigned __int16 v46; // ax
  char *v47; // rsi
  struct _KTHREAD *v48; // rax
  PVOID v49; // rbx
  __int64 *v50; // r8
  void *v51; // rcx
  _DWORD *v52; // rsi
  BOOLEAN v53; // r13
  int v54; // eax
  char *v55; // rdi
  void *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *v57; // rcx
  ULONG_PTR v58; // rbx
  __int64 v59; // rax
  struct _KTHREAD *v60; // rcx
  __int16 v61; // ax
  char v62; // r15
  char *v63; // rsi
  struct _KTHREAD *v64; // rax
  char *v65; // rbx
  int v66; // r14d
  unsigned int v67; // r9d
  __int64 v68; // rcx
  wchar_t *v69; // rdx
  _QWORD *v70; // r10
  wchar_t *v71; // rbx
  signed __int64 v72; // r10
  unsigned int v73; // r9d
  unsigned int v74; // r11d
  void *v75; // rcx
  void *v76; // rcx
  __int64 (__usercall *v77)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rax
  void *v78; // rcx
  _WORD *v79; // rax
  PVOID v80; // rdi
  signed __int32 v81; // ebx
  signed __int32 v82; // eax
  void *v83; // rcx
  struct _KTHREAD *v84; // r14
  void *v85; // r13
  __int64 Process; // rsi
  __int64 ProcessServerSilo; // rbx
  volatile signed __int32 *v88; // rdi
  volatile signed __int32 **v89; // rax
  struct _KTHREAD *v90; // rcx
  volatile signed __int32 **v91; // rdi
  ULONG_PTR v92; // rbx
  struct _KTHREAD *v93; // rcx
  __int16 v94; // ax
  __m128i v95; // xmm0
  void *v96; // rcx
  void *v97; // rcx
  struct _KTHREAD *CurrentThread; // rax
  void *v99; // rcx
  void *v100; // rax
  ACCESS_MASK v101; // eax
  char *v102; // r14
  KPROCESSOR_MODE v103; // r15
  int v104; // edi
  PVOID PoolWithTag; // rdi
  char *v106; // rbx
  void *v107; // rcx
  PVOID *v108; // rax
  PVOID *v109; // rdi
  NTSTATUS v110; // ebx
  PACCESS_TOKEN ClientToken; // rcx
  NTSTATUS v112; // eax
  PVOID v113; // rcx
  NTSTATUS v114; // ebx
  NTSTATUS v115; // ebx
  bool v116; // r15
  int v117; // ecx
  __int64 v118; // r15
  __int64 v119; // rax
  __int128 v120; // rt0
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *v122; // rcx
  ULONG_PTR v123; // rdi
  PVOID *v124; // rsi
  PVOID v125; // rcx
  __int64 PreviouslyGrantedAccess; // [rsp+20h] [rbp-E0h]
  char v127; // [rsp+60h] [rbp-A0h]
  char v128; // [rsp+61h] [rbp-9Fh]
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v130; // [rsp+70h] [rbp-90h] BYREF
  bool v131; // [rsp+80h] [rbp-80h]
  __int64 v132; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  NTSTATUS v134; // [rsp+98h] [rbp-68h] BYREF
  int v135; // [rsp+9Ch] [rbp-64h]
  PVOID v136; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v137; // [rsp+A8h] [rbp-58h]
  bool v138; // [rsp+ACh] [rbp-54h] BYREF
  char v139[3]; // [rsp+ADh] [rbp-53h] BYREF
  UNICODE_STRING String1; // [rsp+B0h] [rbp-50h] BYREF
  PVOID TokenInformation; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v142; // [rsp+C8h] [rbp-38h]
  PVOID v143; // [rsp+D0h] [rbp-30h]
  __int16 v144[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v145; // [rsp+DCh] [rbp-24h]
  __int64 v146; // [rsp+E0h] [rbp-20h]
  NTSTATUS AccessStatus; // [rsp+E8h] [rbp-18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+ECh] [rbp-14h] BYREF
  int v149; // [rsp+F0h] [rbp-10h]
  unsigned int v150; // [rsp+F4h] [rbp-Ch]
  char *v151; // [rsp+F8h] [rbp-8h] BYREF
  char *v152; // [rsp+100h] [rbp+0h] BYREF
  int v153; // [rsp+108h] [rbp+8h] BYREF
  __int64 v154; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v155; // [rsp+118h] [rbp+18h] BYREF
  PVOID v156; // [rsp+120h] [rbp+20h]
  _BYTE v157[16]; // [rsp+128h] [rbp+28h] BYREF
  _UNICODE_STRING *p_Name; // [rsp+138h] [rbp+38h]
  UNICODE_STRING *v159; // [rsp+140h] [rbp+40h]
  ULONG_PTR v160; // [rsp+148h] [rbp+48h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+160h] [rbp+60h] BYREF
  bool v162; // [rsp+1D0h] [rbp+D0h]
  int v164; // [rsp+1E0h] [rbp+E0h]

  v164 = a3;
  v13 = a11;
  v14 = a3;
  P = 0LL;
  v15 = (struct _OBJECT_TYPE *)a4;
  HIDWORD(TokenInformation) = 64;
  v16 = (UNICODE_STRING *)a2;
  *(_QWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 8) = 0LL;
  *(_WORD *)(a11 + 30) = 0;
  *(_DWORD *)(a11 + 32) = -60876;
  v162 = 0;
  v127 = 0;
  if ( a12 )
    *a12 = 0;
  v18 = ObpCaseInsensitive == 0;
  v19 = a13;
  v20 = a9;
  v134 = 0;
  v135 = 0;
  *a13 = 0LL;
  v128 = 1;
  Object = 0LL;
  v143 = 0LL;
  v144[0] = 16;
  v145 = -1;
  v146 = a9;
  if ( !v18
    && (*(_BYTE *)(a4 + 66) & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v14 = a3 | 0x40;
    v164 = a3 | 0x40;
  }
  AccessMode = 1;
  if ( (v14 & 0x400) == 0 )
    AccessMode = a5;
  v137 = AccessMode;
  if ( !a8 )
  {
    v22 = 0;
    v127 = 1;
    LODWORD(TokenInformation) = 0;
    p_SubjectContext = 0LL;
    GrantedAccess = 0;
    AccessStatus = 0;
    if ( (_BYTE)AccessMode )
    {
      if ( a10 == (struct _ACCESS_STATE *)-32LL )
      {
        p_SubjectContext = &SubjectContext;
        SeCaptureSubjectContext(&SubjectContext);
      }
      else
      {
        p_SubjectContext = &a10->SubjectSecurityContext;
      }
      if ( SeAccessCheck(
             SeMediumDaclSd,
             p_SubjectContext,
             0,
             0x20000u,
             0,
             0LL,
             (PGENERIC_MAPPING)&RtlpRestrictedMapping,
             AccessMode,
             &GrantedAccess,
             &AccessStatus) == 1 )
      {
        if ( ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
        {
          ClientToken = p_SubjectContext->ClientToken;
          if ( !p_SubjectContext->ClientToken )
            ClientToken = p_SubjectContext->PrimaryToken;
          if ( SeQueryInformationToken(ClientToken, TokenIsAppContainer, &TokenInformation) >= 0 )
            v22 = (_DWORD)TokenInformation == 0;
        }
        else
        {
          v22 = 1;
        }
      }
      v20 = a9;
    }
    else
    {
      v22 = 1;
    }
    if ( p_SubjectContext == &SubjectContext )
    {
      SeReleaseSubjectContext(p_SubjectContext);
      v20 = a9;
    }
    v162 = !v22;
    v19 = a13;
    v15 = (struct _OBJECT_TYPE *)a4;
  }
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 1953261124, (__int64)&v136, 0LL, (__int64)&v154);
    v134 = result;
    if ( result < 0 )
      return result;
    if ( HIDWORD(v154) )
    {
      v145 &= HIDWORD(v154);
      if ( (v145 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
      {
        ObfDereferenceObject(v136);
        return -1073741790;
      }
    }
    v25 = v136;
    if ( v16->Length )
    {
      if ( *v16->Buffer == 92
        && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v136 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v136 - 48) >> 8)] != IoFileObjectType )
      {
        ObfDereferenceObject(v136);
        return -1073741765;
      }
      goto LABEL_25;
    }
    if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v136 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v136 - 48) >> 8)] != ObpDirectoryObjectType )
    {
LABEL_25:
      v26 = *v16;
      Object = v136;
      v159 = v16;
      v130 = v26;
      p_Name = &v15->Name;
      v160 = BugCheckParameter1;
      SeSetLearningModeObjectInformation((__int64)v157);
      for ( i = (char *)Object; ; Object = i )
      {
        v132 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
        while ( 1 )
        {
          v30 = i - 48;
          v31 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(i - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)i - 48) >> 8)];
          ParseProcedure = (__int64 (__usercall *)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))v31->TypeInfo.ParseProcedure;
          if ( ParseProcedure )
            break;
          if ( v31 != ObpDirectoryObjectType )
            goto LABEL_275;
          v36 = i;
          v142 = i;
          if ( v130.Length && *v130.Buffer == 92 )
          {
            ++v130.Buffer;
            v130.Length -= 2;
            v130.MaximumLength -= 2;
          }
          for ( String1 = v130; v130.Length; v130.Length -= 2 )
          {
            if ( *v130.Buffer == 92 )
              break;
            ++v130.Buffer;
          }
          Length = String1.Length - v130.Length;
          v130.MaximumLength -= String1.Length - v130.Length;
          String1.Length = Length;
          if ( !Length )
            goto LABEL_274;
          if ( (_BYTE)v137 && (a10->Flags & 1) == 0 )
          {
            v128 = ObpCheckTraverseAccess(i, a10, a10);
            if ( !v128 )
            {
              v117 = v135;
              if ( v135 >= 0 )
                v117 = -1073741772;
              v135 = v117;
              if ( v130.Length || !a8 )
                goto LABEL_305;
              goto LABEL_227;
            }
            v132 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
          }
          if ( v130.Length )
            goto LABEL_89;
          if ( !a8 )
          {
            *(_DWORD *)(v13 + 32) = -1145368012;
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)(i + 296), 0LL);
            *(_DWORD *)(v13 + 32) = -572714444;
            ObfReferenceObject(i);
            Length = String1.Length;
            v132 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
            *(_QWORD *)v13 = i;
            *(_WORD *)(v13 + 30) = 1;
            goto LABEL_89;
          }
LABEL_227:
          ObpLockDirectoryExclusive(v13, (__int64)i);
          v132 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
LABEL_89:
          v150 = Length;
          v131 = (v164 & 0x40) != 0;
          v156 = i;
          Buffer = String1.Buffer;
          v39 = Length >> 1;
          v149 = v164 & 0x40;
          if ( v39 < 4 )
          {
            v42 = 0;
          }
          else
          {
            v40 = 0LL;
            do
            {
              v41 = *(_QWORD *)Buffer;
              if ( (*(_QWORD *)Buffer & 0xFF80FF80FF80FF80uLL) != 0 )
              {
                v118 = 4LL;
                do
                {
                  v119 = (unsigned __int16)v41;
                  if ( (unsigned __int16)v41 >= 0x61u )
                  {
                    if ( (unsigned __int16)v41 <= 0x7Au )
                      v119 = (unsigned int)(unsigned __int16)v41 - 32;
                    else
                      v119 = RtlUpcaseUnicodeChar(v41);
                  }
                  *(_QWORD *)&v120 = v41;
                  *((_QWORD *)&v120 + 1) = v119;
                  v41 = v120 >> 16;
                  --v118;
                }
                while ( v118 );
              }
              else
              {
                v41 &= 0xFFDFFFDFFFDFFFDFuLL;
              }
              Buffer += 4;
              v39 -= 4;
              v40 = v41 + (v40 >> 1) + 3 * v40;
            }
            while ( v39 >= 4 );
            v13 = a11;
            Length = String1.Length;
            v42 = v40 + HIDWORD(v40);
            v36 = (char *)v142;
          }
          while ( v39 )
          {
            v43 = *Buffer++;
            --v39;
            v44 = (v42 >> 1) + 3 * v42;
            if ( v43 >= 0x61 )
            {
              if ( v43 > 0x7A )
              {
                v42 = RtlUpcaseUnicodeChar(v43) + v44;
                continue;
              }
              v44 -= 32;
            }
            v42 = v43 + v44;
          }
          v45 = *(_BYTE *)(v13 + 30);
          *(_DWORD *)(v13 + 24) = v42;
          v46 = v42 % 0x25;
          *(_WORD *)(v13 + 28) = v46;
          v47 = &v36[8 * v46];
          if ( !v45 )
          {
            *(_DWORD *)(v13 + 32) = -1145368012;
            v48 = KeGetCurrentThread();
            --v48->KernelApcDisable;
            v49 = v142;
            ExAcquirePushLockSharedEx((ULONG_PTR)v142 + 296, 0LL);
            *(_DWORD *)(v13 + 32) = -572714444;
            ObfReferenceObject(v49);
            Length = String1.Length;
            v132 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
            *(_QWORD *)v13 = v49;
            *(_WORD *)(v13 + 30) = 1;
          }
          v50 = *(__int64 **)v47;
          if ( !*(_QWORD *)v47 )
          {
LABEL_106:
            if ( !v45 )
            {
              ExReleasePushLockEx((ULONG_PTR)v142 + 296, 0LL);
              v51 = *(void **)v13;
              *(_DWORD *)(v13 + 32) = -286387660;
              ObfDereferenceObject(v51);
              *(_QWORD *)v13 = 0LL;
              *(_WORD *)(v13 + 30) = 0;
              KeLeaveCriticalRegion();
              v132 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
            }
            i = 0LL;
LABEL_109:
            if ( !v127 )
              goto LABEL_146;
            v52 = v156;
            v53 = v131;
            while ( 2 )
            {
              v54 = v52[84];
              v55 = 0LL;
              if ( (v54 & 4) != 0 )
              {
                if ( (v54 & 0x10) == 0 || v162 )
                {
                  v55 = (char *)*((_QWORD *)v52 + 39);
                  goto LABEL_117;
                }
              }
              else
              {
                CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                v57 = KeGetCurrentThread();
                --v57->SpecialApcDisable;
                v58 = (ULONG_PTR)CurrentServerSiloGlobals + 120;
                ExAcquirePushLockSharedEx((ULONG_PTR)CurrentServerSiloGlobals + 120, 0LL);
                v59 = *((_QWORD *)v52 + 38);
                if ( v59 )
                  v55 = *(char **)(v59 + 8);
                ExReleasePushLockEx(v58, 0LL);
                v60 = KeGetCurrentThread();
                v61 = v60->SpecialApcDisable + 1;
                v60->SpecialApcDisable = v61;
                if ( !v61 && ($69CD3F157F9F39B6F7113F2231989901 *)v60->ApcState.ApcListHead[0].Flink != &v60->152 )
                  KiCheckForKernelApcDelivery((__int64)v60);
LABEL_117:
                if ( v55 )
                {
                  if ( *(_BYTE *)(v13 + 30) )
                  {
                    ObfReferenceObject(v52);
                    ObpUnlockDirectory((__int64)v52, v13);
                    ObpLockDirectoryShared(v13, (__int64)v55);
                    ObfDereferenceObject(v52);
                  }
                  v62 = *(_BYTE *)(v13 + 30);
                  v63 = &v55[8 * *(unsigned __int16 *)(v13 + 28)];
                  if ( !v62 )
                  {
                    *(_DWORD *)(v13 + 32) = -1145368012;
                    v64 = KeGetCurrentThread();
                    --v64->KernelApcDisable;
                    ExAcquirePushLockSharedEx((ULONG_PTR)(v55 + 296), 0LL);
                    *(_DWORD *)(v13 + 32) = -572714444;
                    ObfReferenceObject(v55);
                    *(_QWORD *)v13 = v55;
                    *(_WORD *)(v13 + 30) = 1;
                  }
                  v65 = *(char **)v63;
                  if ( *(_QWORD *)v63 )
                  {
                    v66 = *(_DWORD *)(v13 + 24);
                    while ( *((_DWORD *)v65 + 4) != v66
                         || !RtlEqualUnicodeString(
                               &String1,
                               (PCUNICODE_STRING)(*((_QWORD *)v65 + 1)
                                                - 48LL
                                                - ObpInfoMaskToOffset[*(_BYTE *)(*((_QWORD *)v65 + 1) - 48LL + 26) & 3]
                                                + 8),
                               v53) )
                    {
                      v63 = v65;
                      v65 = *(char **)v65;
                      if ( !v65 )
                        goto LABEL_126;
                    }
                    i = (char *)*((_QWORD *)v65 + 1);
                    ObfReferenceObject(i);
                    if ( !v62 )
                    {
                      ExReleasePushLockEx((ULONG_PTR)(v55 + 296), 0LL);
                      v96 = *(void **)v13;
                      *(_DWORD *)(v13 + 32) = -286387660;
                      ObfDereferenceObject(v96);
                      *(_QWORD *)v13 = 0LL;
                      *(_WORD *)(v13 + 30) = 0;
                      KeLeaveCriticalRegion();
                      v63 = 0LL;
                    }
                    v97 = *(void **)(v13 + 8);
                    if ( v97 )
                      ObfDereferenceObject(v97);
                    *(_QWORD *)(v13 + 8) = i;
                    *(_QWORD *)(v13 + 16) = v63;
                    break;
                  }
LABEL_126:
                  if ( !v62 )
                    ObpUnlockDirectory((__int64)v55, v13);
                  i = 0LL;
                  v52 = v55;
LABEL_129:
                  if ( !v55 )
                    goto LABEL_207;
                  continue;
                }
              }
              break;
            }
            v52 = v55;
            if ( i )
            {
LABEL_207:
              Length = String1.Length;
              v132 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
              goto LABEL_146;
            }
            goto LABEL_129;
          }
          while ( 1 )
          {
            if ( *((_DWORD *)v50 + 4) != *(_DWORD *)(v13 + 24) )
              goto LABEL_105;
            v67 = v150;
            v68 = v50[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v50[1] - 48 + 26) & 3];
            if ( v150 != *(unsigned __int16 *)(v68 + 8) )
              goto LABEL_105;
            v69 = String1.Buffer;
            v70 = *(_QWORD **)(v68 + 16);
            v71 = (wchar_t *)((char *)String1.Buffer + v150);
            if ( v150 >= 8 )
            {
              do
              {
                if ( *(_QWORD *)v69 != *v70 )
                  break;
                v67 -= 8;
                if ( !v67 )
                  goto LABEL_141;
                v69 += 4;
                ++v70;
              }
              while ( v67 >= 8 );
            }
            if ( !v149 )
              break;
            if ( v69 >= v71 )
              goto LABEL_141;
            v72 = (char *)v70 - (char *)v69;
            while ( 1 )
            {
              v73 = *v69;
              v74 = *(wchar_t *)((char *)v69 + v72);
              if ( v73 != v74 )
              {
                if ( v73 >= 0x61 )
                {
                  if ( v73 > 0x7A )
                    v73 = (unsigned __int16)(v73
                                           + *(_WORD *)(v132
                                                      + 2LL
                                                      * (*(unsigned __int16 *)(v132
                                                                             + 2LL
                                                                             * (*(unsigned __int16 *)(v132 + 2LL * BYTE1(v73))
                                                                              + (unsigned int)((unsigned __int8)v73 >> 4)))
                                                       + (v73 & 0xF))));
                  else
                    v73 -= 32;
                }
                if ( v74 >= 0x61 )
                {
                  if ( v74 > 0x7A )
                    v74 = (unsigned __int16)(v74
                                           + *(_WORD *)(v132
                                                      + 2LL
                                                      * (*(unsigned __int16 *)(v132
                                                                             + 2LL
                                                                             * (*(unsigned __int16 *)(v132 + 2LL * BYTE1(v74))
                                                                              + (unsigned int)((unsigned __int8)v74 >> 4)))
                                                       + (v74 & 0xF))));
                  else
                    v74 -= 32;
                }
                if ( v73 != v74 )
                  break;
              }
              if ( ++v69 >= v71 )
                goto LABEL_141;
            }
LABEL_105:
            v47 = (char *)v50;
            v50 = (__int64 *)*v50;
            if ( !v50 )
              goto LABEL_106;
          }
          if ( v69 < v71 )
          {
            while ( *v69 == *(_WORD *)v70 )
            {
              ++v69;
              v70 = (_QWORD *)((char *)v70 + 2);
              if ( v69 >= v71 )
                goto LABEL_141;
            }
            goto LABEL_105;
          }
LABEL_141:
          i = (char *)v50[1];
          ObfReferenceObject(i);
          if ( !v45 )
          {
            ExReleasePushLockEx((ULONG_PTR)v142 + 296, 0LL);
            v75 = *(void **)v13;
            *(_DWORD *)(v13 + 32) = -286387660;
            ObfDereferenceObject(v75);
            *(_QWORD *)v13 = 0LL;
            *(_WORD *)(v13 + 30) = 0;
            KeLeaveCriticalRegion();
            v47 = 0LL;
          }
          v76 = *(void **)(v13 + 8);
          if ( v76 )
            ObfDereferenceObject(v76);
          v132 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
          *(_QWORD *)(v13 + 8) = i;
          *(_QWORD *)(v13 + 16) = v47;
          if ( !i )
            goto LABEL_109;
LABEL_146:
          Object = i;
          if ( !v128 )
          {
            if ( !i )
            {
LABEL_157:
              if ( v130.Length )
              {
                v35 = -1073741766;
              }
              else if ( a8 )
              {
                if ( (POBJECT_TYPE)a4 == ObpDirectoryObjectType )
                  v101 = 8;
                else
                  v101 = 4;
                v102 = (char *)v142;
                v103 = v137;
                LOBYTE(PreviouslyGrantedAccess) = 0;
                if ( ObCheckCreateObjectAccess(
                       (__int64)v142,
                       v101,
                       a10,
                       (__int64)&String1,
                       PreviouslyGrantedAccess,
                       v137,
                       &v134) )
                {
                  v104 = *((_DWORD *)v102 + 85);
                  if ( v104 == -1
                    || (POBJECT_TYPE)a4 != MmSectionObjectType && (POBJECT_TYPE)a4 != ObpSymbolicLinkObjectType
                    || v104 == (unsigned int)PsGetCurrentProcessSessionId()
                    || SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v103)
                    || (unsigned __int8)ObpIsUnsecureName(&String1) )
                  {
                    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x6D4E624Fu);
                    if ( PoolWithTag )
                    {
                      if ( ObpInsertDirectoryEntry(v102, a8, v13) )
                      {
                        memmove(PoolWithTag, String1.Buffer, Length);
                        v106 = &a8[-ObpInfoMaskToOffset[*(a8 - 22) & 3] - 48];
                        v107 = (void *)*((_QWORD *)v106 + 2);
                        if ( v107 )
                          ExFreePoolWithTag(v107, 0);
                        *((_QWORD *)v106 + 2) = PoolWithTag;
                        v35 = 0;
                        *((_WORD *)v106 + 4) = Length;
                        *((_WORD *)v106 + 5) = Length;
                        Object = a8;
                        goto LABEL_65;
                      }
                      ExFreePoolWithTag(PoolWithTag, 0);
                    }
                    v35 = -1073741670;
                  }
                  else
                  {
LABEL_270:
                    v35 = -1073741790;
                  }
                }
                else
                {
                  v35 = v134;
                  if ( v134 >= 0 )
                    v35 = -1073741772;
                }
              }
              else
              {
LABEL_159:
                v35 = -1073741772;
              }
              goto LABEL_160;
            }
LABEL_305:
            v35 = v135;
            goto LABEL_64;
          }
          if ( !i )
            goto LABEL_157;
          if ( !v130.Length )
          {
            v77 = *(__int64 (__usercall **)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(i - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)i - 48) >> 8)] + 144);
            if ( !v77 || a8 && v77 != ObpParseSymbolicLinkEx )
            {
              v35 = ObReferenceObjectByPointer(i, 0, (POBJECT_TYPE)a4, a5);
              goto LABEL_64;
            }
          }
        }
        if ( ParseProcedure != ObpParseSymbolicLinkEx )
        {
          if ( a8 )
          {
LABEL_275:
            v35 = -1073741788;
            goto LABEL_160;
          }
          ObfReferenceObject(i);
          if ( *(_BYTE *)(v13 + 30) )
            ObpUnlockDirectory(*(_QWORD *)v13, v13);
          v33 = *(void **)(v13 + 8);
          if ( v33 )
          {
            ObfDereferenceObject(v33);
            *(_QWORD *)(v13 + 8) = 0LL;
          }
          i = (char *)Object;
        }
        v14 = v164;
        if ( (*(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v30[24] ^ (unsigned __int64)BYTE1(v30)]
                       + 67) & 1) != 0 )
          v34 = ((__int64 (__fastcall *)(char *, __int64, struct _ACCESS_STATE *, _QWORD, int, __m128i *, UNICODE_STRING *, __int64, __int64, __int16 *, PVOID *))ParseProcedure)(
                  i,
                  a4,
                  a10,
                  v137,
                  v164,
                  a2,
                  &v130,
                  a6,
                  a7,
                  v144,
                  &Object);
        else
          v34 = ((__int64 (__fastcall *)(char *, __int64, struct _ACCESS_STATE *, _QWORD, int, __m128i *, UNICODE_STRING *, __int64, __int64, PVOID *))ParseProcedure)(
                  i,
                  a4,
                  a10,
                  v137,
                  v164,
                  a2,
                  &v130,
                  a6,
                  a7,
                  &Object);
        v134 = v34;
        v35 = v34;
        if ( ParseProcedure != ObpParseSymbolicLinkEx )
          ObfDereferenceObject(v30 + 48);
        if ( v35 < 0 )
          goto LABEL_160;
        if ( v35 != 260 && v35 != 872 )
          v143 = Object;
        if ( (v145 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
          goto LABEL_270;
        if ( v35 != 260 && v35 != 280 && v35 != 872 )
        {
          if ( !Object )
            v35 = -1073741772;
          v143 = 0LL;
LABEL_64:
          if ( v35 >= 0 )
          {
LABEL_65:
            if ( P )
              ObfDereferenceDeviceMap(P);
            if ( v136 )
              ObfDereferenceObject(v136);
            if ( v143 )
              ObfDereferenceObject(v143);
            SeClearLearningModeObjectInformation();
            if ( v35 < 0 )
            {
              *a13 = 0LL;
            }
            else
            {
              if ( a12 )
              {
                if ( v145 != -1 )
                  *a12 = v145;
              }
              *a13 = Object;
            }
            return v35;
          }
LABEL_160:
          if ( *(_BYTE *)(v13 + 30) )
          {
            ExReleasePushLockEx(*(_QWORD *)v13 + 296LL, 0LL);
            v99 = *(void **)v13;
            *(_DWORD *)(v13 + 32) = -286387660;
            ObfDereferenceObject(v99);
            *(_QWORD *)v13 = 0LL;
            *(_WORD *)(v13 + 30) = 0;
            KeLeaveCriticalRegion();
          }
          v78 = *(void **)(v13 + 8);
          if ( v78 )
          {
            ObfDereferenceObject(v78);
            *(_QWORD *)(v13 + 8) = 0LL;
          }
          goto LABEL_65;
        }
        if ( (v164 & 0x1000) != 0 && v35 != 872 )
        {
          v35 = -1073740533;
          goto LABEL_160;
        }
        if ( !--HIDWORD(TokenInformation) )
          goto LABEL_159;
        v16 = (UNICODE_STRING *)a2;
        if ( !a2->m128i_i16[0] )
        {
LABEL_274:
          v35 = -1073741773;
          goto LABEL_160;
        }
        ObfDereferenceObject(v136);
        v79 = (_WORD *)a2->m128i_i64[1];
        v136 = 0LL;
        if ( v35 == 280 )
        {
          if ( *v79 == 92 )
            goto LABEL_274;
          i = (char *)Object;
          v136 = Object;
          v143 = 0LL;
        }
        else
        {
          if ( *v79 != 92 )
            goto LABEL_274;
          if ( v35 == 872 )
          {
            i = (char *)ObpRootDirectoryObject;
          }
          else if ( (int)PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v152) >= 0 )
          {
            i = v152;
          }
          else
          {
            i = (char *)ObpRootDirectoryObject;
            v152 = (char *)ObpRootDirectoryObject;
          }
          v136 = i;
          ObfReferenceObject(i);
        }
        v80 = P;
        if ( P )
        {
          v81 = *((_DWORD *)P + 6);
          if ( v81 == 1 )
          {
LABEL_319:
            ServerSiloGlobals = PsGetServerSiloGlobals(*((_QWORD *)v80 + 8));
            v122 = KeGetCurrentThread();
            --v122->SpecialApcDisable;
            v123 = (ULONG_PTR)ServerSiloGlobals + 120;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
            v124 = (PVOID *)P;
            v81 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 6, 0xFFFFFFFF);
            if ( v81 == 1 )
            {
              *((_QWORD *)*v124 + 38) = 0LL;
              ExReleasePushLockEx(v123, 0LL);
              KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
              v125 = v124[8];
              if ( v125 )
                ObfDereferenceObjectWithTag(v125, 0x6D44624Fu);
              ZwClose(v124[2]);
              ObfDereferenceObject(*v124);
              ExFreePoolWithTag(v124, 0x6D44624Fu);
              goto LABEL_178;
            }
            ExReleasePushLockEx(v123, 0LL);
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          }
          else
          {
            while ( 1 )
            {
              v82 = _InterlockedCompareExchange((volatile signed __int32 *)v80 + 6, v81 - 1, v81);
              v18 = v81 == v82;
              v81 = v82;
              if ( v18 )
                break;
              if ( v82 == 1 )
                goto LABEL_319;
            }
          }
          if ( v81 <= 0 )
            __fastfail(0xEu);
LABEL_178:
          i = (char *)v136;
          P = 0LL;
        }
        if ( *(_BYTE *)(v13 + 30) )
          ObpUnlockDirectory(*(_QWORD *)v13, v13);
        v83 = *(void **)(v13 + 8);
        if ( v83 )
        {
          ObfDereferenceObject(v83);
          *(_QWORD *)(v13 + 8) = 0LL;
        }
LABEL_34:
        v28 = v16->Buffer;
        if ( ((unsigned __int8)v28 & 7) != 0 )
          goto LABEL_38;
        v29 = v14 & 0x800;
        if ( v16->Length < 8u || *(_QWORD *)v28 != ObpDosDevicesShortNamePrefix )
        {
          if ( v16->Length == 6 && *(_DWORD *)v28 == *(_DWORD *)L"\\??" && v28[2] == 63 )
          {
            v108 = (PVOID *)ObpReferenceDeviceMap((v14 & 0x800) != 0);
            P = v108;
            v109 = v108;
            if ( v108 )
            {
              if ( *v108 )
              {
                v110 = ObReferenceObjectByPointer(*v108, 0, (POBJECT_TYPE)a4, a5);
                if ( v110 >= 0 )
                {
                  if ( a12 && v145 != -1 )
                    *a12 = v145;
                  *a13 = *v109;
                }
                ObfDereferenceDeviceMap(v109);
                ObfDereferenceObject(i);
                SeClearLearningModeObjectInformation();
                return v110;
              }
            }
          }
          goto LABEL_38;
        }
        v84 = KeGetCurrentThread();
        P = 0LL;
        v85 = 0LL;
        Process = (__int64)v84->Process;
        ProcessServerSilo = PsGetProcessServerSilo(Process);
        v116 = ProcessServerSilo != PsGetCurrentServerSilo();
        if ( (*(_DWORD *)(&v84[1].SwapListEntry + 1) & 8) == 0 || v29 )
        {
          if ( !v116 )
          {
            v88 = 0LL;
            goto LABEL_187;
          }
        }
        else if ( !v116 )
        {
          v100 = PsReferenceImpersonationTokenEx((__int64)v84, 1, v139, &v138, &v153, 0LL);
          v85 = v100;
          if ( !v100 )
            goto LABEL_299;
          if ( *((_QWORD *)v100 + 3) != 999LL )
          {
            if ( SeGetTokenDeviceMap((__int64)v100, &v155) < 0 )
            {
LABEL_299:
              v88 = (volatile signed __int32 *)P;
            }
            else
            {
              v88 = v155;
              P = (PVOID)v155;
              if ( v155 )
              {
                _InterlockedIncrement(v155 + 6);
                goto LABEL_195;
              }
            }
LABEL_187:
            if ( !*(_QWORD *)(Process + 1072) && (int)ObSetCurrentProcessDeviceMap() < 0 )
              goto LABEL_195;
            goto LABEL_188;
          }
          v116 = 1;
        }
LABEL_188:
        v89 = (volatile signed __int32 **)PsGetCurrentServerSiloGlobals();
        v90 = KeGetCurrentThread();
        v91 = v89;
        --v90->SpecialApcDisable;
        v92 = (ULONG_PTR)(v89 + 15);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v89 + 15), 0LL);
        if ( v116 )
          v88 = *v91;
        else
          v88 = *(volatile signed __int32 **)(Process + 1072);
        P = (PVOID)v88;
        if ( v88 )
          _InterlockedIncrement(v88 + 6);
        ExReleasePushLockEx(v92, 0LL);
        v93 = KeGetCurrentThread();
        v94 = v93->SpecialApcDisable + 1;
        v93->SpecialApcDisable = v94;
        if ( !v94 && ($69CD3F157F9F39B6F7113F2231989901 *)v93->ApcState.ApcListHead[0].Flink != &v93->152 )
          KiCheckForKernelApcDelivery((__int64)v93);
LABEL_195:
        if ( v85 )
          ObfDereferenceObject(v85);
        if ( !v88 || !*(_QWORD *)v88 )
        {
          i = (char *)v136;
          v16 = (UNICODE_STRING *)a2;
LABEL_38:
          v130 = *v16;
          continue;
        }
        v95 = *a2;
        *(_QWORD *)&v130.Length = a2->m128i_i64[0];
        v130.Length -= 8;
        v130.Buffer = (wchar_t *)(_mm_srli_si128(v95, 8).m128i_u64[0] + 8);
        v130.MaximumLength -= 8;
        i = *(char **)v88;
      }
    }
    v112 = ObReferenceObjectByPointer(v136, 0, v15, a5);
    v113 = Object;
    v114 = v112;
    if ( v112 >= 0 )
      v113 = v25;
    Object = v113;
    ObfDereferenceObject(v25);
    result = v114;
    *a13 = Object;
  }
  else
  {
    if ( !v16->Length || *v16->Buffer != 92 )
      return -1073741765;
    if ( (int)PsGetPermanentSiloContext(v20, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v151) >= 0 )
    {
      i = v151;
    }
    else
    {
      i = (char *)ObpRootDirectoryObject;
      v151 = (char *)ObpRootDirectoryObject;
    }
    v136 = i;
    if ( i )
      ObfReferenceObject(i);
    if ( v16->Length != 2 )
    {
      v159 = v16;
      p_Name = &v15->Name;
      v160 = 0LL;
      SeSetLearningModeObjectInformation((__int64)v157);
      goto LABEL_34;
    }
    if ( i )
    {
      v115 = ObReferenceObjectByPointer(i, 0, v15, a5);
      if ( v115 >= 0 )
        *v19 = i;
      ObfDereferenceObject(i);
      return v115;
    }
    else if ( a8 )
    {
      result = ObReferenceObjectByPointer(a8, 0, v15, a5);
      if ( result >= 0 )
        *v19 = a8;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
