/*
 * XREFs of ObpLookupObjectName @ 0x1404B2490
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140484700 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140486408 (ObpInsertOrLocateNamedObject.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x1400190C8 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryExclusive @ 0x140024034 (ObpLockDirectoryExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     SeSetLearningModeObjectInformation @ 0x140081830 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x140081860 (SeClearLearningModeObjectInformation.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1400894E0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     ObpLockDirectoryShared @ 0x14008A9CC (ObpLockDirectoryShared.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PsGetCurrentProcessSessionId @ 0x1400B08F0 (PsGetCurrentProcessSessionId.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     ObReferenceObjectByPointer @ 0x1400DE9F0 (ObReferenceObjectByPointer.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     PsGetPermanentSiloContext @ 0x140103440 (PsGetPermanentSiloContext.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 *     ObCheckCreateObjectAccess @ 0x140486D00 (ObCheckCreateObjectAccess.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpReferenceDeviceMap @ 0x1404C64B0 (ObpReferenceDeviceMap.c)
 *     ObfDereferenceDeviceMap @ 0x1404C7780 (ObfDereferenceDeviceMap.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14056FCE0 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14056FDEC (SeGetTokenDeviceMap.c)
 *     ObpInsertDirectoryEntry @ 0x140577208 (ObpInsertDirectoryEntry.c)
 *     ObpIsUnsecureName @ 0x1406EF138 (ObpIsUnsecureName.c)
 *     ObpCheckTraverseAccess @ 0x1406EFDB4 (ObpCheckTraverseAccess.c)
 */

