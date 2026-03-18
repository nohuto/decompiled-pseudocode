/*
 * XREFs of ObpLookupObjectName @ 0x1405A5B90
 * Callers:
 *     ObReferenceObjectByName @ 0x1404D2990 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D4B8C (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 * Callees:
 *     ObpLockDirectoryShared @ 0x140060DB0 (ObpLockDirectoryShared.c)
 *     ObpUnlockDirectory @ 0x140061134 (ObpUnlockDirectory.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140063100 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     ObReferenceObjectByPointer @ 0x140073920 (ObReferenceObjectByPointer.c)
 *     PsGetCurrentProcessSessionId @ 0x1400767F0 (PsGetCurrentProcessSessionId.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ObpLockDirectoryExclusive @ 0x1400A5628 (ObpLockDirectoryExclusive.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x1400A5EF0 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     SeClearLearningModeObjectInformation @ 0x140104B40 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x140105410 (SeSetLearningModeObjectInformation.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     PsReferenceImpersonationTokenEx @ 0x1404C9060 (PsReferenceImpersonationTokenEx.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     ObfDereferenceDeviceMap @ 0x1404FD110 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x1404FD200 (ObpReferenceDeviceMap.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14055FBE0 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14055FCF8 (SeGetTokenDeviceMap.c)
 *     ObCheckCreateObjectAccess @ 0x140561B00 (ObCheckCreateObjectAccess.c)
 *     ObpInsertDirectoryEntry @ 0x140564D6C (ObpInsertDirectoryEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 *     ObpIsUnsecureName @ 0x140758618 (ObpIsUnsecureName.c)
 *     ObpCheckTraverseAccess @ 0x140759244 (ObpCheckTraverseAccess.c)
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
        _QWORD *a13)
{
  __int64 v13; // r15
  __int16 v14; // bx
  __m128i *v15; // r12
  bool v17; // zf
  __int64 v18; // rcx
  char v19; // dl
  char *v20; // rdi
  int AccessMode; // r14d
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rbx
  char *v23; // r13
  __int64 v24; // r8
  char *v25; // r9
  __int64 v26; // rcx
  int v27; // edi
  char *v28; // rsi
  __int64 v29; // rdi
  struct _OBJECT_TYPE *v30; // rax
  __int64 (__fastcall *ParseProcedure)(char *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, char **); // rbx
  char *v32; // rsi
  unsigned __int16 *v33; // r14
  unsigned int v34; // r13d
  unsigned int v35; // edi
  unsigned __int64 v36; // rsi
  __int64 v37; // rbx
  unsigned int v38; // ebx
  unsigned int v39; // edx
  int v40; // ebx
  ULONG_PTR v41; // rdi
  unsigned __int16 v42; // ax
  char *v43; // r12
  struct _KTHREAD *v44; // rax
  __int64 *v45; // r10
  void *v46; // rcx
  _DWORD *v47; // rdi
  int v48; // eax
  char *v49; // r14
  void *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *v51; // rcx
  ULONG_PTR v52; // rbx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  struct _KTHREAD *v56; // rax
  char *v57; // r12
  struct _KTHREAD *v58; // rax
  char *v59; // r10
  __int64 v60; // r8
  __int64 v61; // r9
  void *v62; // rcx
  NTSTATUS v63; // eax
  NTSTATUS v64; // edi
  int result; // eax
  __int64 v66; // rcx
  unsigned int v67; // edx
  _QWORD *v68; // rbx
  char *v69; // rsi
  signed __int64 v70; // rbx
  unsigned int v71; // r11d
  unsigned int v72; // edi
  void *v73; // rcx
  void *v74; // rcx
  __int64 (__fastcall *v75)(char *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, char **); // rax
  char *v76; // rdi
  __m128i v77; // xmm0
  __int16 *v78; // rax
  __int16 v79; // cx
  PVOID v80; // rdi
  signed __int32 v81; // ebx
  signed __int32 v82; // eax
  void *v83; // rcx
  void *v84; // rcx
  struct _KTHREAD *v85; // r14
  void *v86; // r13
  __int64 Process; // rsi
  __int64 ProcessServerSilo; // rbx
  volatile signed __int32 *v89; // rdi
  volatile signed __int32 **v90; // rax
  struct _KTHREAD *v91; // rcx
  volatile signed __int32 **v92; // rdi
  ULONG_PTR v93; // rbx
  __int64 v94; // r8
  __int64 v95; // r9
  struct _KTHREAD *v96; // rax
  __m128i v97; // xmm0
  unsigned int v98; // edx
  __int64 v99; // rcx
  _QWORD *v100; // rsi
  char *v101; // r11
  signed __int64 v102; // rsi
  unsigned int v103; // ebx
  unsigned int v104; // edi
  void *v105; // rcx
  void *v106; // rcx
  struct _KTHREAD *CurrentThread; // rax
  void *v108; // rcx
  void *v109; // rcx
  void *v110; // rax
  ACCESS_MASK v111; // eax
  char *v112; // r14
  KPROCESSOR_MODE v113; // r12
  int v114; // edi
  unsigned int v115; // esi
  PVOID PoolWithTag; // rdi
  char *v117; // rbx
  void *v118; // rcx
  __int16 v119; // ax
  PVOID *v120; // rax
  PVOID *v121; // rdi
  NTSTATUS v122; // ebx
  PACCESS_TOKEN ClientToken; // rcx
  ACCESS_MASK OriginalDesiredAccess; // ecx
  NTSTATUS v125; // eax
  char *v126; // rcx
  NTSTATUS v127; // ebx
  NTSTATUS v128; // ebx
  bool v129; // r12
  int v130; // ecx
  __int64 v131; // r12
  __int64 v132; // rax
  __int128 v133; // rt0
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *v135; // rcx
  ULONG_PTR v136; // rdi
  __int64 v137; // r8
  __int64 v138; // r9
  PVOID *v139; // rsi
  PVOID v140; // rcx
  __int64 PreviouslyGrantedAccess; // [rsp+20h] [rbp-E0h]
  bool v143; // [rsp+60h] [rbp-A0h]
  char v144; // [rsp+61h] [rbp-9Fh]
  char v145; // [rsp+62h] [rbp-9Eh]
  char *v146; // [rsp+68h] [rbp-98h] BYREF
  __m128i v147; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h]
  int v149; // [rsp+88h] [rbp-78h]
  PVOID v150; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v151; // [rsp+98h] [rbp-68h]
  NTSTATUS v152; // [rsp+9Ch] [rbp-64h] BYREF
  bool v153; // [rsp+A0h] [rbp-60h] BYREF
  char v154[3]; // [rsp+A1h] [rbp-5Fh] BYREF
  PVOID TokenInformation; // [rsp+A4h] [rbp-5Ch] BYREF
  int v156; // [rsp+ACh] [rbp-54h]
  int v157; // [rsp+B0h] [rbp-50h]
  void *Src[2]; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v159; // [rsp+D0h] [rbp-30h]
  __int16 v160[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v161; // [rsp+DCh] [rbp-24h]
  __int64 v162; // [rsp+E0h] [rbp-20h]
  NTSTATUS AccessStatus; // [rsp+E8h] [rbp-18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+ECh] [rbp-14h] BYREF
  char *v165; // [rsp+F0h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+F8h] [rbp-8h]
  char *v167; // [rsp+100h] [rbp+0h] BYREF
  PVOID Object; // [rsp+108h] [rbp+8h]
  int v169; // [rsp+110h] [rbp+10h] BYREF
  __int64 v170; // [rsp+118h] [rbp+18h] BYREF
  volatile signed __int32 *v171; // [rsp+120h] [rbp+20h] BYREF
  PVOID v172; // [rsp+128h] [rbp+28h]
  _BYTE v173[16]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v174; // [rsp+140h] [rbp+40h]
  __m128i *v175; // [rsp+148h] [rbp+48h]
  ULONG_PTR v176; // [rsp+150h] [rbp+50h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+168h] [rbp+68h] BYREF
  unsigned __int8 v178; // [rsp+1E0h] [rbp+E0h]
  unsigned __int8 v179; // [rsp+1E0h] [rbp+E0h]
  int v181; // [rsp+1F0h] [rbp+F0h]

  v181 = a3;
  v13 = a11;
  v14 = a3;
  P = 0LL;
  v15 = a2;
  v157 = 64;
  *(_QWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 8) = 0LL;
  *(_WORD *)(a11 + 30) = 0;
  *(_DWORD *)(a11 + 32) = -60876;
  v143 = 0;
  v144 = 0;
  if ( a12 )
    *a12 = 0;
  v17 = ObpCaseInsensitive == 0;
  v18 = a9;
  v152 = 0;
  v149 = 0;
  *a13 = 0LL;
  v160[0] = 16;
  v145 = 1;
  v146 = 0LL;
  v159 = 0LL;
  v161 = -1;
  v162 = a9;
  if ( !v17
    && (*(_BYTE *)(a4 + 66) & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v14 = a3 | 0x40;
    v181 = a3 | 0x40;
  }
  v19 = a5;
  v20 = a8;
  AccessMode = 1;
  if ( (v14 & 0x400) == 0 )
    AccessMode = a5;
  v151 = AccessMode;
  if ( !a8 )
  {
    v144 = 1;
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
    v143 = (_BYTE)v20 != 1;
    v14 = v181;
    v20 = 0LL;
  }
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0, 0LL, v19, 0x746C6644u, &v150, 0LL, &v170);
    v152 = result;
    if ( result < 0 )
      return result;
    if ( HIDWORD(v170) )
    {
      OriginalDesiredAccess = a10->OriginalDesiredAccess;
      v161 &= HIDWORD(v170);
      if ( (v161 & OriginalDesiredAccess) != OriginalDesiredAccess )
      {
        ObfDereferenceObject(v150);
        return -1073741790;
      }
    }
    v76 = (char *)v150;
    if ( v15->m128i_i16[0] )
    {
      if ( *(_WORD *)v15->m128i_i64[1] == 92
        && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v150 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v150 - 48) >> 8)] != IoFileObjectType )
      {
        ObfDereferenceObject(v150);
        return -1073741765;
      }
    }
    else if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v150 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v150 - 48) >> 8)] == ObpDirectoryObjectType )
    {
      v125 = ObReferenceObjectByPointer(v150, 0, (POBJECT_TYPE)a4, a5);
      v126 = v146;
      v127 = v125;
      if ( v125 >= 0 )
        v126 = v76;
      v146 = v126;
      ObfDereferenceObject(v76);
      *a13 = v146;
      return v127;
    }
    v77 = *v15;
    v146 = (char *)v150;
    v175 = v15;
    v147 = v77;
    v174 = a4 + 16;
    v176 = BugCheckParameter1;
    SeSetLearningModeObjectInformation((__int64)v173);
    v23 = v146;
LABEL_35:
    while ( 2 )
    {
      v28 = v23 - 48;
      v29 = (unsigned __int8)((unsigned __int16)((_WORD)v23 - 48) >> 8);
      v30 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v29 ^ (unsigned __int8)*(v23 - 24)];
      ParseProcedure = (__int64 (__fastcall *)(char *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, char **))v30->TypeInfo.ParseProcedure;
      if ( !ParseProcedure )
      {
        if ( v30 != ObpDirectoryObjectType )
          goto LABEL_352;
        v32 = v23;
        Object = v23;
        if ( v147.m128i_i16[0] && *(_WORD *)v147.m128i_i64[1] == 92 )
        {
          v147.m128i_i64[1] += 2LL;
          v147.m128i_i16[0] -= 2;
          v147.m128i_i16[1] -= 2;
        }
        for ( *(__m128i *)Src = v147; v147.m128i_i16[0]; v147.m128i_i16[0] -= 2 )
        {
          if ( *(_WORD *)v147.m128i_i64[1] == 92 )
            break;
          v147.m128i_i64[1] += 2LL;
        }
        v147.m128i_i16[1] -= LOWORD(Src[0]) - v147.m128i_i16[0];
        LOWORD(Src[0]) -= v147.m128i_i16[0];
        if ( LOWORD(Src[0]) )
        {
          if ( !(_BYTE)v151 || (a10->Flags & 1) != 0 || (v145 = ObpCheckTraverseAccess(v23, a10, a10)) != 0 )
          {
            if ( v147.m128i_i16[0] )
              goto LABEL_47;
            if ( !a8 )
            {
              *(_DWORD *)(v13 + 32) = -1145368012;
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockSharedEx((ULONG_PTR)(v23 + 296), 0LL);
              *(_DWORD *)(v13 + 32) = -572714444;
              ObfReferenceObject(v23);
              *(_QWORD *)v13 = v23;
              *(_WORD *)(v13 + 30) = 1;
              goto LABEL_47;
            }
          }
          else
          {
            v130 = v149;
            if ( v149 >= 0 )
              v130 = -1073741772;
            v149 = v130;
            if ( v147.m128i_i16[0] || !a8 )
              goto LABEL_327;
          }
          ObpLockDirectoryExclusive(v13, v23);
LABEL_47:
          v33 = (unsigned __int16 *)Src[1];
          v172 = v23;
          v34 = LOWORD(Src[0]);
          v156 = v181 & 0x40;
          v35 = LOWORD(Src[0]) >> 1;
          HIDWORD(TokenInformation) = LOWORD(Src[0]);
          if ( v35 < 4 )
          {
            v38 = 0;
          }
          else
          {
            v36 = 0LL;
            do
            {
              v37 = *(_QWORD *)v33;
              if ( (*(_QWORD *)v33 & 0xFF80FF80FF80FF80uLL) != 0 )
              {
                v131 = 4LL;
                do
                {
                  v132 = (unsigned __int16)v37;
                  if ( (unsigned __int16)v37 >= 0x61u )
                  {
                    if ( (unsigned __int16)v37 <= 0x7Au )
                      v132 = (unsigned int)(unsigned __int16)v37 - 32;
                    else
                      v132 = RtlUpcaseUnicodeChar(v37);
                  }
                  *(_QWORD *)&v133 = v37;
                  *((_QWORD *)&v133 + 1) = v132;
                  v37 = v133 >> 16;
                  --v131;
                }
                while ( v131 );
              }
              else
              {
                v37 &= 0xFFDFFFDFFFDFFFDFuLL;
              }
              v33 += 4;
              v35 -= 4;
              v36 = v37 + (v36 >> 1) + 3 * v36;
            }
            while ( v35 >= 4 );
            v13 = a11;
            v38 = v36 + HIDWORD(v36);
            v32 = (char *)Object;
          }
          if ( !v35 )
          {
LABEL_59:
            v24 = *(unsigned __int8 *)(v13 + 30);
            v41 = (ULONG_PTR)(v32 + 296);
            *(_DWORD *)(v13 + 24) = v38;
            v178 = v24;
            BugCheckParameter2 = (ULONG_PTR)(v32 + 296);
            v42 = v38 % 0x25;
            *(_WORD *)(v13 + 28) = v42;
            v43 = &v32[8 * v42];
            if ( !(_BYTE)v24 )
            {
              *(_DWORD *)(v13 + 32) = -1145368012;
              v44 = KeGetCurrentThread();
              --v44->KernelApcDisable;
              ExAcquirePushLockSharedEx((ULONG_PTR)(v32 + 296), 0LL);
              *(_DWORD *)(v13 + 32) = -572714444;
              ObfReferenceObject(v32);
              v24 = 0LL;
              *(_QWORD *)v13 = v32;
              *(_WORD *)(v13 + 30) = 1;
            }
            v45 = *(__int64 **)v43;
            if ( !*(_QWORD *)v43 )
            {
LABEL_65:
              if ( !(_BYTE)v24 )
              {
                ExReleasePushLockEx(v41, 0LL, v24, (__int64)v25);
                v46 = *(void **)v13;
                *(_DWORD *)(v13 + 32) = -286387660;
                ObfDereferenceObject(v46);
                *(_QWORD *)v13 = 0LL;
                *(_WORD *)(v13 + 30) = 0;
                KeLeaveCriticalRegion();
              }
              v23 = 0LL;
              goto LABEL_68;
            }
            while ( 1 )
            {
              if ( *((_DWORD *)v45 + 4) == *(_DWORD *)(v13 + 24) )
              {
                v66 = v45[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v45[1] - 48 + 26) & 3];
                v67 = v34;
                if ( v34 == *(unsigned __int16 *)(v66 + 8) )
                {
                  v25 = (char *)Src[1];
                  v68 = *(_QWORD **)(v66 + 16);
                  v69 = (char *)Src[1] + (int)v34;
                  if ( v34 >= 8 )
                  {
                    do
                    {
                      if ( *(_QWORD *)v25 != *v68 )
                        break;
                      v67 -= 8;
                      if ( !v67 )
                        goto LABEL_135;
                      v25 += 8;
                      ++v68;
                    }
                    while ( v67 >= 8 );
                  }
                  if ( v156 )
                  {
                    if ( v25 >= v69 )
                      goto LABEL_135;
                    v70 = (char *)v68 - v25;
                    while ( 1 )
                    {
                      v71 = *(unsigned __int16 *)v25;
                      v72 = *(unsigned __int16 *)&v25[v70];
                      if ( v71 != v72 )
                      {
                        if ( v71 >= 0x61 )
                        {
                          if ( v71 > 0x7A )
                            v71 = (unsigned __int16)(v71
                                                   + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v71 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v71 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v71)]]]);
                          else
                            v71 -= 32;
                        }
                        if ( v72 >= 0x61 )
                        {
                          if ( v72 > 0x7A )
                            v72 = (unsigned __int16)(v72
                                                   + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v72 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v72 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v72)]]]);
                          else
                            v72 -= 32;
                        }
                        if ( v71 != v72 )
                          break;
                      }
                      v25 += 2;
                      if ( v25 >= v69 )
                        goto LABEL_135;
                    }
                  }
                  else
                  {
                    if ( v25 >= v69 )
                    {
LABEL_135:
                      v23 = (char *)v45[1];
                      ObfReferenceObject(v23);
                      if ( !v178 )
                      {
                        ExReleasePushLockEx(BugCheckParameter2, 0LL, v24, (__int64)v25);
                        v73 = *(void **)v13;
                        *(_DWORD *)(v13 + 32) = -286387660;
                        ObfDereferenceObject(v73);
                        *(_QWORD *)v13 = 0LL;
                        *(_WORD *)(v13 + 30) = 0;
                        KeLeaveCriticalRegion();
                        v43 = 0LL;
                      }
                      v74 = *(void **)(v13 + 8);
                      if ( v74 )
                        ObfDereferenceObject(v74);
                      *(_QWORD *)(v13 + 8) = v23;
                      *(_QWORD *)(v13 + 16) = v43;
                      if ( v23 )
                        goto LABEL_140;
LABEL_68:
                      if ( !v144 )
                        goto LABEL_140;
                      v47 = v172;
                      while ( 2 )
                      {
                        v48 = v47[84];
                        v49 = 0LL;
                        if ( (v48 & 4) != 0 )
                        {
                          if ( (v48 & 0x10) != 0 && !v143 )
                            goto LABEL_213;
                          v49 = (char *)*((_QWORD *)v47 + 39);
                        }
                        else
                        {
                          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                          v51 = KeGetCurrentThread();
                          --v51->SpecialApcDisable;
                          v52 = (ULONG_PTR)CurrentServerSiloGlobals + 120;
                          ExAcquirePushLockSharedEx((ULONG_PTR)CurrentServerSiloGlobals + 120, 0LL);
                          v55 = *((_QWORD *)v47 + 38);
                          if ( v55 )
                            v49 = *(char **)(v55 + 8);
                          ExReleasePushLockEx(v52, 0LL, v53, v54);
                          v56 = KeGetCurrentThread();
                          v17 = v56->SpecialApcDisable++ == -1;
                          if ( v17
                            && ($005F0E83B22994B61E86C72E0CE43C71 *)v56->ApcState.ApcListHead[0].Flink != &v56->152 )
                          {
                            KiCheckForKernelApcDelivery();
                          }
                        }
                        if ( !v49 )
                          goto LABEL_213;
                        v24 = *(unsigned __int8 *)(v13 + 30);
                        v179 = v24;
                        if ( (_BYTE)v24 )
                        {
                          ObfReferenceObject(v47);
                          ObpUnlockDirectory((__int64)v47, v13);
                          ObpLockDirectoryShared(v13, v49);
                          ObfDereferenceObject(v47);
                          v24 = *(unsigned __int8 *)(v13 + 30);
                          v179 = *(_BYTE *)(v13 + 30);
                        }
                        v57 = &v49[8 * *(unsigned __int16 *)(v13 + 28)];
                        if ( !(_BYTE)v24 )
                        {
                          *(_DWORD *)(v13 + 32) = -1145368012;
                          v58 = KeGetCurrentThread();
                          --v58->KernelApcDisable;
                          ExAcquirePushLockSharedEx((ULONG_PTR)(v49 + 296), 0LL);
                          *(_DWORD *)(v13 + 32) = -572714444;
                          ObfReferenceObject(v49);
                          v24 = v179;
                          *(_QWORD *)v13 = v49;
                          *(_WORD *)(v13 + 30) = 1;
                        }
                        v59 = *(char **)v57;
                        if ( !*(_QWORD *)v57 )
                        {
LABEL_85:
                          if ( !(_BYTE)v24 )
                            ObpUnlockDirectory((__int64)v49, v13);
                          v23 = 0LL;
                          v47 = v49;
                          goto LABEL_88;
                        }
                        while ( 2 )
                        {
                          if ( *((_DWORD *)v59 + 4) != *(_DWORD *)(v13 + 24)
                            || (v98 = HIDWORD(TokenInformation),
                                v99 = *((_QWORD *)v59 + 1)
                                    - 48LL
                                    - ObpInfoMaskToOffset[*(_BYTE *)(*((_QWORD *)v59 + 1) - 48LL + 26) & 3],
                                HIDWORD(TokenInformation) != *(unsigned __int16 *)(v99 + 8)) )
                          {
LABEL_83:
                            v57 = v59;
                            v59 = *(char **)v59;
                            if ( !v59 )
                            {
                              v24 = v179;
                              goto LABEL_85;
                            }
                            continue;
                          }
                          break;
                        }
                        v25 = (char *)Src[1];
                        v100 = *(_QWORD **)(v99 + 16);
                        v101 = (char *)Src[1] + SHIDWORD(TokenInformation);
                        if ( HIDWORD(TokenInformation) >= 8 )
                        {
                          do
                          {
                            if ( *(_QWORD *)v25 != *v100 )
                              break;
                            v98 -= 8;
                            if ( !v98 )
                              goto LABEL_208;
                            v25 += 8;
                            ++v100;
                          }
                          while ( v98 >= 8 );
                        }
                        if ( v156 )
                        {
                          if ( v25 >= v101 )
                            goto LABEL_208;
                          v102 = (char *)v100 - v25;
                          while ( 1 )
                          {
                            v103 = *(unsigned __int16 *)v25;
                            v104 = *(unsigned __int16 *)&v25[v102];
                            if ( v103 != v104 )
                            {
                              if ( v103 >= 0x61 )
                              {
                                if ( v103 > 0x7A )
                                  v103 = (unsigned __int16)(v103
                                                          + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v103 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v103 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v103)]]]);
                                else
                                  v103 -= 32;
                              }
                              if ( v104 >= 0x61 )
                              {
                                if ( v104 > 0x7A )
                                  v104 = (unsigned __int16)(v104
                                                          + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v104 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v104 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v104)]]]);
                                else
                                  v104 -= 32;
                              }
                              if ( v103 != v104 )
                                goto LABEL_83;
                            }
                            v25 += 2;
                            if ( v25 >= v101 )
                              goto LABEL_208;
                          }
                        }
                        if ( v25 < v101 )
                        {
                          while ( *(_WORD *)v25 == *(_WORD *)v100 )
                          {
                            v25 += 2;
                            v100 = (_QWORD *)((char *)v100 + 2);
                            if ( v25 >= v101 )
                              goto LABEL_208;
                          }
                          goto LABEL_83;
                        }
LABEL_208:
                        v23 = (char *)*((_QWORD *)v59 + 1);
                        ObfReferenceObject(v23);
                        if ( !v179 )
                        {
                          ExReleasePushLockEx((ULONG_PTR)(v49 + 296), 0LL, v24, (__int64)v25);
                          v105 = *(void **)v13;
                          *(_DWORD *)(v13 + 32) = -286387660;
                          ObfDereferenceObject(v105);
                          *(_QWORD *)v13 = 0LL;
                          *(_WORD *)(v13 + 30) = 0;
                          KeLeaveCriticalRegion();
                          v57 = 0LL;
                        }
                        v106 = *(void **)(v13 + 8);
                        if ( v106 )
                          ObfDereferenceObject(v106);
                        *(_QWORD *)(v13 + 8) = v23;
                        *(_QWORD *)(v13 + 16) = v57;
LABEL_213:
                        v47 = v49;
                        if ( !v23 )
                        {
LABEL_88:
                          if ( v49 )
                            continue;
                        }
                        break;
                      }
LABEL_140:
                      v146 = v23;
                      if ( v145 )
                      {
                        if ( !v23 )
                          goto LABEL_170;
                        if ( !v147.m128i_i16[0] )
                        {
                          v75 = *(__int64 (__fastcall **)(char *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, char **))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v23 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v23 - 48) >> 8)] + 144);
                          if ( !v75 || v75 != ObpParseSymbolicLinkEx && a8 )
                          {
                            v64 = ObReferenceObjectByPointer(v23, 0, (POBJECT_TYPE)a4, a5);
                            goto LABEL_111;
                          }
                        }
                        goto LABEL_35;
                      }
                      if ( !v23 )
                      {
LABEL_170:
                        if ( v147.m128i_i16[0] )
                        {
                          v64 = -1073741766;
                        }
                        else
                        {
                          if ( !a8 )
                          {
LABEL_172:
                            v64 = -1073741772;
                            goto LABEL_173;
                          }
                          if ( (POBJECT_TYPE)a4 == ObpDirectoryObjectType )
                            v111 = 8;
                          else
                            v111 = 4;
                          v112 = (char *)Object;
                          v113 = v151;
                          LOBYTE(PreviouslyGrantedAccess) = 0;
                          if ( ObCheckCreateObjectAccess(
                                 (__int64)Object,
                                 v111,
                                 a10,
                                 (__int64)Src,
                                 PreviouslyGrantedAccess,
                                 v151,
                                 &v152) )
                          {
                            v114 = *((_DWORD *)v112 + 85);
                            if ( v114 != -1
                              && ((POBJECT_TYPE)a4 == MmSectionObjectType
                               || (POBJECT_TYPE)a4 == ObpSymbolicLinkObjectType)
                              && v114 != (unsigned int)PsGetCurrentProcessSessionId()
                              && !SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v113)
                              && !(unsigned __int8)ObpIsUnsecureName((PCUNICODE_STRING)Src) )
                            {
                              goto LABEL_351;
                            }
                            v115 = LOWORD(Src[0]);
                            PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(Src[0]), 0x6D4E624Fu);
                            if ( PoolWithTag )
                            {
                              if ( ObpInsertDirectoryEntry(v112, a8, v13) )
                              {
                                memmove(PoolWithTag, Src[1], v115);
                                v117 = &a8[-ObpInfoMaskToOffset[*(a8 - 22) & 3] - 48];
                                v118 = (void *)*((_QWORD *)v117 + 2);
                                if ( v118 )
                                  ExFreePoolWithTag(v118, 0);
                                v119 = (__int16)Src[0];
                                *((_QWORD *)v117 + 2) = PoolWithTag;
                                v64 = 0;
                                *((_WORD *)v117 + 4) = v119;
                                *((_WORD *)v117 + 5) = v119;
                                v146 = a8;
                                goto LABEL_112;
                              }
                              ExFreePoolWithTag(PoolWithTag, 0);
                            }
                            v64 = -1073741670;
                          }
                          else
                          {
                            v64 = v152;
                            if ( v152 >= 0 )
                              v64 = -1073741772;
                          }
                        }
                        goto LABEL_173;
                      }
LABEL_327:
                      v64 = v149;
LABEL_111:
                      if ( v64 < 0 )
                        goto LABEL_173;
LABEL_112:
                      if ( P )
                        ObfDereferenceDeviceMap(P);
                      if ( v150 )
                        ObfDereferenceObject(v150);
                      if ( v159 )
                        ObfDereferenceObject(v159);
                      SeClearLearningModeObjectInformation();
                      if ( v64 < 0 )
                      {
                        *a13 = 0LL;
                      }
                      else
                      {
                        if ( a12 )
                        {
                          if ( v161 != -1 )
                            *a12 = v161;
                        }
                        *a13 = v146;
                      }
                      return v64;
                    }
                    while ( *(_WORD *)v25 == *(_WORD *)v68 )
                    {
                      v25 += 2;
                      v68 = (_QWORD *)((char *)v68 + 2);
                      if ( v25 >= v69 )
                        goto LABEL_135;
                    }
                  }
                }
              }
              v43 = (char *)v45;
              v45 = (__int64 *)*v45;
              if ( !v45 )
              {
                v41 = BugCheckParameter2;
                v24 = v178;
                goto LABEL_65;
              }
            }
          }
          while ( 1 )
          {
            v39 = *v33++;
            --v35;
            v40 = (v38 >> 1) + 3 * v38;
            if ( v39 >= 0x61 )
            {
              if ( v39 > 0x7A )
              {
                v38 = RtlUpcaseUnicodeChar(v39) + v40;
                goto LABEL_58;
              }
              v40 -= 32;
            }
            v38 = v39 + v40;
LABEL_58:
            if ( !v35 )
              goto LABEL_59;
          }
        }
LABEL_293:
        v64 = -1073741773;
        goto LABEL_173;
      }
      if ( ParseProcedure != ObpParseSymbolicLinkEx )
      {
        if ( a8 )
        {
LABEL_352:
          v64 = -1073741788;
          goto LABEL_173;
        }
        ObfReferenceObject(v23);
        if ( *(_BYTE *)(v13 + 30) )
        {
          ExReleasePushLockEx(*(_QWORD *)v13 + 296LL, 0LL, v60, v61);
          v108 = *(void **)v13;
          *(_DWORD *)(v13 + 32) = -286387660;
          ObfDereferenceObject(v108);
          *(_QWORD *)v13 = 0LL;
          *(_WORD *)(v13 + 30) = 0;
          KeLeaveCriticalRegion();
        }
        v62 = *(void **)(v13 + 8);
        if ( v62 )
        {
          ObfDereferenceObject(v62);
          *(_QWORD *)(v13 + 8) = 0LL;
        }
        v23 = v146;
      }
      if ( (*(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v29 ^ (unsigned __int8)v28[24]] + 67) & 1) != 0 )
        v63 = ParseProcedure(
                v23,
                (POBJECT_TYPE)a4,
                (struct _SECURITY_SUBJECT_CONTEXT *)a10,
                v151,
                v181,
                (__int64)a2,
                (unsigned __int16 *)&v147,
                a6,
                a7,
                (__int64)v160,
                &v146);
      else
        v63 = ((__int64 (__fastcall *)(char *, __int64, struct _ACCESS_STATE *, _QWORD, int, __m128i *, __m128i *, __int64, __int64, char **))ParseProcedure)(
                v23,
                a4,
                a10,
                v151,
                v181,
                a2,
                &v147,
                a6,
                a7,
                &v146);
      v64 = v63;
      v152 = v63;
      if ( ParseProcedure != ObpParseSymbolicLinkEx )
        ObfDereferenceObject(v28 + 48);
      if ( v64 < 0 )
      {
LABEL_173:
        if ( *(_BYTE *)(v13 + 30) )
        {
          ExReleasePushLockEx(*(_QWORD *)v13 + 296LL, 0LL, v24, (__int64)v25);
          v109 = *(void **)v13;
          *(_DWORD *)(v13 + 32) = -286387660;
          ObfDereferenceObject(v109);
          *(_QWORD *)v13 = 0LL;
          *(_WORD *)(v13 + 30) = 0;
          KeLeaveCriticalRegion();
        }
        v84 = *(void **)(v13 + 8);
        if ( v84 )
        {
          ObfDereferenceObject(v84);
          *(_QWORD *)(v13 + 8) = 0LL;
        }
        goto LABEL_112;
      }
      if ( v64 != 260 && v64 != 872 )
        v159 = v146;
      if ( (v161 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
      {
LABEL_351:
        v64 = -1073741790;
        goto LABEL_173;
      }
      if ( v64 != 260 && v64 != 280 && v64 != 872 )
      {
        v159 = 0LL;
        if ( !v146 )
          v64 = -1073741772;
        goto LABEL_111;
      }
      v14 = v181;
      if ( (v181 & 0x1000) != 0 && v64 != 872 )
      {
        v64 = -1073740533;
        goto LABEL_173;
      }
      if ( !--v157 )
        goto LABEL_172;
      v15 = a2;
      if ( !a2->m128i_i16[0] )
        goto LABEL_293;
      ObfDereferenceObject(v150);
      v78 = (__int16 *)a2->m128i_i64[1];
      v150 = 0LL;
      v79 = *v78;
      if ( v64 == 280 )
      {
        if ( v79 == 92 )
          goto LABEL_293;
        v23 = v146;
        v150 = v146;
        v159 = 0LL;
      }
      else
      {
        if ( v79 != 92 )
          goto LABEL_293;
        if ( v64 == 872 )
        {
          v23 = (char *)ObpRootDirectoryObject;
        }
        else if ( (int)PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v167) >= 0 )
        {
          v23 = v167;
        }
        else
        {
          v23 = (char *)ObpRootDirectoryObject;
          v167 = (char *)ObpRootDirectoryObject;
        }
        v150 = v23;
        ObfReferenceObject(v23);
      }
      v80 = P;
      if ( !P )
      {
LABEL_166:
        if ( *(_BYTE *)(v13 + 30) )
          ObpUnlockDirectory(*(_QWORD *)v13, v13);
        v83 = *(void **)(v13 + 8);
        if ( v83 )
        {
          ObfDereferenceObject(v83);
          *(_QWORD *)(v13 + 8) = 0LL;
        }
LABEL_29:
        v26 = v15->m128i_i64[1];
        if ( (v26 & 7) != 0 )
          goto LABEL_33;
        v27 = v14 & 0x800;
        LOBYTE(v24) = v27 != 0;
        if ( v15->m128i_i16[0] < 8u || *(_QWORD *)v26 != ObpDosDevicesShortNamePrefix )
        {
          if ( v15->m128i_i16[0] == 6 && *(_DWORD *)v26 == *(_DWORD *)L"\\??" && *(_WORD *)(v26 + 4) == 63 )
          {
            v120 = (PVOID *)ObpReferenceDeviceMap(v24);
            P = v120;
            v121 = v120;
            if ( v120 )
            {
              if ( *v120 )
              {
                v122 = ObReferenceObjectByPointer(*v120, 0, (POBJECT_TYPE)a4, a5);
                if ( v122 >= 0 )
                {
                  if ( a12 && v161 != -1 )
                    *a12 = v161;
                  *a13 = *v121;
                }
                ObfDereferenceDeviceMap(v121);
                ObfDereferenceObject(v23);
                SeClearLearningModeObjectInformation();
                return v122;
              }
            }
          }
          goto LABEL_33;
        }
        v85 = KeGetCurrentThread();
        P = 0LL;
        v86 = 0LL;
        Process = (__int64)v85->Process;
        ProcessServerSilo = PsGetProcessServerSilo(Process);
        v129 = ProcessServerSilo != PsGetCurrentServerSilo();
        if ( (*(_DWORD *)(&v85[1].SwapListEntry + 1) & 8) == 0 || v27 )
        {
          if ( v129 )
            goto LABEL_183;
          v89 = 0LL;
        }
        else
        {
          if ( v129 )
            goto LABEL_183;
          v110 = PsReferenceImpersonationTokenEx((__int64)v85, 1, v154, &v153, &v169, 0LL);
          v86 = v110;
          if ( !v110 )
            goto LABEL_321;
          if ( *((_QWORD *)v110 + 3) == 999LL )
          {
            v129 = 1;
            goto LABEL_183;
          }
          if ( SeGetTokenDeviceMap((__int64)v110, &v171) >= 0 )
          {
            v89 = v171;
            P = (PVOID)v171;
            if ( v171 )
            {
              _InterlockedIncrement(v171 + 6);
LABEL_190:
              if ( v86 )
                ObfDereferenceObject(v86);
              if ( v89 && *(_QWORD *)v89 )
              {
                v97 = *a2;
                v147.m128i_i64[0] = a2->m128i_i64[0];
                v147.m128i_i16[0] -= 8;
                v147.m128i_i64[1] = _mm_srli_si128(v97, 8).m128i_u64[0] + 8;
                v147.m128i_i16[1] -= 8;
                v23 = *(char **)v89;
                goto LABEL_34;
              }
              v23 = (char *)v150;
              v15 = a2;
LABEL_33:
              v147 = *v15;
LABEL_34:
              v146 = v23;
              continue;
            }
          }
          else
          {
LABEL_321:
            v89 = (volatile signed __int32 *)P;
          }
        }
        if ( !*(_QWORD *)(Process + 1072) && (int)ObSetCurrentProcessDeviceMap() < 0 )
          goto LABEL_190;
LABEL_183:
        v90 = (volatile signed __int32 **)PsGetCurrentServerSiloGlobals();
        v91 = KeGetCurrentThread();
        v92 = v90;
        --v91->SpecialApcDisable;
        v93 = (ULONG_PTR)(v90 + 15);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v90 + 15), 0LL);
        if ( v129 )
          v89 = *v92;
        else
          v89 = *(volatile signed __int32 **)(Process + 1072);
        P = (PVOID)v89;
        if ( v89 )
          _InterlockedIncrement(v89 + 6);
        ExReleasePushLockEx(v93, 0LL, v94, v95);
        v96 = KeGetCurrentThread();
        v17 = v96->SpecialApcDisable++ == -1;
        if ( v17 && ($005F0E83B22994B61E86C72E0CE43C71 *)v96->ApcState.ApcListHead[0].Flink != &v96->152 )
          KiCheckForKernelApcDelivery();
        goto LABEL_190;
      }
      break;
    }
    v81 = *((_DWORD *)P + 6);
    if ( v81 == 1 )
    {
LABEL_343:
      ServerSiloGlobals = PsGetServerSiloGlobals(*((_QWORD *)v80 + 8));
      v135 = KeGetCurrentThread();
      --v135->SpecialApcDisable;
      v136 = (ULONG_PTR)ServerSiloGlobals + 120;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
      v139 = (PVOID *)P;
      v81 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 6, 0xFFFFFFFF);
      if ( v81 == 1 )
      {
        *((_QWORD *)*v139 + 38) = 0LL;
        ExReleasePushLockEx(v136, 0LL, v137, v138);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        v140 = v139[8];
        if ( v140 )
          ObfDereferenceObjectWithTag(v140, 0x6D44624Fu);
        ZwClose(v139[2]);
        ObfDereferenceObject(*v139);
        ExFreePoolWithTag(v139, 0x6D44624Fu);
        goto LABEL_165;
      }
      ExReleasePushLockEx(v136, 0LL, v137, v138);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    else
    {
      while ( 1 )
      {
        v82 = _InterlockedCompareExchange((volatile signed __int32 *)v80 + 6, v81 - 1, v81);
        v17 = v81 == v82;
        v81 = v82;
        if ( v17 )
          break;
        if ( v82 == 1 )
          goto LABEL_343;
      }
    }
    if ( v81 <= 0 )
      __fastfail(0xEu);
LABEL_165:
    v23 = (char *)v150;
    v14 = v181;
    P = 0LL;
    goto LABEL_166;
  }
  if ( !v15->m128i_i16[0] || *(_WORD *)v15->m128i_i64[1] != 92 )
    return -1073741765;
  if ( (int)PsGetPermanentSiloContext(v18, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v165) >= 0 )
  {
    v23 = v165;
  }
  else
  {
    v23 = (char *)ObpRootDirectoryObject;
    v165 = (char *)ObpRootDirectoryObject;
  }
  v150 = v23;
  if ( v23 )
    ObfReferenceObject(v23);
  if ( v15->m128i_i16[0] != 2 )
  {
    v175 = v15;
    v174 = a4 + 16;
    v176 = 0LL;
    SeSetLearningModeObjectInformation((__int64)v173);
    goto LABEL_29;
  }
  if ( v23 )
  {
    v128 = ObReferenceObjectByPointer(v23, 0, (POBJECT_TYPE)a4, a5);
    if ( v128 >= 0 )
      *a13 = v23;
    ObfDereferenceObject(v23);
    return v128;
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
