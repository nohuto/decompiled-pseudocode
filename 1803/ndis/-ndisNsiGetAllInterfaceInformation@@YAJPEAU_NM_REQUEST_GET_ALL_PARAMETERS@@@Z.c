/*
 * XREFs of ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B050
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB30 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 *     ndisIfDeleteStackEntries @ 0x1C0013B3C (ndisIfDeleteStackEntries.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0014988 (NETWORKBLOCK_DECREMENT_REF.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C00686C4 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00ADB70 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00ADDC0 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00AE350 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00AEBB0 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00AF730 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiGetAllInterfaceInformation(
        struct _NM_REQUEST_GET_ALL_PARAMETERS *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _LIST_ENTRY *v4; // r15
  __int64 v5; // r13
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v6; // r12
  _LIST_ENTRY **v7; // rbx
  struct _KTHREAD *CurrentThread; // r14
  _LIST_ENTRY *v9; // rbx
  _DWORD *ThreadProperty; // rax
  __int64 v11; // rcx
  int v12; // esi
  int v13; // r12d
  unsigned int v14; // edi
  PACCESS_TOKEN v15; // rax
  void *v16; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v18; // edi
  KIRQL v19; // r8
  _LIST_ENTRY *v20; // rcx
  _LIST_ENTRY *Flink; // rax
  unsigned int v22; // edx
  KIRQL v23; // di
  int v24; // ecx
  int v25; // ecx
  _LIST_ENTRY *v26; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v28; // rbx
  KIRQL v29; // di
  int v30; // r8d
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rsi
  KIRQL v34; // r12
  int v35; // r14d
  unsigned __int16 v36; // ax
  struct _NDIS_REFCOUNT_BLOCK *v37; // rcx
  __int64 v38; // rax
  KIRQL v39; // si
  ULONG_PTR v40; // r8
  int v41; // ecx
  __int64 v42; // r9
  unsigned __int8 v43; // dl
  _BYTE *v44; // r10
  bool v45; // zf
  struct _KEVENT *v46; // rcx
  __int64 v47; // r9
  char v48; // r14
  KIRQL v49; // al
  ULONG_PTR v50; // r8
  KIRQL v51; // r15
  int v52; // ecx
  __int64 v53; // r10
  unsigned __int8 v54; // r9
  _BYTE *v55; // rdx
  __int64 v56; // r9
  KIRQL v57; // al
  ULONG_PTR v58; // r8
  KIRQL v59; // bl
  __int64 v60; // rcx
  unsigned int v61; // edi
  __int64 v62; // rax
  KIRQL v63; // r14
  __int64 v64; // rbx
  KIRQL v65; // al
  ULONG_PTR v66; // r8
  KIRQL v67; // si
  int v68; // ecx
  __int64 v69; // r10
  unsigned __int8 v70; // r9
  _BYTE *v71; // rdx
  char v72; // al
  ULONG_PTR v73; // r8
  int v74; // ecx
  __int64 v75; // r10
  unsigned __int8 v76; // r9
  _BYTE *v77; // rdx
  ULONG_PTR v78; // r8
  int v79; // ecx
  __int64 v80; // r10
  unsigned __int8 v81; // r9
  _BYTE *v82; // rdx
  _LIST_ENTRY *v84; // rax
  _LIST_ENTRY *v85; // rcx
  _LIST_ENTRY *v86; // rcx
  char v87; // al
  NTSTATUS v88; // edi
  char v89; // al
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 v92; // rsi
  int v93; // r14d
  KIRQL v94; // r12
  unsigned __int16 v95; // cx
  __int64 v96; // rax
  KIRQL v97; // si
  ULONG_PTR v98; // r8
  __int64 v99; // rdx
  struct _KEVENT *v100; // rcx
  __int64 v101; // r9
  char v102; // r14
  KIRQL v103; // al
  ULONG_PTR v104; // r8
  KIRQL v105; // r15
  int v106; // ecx
  __int64 v107; // r10
  unsigned __int8 v108; // r9
  _BYTE *v109; // rdx
  __int64 v110; // r9
  unsigned __int8 v111; // r10
  unsigned __int8 v112; // dl
  _BYTE *v113; // r9
  unsigned __int8 v114; // r10
  unsigned __int8 v115; // cl
  _BYTE *v116; // r9
  unsigned int ThreadSessionId; // eax
  KIRQL v118; // dl
  unsigned __int64 v119; // rdx
  unsigned __int64 v120; // rdx
  ULONG_PTR v121; // rdi
  unsigned int v122; // edx
  int v123; // ecx
  char v124; // al
  ULONG_PTR v125; // rsi
  unsigned int v126; // edx
  int v127; // ecx
  char v128; // al
  struct _KEVENT *v129; // rcx
  ULONG_PTR v130; // rdi
  unsigned int v131; // edx
  int v132; // ecx
  char v133; // al
  _LIST_ENTRY *v134; // rax
  struct _KEVENT *v135; // rcx
  ULONG_PTR v136; // rdi
  unsigned int v137; // edx
  int v138; // ecx
  char v139; // al
  ULONG_PTR v140; // rsi
  unsigned int v141; // edx
  int v142; // ecx
  char v143; // al
  struct _KEVENT *v144; // rcx
  ULONG_PTR v145; // rdi
  unsigned int v146; // edx
  int v147; // ecx
  ULONG_PTR v148; // rbx
  unsigned int v149; // edx
  int v150; // ecx
  int v151; // ebx
  __int64 v152; // rdx
  _QWORD *v153; // rcx
  __int64 v154; // rdx
  _QWORD *v155; // rcx
  __int64 v156; // rdx
  _QWORD *v157; // rcx
  unsigned int v158; // ecx
  ULONG_PTR v159; // rcx
  void *v160; // rcx
  void *v161; // rcx
  struct _KEVENT *v162; // rcx
  ULONG_PTR v163; // rbx
  unsigned int v164; // edx
  int v165; // ecx
  int Flink_high; // ebx
  _LIST_ENTRY *v167; // rdx
  _LIST_ENTRY *v168; // rcx
  _LIST_ENTRY *v169; // rdx
  _LIST_ENTRY *v170; // rcx
  _LIST_ENTRY *v171; // rdx
  _LIST_ENTRY *v172; // rcx
  unsigned int v173; // ecx
  ULONG_PTR v174; // rcx
  _LIST_ENTRY *v175; // rcx
  _LIST_ENTRY *v176; // rcx
  struct _KEVENT *v177; // rcx
  int v178; // [rsp+30h] [rbp-69h]
  KIRQL v179; // [rsp+34h] [rbp-65h]
  BOOLEAN EffectiveOnly; // [rsp+40h] [rbp-59h] BYREF
  BOOLEAN CopyOnOpen[7]; // [rsp+41h] [rbp-58h] BYREF
  _LIST_ENTRY *v183; // [rsp+48h] [rbp-51h]
  __int64 v184; // [rsp+50h] [rbp-49h]
  _QWORD v185[8]; // [rsp+60h] [rbp-39h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+A0h] [rbp+7h] BYREF
  PVOID TokenInformation; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v188; // [rsp+B0h] [rbp+17h]
  __int128 v189; // [rsp+B8h] [rbp+1Fh]

  v4 = 0LL;
  v5 = 0LL;
  v6 = a1;
  v178 = 0;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(82LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a4);
  memset(v185, 0, sizeof(v185));
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v6 + 6) != 8 )
  {
    v61 = -1073741808;
    v178 = -1073741808;
    goto LABEL_91;
  }
  v7 = (_LIST_ENTRY **)*((_QWORD *)v6 + 2);
  CurrentThread = KeGetCurrentThread();
  v188 = 0LL;
  v189 = 0uLL;
  v9 = *v7;
  ThreadProperty = PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v13 = ThreadProperty[1];
    HIDWORD(v188) = *ThreadProperty;
    v12 = HIDWORD(v188);
    LODWORD(v188) = v13;
    ObfDereferenceObject(ThreadProperty);
    v14 = v12;
  }
  else
  {
    v12 = 0;
    v13 = 0;
    v188 = 0LL;
    v14 = 0;
  }
  if ( !v14 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
    }
    else
    {
      v15 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v16 = v15;
      if ( v15 )
      {
        v88 = SeQueryInformationToken(v15, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v16);
        if ( v88 >= 0 )
        {
          v18 = (unsigned int)TokenInformation;
          goto LABEL_11;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v18 = CurrentProcessSessionId;
LABEL_11:
    if ( v18 == -1 )
    {
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
      v13 = v188;
      v18 = ThreadSessionId;
    }
    if ( v18 < ndisCmSessionCount )
    {
      v12 = 0;
      v118 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( v18 < ndisCmSessionCount )
        v12 = *((_DWORD *)ndisCmSession + 6 * v18);
      KeReleaseSpinLock(&ndisCmSessionLock, v118);
      if ( !v12 )
        v12 = 1;
    }
    else
    {
      v12 = 1;
    }
    HIDWORD(v188) = v12;
    v14 = v12;
  }
  v19 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v20 = 0LL;
  Flink = ndisIfCompartmentList.Flink;
  if ( ndisIfCompartmentList.Flink != &ndisIfCompartmentList )
  {
    while ( 1 )
    {
      v22 = (unsigned int)Flink[1].Flink;
      if ( v22 == v14 )
        break;
      if ( v22 <= v14 )
      {
        Flink = Flink->Flink;
        if ( Flink != &ndisIfCompartmentList )
          continue;
      }
      goto LABEL_19;
    }
    v20 = Flink;
  }
LABEL_19:
  v189 = *(__int128 *)((char *)&v20[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v19);
  v23 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v179 = v23;
  v24 = *((_DWORD *)a1 + 8);
  if ( v24 )
  {
    v25 = v24 - 1;
    if ( v25 )
    {
      if ( v25 == 1 )
        goto LABEL_22;
      v178 = -1073741811;
    }
    else
    {
      v9 = 0LL;
      while ( 1 )
      {
LABEL_22:
        v26 = ndisIfList.Flink;
        v4 = 0LL;
        v183 = 0LL;
        if ( ndisIfList.Flink != &ndisIfList )
        {
          while ( v26[5].Flink <= v9 )
          {
            v26 = v26->Flink;
            if ( v26 == &ndisIfList )
              goto LABEL_27;
          }
          v4 = v26 - 77;
          v183 = v26 - 77;
        }
LABEL_27:
        if ( !v4 )
          break;
        Blink = v4[86].Blink;
        v9 = v4[82].Flink;
        if ( v12 == LODWORD(Blink[1].Flink) )
          goto LABEL_29;
        if ( v13 == -1 )
        {
          v119 = v189 - *(unsigned __int64 *)((char *)&Blink[105].Flink + 4);
          if ( (_LIST_ENTRY *)v189 == *(_LIST_ENTRY **)((char *)&Blink[105].Flink + 4) )
            v119 = *((_QWORD *)&v189 + 1) - *(unsigned __int64 *)((char *)&Blink[105].Blink + 4);
          if ( !v119 )
            goto LABEL_29;
        }
        if ( ((__int64)Blink[105].Flink & 2) == 0 && v12 == 1 )
          goto LABEL_29;
      }
    }
    goto LABEL_194;
  }
  v84 = ndisIfList.Flink;
  v183 = 0LL;
  if ( ndisIfList.Flink != &ndisIfList )
  {
    while ( 1 )
    {
      v85 = v84[5].Flink;
      if ( v85 == v9 )
        break;
      if ( v85 <= v9 )
      {
        v84 = v84->Flink;
        if ( v84 != &ndisIfList )
          continue;
      }
      goto LABEL_137;
    }
    v4 = v84 - 77;
    v183 = v84 - 77;
  }
LABEL_137:
  if ( !v4 )
    goto LABEL_194;
  v86 = v4[86].Blink;
  if ( v12 == LODWORD(v86[1].Flink) )
    goto LABEL_29;
  v120 = v189 - *(unsigned __int64 *)((char *)&v86[105].Flink + 4);
  if ( (_LIST_ENTRY *)v189 == *(_LIST_ENTRY **)((char *)&v86[105].Flink + 4) )
    v120 = *((_QWORD *)&v189 + 1) - *(unsigned __int64 *)((char *)&v86[105].Blink + 4);
  if ( !v120 || ((__int64)v86[105].Flink & 2) == 0 && v12 == 1 )
  {
LABEL_29:
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v4[90].Flink);
    ++LODWORD(v4[81].Blink);
    v6 = a1;
    if ( !BYTE1(v4[87].Blink) || *((_QWORD *)a1 + 1) >= 2uLL )
      goto LABEL_85;
    v28 = 0LL;
    v29 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
    if ( BYTE3(v4[87].Blink) )
    {
      v28 = v4[88].Blink;
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v4[90].Blink);
      ++HIDWORD(v4[87].Blink);
    }
    KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v29);
    if ( v28 )
    {
      v31 = ndisReferenceTopMiniportByNameForNsi((_DWORD)v28, 0, v30, 0, 2, 60);
      v32 = v31;
      if ( v31 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v31 + 96));
        v33 = *(_QWORD *)(v32 + 2056);
        *(_QWORD *)(v32 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v32 + 1856) = 2234961;
        if ( v33 )
        {
          while ( 1 )
          {
            v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v33 + 320));
            v35 = 1;
            if ( !*(_BYTE *)(v33 + 330) )
            {
              v36 = *(_WORD *)(v33 + 328);
              if ( v36 >= 0xFFEBu )
              {
                ndisRefCountReferenceCountOverflow = 1;
                v35 = 2;
              }
              else
              {
                v37 = *(struct _NDIS_REFCOUNT_BLOCK **)(v33 + 336);
                *(_WORD *)(v33 + 328) = v36 + 1;
                NdisReferenceWithTag(v37);
                v35 = 0;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v33 + 320), v34);
            if ( !v35 )
              break;
            v33 = *(_QWORD *)(v33 + 112);
            if ( !v33 )
              goto LABEL_200;
          }
          v38 = *(_QWORD *)(v33 + 840);
        }
        else
        {
LABEL_200:
          v38 = *(_QWORD *)(v32 + 4064);
        }
        v184 = v38;
        *(_QWORD *)(v32 + 520) = 0LL;
        *(_DWORD *)(v32 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v32 + 96));
        v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v32 + 96));
        v40 = *(_QWORD *)(v32 + 4928);
        *(_QWORD *)(v32 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v32 + 1856) = 71394;
        if ( v40 - 2 > 1 )
        {
          if ( v40 <= 1 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v40, 0LL);
          if ( *(_BYTE *)(v40 + 2) <= 2u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v40, 2uLL);
          v41 = *(unsigned __int8 *)(v40 + 1);
          if ( *(_BYTE *)(v40 + 1) )
          {
            if ( v41 == 1 )
            {
              v121 = v40 + 136;
              v122 = *(_DWORD *)(v40 + 192);
              v123 = (unsigned __int16)v122 >> 1;
              if ( v122 >> 17 < 0x3FFE && v123 == (v122 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v40 + 136));
                *(_DWORD *)(v121 + 56) &= 0x10001u;
              }
              else
              {
                if ( v123 == 0 && (v122 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v40, 2uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v40 + 136), 0);
              }
            }
          }
          else
          {
            v42 = *(_QWORD *)(v40 + 8);
            if ( v42 && (v43 = *(_BYTE *)(v40 + 3)) != 0 )
            {
              while ( 1 )
              {
                v44 = (_BYTE *)(v42 + 2LL * (unsigned __int8)v41);
                if ( *v44 == 2 )
                {
                  v124 = v44[1];
                  if ( v124 )
                    break;
                }
                LOBYTE(v41) = v41 + 1;
                if ( (unsigned __int8)v41 >= v43 )
                  goto LABEL_49;
              }
              v44[1] = v124 - 1;
            }
            else
            {
LABEL_49:
              if ( !_bittestandreset((signed __int32 *)(v40 + 16), 2u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v40, 2uLL);
            }
          }
        }
        v45 = (*(_DWORD *)(v32 + 3132))-- == 1;
        if ( v45 )
        {
          v46 = *(struct _KEVENT **)(v32 + 3144);
          if ( v46 )
            KeSetEvent(v46, 0, 0);
        }
        *(_QWORD *)(v32 + 520) = 0LL;
        *(_DWORD *)(v32 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v32 + 96), v39);
        if ( (unsigned __int8)byte_1C009961B >= 4u )
          WPP_SF_q(25LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v32, v47);
        v48 = 0;
        v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v32 + 4464));
        v50 = *(_QWORD *)(v32 + 4920);
        v51 = v49;
        if ( v50 && v50 - 2 > 1 )
        {
          if ( v50 == 1 )
            ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
          if ( *(_BYTE *)(v50 + 2) <= 0x3Cu )
            ndisBugCheckEx(0x1EuLL, 2uLL, v50, 0x3CuLL);
          v52 = *(unsigned __int8 *)(v50 + 1);
          if ( *(_BYTE *)(v50 + 1) )
          {
            if ( v52 == 1 )
            {
              v125 = v50 + 3848;
              v126 = *(_DWORD *)(v50 + 3904);
              v127 = (unsigned __int16)v126 >> 1;
              if ( v126 >> 17 < 0x3FFE && v127 == (v126 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v50 + 3848));
                *(_DWORD *)(v125 + 56) &= 0x10001u;
              }
              else
              {
                if ( v127 == 0 && (v126 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v50, 0x3CuLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v50 + 3848), 0);
              }
            }
          }
          else
          {
            v53 = *(_QWORD *)(v50 + 8);
            if ( v53 && (v54 = *(_BYTE *)(v50 + 3)) != 0 )
            {
              while ( 1 )
              {
                v55 = (_BYTE *)(v53 + 2LL * (unsigned __int8)v52);
                if ( *v55 == 60 )
                {
                  v128 = v55[1];
                  if ( v128 )
                    break;
                }
                LOBYTE(v52) = v52 + 1;
                if ( (unsigned __int8)v52 >= v54 )
                  goto LABEL_64;
              }
              v55[1] = v128 - 1;
            }
            else
            {
LABEL_64:
              if ( !_bittestandreset((signed __int32 *)(v50 + 20), 0x1Cu) )
                ndisBugCheckEx(0x1EuLL, 0LL, v50, 0x3CuLL);
            }
          }
        }
        v45 = (*(_DWORD *)(v32 + 4472))-- == 1;
        if ( v45 )
          v48 = 1;
        if ( (unsigned __int8)byte_1C009961B >= 4u )
          WPP_SF_qD(14LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v32, *(unsigned int *)(v32 + 4472));
        KeReleaseSpinLock((PKSPIN_LOCK)(v32 + 4464), v51);
        if ( v48 )
        {
          v129 = *(struct _KEVENT **)(v32 + 1608);
          if ( v129 )
            KeSetEvent(v129, 0, 0);
        }
        if ( (unsigned __int8)byte_1C009961B >= 4u )
          WPP_SF_q(26LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v32, v56);
        v4 = v183;
        v5 = v184;
      }
      v57 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
      v58 = (ULONG_PTR)v4[90].Blink;
      v59 = v57;
      if ( v58 - 2 > 1 )
      {
        if ( v58 <= 1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v58, 0LL);
        if ( *(_BYTE *)(v58 + 2) <= 3u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v58, 3uLL);
        if ( *(_BYTE *)(v58 + 1) )
        {
          if ( *(_BYTE *)(v58 + 1) == 1 )
          {
            v130 = v58 + 200;
            v131 = *(_DWORD *)(v58 + 256);
            v132 = (unsigned __int16)v131 >> 1;
            if ( v131 >> 17 < 0x3FFE && v132 == (v131 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v58 + 200));
              *(_DWORD *)(v130 + 56) &= 0x10001u;
            }
            else
            {
              if ( v132 == 0 && (v131 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v58, 3uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v58 + 200), 0);
            }
          }
        }
        else
        {
          v60 = *(_QWORD *)(v58 + 8);
          if ( v60 && (v111 = *(_BYTE *)(v58 + 3), v112 = 0, v111) )
          {
            while ( 1 )
            {
              v113 = (_BYTE *)(v60 + 2LL * v112);
              if ( *v113 == 3 )
              {
                v133 = v113[1];
                if ( v133 )
                  break;
              }
              if ( ++v112 >= v111 )
                goto LABEL_78;
            }
            v113[1] = v133 - 1;
          }
          else
          {
LABEL_78:
            if ( !_bittestandreset((signed __int32 *)(v58 + 16), 3u) )
              ndisBugCheckEx(0x1EuLL, 0LL, v58, 3uLL);
          }
        }
      }
      v45 = HIDWORD(v4[87].Blink)-- == 1;
      if ( v45 )
      {
        v134 = v4[88].Blink;
        if ( v134 )
        {
          v135 = (struct _KEVENT *)v134[254].Blink;
          if ( v135 )
            KeSetEvent(v135, 0, 0);
        }
      }
      KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v59);
    }
    else
    {
      if ( !BYTE2(v4[87].Blink)
        || (v90 = ndisReferenceTopMiniportByNameForNsi(v4[88].Blink[2].Flink, 0, v30, 0, 2, 60), (v91 = v90) == 0) )
      {
LABEL_84:
        v23 = v179;
LABEL_85:
        **((_QWORD **)v6 + 2) = v4[82].Flink;
        goto LABEL_86;
      }
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v90 + 96));
      v92 = *(_QWORD *)(v91 + 2056);
      *(_QWORD *)(v91 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v91 + 1856) = 2234961;
      if ( v92 )
      {
        while ( 1 )
        {
          v93 = 1;
          v94 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v92 + 320));
          if ( !*(_BYTE *)(v92 + 330) )
          {
            v95 = *(_WORD *)(v92 + 328);
            if ( v95 >= 0xFFEBu )
            {
              ndisRefCountReferenceCountOverflow = 1;
              v93 = 2;
            }
            else
            {
              *(_WORD *)(v92 + 328) = v95 + 1;
              NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v92 + 336));
              v93 = 0;
            }
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v92 + 320), v94);
          if ( !v93 )
            break;
          v92 = *(_QWORD *)(v92 + 112);
          if ( !v92 )
            goto LABEL_269;
        }
        v96 = *(_QWORD *)(v92 + 840);
      }
      else
      {
LABEL_269:
        v96 = *(_QWORD *)(v91 + 4064);
      }
      v184 = v96;
      *(_QWORD *)(v91 + 520) = 0LL;
      *(_DWORD *)(v91 + 1856) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v91 + 96));
      v97 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v91 + 96));
      v98 = *(_QWORD *)(v91 + 4928);
      *(_QWORD *)(v91 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v91 + 1856) = 71394;
      if ( v98 - 2 > 1 )
      {
        if ( v98 <= 1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v98, 0LL);
        if ( *(_BYTE *)(v98 + 2) <= 2u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v98, 2uLL);
        if ( *(_BYTE *)(v98 + 1) )
        {
          if ( *(_BYTE *)(v98 + 1) == 1 )
          {
            v136 = v98 + 136;
            v137 = *(_DWORD *)(v98 + 192);
            v138 = (unsigned __int16)v137 >> 1;
            if ( v137 >> 17 < 0x3FFE && v138 == (v137 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v98 + 136));
              *(_DWORD *)(v136 + 56) &= 0x10001u;
            }
            else
            {
              if ( v138 == 0 && (v137 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v98, 2uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v98 + 136), 0);
            }
          }
        }
        else
        {
          v99 = *(_QWORD *)(v98 + 8);
          if ( v99 && (v114 = *(_BYTE *)(v98 + 3), v115 = 0, v114) )
          {
            while ( 1 )
            {
              v116 = (_BYTE *)(v99 + 2LL * v115);
              if ( *v116 == 2 )
              {
                v139 = v116[1];
                if ( v139 )
                  break;
              }
              if ( ++v115 >= v114 )
                goto LABEL_159;
            }
            v116[1] = v139 - 1;
          }
          else
          {
LABEL_159:
            if ( !_bittestandreset((signed __int32 *)(v98 + 16), 2u) )
              ndisBugCheckEx(0x1EuLL, 0LL, v98, 2uLL);
          }
        }
      }
      v45 = (*(_DWORD *)(v91 + 3132))-- == 1;
      if ( v45 )
      {
        v100 = *(struct _KEVENT **)(v91 + 3144);
        if ( v100 )
          KeSetEvent(v100, 0, 0);
      }
      *(_QWORD *)(v91 + 520) = 0LL;
      *(_DWORD *)(v91 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v91 + 96), v97);
      if ( (unsigned __int8)byte_1C009961B >= 4u )
        WPP_SF_q(25LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v91, v101);
      v102 = 0;
      v103 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v91 + 4464));
      v104 = *(_QWORD *)(v91 + 4920);
      v105 = v103;
      if ( v104 && v104 - 2 > 1 )
      {
        if ( v104 == 1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
        if ( *(_BYTE *)(v104 + 2) <= 0x3Cu )
          ndisBugCheckEx(0x1EuLL, 2uLL, v104, 0x3CuLL);
        v106 = *(unsigned __int8 *)(v104 + 1);
        if ( *(_BYTE *)(v104 + 1) )
        {
          if ( v106 == 1 )
          {
            v140 = v104 + 3848;
            v141 = *(_DWORD *)(v104 + 3904);
            v142 = (unsigned __int16)v141 >> 1;
            if ( v141 >> 17 < 0x3FFE && v142 == (v141 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v104 + 3848));
              *(_DWORD *)(v140 + 56) &= 0x10001u;
            }
            else
            {
              if ( v142 == 0 && (v141 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v104, 0x3CuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v104 + 3848), 0);
            }
          }
        }
        else
        {
          v107 = *(_QWORD *)(v104 + 8);
          if ( v107 && (v108 = *(_BYTE *)(v104 + 3)) != 0 )
          {
            while ( 1 )
            {
              v109 = (_BYTE *)(v107 + 2LL * (unsigned __int8)v106);
              if ( *v109 == 60 )
              {
                v143 = v109[1];
                if ( v143 )
                  break;
              }
              LOBYTE(v106) = v106 + 1;
              if ( (unsigned __int8)v106 >= v108 )
                goto LABEL_174;
            }
            v109[1] = v143 - 1;
          }
          else
          {
LABEL_174:
            if ( !_bittestandreset((signed __int32 *)(v104 + 20), 0x1Cu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v104, 0x3CuLL);
          }
        }
      }
      v45 = (*(_DWORD *)(v91 + 4472))-- == 1;
      if ( v45 )
        v102 = 1;
      if ( (unsigned __int8)byte_1C009961B >= 4u )
        WPP_SF_qD(14LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v91, *(unsigned int *)(v91 + 4472));
      KeReleaseSpinLock((PKSPIN_LOCK)(v91 + 4464), v105);
      if ( v102 )
      {
        v144 = *(struct _KEVENT **)(v91 + 1608);
        if ( v144 )
          KeSetEvent(v144, 0, 0);
      }
      if ( (unsigned __int8)byte_1C009961B >= 4u )
        WPP_SF_q(26LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v91, v110);
      v4 = v183;
      v5 = v184;
    }
    if ( v5 )
    {
      NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v5 + 1440));
      ++*(_DWORD *)(v5 + 1304);
    }
    v6 = a1;
    goto LABEL_84;
  }
  v4 = 0LL;
LABEL_194:
  v6 = a1;
LABEL_86:
  KeReleaseSpinLock(&ndisIfListLock, v23);
  v61 = v178;
  if ( v178 < 0 )
    goto LABEL_91;
  if ( v4 )
  {
    v62 = *((_QWORD *)v6 + 1);
    HIDWORD(v185[6]) = 0;
    switch ( v62 )
    {
      case 0LL:
LABEL_89:
        v185[5] = *((_QWORD *)v6 + 5);
        LODWORD(v185[6]) = *((_DWORD *)v6 + 12);
        LODWORD(v185[4]) = 0;
        ndisNsiGetInterfaceRwInformation(
          (struct _NDIS_IF_BLOCK *)v4,
          (struct _NDIS_IF_BLOCK *)v5,
          (struct _NM_REQUEST_GET_PARAMETER *)v185);
        *((_DWORD *)v6 + 12) = v185[6];
        LODWORD(v185[4]) = 1;
        v185[5] = *((_QWORD *)v6 + 7);
        LODWORD(v185[6]) = *((_DWORD *)v6 + 16);
        ndisNsiGetInterfaceRodInformation(
          (struct _NDIS_IF_BLOCK *)v4,
          (struct _NDIS_IF_BLOCK *)v5,
          (struct _NM_REQUEST_GET_PARAMETER *)v185);
        *((_DWORD *)v6 + 16) = v185[6];
        v185[5] = *((_QWORD *)v6 + 9);
        LODWORD(v185[6]) = *((_DWORD *)v6 + 20);
        LODWORD(v185[4]) = 2;
        ndisNsiGetInterfaceRosInformation(
          (struct _NDIS_IF_BLOCK *)v4,
          (struct _NDIS_IF_BLOCK *)v5,
          (struct _NM_REQUEST_GET_PARAMETER *)v185);
LABEL_90:
        *((_DWORD *)v6 + 20) = v185[6];
        goto LABEL_91;
      case 1LL:
        goto LABEL_192;
      case 12LL:
        goto LABEL_89;
      case 13LL:
LABEL_192:
        LODWORD(v185[4]) = 1;
        v185[5] = *((_QWORD *)v6 + 7);
        LODWORD(v185[6]) = *((_DWORD *)v6 + 16);
        ndisNsiGetInterfaceRodEnumObject(
          (struct _NDIS_IF_BLOCK *)v4,
          (struct _NDIS_IF_BLOCK *)v5,
          (struct _NM_REQUEST_GET_PARAMETER *)v185);
        *((_DWORD *)v6 + 16) = v185[6];
        v185[5] = *((_QWORD *)v6 + 9);
        LODWORD(v185[6]) = *((_DWORD *)v6 + 20);
        LODWORD(v185[4]) = 2;
        ndisNsiGetInterfaceRosEnumObject(
          (struct _NDIS_IF_BLOCK *)v4,
          (struct _NDIS_IF_BLOCK *)v5,
          (struct _NM_REQUEST_GET_PARAMETER *)v185);
        goto LABEL_90;
    }
    v61 = -1073741811;
    v178 = -1073741811;
  }
  else if ( *((_DWORD *)v6 + 8) )
  {
    v61 = -2147483622;
    v178 = -2147483622;
  }
  else
  {
    v61 = -1073741772;
    v178 = -1073741772;
  }
LABEL_91:
  v63 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 1402) )
    {
      v64 = *(_QWORD *)(v5 + 1416) + 320LL;
      v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v64);
      v66 = *(_QWORD *)(v64 + 16);
      v67 = v65;
      if ( v66 - 2 > 1 )
      {
        if ( v66 <= 1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v66, 0LL);
        if ( *(_BYTE *)(v66 + 2) <= 0xBu )
          ndisBugCheckEx(0x1EuLL, 2uLL, v66, 0xBuLL);
        v68 = *(unsigned __int8 *)(v66 + 1);
        if ( *(_BYTE *)(v66 + 1) )
        {
          if ( v68 == 1 )
          {
            v145 = v66 + 712;
            v146 = *(_DWORD *)(v66 + 768);
            v147 = (unsigned __int16)v146 >> 1;
            if ( v146 >> 17 < 0x3FFE && v147 == (v146 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v66 + 712));
              *(_DWORD *)(v145 + 56) &= 0x10001u;
            }
            else
            {
              if ( v147 == 0 && (v146 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v66, 0xBuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v66 + 712), 0);
            }
            v61 = v178;
          }
        }
        else
        {
          v69 = *(_QWORD *)(v66 + 8);
          if ( v69 && (v70 = *(_BYTE *)(v66 + 3)) != 0 )
          {
            while ( 1 )
            {
              v71 = (_BYTE *)(v69 + 2LL * (unsigned __int8)v68);
              if ( *v71 == 11 )
              {
                v72 = v71[1];
                if ( v72 )
                  break;
              }
              LOBYTE(v68) = v68 + 1;
              if ( (unsigned __int8)v68 >= v70 )
                goto LABEL_102;
            }
            v71[1] = v72 - 1;
          }
          else
          {
LABEL_102:
            if ( !_bittestandreset((signed __int32 *)(v66 + 16), 0xBu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v66, 0xBuLL);
          }
        }
      }
      v45 = (*(_WORD *)(v64 + 8))-- == 1;
      if ( v45 && !*(_BYTE *)(v64 + 11) )
      {
        NdisFreeRefCount(*(_QWORD *)(v64 + 16));
        *(_QWORD *)(v64 + 16) = 1LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v64, v67);
    }
    v73 = *(_QWORD *)(v5 + 1440);
    if ( v73 - 2 > 1 )
    {
      if ( v73 <= 1 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v73, 0LL);
      if ( *(_BYTE *)(v73 + 2) <= 4u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v73, 4uLL);
      v74 = *(unsigned __int8 *)(v73 + 1);
      if ( *(_BYTE *)(v73 + 1) )
      {
        if ( v74 == 1 )
        {
          v148 = v73 + 264;
          v149 = *(_DWORD *)(v73 + 320);
          v150 = (unsigned __int16)v149 >> 1;
          if ( v149 >> 17 < 0x3FFE && v150 == (v149 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v73 + 264));
            *(_DWORD *)(v148 + 56) &= 0x10001u;
          }
          else
          {
            if ( v150 == 0 && (v149 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v73, 4uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v73 + 264), 0);
          }
        }
      }
      else
      {
        v75 = *(_QWORD *)(v73 + 8);
        if ( v75 && (v76 = *(_BYTE *)(v73 + 3)) != 0 )
        {
          while ( 1 )
          {
            v77 = (_BYTE *)(v75 + 2LL * (unsigned __int8)v74);
            if ( *v77 == 4 )
            {
              v87 = v77[1];
              if ( v87 )
                break;
            }
            LOBYTE(v74) = v74 + 1;
            if ( (unsigned __int8)v74 >= v76 )
              goto LABEL_115;
          }
          v77[1] = v87 - 1;
        }
        else
        {
LABEL_115:
          if ( !_bittestandreset((signed __int32 *)(v73 + 16), 4u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v73, 4uLL);
        }
      }
    }
    v45 = (*(_DWORD *)(v5 + 1304))-- == 1;
    if ( v45 )
    {
      v151 = *(_DWORD *)(v5 + 4);
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v5);
      *(_QWORD *)(v5 + 1296) = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v152 = *(_QWORD *)(v5 + 1232);
      if ( *(_QWORD *)(v152 + 8) != v5 + 1232 || (v153 = *(_QWORD **)(v5 + 1240), *v153 != v5 + 1232) )
        __fastfail(3u);
      *v153 = v152;
      *(_QWORD *)(v152 + 8) = v153;
      v154 = *(_QWORD *)(v5 + 1248);
      if ( *(_QWORD *)(v154 + 8) != v5 + 1248 || (v155 = *(_QWORD **)(v5 + 1256), *v155 != v5 + 1248) )
        __fastfail(3u);
      *v155 = v154;
      *(_QWORD *)(v154 + 8) = v155;
      v156 = *(_QWORD *)(v5 + 1264);
      if ( *(_QWORD *)(v156 + 8) != v5 + 1264 || (v157 = *(_QWORD **)(v5 + 1272), *v157 != v5 + 1264) )
        __fastfail(3u);
      *v157 = v156;
      *(_QWORD *)(v156 + 8) = v157;
      NETWORKBLOCK_DECREMENT_REF(*(_QWORD *)(v5 + 1376));
      v158 = (unsigned int)(v151 - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v158 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v158) &= ~(1 << ((v151 - 1) & 7));
      v159 = *(_QWORD *)(v5 + 1440);
      --ndisInterfaceCount;
      NdisFreeRefCount(v159);
      v160 = *(void **)(v5 + 1432);
      *(_QWORD *)(v5 + 1440) = 0LL;
      if ( v160 )
      {
        ExFreePoolWithTag(v160, 0);
        *(_QWORD *)(v5 + 1432) = 0LL;
      }
      v161 = *(void **)(v5 + 1280);
      if ( v161 )
      {
        ExFreePoolWithTag(v161, 0);
        *(_QWORD *)(v5 + 1280) = 0LL;
        *(_QWORD *)(v5 + 1288) = 0LL;
      }
      v162 = *(struct _KEVENT **)(v5 + 1392);
      if ( v162 )
        KeSetEvent(v162, 0, 0);
      ExFreePoolWithTag((PVOID)v5, 0);
    }
  }
  if ( v4 )
  {
    v78 = (ULONG_PTR)v4[90].Flink;
    if ( v78 - 2 > 1 )
    {
      if ( v78 <= 1 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v78, 0LL);
      if ( *(_BYTE *)(v78 + 2) <= 3u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v78, 3uLL);
      v79 = *(unsigned __int8 *)(v78 + 1);
      if ( *(_BYTE *)(v78 + 1) )
      {
        if ( v79 == 1 )
        {
          v163 = v78 + 200;
          v164 = *(_DWORD *)(v78 + 256);
          v165 = (unsigned __int16)v164 >> 1;
          if ( v164 >> 17 < 0x3FFE && v165 == (v164 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v78 + 200));
            *(_DWORD *)(v163 + 56) &= 0x10001u;
          }
          else
          {
            if ( v165 == 0 && (v164 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v78, 3uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v78 + 200), 0);
          }
        }
      }
      else
      {
        v80 = *(_QWORD *)(v78 + 8);
        if ( v80 && (v81 = *(_BYTE *)(v78 + 3)) != 0 )
        {
          while ( 1 )
          {
            v82 = (_BYTE *)(v80 + 2LL * (unsigned __int8)v79);
            if ( *v82 == 3 )
            {
              v89 = v82[1];
              if ( v89 )
                break;
            }
            LOBYTE(v79) = v79 + 1;
            if ( (unsigned __int8)v79 >= v81 )
              goto LABEL_126;
          }
          v82[1] = v89 - 1;
        }
        else
        {
LABEL_126:
          if ( !_bittestandreset((signed __int32 *)(v78 + 16), 3u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v78, 3uLL);
        }
      }
    }
    v45 = LODWORD(v4[81].Blink)-- == 1;
    if ( v45 )
    {
      Flink_high = HIDWORD(v4->Flink);
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v4);
      v4[81].Flink = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v167 = v4[77].Flink;
      if ( v167->Blink != &v4[77] || (v168 = v4[77].Blink, v168->Flink != &v4[77]) )
        __fastfail(3u);
      v168->Flink = v167;
      v167->Blink = v168;
      v169 = v4[78].Flink;
      if ( v169->Blink != &v4[78] || (v170 = v4[78].Blink, v170->Flink != &v4[78]) )
        __fastfail(3u);
      v170->Flink = v169;
      v169->Blink = v170;
      v171 = v4[79].Flink;
      if ( v171->Blink != &v4[79] || (v172 = v4[79].Blink, v172->Flink != &v4[79]) )
        __fastfail(3u);
      v172->Flink = v171;
      v171->Blink = v172;
      NETWORKBLOCK_DECREMENT_REF(v4[86].Flink);
      v173 = (unsigned int)(Flink_high - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v173 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v173) &= ~(1 << ((Flink_high - 1) & 7));
      v174 = (ULONG_PTR)v4[90].Flink;
      --ndisInterfaceCount;
      NdisFreeRefCount(v174);
      v175 = v4[89].Blink;
      v4[90].Flink = 0LL;
      if ( v175 )
      {
        ExFreePoolWithTag(v175, 0);
        v4[89].Blink = 0LL;
      }
      v176 = v4[80].Flink;
      if ( v176 )
      {
        ExFreePoolWithTag(v176, 0);
        v4[80].Flink = 0LL;
        v4[80].Blink = 0LL;
      }
      v177 = (struct _KEVENT *)v4[87].Flink;
      if ( v177 )
        KeSetEvent(v177, 0, 0);
      ExFreePoolWithTag(v4, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v63);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qD(83LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, v6, v61);
  return v61;
}