int __fastcall ObpLookupObjectName(
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
  int v14; // r13d
  __m128i *v15; // rbx
  bool v17; // zf
  __int64 v18; // rcx
  char v19; // dl
  PVOID v20; // rdi
  int AccessMode; // r15d
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rbx
  char *v23; // r14
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edi
  char *v27; // rsi
  __int64 v28; // rdi
  struct _OBJECT_TYPE *v29; // rax
  __int64 (__usercall *ParseProcedure)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rbx
  unsigned __int16 v31; // bx
  signed int v32; // esi
  unsigned __int16 *v33; // r14
  unsigned int v34; // edi
  unsigned __int64 v35; // rsi
  __int64 v36; // rbx
  unsigned int v37; // ebx
  int v38; // ebx
  char *v39; // rdi
  char v40; // r13
  unsigned __int16 v41; // ax
  char *v42; // r15
  struct _KTHREAD *v43; // rax
  __int64 *v44; // r10
  void *v45; // rcx
  NTSTATUS v46; // eax
  NTSTATUS v47; // edi
  int result; // eax
  __int64 v49; // rcx
  char *v50; // r9
  _QWORD *v51; // rbx
  char *v52; // rsi
  signed __int64 v53; // rbx
  unsigned int v54; // r11d
  unsigned int v55; // edi
  void *v56; // rcx
  void *v57; // rcx
  __int64 (__usercall *v58)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rax
  char *v59; // rdi
  __m128i v60; // xmm0
  _WORD *v61; // rax
  PVOID v62; // rdi
  signed __int32 v63; // ebx
  signed __int32 v64; // eax
  void *v65; // rcx
  void *v66; // rcx
  struct _KTHREAD *v67; // r14
  _QWORD *p_Lock; // r13
  __int64 Process; // rsi
  __int64 ProcessServerSilo; // rbx
  volatile signed __int32 *v71; // rdi
  volatile signed __int32 **v72; // rax
  struct _KTHREAD *v73; // rcx
  volatile signed __int32 **v74; // rdi
  ULONG_PTR v75; // rbx
  __int64 v76; // rcx
  struct _KTHREAD *v77; // rax
  __m128i v78; // xmm0
  void *v79; // rcx
  _DWORD *v80; // rsi
  int v81; // eax
  char *v82; // rdi
  void *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *v84; // rcx
  ULONG_PTR v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rcx
  struct _KTHREAD *v88; // rax
  char v89; // r13
  char *v90; // r15
  struct _KTHREAD *v91; // rax
  char *v92; // r10
  int v93; // r12d
  __int64 v94; // rcx
  char *v95; // r9
  _QWORD *v96; // r14
  char *v97; // rsi
  signed __int64 v98; // r14
  unsigned int v99; // r11d
  unsigned int v100; // ebx
  void *v101; // rcx
  void *v102; // rcx
  struct _KTHREAD *CurrentThread; // rax
  void *v104; // rcx
  void *v105; // rcx
  struct _KTHREAD *v106; // rdi
  PVOID *v107; // rax
  PVOID *v108; // rdi
  NTSTATUS v109; // ebx
  ACCESS_MASK v110; // eax
  _DWORD *v111; // r15
  KPROCESSOR_MODE v112; // si
  int v113; // edi
  unsigned int v114; // r14d
  PVOID PoolWithTag; // rdi
  char *v116; // rbx
  void *v117; // rcx
  PACCESS_TOKEN ClientToken; // rcx
  ACCESS_MASK OriginalDesiredAccess; // ecx
  NTSTATUS v120; // eax
  char *v121; // rcx
  NTSTATUS v122; // ebx
  NTSTATUS v123; // ebx
  bool v124; // r15
  int v125; // ecx
  __int64 v126; // r15
  __int64 v127; // rax
  __int128 v128; // rt0
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *v130; // rcx
  ULONG_PTR v131; // rdi
  PVOID *v132; // rsi
  PVOID v133; // rcx
  char IsUnsecureName; // al
  __int64 PreviouslyGrantedAccess; // [rsp+20h] [rbp-E0h]
  char v136; // [rsp+60h] [rbp-A0h]
  char v137; // [rsp+61h] [rbp-9Fh]
  char *v138; // [rsp+68h] [rbp-98h] BYREF
  __m128i v139; // [rsp+70h] [rbp-90h] BYREF
  int v140; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h]
  NTSTATUS v142; // [rsp+90h] [rbp-70h] BYREF
  int v143; // [rsp+94h] [rbp-6Ch]
  PVOID v144; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v145; // [rsp+A0h] [rbp-60h]
  PVOID TokenInformation; // [rsp+A4h] [rbp-5Ch] BYREF
  int v147; // [rsp+ACh] [rbp-54h]
  void *Src[2]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-40h]
  PVOID v150; // [rsp+C8h] [rbp-38h]
  __int16 v151[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v152; // [rsp+D4h] [rbp-2Ch]
  __int64 v153; // [rsp+D8h] [rbp-28h]
  NTSTATUS AccessStatus; // [rsp+E0h] [rbp-20h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+E4h] [rbp-1Ch] BYREF
  char *v156; // [rsp+E8h] [rbp-18h] BYREF
  char *v157; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v158; // [rsp+F8h] [rbp-8h]
  __int64 v159; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v160; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v161[16]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v162; // [rsp+120h] [rbp+20h]
  __m128i *v163; // [rsp+128h] [rbp+28h]
  ULONG_PTR v164; // [rsp+130h] [rbp+30h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+148h] [rbp+48h] BYREF
  bool v166; // [rsp+1C0h] [rbp+C0h]
  int v168; // [rsp+1D0h] [rbp+D0h]

  v168 = a3;
  v13 = a11;
  v14 = a3;
  P = 0LL;
  v15 = a2;
  v147 = 64;
  *(_QWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 8) = 0LL;
  *(_WORD *)(a11 + 30) = 0;
  *(_DWORD *)(a11 + 32) = -60876;
  v166 = 0;
  v136 = 0;
  if ( a12 )
    *a12 = 0;
  v17 = ObpCaseInsensitive == 0;
  v18 = a9;
  v142 = 0;
  v143 = 0;
  *a13 = 0LL;
  v151[0] = 16;
  v137 = 1;
  v138 = 0LL;
  v150 = 0LL;
  v152 = -1;
  v153 = a9;
  if ( !v17
    && (*(_BYTE *)(a4 + 66) & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v14 = a3 | 0x40;
    v168 = a3 | 0x40;
  }
  v19 = a5;
  v20 = a8;
  AccessMode = 1;
  if ( (v14 & 0x400) == 0 )
    AccessMode = a5;
  v140 = AccessMode;
  if ( !a8 )
  {
    v136 = 1;
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
          if ( SeQueryInformationToken(ClientToken, TokenIsAppContainer, &TokenInformation) >= 0
            && !(_DWORD)TokenInformation )
          {
            LOBYTE(v20) = 1;
          }
        }
        else
        {
          LOBYTE(v20) = 1;
        }
      }
      v19 = a5;
      v18 = a9;
    }
    else
    {
      LOBYTE(v20) = 1;
    }
    if ( p_SubjectContext == &SubjectContext )
    {
      SeReleaseSubjectContext(p_SubjectContext);
      v18 = a9;
      v19 = a5;
    }
    v166 = (_BYTE)v20 != 1;
    v15 = a2;
    v20 = 0LL;
  }
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0, 0LL, v19, 1953261124, &v144, 0LL, &v159);
    v142 = result;
    if ( result < 0 )
      return result;
    if ( HIDWORD(v159) )
    {
      OriginalDesiredAccess = a10->OriginalDesiredAccess;
      v152 &= HIDWORD(v159);
      if ( (v152 & OriginalDesiredAccess) != OriginalDesiredAccess )
      {
        ObfDereferenceObject(v144);
        return -1073741790;
      }
    }
    v59 = (char *)v144;
    if ( v15->m128i_i16[0] )
    {
      if ( *(_WORD *)v15->m128i_i64[1] == 92
        && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v144 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v144 - 48) >> 8)] != IoFileObjectType )
      {
        ObfDereferenceObject(v144);
        return -1073741765;
      }
    }
    else if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v144 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v144 - 48) >> 8)] == ObpDirectoryObjectType )
    {
      v120 = ObReferenceObjectByPointer(v144, 0, (POBJECT_TYPE)a4, a5);
      v121 = v138;
      v122 = v120;
      if ( v120 >= 0 )
        v121 = v59;
      v138 = v121;
      ObfDereferenceObject(v59);
      *a13 = v138;
      return v122;
    }
    v60 = *v15;
    v138 = (char *)v144;
    v139 = v60;
    v162 = a4 + 16;
    v163 = v15;
    v164 = BugCheckParameter1;
    SeSetLearningModeObjectInformation((__int64)v161);
    v23 = v138;
LABEL_35:
    while ( 2 )
    {
      v27 = v23 - 48;
      v28 = (unsigned __int8)((unsigned __int16)((_WORD)v23 - 48) >> 8);
      v29 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v28 ^ (unsigned __int8)*(v23 - 24)];
      ParseProcedure = (__int64 (__usercall *)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))v29->TypeInfo.ParseProcedure;
      if ( !ParseProcedure )
      {
        if ( v29 != ObpDirectoryObjectType )
          goto LABEL_368;
        Object = v23;
        if ( v139.m128i_i16[0] && *(_WORD *)v139.m128i_i64[1] == 92 )
        {
          v139.m128i_i64[1] += 2LL;
          v139.m128i_i16[0] -= 2;
          v139.m128i_i16[1] -= 2;
        }
        for ( *(__m128i *)Src = v139; v139.m128i_i16[0]; v139.m128i_i16[0] -= 2 )
        {
          if ( *(_WORD *)v139.m128i_i64[1] == 92 )
            break;
          v139.m128i_i64[1] += 2LL;
        }
        v31 = LOWORD(Src[0]) - v139.m128i_i16[0];
        v139.m128i_i16[1] -= LOWORD(Src[0]) - v139.m128i_i16[0];
        LOWORD(Src[0]) = v31;
        if ( v31 )
        {
          if ( !(_BYTE)AccessMode || (a10->Flags & 1) != 0 || (v137 = ObpCheckTraverseAccess(v23, v24, a10)) != 0 )
          {
            if ( v139.m128i_i16[0] )
              goto LABEL_47;
            if ( !a8 )
            {
              *(_DWORD *)(v13 + 32) = -1145368012;
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockSharedEx((ULONG_PTR)(v23 + 296), 0LL);
              *(_DWORD *)(v13 + 32) = -572714444;
              ObfReferenceObject(v23);
              v31 = (unsigned __int16)Src[0];
              *(_QWORD *)v13 = v23;
              *(_WORD *)(v13 + 30) = 1;
              goto LABEL_47;
            }
          }
          else
          {
            v125 = v143;
            if ( v143 >= 0 )
              v125 = -1073741772;
            v143 = v125;
            if ( v139.m128i_i16[0] || !a8 )
              goto LABEL_340;
          }
          ObpLockDirectoryExclusive(v13, v23);
LABEL_47:
          v32 = v31;
          v158 = v23;
          v33 = (unsigned __int16 *)Src[1];
          HIDWORD(TokenInformation) = v14 & 0x40;
          v34 = v31 >> 1;
          v145 = v31;
          if ( v34 < 4 )
          {
            v37 = 0;
          }
          else
          {
            v35 = 0LL;
            do
            {
              v36 = *(_QWORD *)v33;
              if ( (*(_QWORD *)v33 & 0xFF80FF80FF80FF80uLL) != 0 )
              {
                v126 = 4LL;
                do
                {
                  v127 = (unsigned __int16)v36;
                  if ( (unsigned __int16)v36 >= 0x61u )
                  {
                    if ( (unsigned __int16)v36 <= 0x7Au )
                      v127 = (unsigned int)(unsigned __int16)v36 - 32;
                    else
                      v127 = RtlUpcaseUnicodeChar(v36);
                  }
                  *(_QWORD *)&v128 = v36;
                  *((_QWORD *)&v128 + 1) = v127;
                  v36 = v128 >> 16;
                  --v126;
                }
                while ( v126 );
              }
              else
              {
                v36 &= 0xFFDFFFDFFFDFFFDFuLL;
              }
              v33 += 4;
              v34 -= 4;
              v35 = v36 + (v35 >> 1) + 3 * v35;
            }
            while ( v34 >= 4 );
            v13 = a11;
            v37 = v35 + HIDWORD(v35);
            v32 = v145;
          }
          if ( !v34 )
          {
LABEL_59:
            v39 = (char *)Object;
            v40 = *(_BYTE *)(v13 + 30);
            LODWORD(v24) = (3134165325u * (unsigned __int64)v37) >> 32;
            *(_DWORD *)(v13 + 24) = v37;
            v41 = v37 % 0x25;
            *(_WORD *)(v13 + 28) = v41;
            v42 = &v39[8 * v41];
            if ( !v40 )
            {
              *(_DWORD *)(v13 + 32) = -1145368012;
              v43 = KeGetCurrentThread();
              --v43->KernelApcDisable;
              ExAcquirePushLockSharedEx((ULONG_PTR)(v39 + 296), 0LL);
              *(_DWORD *)(v13 + 32) = -572714444;
              ObfReferenceObject(v39);
              *(_QWORD *)v13 = v39;
              *(_WORD *)(v13 + 30) = 1;
            }
            v44 = *(__int64 **)v42;
            if ( !*(_QWORD *)v42 )
            {
LABEL_178:
              if ( !v40 )
              {
                ExReleasePushLockEx((ULONG_PTR)(v39 + 296), 0LL);
                v79 = *(void **)v13;
                *(_DWORD *)(v13 + 32) = -286387660;
                ObfDereferenceObject(v79);
                *(_QWORD *)v13 = 0LL;
                *(_WORD *)(v13 + 30) = 0;
                KeLeaveCriticalRegion();
              }
              v23 = 0LL;
              goto LABEL_181;
            }
            while ( 1 )
            {
              if ( *((_DWORD *)v44 + 4) == *(_DWORD *)(v13 + 24) )
              {
                v49 = v44[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v44[1] - 48 + 26) & 3];
                v24 = v32;
                if ( v32 == *(unsigned __int16 *)(v49 + 8) )
                {
                  v50 = (char *)Src[1];
                  v51 = *(_QWORD **)(v49 + 16);
                  v52 = (char *)Src[1] + v32;
                  if ( v145 >= 8 )
                  {
                    do
                    {
                      if ( *(_QWORD *)v50 != *v51 )
                        break;
                      v17 = (_DWORD)v24 == 8;
                      v24 = (unsigned int)(v24 - 8);
                      if ( v17 )
                        goto LABEL_111;
                      v50 += 8;
                      ++v51;
                    }
                    while ( (unsigned int)v24 >= 8 );
                  }
                  if ( HIDWORD(TokenInformation) )
                  {
                    if ( v50 >= v52 )
                      goto LABEL_111;
                    v53 = (char *)v51 - v50;
                    while ( 1 )
                    {
                      v54 = *(unsigned __int16 *)v50;
                      v55 = *(unsigned __int16 *)&v50[v53];
                      if ( v54 != v55 )
                      {
                        if ( v54 >= 0x61 )
                        {
                          if ( v54 > 0x7A )
                          {
                            v24 = ((unsigned __int8)v54 >> 4)
                                + (unsigned int)*(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v54)];
                            v54 = (unsigned __int16)(v54
                                                   + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v54 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * v24]]);
                          }
                          else
                          {
                            v54 -= 32;
                          }
                        }
                        if ( v55 >= 0x61 )
                        {
                          if ( v55 > 0x7A )
                          {
                            v24 = ((unsigned __int8)v55 >> 4)
                                + (unsigned int)*(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v55)];
                            v55 = (unsigned __int16)(v55
                                                   + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v55 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * v24]]);
                          }
                          else
                          {
                            v55 -= 32;
                          }
                        }
                        if ( v54 != v55 )
                          break;
                      }
                      v50 += 2;
                      if ( v50 >= v52 )
                        goto LABEL_111;
                    }
                  }
                  else
                  {
                    if ( v50 >= v52 )
                    {
LABEL_111:
                      v23 = (char *)v44[1];
                      ObfReferenceObject(v23);
                      if ( !v40 )
                      {
                        ExReleasePushLockEx((ULONG_PTR)Object + 296, 0LL);
                        v56 = *(void **)v13;
                        *(_DWORD *)(v13 + 32) = -286387660;
                        ObfDereferenceObject(v56);
                        *(_QWORD *)v13 = 0LL;
                        *(_WORD *)(v13 + 30) = 0;
                        KeLeaveCriticalRegion();
                        v42 = 0LL;
                      }
                      v57 = *(void **)(v13 + 8);
                      if ( v57 )
                        ObfDereferenceObject(v57);
                      *(_QWORD *)(v13 + 8) = v23;
                      *(_QWORD *)(v13 + 16) = v42;
                      if ( v23 )
                        goto LABEL_116;
LABEL_181:
                      if ( !v136 )
                        goto LABEL_116;
                      v80 = v158;
                      while ( 2 )
                      {
                        v81 = v80[84];
                        v82 = 0LL;
                        if ( (v81 & 4) != 0 )
                        {
                          if ( (v81 & 0x10) != 0 && !v166 )
                            goto LABEL_216;
                          v82 = (char *)*((_QWORD *)v80 + 39);
                        }
                        else
                        {
                          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                          v84 = KeGetCurrentThread();
                          --v84->SpecialApcDisable;
                          v85 = (ULONG_PTR)CurrentServerSiloGlobals + 120;
                          ExAcquirePushLockSharedEx((ULONG_PTR)CurrentServerSiloGlobals + 120, 0LL);
                          v86 = *((_QWORD *)v80 + 38);
                          if ( v86 )
                            v82 = *(char **)(v86 + 8);
                          ExReleasePushLockEx(v85, 0LL);
                          v88 = KeGetCurrentThread();
                          v17 = v88->SpecialApcDisable++ == -1;
                          if ( v17
                            && ($B476B70DB57F76B110DA5B9238C3E934 *)v88->ApcState.ApcListHead[0].Flink != &v88->152 )
                          {
                            KiCheckForKernelApcDelivery(v87);
                          }
                        }
                        if ( !v82 )
                          goto LABEL_216;
                        if ( *(_BYTE *)(v13 + 30) )
                        {
                          ObfReferenceObject(v80);
                          ObpUnlockDirectory((__int64)v80, v13);
                          ObpLockDirectoryShared(v13, (__int64)v82);
                          ObfDereferenceObject(v80);
                        }
                        v89 = *(_BYTE *)(v13 + 30);
                        v90 = &v82[8 * *(unsigned __int16 *)(v13 + 28)];
                        if ( !v89 )
                        {
                          *(_DWORD *)(v13 + 32) = -1145368012;
                          v91 = KeGetCurrentThread();
                          --v91->KernelApcDisable;
                          ExAcquirePushLockSharedEx((ULONG_PTR)(v82 + 296), 0LL);
                          *(_DWORD *)(v13 + 32) = -572714444;
                          ObfReferenceObject(v82);
                          *(_QWORD *)v13 = v82;
                          *(_WORD *)(v13 + 30) = 1;
                        }
                        v92 = *(char **)v90;
                        if ( !*(_QWORD *)v90 )
                        {
LABEL_199:
                          if ( !v89 )
                            ObpUnlockDirectory((__int64)v82, v13);
                          v80 = v82;
                          v23 = 0LL;
                          goto LABEL_202;
                        }
                        v93 = *(_DWORD *)(v13 + 24);
                        while ( 2 )
                        {
                          if ( *((_DWORD *)v92 + 4) != v93
                            || (v24 = (int)v145,
                                v94 = *((_QWORD *)v92 + 1)
                                    - 48LL
                                    - ObpInfoMaskToOffset[*(_BYTE *)(*((_QWORD *)v92 + 1) - 48LL + 26) & 3],
                                v145 != *(unsigned __int16 *)(v94 + 8)) )
                          {
LABEL_197:
                            v90 = v92;
                            v92 = *(char **)v92;
                            if ( !v92 )
                            {
                              v13 = a11;
                              goto LABEL_199;
                            }
                            continue;
                          }
                          break;
                        }
                        v95 = (char *)Src[1];
                        v96 = *(_QWORD **)(v94 + 16);
                        v97 = (char *)Src[1] + (int)v145;
                        if ( v145 >= 8 )
                        {
                          do
                          {
                            if ( *(_QWORD *)v95 != *v96 )
                              break;
                            v17 = (_DWORD)v24 == 8;
                            v24 = (unsigned int)(v24 - 8);
                            if ( v17 )
                              goto LABEL_211;
                            v95 += 8;
                            ++v96;
                          }
                          while ( (unsigned int)v24 >= 8 );
                        }
                        if ( HIDWORD(TokenInformation) )
                        {
                          if ( v95 >= v97 )
                            goto LABEL_211;
                          v98 = (char *)v96 - v95;
                          while ( 1 )
                          {
                            v99 = *(unsigned __int16 *)v95;
                            v100 = *(unsigned __int16 *)&v95[v98];
                            if ( v99 != v100 )
                            {
                              if ( v99 >= 0x61 )
                              {
                                if ( v99 > 0x7A )
                                {
                                  v24 = ((unsigned __int8)v99 >> 4)
                                      + (unsigned int)*(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v99)];
                                  v99 = (unsigned __int16)(v99
                                                         + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v99 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * v24]]);
                                }
                                else
                                {
                                  v99 -= 32;
                                }
                              }
                              if ( v100 >= 0x61 )
                              {
                                if ( v100 > 0x7A )
                                {
                                  v24 = ((unsigned __int8)v100 >> 4)
                                      + (unsigned int)*(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v100)];
                                  v100 = (unsigned __int16)(v100
                                                          + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v100 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * v24]]);
                                }
                                else
                                {
                                  v100 -= 32;
                                }
                              }
                              if ( v99 != v100 )
                                goto LABEL_197;
                            }
                            v95 += 2;
                            if ( v95 >= v97 )
                              goto LABEL_211;
                          }
                        }
                        if ( v95 < v97 )
                        {
                          while ( *(_WORD *)v95 == *(_WORD *)v96 )
                          {
                            v95 += 2;
                            v96 = (_QWORD *)((char *)v96 + 2);
                            if ( v95 >= v97 )
                              goto LABEL_211;
                          }
                          goto LABEL_197;
                        }
LABEL_211:
                        v23 = (char *)*((_QWORD *)v92 + 1);
                        ObfReferenceObject(v23);
                        if ( v89 )
                        {
                          v13 = a11;
                        }
                        else
                        {
                          ExReleasePushLockEx((ULONG_PTR)(v82 + 296), 0LL);
                          v13 = a11;
                          v101 = *(void **)a11;
                          *(_DWORD *)(a11 + 32) = -286387660;
                          ObfDereferenceObject(v101);
                          *(_QWORD *)a11 = 0LL;
                          *(_WORD *)(a11 + 30) = 0;
                          KeLeaveCriticalRegion();
                          v90 = 0LL;
                        }
                        v102 = *(void **)(v13 + 8);
                        if ( v102 )
                          ObfDereferenceObject(v102);
                        *(_QWORD *)(v13 + 8) = v23;
                        *(_QWORD *)(v13 + 16) = v90;
LABEL_216:
                        v80 = v82;
                        if ( !v23 )
                        {
LABEL_202:
                          if ( !v82 )
                            break;
                          continue;
                        }
                        break;
                      }
LABEL_116:
                      v138 = v23;
                      if ( v137 )
                      {
                        if ( !v23 )
                          goto LABEL_152;
                        LOBYTE(AccessMode) = v140;
                        v14 = v168;
                        if ( v139.m128i_i16[0] )
                          goto LABEL_35;
                        v24 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v23 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v23 - 48) >> 8);
                        v58 = *(__int64 (__usercall **)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))(ObTypeIndexTable[v24] + 144);
                        if ( v58 )
                        {
                          if ( v58 == ObpParseSymbolicLinkEx || !a8 )
                            goto LABEL_35;
                        }
                        v47 = ObReferenceObjectByPointer(v23, 0, (POBJECT_TYPE)a4, a5);
LABEL_87:
                        if ( v47 >= 0 )
                        {
LABEL_88:
                          if ( P )
                            ObfDereferenceDeviceMap(P);
                          if ( v144 )
                            ObfDereferenceObject(v144);
                          if ( v150 )
                            ObfDereferenceObject(v150);
                          SeClearLearningModeObjectInformation();
                          if ( v47 < 0 )
                          {
                            *a13 = 0LL;
                          }
                          else
                          {
                            if ( a12 )
                            {
                              if ( v152 != -1 )
                                *a12 = v152;
                            }
                            *a13 = v138;
                          }
                          return v47;
                        }
LABEL_155:
                        if ( *(_BYTE *)(v13 + 30) )
                        {
                          ExReleasePushLockEx(*(_QWORD *)v13 + 296LL, 0LL);
                          v105 = *(void **)v13;
                          *(_DWORD *)(v13 + 32) = -286387660;
                          ObfDereferenceObject(v105);
                          *(_QWORD *)v13 = 0LL;
                          *(_WORD *)(v13 + 30) = 0;
                          KeLeaveCriticalRegion();
                        }
                        v66 = *(void **)(v13 + 8);
                        if ( v66 )
                        {
                          ObfDereferenceObject(v66);
                          *(_QWORD *)(v13 + 8) = 0LL;
                        }
                        goto LABEL_88;
                      }
                      if ( !v23 )
                      {
LABEL_152:
                        if ( v139.m128i_i16[0] )
                        {
                          v47 = -1073741766;
                          goto LABEL_155;
                        }
                        if ( !a8 )
                          goto LABEL_154;
                        if ( (POBJECT_TYPE)a4 == ObpDirectoryObjectType )
                          v110 = 8;
                        else
                          v110 = 4;
                        v111 = Object;
                        v112 = v140;
                        LOBYTE(PreviouslyGrantedAccess) = 0;
                        if ( !ObCheckCreateObjectAccess(
                                (__int64)Object,
                                v110,
                                a10,
                                (__int64)Src,
                                PreviouslyGrantedAccess,
                                v140,
                                &v142) )
                        {
                          v47 = v142;
                          if ( v142 >= 0 )
                            v47 = -1073741772;
                          goto LABEL_155;
                        }
                        v113 = v111[85];
                        if ( v113 == -1
                          || (POBJECT_TYPE)a4 != MmSectionObjectType && (POBJECT_TYPE)a4 != ObpSymbolicLinkObjectType
                          || v113 == (unsigned int)PsGetCurrentProcessSessionId()
                          || SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v112)
                          || (IsUnsecureName = ObpIsUnsecureName((PCUNICODE_STRING)Src)) != 0 )
                        {
                          v114 = LOWORD(Src[0]);
                          PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(Src[0]), 0x6D4E624Fu);
                          if ( PoolWithTag )
                          {
                            if ( (unsigned __int8)ObpInsertDirectoryEntry(v111, a8) )
                            {
                              memmove(PoolWithTag, Src[1], v114);
                              v116 = &a8[-ObpInfoMaskToOffset[*(a8 - 22) & 3] - 48];
                              v117 = (void *)*((_QWORD *)v116 + 2);
                              if ( v117 )
                                ExFreePoolWithTag(v117, 0);
                              *((_QWORD *)v116 + 2) = PoolWithTag;
                              *((_WORD *)v116 + 4) = v114;
                              *((_WORD *)v116 + 5) = v114;
                              v47 = 0;
                              v138 = a8;
                              goto LABEL_88;
                            }
                            ExFreePoolWithTag(PoolWithTag, 0);
                          }
                          v47 = -1073741670;
                          goto LABEL_155;
                        }
LABEL_365:
                        v47 = -1073741790;
                        goto LABEL_155;
                      }
LABEL_340:
                      v47 = v143;
                      goto LABEL_87;
                    }
                    while ( *(_WORD *)v50 == *(_WORD *)v51 )
                    {
                      v50 += 2;
                      v51 = (_QWORD *)((char *)v51 + 2);
                      if ( v50 >= v52 )
                        goto LABEL_111;
                    }
                  }
                }
              }
              v42 = (char *)v44;
              v44 = (__int64 *)*v44;
              if ( !v44 )
              {
                v39 = (char *)Object;
                goto LABEL_178;
              }
              v32 = v145;
            }
          }
          while ( 1 )
          {
            v24 = *v33++;
            --v34;
            v38 = (v37 >> 1) + 3 * v37;
            if ( (unsigned int)v24 >= 0x61 )
            {
              if ( (unsigned int)v24 > 0x7A )
              {
                v37 = RtlUpcaseUnicodeChar(v24) + v38;
                goto LABEL_58;
              }
              v38 -= 32;
            }
            v37 = v24 + v38;
LABEL_58:
            if ( !v34 )
              goto LABEL_59;
          }
        }
LABEL_306:
        v47 = -1073741773;
        goto LABEL_155;
      }
      if ( ParseProcedure != ObpParseSymbolicLinkEx )
      {
        if ( a8 )
        {
LABEL_368:
          v47 = -1073741788;
          goto LABEL_155;
        }
        ObfReferenceObject(v23);
        if ( *(_BYTE *)(v13 + 30) )
        {
          ExReleasePushLockEx(*(_QWORD *)v13 + 296LL, 0LL);
          v104 = *(void **)v13;
          *(_DWORD *)(v13 + 32) = -286387660;
          ObfDereferenceObject(v104);
          *(_QWORD *)v13 = 0LL;
          *(_WORD *)(v13 + 30) = 0;
          KeLeaveCriticalRegion();
        }
        v45 = *(void **)(v13 + 8);
        if ( v45 )
        {
          ObfDereferenceObject(v45);
          *(_QWORD *)(v13 + 8) = 0LL;
        }
        v23 = v138;
      }
      if ( (*(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v28 ^ (unsigned __int8)v27[24]] + 67) & 1) != 0 )
        v46 = ((__int64 (__fastcall *)(char *, __int64, struct _ACCESS_STATE *, _QWORD, int, __m128i *, __m128i *, __int64, __int64, __int16 *, char **))ParseProcedure)(
                v23,
                a4,
                a10,
                (unsigned __int8)AccessMode,
                v14,
                a2,
                &v139,
                a6,
                a7,
                v151,
                &v138);
      else
        v46 = ((__int64 (__fastcall *)(char *, __int64, struct _ACCESS_STATE *, _QWORD, int, __m128i *, __m128i *, __int64, __int64, char **))ParseProcedure)(
                v23,
                a4,
                a10,
                (unsigned __int8)AccessMode,
                v14,
                a2,
                &v139,
                a6,
                a7,
                &v138);
      v142 = v46;
      v47 = v46;
      if ( ParseProcedure != ObpParseSymbolicLinkEx )
        ObfDereferenceObject(v27 + 48);
      if ( v47 < 0 )
        goto LABEL_155;
      if ( v47 != 260 && v47 != 872 )
        v150 = v138;
      if ( (v152 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
        goto LABEL_365;
      if ( v47 != 260 && v47 != 280 && v47 != 872 )
      {
        if ( !v138 )
          v47 = -1073741772;
        v150 = 0LL;
        goto LABEL_87;
      }
      if ( (v14 & 0x1000) != 0 && v47 != 872 )
      {
        v47 = -1073740533;
        goto LABEL_155;
      }
      if ( !--v147 )
      {
LABEL_154:
        v47 = -1073741772;
        goto LABEL_155;
      }
      v15 = a2;
      if ( !a2->m128i_i16[0] )
        goto LABEL_306;
      ObfDereferenceObject(v144);
      v61 = (_WORD *)a2->m128i_i64[1];
      v144 = 0LL;
      if ( v47 == 280 )
      {
        if ( *v61 != 92 )
        {
          v23 = v138;
          v144 = v138;
          v150 = 0LL;
          goto LABEL_137;
        }
      }
      else if ( *v61 == 92 )
      {
        if ( v47 == 872 )
        {
          v23 = (char *)ObpRootDirectoryObject;
        }
        else if ( (int)PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v157) >= 0 )
        {
          v23 = v157;
        }
        else
        {
          v23 = (char *)ObpRootDirectoryObject;
          v157 = (char *)ObpRootDirectoryObject;
        }
        v144 = v23;
        ObfReferenceObject(v23);
LABEL_137:
        v62 = P;
        if ( !P )
        {
LABEL_142:
          if ( *(_BYTE *)(v13 + 30) )
            ObpUnlockDirectory(*(_QWORD *)v13, v13);
          v65 = *(void **)(v13 + 8);
          if ( v65 )
          {
            ObfDereferenceObject(v65);
            *(_QWORD *)(v13 + 8) = 0LL;
          }
LABEL_29:
          v25 = v15->m128i_i64[1];
          if ( (v25 & 7) != 0 )
            goto LABEL_33;
          v24 = v15->m128i_u16[0];
          v26 = v14 & 0x800;
          if ( (unsigned __int16)v24 < 8u || *(_QWORD *)v25 != ObpDosDevicesShortNamePrefix )
          {
            if ( (_WORD)v24 == 6 && *(_DWORD *)v25 == *(_DWORD *)L"\\??" && *(_WORD *)(v25 + 4) == 63 )
            {
              v107 = (PVOID *)ObpReferenceDeviceMap((v14 & 0x800) != 0);
              P = v107;
              v108 = v107;
              if ( v107 )
              {
                if ( *v107 )
                {
                  v109 = ObReferenceObjectByPointer(*v107, 0, (POBJECT_TYPE)a4, a5);
                  if ( v109 >= 0 )
                  {
                    if ( a12 && v152 != -1 )
                      *a12 = v152;
                    *a13 = *v108;
                  }
                  ObfDereferenceDeviceMap(v108);
                  ObfDereferenceObject(v23);
                  SeClearLearningModeObjectInformation();
                  return v109;
                }
              }
            }
            goto LABEL_33;
          }
          v67 = KeGetCurrentThread();
          P = 0LL;
          p_Lock = 0LL;
          Process = (__int64)v67->Process;
          ProcessServerSilo = PsGetProcessServerSilo(Process);
          v124 = ProcessServerSilo != PsGetCurrentServerSilo();
          if ( (*(_DWORD *)(&v67[1].SwapListEntry + 1) & 8) == 0 || v26 )
          {
            if ( v124 )
              goto LABEL_165;
          }
          else
          {
            if ( v124 )
              goto LABEL_165;
            if ( (*(_DWORD *)(&v67[1].SwapListEntry + 1) & 8) != 0 )
            {
              v106 = KeGetCurrentThread();
              --v106->KernelApcDisable;
              ExAcquirePushLockSharedEx((ULONG_PTR)&v67[1].WaitBlockList, 0LL);
              if ( (*(_DWORD *)(&v67[1].SwapListEntry + 1) & 8) != 0 )
              {
                p_Lock = &v67[1].WaitBlock[1].Thread->Header.Lock;
                if ( !p_Lock )
                  p_Lock = (_QWORD *)(*(_QWORD *)((char *)&v67[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
                ObfReferenceObject(p_Lock);
              }
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v67[1].WaitBlockList, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)&v67[1].WaitBlockList);
              KeAbPostRelease((ULONG_PTR)&v67[1].WaitBlockList);
              KeLeaveCriticalRegionThread((__int64)v106);
              if ( p_Lock )
              {
                if ( p_Lock[3] == 999LL )
                {
                  v124 = 1;
                  goto LABEL_165;
                }
                if ( (int)SeGetTokenDeviceMap(p_Lock, &v160) >= 0 )
                {
                  v71 = v160;
                  P = (PVOID)v160;
                  if ( v160 )
                  {
                    _InterlockedIncrement(v160 + 6);
LABEL_172:
                    if ( p_Lock )
                      ObfDereferenceObject(p_Lock);
                    if ( v71 && *(_QWORD *)v71 )
                    {
                      LOBYTE(AccessMode) = v140;
                      v14 = v168;
                      v78 = *a2;
                      v139.m128i_i64[0] = a2->m128i_i64[0];
                      v139.m128i_i16[0] -= 8;
                      v139.m128i_i64[1] = _mm_srli_si128(v78, 8).m128i_u64[0] + 8;
                      v139.m128i_i16[1] -= 8;
                      v23 = *(char **)v71;
                      goto LABEL_34;
                    }
                    v23 = (char *)v144;
                    LOBYTE(AccessMode) = v140;
                    v14 = v168;
                    v15 = a2;
LABEL_33:
                    v139 = *v15;
LABEL_34:
                    v138 = v23;
                    continue;
                  }
                  goto LABEL_164;
                }
              }
            }
          }
          v71 = (volatile signed __int32 *)P;
LABEL_164:
          if ( !*(_QWORD *)(Process + 1072) && (int)ObSetCurrentProcessDeviceMap() < 0 )
            goto LABEL_172;
LABEL_165:
          v72 = (volatile signed __int32 **)PsGetCurrentServerSiloGlobals();
          v73 = KeGetCurrentThread();
          v74 = v72;
          --v73->SpecialApcDisable;
          v75 = (ULONG_PTR)(v72 + 15);
          ExAcquirePushLockSharedEx((ULONG_PTR)(v72 + 15), 0LL);
          if ( v124 )
            v71 = *v74;
          else
            v71 = *(volatile signed __int32 **)(Process + 1072);
          P = (PVOID)v71;
          if ( v71 )
            _InterlockedIncrement(v71 + 6);
          ExReleasePushLockEx(v75, 0LL);
          v77 = KeGetCurrentThread();
          v17 = v77->SpecialApcDisable++ == -1;
          if ( v17 && ($B476B70DB57F76B110DA5B9238C3E934 *)v77->ApcState.ApcListHead[0].Flink != &v77->152 )
            KiCheckForKernelApcDelivery(v76);
          goto LABEL_172;
        }
        v63 = *((_DWORD *)P + 6);
        if ( v63 == 1 )
        {
LABEL_357:
          ServerSiloGlobals = PsGetServerSiloGlobals(*((_QWORD *)v62 + 8));
          v130 = KeGetCurrentThread();
          --v130->SpecialApcDisable;
          v131 = (ULONG_PTR)ServerSiloGlobals + 120;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
          v132 = (PVOID *)P;
          v63 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 6, 0xFFFFFFFF);
          if ( v63 == 1 )
          {
            *((_QWORD *)*v132 + 38) = 0LL;
            ExReleasePushLockEx(v131, 0LL);
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            v133 = v132[8];
            if ( v133 )
              ObfDereferenceObjectWithTag(v133, 0x6D44624Fu);
            ZwClose(v132[2]);
            ObfDereferenceObject(*v132);
            ExFreePoolWithTag(v132, 0x6D44624Fu);
            goto LABEL_141;
          }
          ExReleasePushLockEx(v131, 0LL);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        }
        else
        {
          while ( 1 )
          {
            v64 = _InterlockedCompareExchange((volatile signed __int32 *)v62 + 6, v63 - 1, v63);
            v17 = v63 == v64;
            v63 = v64;
            if ( v17 )
              break;
            if ( v64 == 1 )
              goto LABEL_357;
          }
        }
        if ( v63 <= 0 )
          __fastfail(0xEu);
LABEL_141:
        v23 = (char *)v144;
        v15 = a2;
        P = 0LL;
        goto LABEL_142;
      }
      break;
    }
    v47 = -1073741773;
    goto LABEL_155;
  }
  if ( !v15->m128i_i16[0] || *(_WORD *)v15->m128i_i64[1] != 92 )
    return -1073741765;
  if ( (int)PsGetPermanentSiloContext(v18, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v156) >= 0 )
  {
    v23 = v156;
  }
  else
  {
    v23 = (char *)ObpRootDirectoryObject;
    v156 = (char *)ObpRootDirectoryObject;
  }
  v144 = v23;
  if ( v23 )
    ObfReferenceObject(v23);
  if ( v15->m128i_i16[0] != 2 )
  {
    v163 = v15;
    v162 = a4 + 16;
    v164 = 0LL;
    SeSetLearningModeObjectInformation((__int64)v161);
    goto LABEL_29;
  }
  if ( v23 )
  {
    v123 = ObReferenceObjectByPointer(v23, 0, (POBJECT_TYPE)a4, a5);
    if ( v123 >= 0 )
      *a13 = v23;
    ObfDereferenceObject(v23);
    return v123;
  }
  else if ( v20 )
  {
    result = ObReferenceObjectByPointer(v20, 0, (POBJECT_TYPE)a4, a5);
    if ( result >= 0 )
      *a13 = v20;
  }
  else
  {
    return -1073741811;
  }
  return result;
}
