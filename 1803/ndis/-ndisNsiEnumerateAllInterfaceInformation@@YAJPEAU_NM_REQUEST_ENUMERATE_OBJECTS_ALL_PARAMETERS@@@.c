/*
 * XREFs of ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000E630
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB30 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 *     ndisIfDeleteStackEntries @ 0x1C0013B3C (ndisIfDeleteStackEntries.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0014988 (NETWORKBLOCK_DECREMENT_REF.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C00686C4 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00ADDC0 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00AF730 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInterfaceInformation(
        struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r13d
  int v5; // edi
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v6; // r12
  struct _KTHREAD *CurrentThread; // rsi
  int *ThreadProperty; // rax
  int *v9; // rcx
  int v10; // r14d
  unsigned int v11; // ebx
  PACCESS_TOKEN v12; // rax
  void *v13; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  KIRQL v16; // al
  _LIST_ENTRY *v17; // rcx
  KIRQL v18; // r8
  _LIST_ENTRY *Flink; // rax
  unsigned int v20; // edx
  KIRQL v21; // si
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *Blink; // rdx
  __int64 v24; // rbx
  void *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // r10d
  unsigned int v30; // r9d
  unsigned int v31; // r8d
  _LIST_ENTRY *v32; // rdi
  unsigned int v33; // r8d
  _LIST_ENTRY *v34; // rcx
  _LIST_ENTRY *v35; // r15
  __int64 v36; // r13
  KIRQL v37; // di
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rdi
  KIRQL v42; // r14
  int v43; // esi
  unsigned __int16 v44; // ax
  struct _NDIS_REFCOUNT_BLOCK *v45; // rcx
  KIRQL v46; // di
  ULONG_PTR v47; // r8
  __int64 v48; // rcx
  bool v49; // zf
  struct _KEVENT *v50; // rcx
  __int64 v51; // r9
  char v52; // si
  KIRQL v53; // al
  ULONG_PTR v54; // r8
  KIRQL v55; // r14
  int v56; // ecx
  __int64 v57; // r10
  unsigned __int8 v58; // r9
  _BYTE *v59; // rdx
  __int64 v60; // r9
  __int64 v61; // rbx
  char *v62; // rsi
  __int64 v63; // rbx
  __int64 v64; // rsi
  __int64 v65; // rbx
  __int64 v66; // rsi
  __int64 v67; // rbx
  KIRQL v68; // al
  ULONG_PTR v69; // r8
  KIRQL v70; // si
  int v71; // ecx
  __int64 v72; // r10
  unsigned __int8 v73; // r9
  _BYTE *v74; // rdx
  char v75; // al
  ULONG_PTR v76; // r8
  int v77; // ecx
  __int64 v78; // r10
  unsigned __int8 v79; // r9
  _BYTE *v80; // rdx
  ULONG_PTR v81; // r8
  __int64 v82; // r9
  unsigned __int8 v83; // r10
  unsigned __int8 v84; // dl
  _BYTE *v85; // rcx
  char v86; // al
  char v87; // al
  __int64 v88; // rax
  __int64 v89; // r15
  __int64 v90; // rdi
  KIRQL v91; // r14
  int v92; // esi
  unsigned __int16 v93; // ax
  struct _NDIS_REFCOUNT_BLOCK *v94; // rcx
  KIRQL v95; // di
  ULONG_PTR v96; // r8
  __int64 v97; // rcx
  struct _KEVENT *v98; // rcx
  __int64 v99; // r9
  char v100; // si
  KIRQL v101; // al
  ULONG_PTR v102; // r8
  KIRQL v103; // r14
  int v104; // ecx
  __int64 v105; // r10
  unsigned __int8 v106; // r9
  _BYTE *v107; // rdx
  __int64 v108; // r9
  KIRQL v109; // al
  KIRQL v110; // di
  ULONG_PTR v111; // r8
  __int64 v112; // rcx
  unsigned __int8 v113; // r10
  unsigned __int8 v114; // dl
  _BYTE *v115; // r9
  unsigned __int8 v116; // r10
  unsigned __int8 v117; // dl
  _BYTE *v118; // r9
  NTSTATUS v119; // ebx
  unsigned __int8 v120; // r10
  unsigned __int8 v121; // dl
  _BYTE *v122; // r9
  KIRQL v123; // r8
  unsigned __int64 v124; // r8
  unsigned __int64 v125; // rdx
  ULONG_PTR v126; // rbx
  unsigned int v127; // edx
  int v128; // ecx
  char v129; // al
  ULONG_PTR v130; // rbx
  unsigned int v131; // edx
  int v132; // ecx
  char v133; // al
  struct _KEVENT *v134; // rcx
  ULONG_PTR v135; // rbx
  unsigned int v136; // edx
  int v137; // ecx
  char v138; // al
  _LIST_ENTRY *v139; // rax
  struct _KEVENT *v140; // rcx
  ULONG_PTR v141; // rbx
  unsigned int v142; // edx
  int v143; // ecx
  char v144; // al
  ULONG_PTR v145; // rbx
  unsigned int v146; // edx
  int v147; // ecx
  char v148; // al
  struct _KEVENT *v149; // rcx
  ULONG_PTR v150; // rdi
  unsigned int v151; // edx
  int v152; // ecx
  ULONG_PTR v153; // rbx
  unsigned int v154; // edx
  int v155; // ecx
  int v156; // ebx
  __int64 v157; // rdx
  _QWORD *v158; // rcx
  __int64 v159; // rdx
  _QWORD *v160; // rcx
  __int64 v161; // rdx
  _QWORD *v162; // rcx
  unsigned int v163; // ecx
  ULONG_PTR v164; // rcx
  void *v165; // rcx
  void *v166; // rcx
  struct _KEVENT *v167; // rcx
  ULONG_PTR v168; // rbx
  unsigned int v169; // edx
  int v170; // ecx
  int Flink_high; // ebx
  _LIST_ENTRY *v172; // rcx
  _LIST_ENTRY *v173; // rax
  _LIST_ENTRY *v174; // rdx
  _LIST_ENTRY *v175; // rcx
  _LIST_ENTRY *v176; // rdx
  _LIST_ENTRY *v177; // rcx
  unsigned int v178; // ecx
  ULONG_PTR v179; // rcx
  _LIST_ENTRY *v180; // rcx
  _LIST_ENTRY *v181; // rcx
  struct _KEVENT *v182; // rcx
  KIRQL v183; // [rsp+30h] [rbp-99h]
  BOOLEAN EffectiveOnly; // [rsp+31h] [rbp-98h] BYREF
  BOOLEAN CopyOnOpen[6]; // [rsp+32h] [rbp-97h] BYREF
  _LIST_ENTRY *v186; // [rsp+38h] [rbp-91h]
  int v187; // [rsp+40h] [rbp-89h]
  unsigned int v188; // [rsp+44h] [rbp-85h]
  unsigned int Size; // [rsp+48h] [rbp-81h]
  unsigned int Size_4; // [rsp+4Ch] [rbp-7Dh]
  unsigned int v191; // [rsp+50h] [rbp-79h]
  _LIST_ENTRY *v192; // [rsp+58h] [rbp-71h]
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v193; // [rsp+60h] [rbp-69h]
  void *v194; // [rsp+68h] [rbp-61h]
  __int64 v195; // [rsp+70h] [rbp-59h]
  __int64 v196; // [rsp+78h] [rbp-51h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+80h] [rbp-49h] BYREF
  PVOID TokenInformation; // [rsp+88h] [rbp-41h] BYREF
  _LIST_ENTRY *v199; // [rsp+90h] [rbp-39h]
  _QWORD v200[8]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v201; // [rsp+E0h] [rbp+17h]
  __int128 v202; // [rsp+E8h] [rbp+1Fh]

  v4 = *((_DWORD *)a1 + 22);
  v5 = 0;
  v193 = a1;
  v6 = a1;
  v188 = v4;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(86LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a4);
  KeEnterCriticalRegion();
  CurrentThread = KeGetCurrentThread();
  v201 = 0LL;
  v202 = 0uLL;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v9 = ThreadProperty;
  if ( ThreadProperty )
  {
    v10 = *ThreadProperty;
    LODWORD(v201) = ThreadProperty[1];
    HIDWORD(v201) = v10;
    ObfDereferenceObject(ThreadProperty);
    v11 = v10;
  }
  else
  {
    v10 = 0;
    v201 = 0LL;
    v11 = 0;
  }
  if ( !v11 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
    }
    else
    {
      v12 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v13 = v12;
      if ( v12 )
      {
        v119 = SeQueryInformationToken(v12, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v13);
        if ( v119 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_10;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_10:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < ndisCmSessionCount )
    {
      v10 = 0;
      v123 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ThreadSessionId < ndisCmSessionCount )
        v10 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v123);
      if ( !v10 )
        v10 = 1;
    }
    else
    {
      v10 = 1;
    }
    HIDWORD(v201) = v10;
    v11 = v10;
  }
  v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v17 = 0LL;
  v18 = v16;
  Flink = ndisIfCompartmentList.Flink;
  if ( ndisIfCompartmentList.Flink != &ndisIfCompartmentList )
  {
    while ( 1 )
    {
      v20 = (unsigned int)Flink[1].Flink;
      if ( v20 == v11 )
        break;
      if ( v20 <= v11 )
      {
        Flink = Flink->Flink;
        if ( Flink != &ndisIfCompartmentList )
          continue;
      }
      goto LABEL_18;
    }
    v17 = Flink;
  }
LABEL_18:
  v202 = *(__int128 *)((char *)&v17[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v18);
  v183 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v21 = v183;
  if ( !v4 )
  {
    for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
    {
      Blink = i[9].Blink;
      if ( v10 == LODWORD(Blink[1].Flink) )
        goto LABEL_21;
      if ( (_DWORD)v201 == -1 )
      {
        v124 = v202 - *(unsigned __int64 *)((char *)&Blink[105].Flink + 4);
        if ( (_LIST_ENTRY *)v202 == *(_LIST_ENTRY **)((char *)&Blink[105].Flink + 4) )
          v124 = *((_QWORD *)&v202 + 1) - *(unsigned __int64 *)((char *)&Blink[105].Blink + 4);
        if ( !v124 )
          goto LABEL_21;
      }
      if ( ((__int64)Blink[105].Flink & 2) == 0 && v10 == 1 )
LABEL_21:
        ++v5;
    }
    *((_DWORD *)v6 + 22) = v5;
    if ( v5 )
      goto LABEL_24;
    LODWORD(v24) = 0;
    goto LABEL_25;
  }
  v26 = (void *)*((_QWORD *)v6 + 2);
  v27 = *((_QWORD *)v6 + 7);
  v28 = *((_QWORD *)v6 + 9);
  v29 = *((_DWORD *)v6 + 6);
  v30 = *((_DWORD *)v6 + 16);
  v31 = *((_DWORD *)v6 + 20);
  Size = v29;
  Size_4 = v30;
  v191 = v31;
  v194 = v26;
  v195 = v27;
  v196 = v28;
  if ( v26 && v29 != 8 || *((_QWORD *)v6 + 5) || *((_DWORD *)v6 + 12) || v27 && v30 < 0x28C || v28 && v31 < 0x238 )
  {
    LODWORD(v24) = -1073741306;
    goto LABEL_25;
  }
  memset(v200, 0, sizeof(v200));
  v32 = ndisIfList.Flink;
  v24 = 0LL;
  v186 = ndisIfList.Flink;
  HIDWORD(v200[6]) = 0;
  v33 = 0;
  while ( v32 != &ndisIfList )
  {
    v34 = v32[9].Blink;
    v35 = v32 - 77;
    v199 = v32;
    v192 = v32 - 77;
    if ( v10 == LODWORD(v34[1].Flink) )
      goto LABEL_38;
    if ( (_DWORD)v201 == -1 )
    {
      v125 = v202 - *(unsigned __int64 *)((char *)&v34[105].Flink + 4);
      if ( (_LIST_ENTRY *)v202 == *(_LIST_ENTRY **)((char *)&v34[105].Flink + 4) )
        v125 = *((_QWORD *)&v202 + 1) - *(unsigned __int64 *)((char *)&v34[105].Blink + 4);
      if ( !v125 )
        goto LABEL_38;
    }
    if ( ((__int64)v34[105].Flink & 2) == 0 && v10 == 1 )
    {
LABEL_38:
      v187 = ++v33;
      if ( v33 <= v4 )
      {
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v35[90].Flink, 6u);
        ++LODWORD(v35[81].Blink);
        v36 = 0LL;
        if ( BYTE1(v35[87].Blink) && *((_QWORD *)v6 + 1) < 2uLL )
        {
          v37 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
          if ( BYTE3(v35[87].Blink) )
          {
            v24 = (__int64)v35[88].Blink;
            NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v35[90].Blink, 3u);
            ++HIDWORD(v35[87].Blink);
          }
          KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v37);
          if ( v24 )
          {
            v88 = ndisReferenceTopMiniportByNameForNsi(v24, 0, v38, 0, 2u, 0x3Cu);
            v89 = v88;
            if ( v88 )
            {
              KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v88 + 96));
              v90 = *(_QWORD *)(v89 + 2056);
              *(_QWORD *)(v89 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v89 + 1856) = 2234961;
              if ( v90 )
              {
                while ( 1 )
                {
                  v91 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v90 + 320));
                  v92 = 1;
                  if ( !*(_BYTE *)(v90 + 330) )
                  {
                    v93 = *(_WORD *)(v90 + 328);
                    if ( v93 >= 0xFFEBu )
                    {
                      ndisRefCountReferenceCountOverflow = 1;
                      v92 = 2;
                    }
                    else
                    {
                      v94 = *(struct _NDIS_REFCOUNT_BLOCK **)(v90 + 336);
                      *(_WORD *)(v90 + 328) = v93 + 1;
                      NdisReferenceWithTag(v94, 0xBu);
                      v92 = 0;
                    }
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)(v90 + 320), v91);
                  if ( !v92 )
                    break;
                  v90 = *(_QWORD *)(v90 + 112);
                  if ( !v90 )
                    goto LABEL_227;
                }
                v36 = *(_QWORD *)(v90 + 840);
              }
              else
              {
LABEL_227:
                v36 = *(_QWORD *)(v89 + 4064);
              }
              *(_QWORD *)(v89 + 520) = 0LL;
              *(_DWORD *)(v89 + 1856) = 0;
              KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v89 + 96));
              v95 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v89 + 96));
              v96 = *(_QWORD *)(v89 + 4928);
              *(_QWORD *)(v89 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v89 + 1856) = 71394;
              if ( v96 - 2 > 1 )
              {
                if ( v96 < 2 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, v96, 0LL);
                if ( *(_BYTE *)(v96 + 2) <= 2u )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v96, 2uLL);
                if ( *(_BYTE *)(v96 + 1) )
                {
                  if ( *(_BYTE *)(v96 + 1) == 1 )
                  {
                    v126 = v96 + 136;
                    v127 = *(_DWORD *)(v96 + 192);
                    v128 = (unsigned __int16)v127 >> 1;
                    if ( v127 >> 17 < 0x3FFE && v128 == (v127 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v96 + 136));
                      *(_DWORD *)(v126 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( v128 == 0 && (v127 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, v96, 2uLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v96 + 136), 0);
                    }
                  }
                }
                else
                {
                  v97 = *(_QWORD *)(v96 + 8);
                  if ( v97 && (v116 = *(_BYTE *)(v96 + 3), v117 = 0, v116) )
                  {
                    while ( 1 )
                    {
                      v118 = (_BYTE *)(v97 + 2LL * v117);
                      if ( *v118 == 2 )
                      {
                        v129 = v118[1];
                        if ( v129 )
                          break;
                      }
                      if ( ++v117 >= v116 )
                        goto LABEL_149;
                    }
                    v118[1] = v129 - 1;
                  }
                  else
                  {
LABEL_149:
                    if ( !_bittestandreset((signed __int32 *)(v96 + 16), 2u) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v96, 2uLL);
                  }
                }
              }
              v49 = (*(_DWORD *)(v89 + 3132))-- == 1;
              if ( v49 )
              {
                v98 = *(struct _KEVENT **)(v89 + 3144);
                if ( v98 )
                  KeSetEvent(v98, 0, 0);
              }
              *(_QWORD *)(v89 + 520) = 0LL;
              *(_DWORD *)(v89 + 1856) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(v89 + 96), v95);
              if ( (unsigned __int8)byte_1C009961B >= 4u )
                WPP_SF_q(25LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v89, v99);
              v100 = 0;
              v101 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v89 + 4464));
              v102 = *(_QWORD *)(v89 + 4920);
              v103 = v101;
              if ( v102 && v102 - 2 > 1 )
              {
                if ( v102 == 1 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                if ( *(_BYTE *)(v102 + 2) <= 0x3Cu )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v102, 0x3CuLL);
                v104 = *(unsigned __int8 *)(v102 + 1);
                if ( *(_BYTE *)(v102 + 1) )
                {
                  if ( v104 == 1 )
                  {
                    v130 = v102 + 3848;
                    v131 = *(_DWORD *)(v102 + 3904);
                    v132 = (unsigned __int16)v131 >> 1;
                    if ( v131 >> 17 < 0x3FFE && v132 == (v131 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v102 + 3848));
                      *(_DWORD *)(v130 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( v132 == 0 && (v131 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, v102, 0x3CuLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v102 + 3848), 0);
                    }
                  }
                }
                else
                {
                  v105 = *(_QWORD *)(v102 + 8);
                  if ( v105 && (v106 = *(_BYTE *)(v102 + 3)) != 0 )
                  {
                    while ( 1 )
                    {
                      v107 = (_BYTE *)(v105 + 2LL * (unsigned __int8)v104);
                      if ( *v107 == 60 )
                      {
                        v133 = v107[1];
                        if ( v133 )
                          break;
                      }
                      LOBYTE(v104) = v104 + 1;
                      if ( (unsigned __int8)v104 >= v106 )
                        goto LABEL_164;
                    }
                    v107[1] = v133 - 1;
                  }
                  else
                  {
LABEL_164:
                    if ( !_bittestandreset((signed __int32 *)(v102 + 20), 0x1Cu) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v102, 0x3CuLL);
                  }
                }
              }
              v49 = (*(_DWORD *)(v89 + 4472))-- == 1;
              if ( v49 )
                v100 = 1;
              if ( (unsigned __int8)byte_1C009961B >= 4u )
                WPP_SF_qD(14LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v89, *(unsigned int *)(v89 + 4472));
              KeReleaseSpinLock((PKSPIN_LOCK)(v89 + 4464), v103);
              if ( v100 )
              {
                v134 = *(struct _KEVENT **)(v89 + 1608);
                if ( v134 )
                  KeSetEvent(v134, 0, 0);
              }
              if ( (unsigned __int8)byte_1C009961B >= 4u )
                WPP_SF_q(26LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v89, v108);
              v10 = HIDWORD(v201);
            }
            else
            {
              v36 = 0LL;
            }
            v109 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
            v35 = v192;
            v110 = v109;
            v111 = (ULONG_PTR)v192[90].Blink;
            if ( v111 - 2 > 1 )
            {
              if ( v111 < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, v111, 0LL);
              if ( *(_BYTE *)(v111 + 2) <= 3u )
                ndisBugCheckEx(0x1EuLL, 2uLL, v111, 3uLL);
              if ( *(_BYTE *)(v111 + 1) )
              {
                if ( *(_BYTE *)(v111 + 1) == 1 )
                {
                  v135 = v111 + 200;
                  v136 = *(_DWORD *)(v111 + 256);
                  v137 = (unsigned __int16)v136 >> 1;
                  if ( v136 >> 17 < 0x3FFE && v137 == (v136 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v111 + 200));
                    *(_DWORD *)(v135 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( v137 == 0 && (v136 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v111, 3uLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v111 + 200), 0);
                  }
                }
              }
              else
              {
                v112 = *(_QWORD *)(v111 + 8);
                if ( v112 && (v120 = *(_BYTE *)(v111 + 3), v121 = 0, v120) )
                {
                  while ( 1 )
                  {
                    v122 = (_BYTE *)(v112 + 2LL * v121);
                    if ( *v122 == 3 )
                    {
                      v138 = v122[1];
                      if ( v138 )
                        break;
                    }
                    if ( ++v121 >= v120 )
                      goto LABEL_178;
                  }
                  v122[1] = v138 - 1;
                }
                else
                {
LABEL_178:
                  if ( !_bittestandreset((signed __int32 *)(v111 + 16), 3u) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v111, 3uLL);
                }
              }
            }
            v49 = HIDWORD(v35[87].Blink)-- == 1;
            if ( v49 )
            {
              v139 = v35[88].Blink;
              if ( v139 )
              {
                v140 = (struct _KEVENT *)v139[254].Blink;
                if ( v140 )
                  KeSetEvent(v140, 0, 0);
              }
            }
            KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v110);
LABEL_81:
            if ( v36 )
            {
              NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v36 + 1440), 7u);
              ++*(_DWORD *)(v36 + 1304);
            }
            v21 = v183;
            v6 = v193;
          }
          else if ( BYTE2(v35[87].Blink) )
          {
            v39 = ndisReferenceTopMiniportByNameForNsi((__int64)v35[88].Blink[2].Flink, 0, v38, 0, 2u, 0x3Cu);
            v40 = v39;
            if ( v39 )
            {
              KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v39 + 96));
              v41 = *(_QWORD *)(v40 + 2056);
              *(_QWORD *)(v40 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v40 + 1856) = 2234961;
              if ( v41 )
              {
                while ( 1 )
                {
                  v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v41 + 320));
                  v43 = 1;
                  if ( !*(_BYTE *)(v41 + 330) )
                  {
                    v44 = *(_WORD *)(v41 + 328);
                    if ( v44 >= 0xFFEBu )
                    {
                      ndisRefCountReferenceCountOverflow = 1;
                      v43 = 2;
                    }
                    else
                    {
                      v45 = *(struct _NDIS_REFCOUNT_BLOCK **)(v41 + 336);
                      *(_WORD *)(v41 + 328) = v44 + 1;
                      NdisReferenceWithTag(v45, 0xBu);
                      v43 = 0;
                    }
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)(v41 + 320), v42);
                  if ( !v43 )
                    break;
                  v41 = *(_QWORD *)(v41 + 112);
                  if ( !v41 )
                    goto LABEL_259;
                }
                v36 = *(_QWORD *)(v41 + 840);
              }
              else
              {
LABEL_259:
                v36 = *(_QWORD *)(v40 + 4064);
              }
              *(_QWORD *)(v40 + 520) = 0LL;
              *(_DWORD *)(v40 + 1856) = 0;
              KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v40 + 96));
              v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v40 + 96));
              v47 = *(_QWORD *)(v40 + 4928);
              *(_QWORD *)(v40 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v40 + 1856) = 71394;
              if ( v47 - 2 > 1 )
              {
                if ( v47 < 2 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, v47, 0LL);
                if ( *(_BYTE *)(v47 + 2) <= 2u )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v47, 2uLL);
                if ( *(_BYTE *)(v47 + 1) )
                {
                  if ( *(_BYTE *)(v47 + 1) == 1 )
                  {
                    v141 = v47 + 136;
                    v142 = *(_DWORD *)(v47 + 192);
                    v143 = (unsigned __int16)v142 >> 1;
                    if ( v142 >> 17 < 0x3FFE && v143 == (v142 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v47 + 136));
                      *(_DWORD *)(v141 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( v143 == 0 && (v142 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, v47, 2uLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v47 + 136), 0);
                    }
                  }
                }
                else
                {
                  v48 = *(_QWORD *)(v47 + 8);
                  if ( v48 && (v113 = *(_BYTE *)(v47 + 3), v114 = 0, v113) )
                  {
                    while ( 1 )
                    {
                      v115 = (_BYTE *)(v48 + 2LL * v114);
                      if ( *v115 == 2 )
                      {
                        v144 = v115[1];
                        if ( v144 )
                          break;
                      }
                      if ( ++v114 >= v113 )
                        goto LABEL_57;
                    }
                    v115[1] = v144 - 1;
                  }
                  else
                  {
LABEL_57:
                    if ( !_bittestandreset((signed __int32 *)(v47 + 16), 2u) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v47, 2uLL);
                  }
                }
              }
              v49 = (*(_DWORD *)(v40 + 3132))-- == 1;
              if ( v49 )
              {
                v50 = *(struct _KEVENT **)(v40 + 3144);
                if ( v50 )
                  KeSetEvent(v50, 0, 0);
              }
              *(_QWORD *)(v40 + 520) = 0LL;
              *(_DWORD *)(v40 + 1856) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(v40 + 96), v46);
              if ( (unsigned __int8)byte_1C009961B >= 4u )
                WPP_SF_q(25LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v40, v51);
              v52 = 0;
              v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v40 + 4464));
              v54 = *(_QWORD *)(v40 + 4920);
              v55 = v53;
              if ( v54 && v54 - 2 > 1 )
              {
                if ( v54 == 1 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                if ( *(_BYTE *)(v54 + 2) <= 0x3Cu )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v54, 0x3CuLL);
                v56 = *(unsigned __int8 *)(v54 + 1);
                if ( *(_BYTE *)(v54 + 1) )
                {
                  if ( v56 == 1 )
                  {
                    v145 = v54 + 3848;
                    v146 = *(_DWORD *)(v54 + 3904);
                    v147 = (unsigned __int16)v146 >> 1;
                    if ( v146 >> 17 < 0x3FFE && v147 == (v146 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v54 + 3848));
                      *(_DWORD *)(v145 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( v147 == 0 && (v146 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, v54, 0x3CuLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v54 + 3848), 0);
                    }
                  }
                }
                else
                {
                  v57 = *(_QWORD *)(v54 + 8);
                  if ( v57 && (v58 = *(_BYTE *)(v54 + 3)) != 0 )
                  {
                    while ( 1 )
                    {
                      v59 = (_BYTE *)(v57 + 2LL * (unsigned __int8)v56);
                      if ( *v59 == 60 )
                      {
                        v148 = v59[1];
                        if ( v148 )
                          break;
                      }
                      LOBYTE(v56) = v56 + 1;
                      if ( (unsigned __int8)v56 >= v58 )
                        goto LABEL_72;
                    }
                    v59[1] = v148 - 1;
                  }
                  else
                  {
LABEL_72:
                    if ( !_bittestandreset((signed __int32 *)(v54 + 20), 0x1Cu) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v54, 0x3CuLL);
                  }
                }
              }
              v49 = (*(_DWORD *)(v40 + 4472))-- == 1;
              if ( v49 )
                v52 = 1;
              if ( (unsigned __int8)byte_1C009961B >= 4u )
                WPP_SF_qD(14LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v40, *(unsigned int *)(v40 + 4472));
              KeReleaseSpinLock((PKSPIN_LOCK)(v40 + 4464), v55);
              if ( v52 )
              {
                v149 = *(struct _KEVENT **)(v40 + 1608);
                if ( v149 )
                  KeSetEvent(v149, 0, 0);
              }
              if ( (unsigned __int8)byte_1C009961B >= 4u )
                WPP_SF_q(26LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v40, v60);
              v10 = HIDWORD(v201);
              v35 = v192;
              goto LABEL_81;
            }
            v35 = v192;
            v36 = 0LL;
          }
          v32 = v186;
        }
        KeReleaseSpinLock(&ndisIfListLock, v21);
        if ( *((_QWORD *)v6 + 2) )
        {
          v61 = Size;
          v62 = (char *)v194;
          memmove(v194, &v35[82], Size);
          v194 = &v62[v61];
        }
        if ( *((_QWORD *)v6 + 7) )
        {
          v63 = v195;
          v64 = Size_4;
          LODWORD(v200[4]) = 1;
          v200[5] = v195;
          LODWORD(v200[6]) = Size_4;
          ndisNsiGetInterfaceRodEnumObject(
            (struct _NDIS_IF_BLOCK *)v35,
            (struct _NDIS_IF_BLOCK *)v36,
            (struct _NM_REQUEST_GET_PARAMETER *)v200);
          v195 = v64 + v63;
        }
        if ( *((_QWORD *)v6 + 9) )
        {
          v65 = v196;
          v66 = v191;
          v200[5] = v196;
          LODWORD(v200[6]) = v191;
          LODWORD(v200[4]) = 2;
          ndisNsiGetInterfaceRosEnumObject(
            (struct _NDIS_IF_BLOCK *)v35,
            (struct _NDIS_IF_BLOCK *)v36,
            (struct _NM_REQUEST_GET_PARAMETER *)v200);
          v196 = v66 + v65;
        }
        v183 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        v21 = v183;
        if ( !v36 )
          goto LABEL_117;
        if ( *(_BYTE *)(v36 + 1402) )
        {
          v67 = *(_QWORD *)(v36 + 1416) + 320LL;
          v68 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v67);
          v69 = *(_QWORD *)(v67 + 16);
          v70 = v68;
          if ( v69 - 2 > 1 )
          {
            if ( v69 < 2 )
              ndisBugCheckEx(0x1EuLL, 3uLL, v69, 0LL);
            if ( *(_BYTE *)(v69 + 2) <= 0xBu )
              ndisBugCheckEx(0x1EuLL, 2uLL, v69, 0xBuLL);
            v71 = *(unsigned __int8 *)(v69 + 1);
            if ( *(_BYTE *)(v69 + 1) )
            {
              if ( v71 == 1 )
              {
                v150 = v69 + 712;
                v151 = *(_DWORD *)(v69 + 768);
                v152 = (unsigned __int16)v151 >> 1;
                if ( v151 >> 17 < 0x3FFE && v152 == (v151 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v69 + 712));
                  *(_DWORD *)(v150 + 56) &= 0x10001u;
                  v32 = v186;
                }
                else
                {
                  if ( v152 == 0 && (v151 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v69, 0xBuLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v69 + 712), 0);
                  v32 = v186;
                }
              }
            }
            else
            {
              v72 = *(_QWORD *)(v69 + 8);
              if ( v72 && (v73 = *(_BYTE *)(v69 + 3)) != 0 )
              {
                while ( 1 )
                {
                  v74 = (_BYTE *)(v72 + 2LL * (unsigned __int8)v71);
                  if ( *v74 == 11 )
                  {
                    v75 = v74[1];
                    if ( v75 )
                      break;
                  }
                  LOBYTE(v71) = v71 + 1;
                  if ( (unsigned __int8)v71 >= v73 )
                    goto LABEL_102;
                }
                v74[1] = v75 - 1;
              }
              else
              {
LABEL_102:
                if ( !_bittestandreset((signed __int32 *)(v69 + 16), 0xBu) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v69, 0xBuLL);
              }
            }
          }
          v49 = (*(_WORD *)(v67 + 8))-- == 1;
          if ( v49 && !*(_BYTE *)(v67 + 11) )
          {
            NdisFreeRefCount(*(_QWORD *)(v67 + 16));
            *(_QWORD *)(v67 + 16) = 1LL;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)v67, v70);
          v21 = v183;
        }
        v76 = *(_QWORD *)(v36 + 1440);
        if ( v76 - 2 > 1 )
        {
          if ( v76 < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v76, 0LL);
          if ( *(_BYTE *)(v76 + 2) <= 7u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v76, 7uLL);
          v77 = *(unsigned __int8 *)(v76 + 1);
          if ( *(_BYTE *)(v76 + 1) )
          {
            if ( v77 == 1 )
            {
              v153 = v76 + 456;
              v154 = *(_DWORD *)(v76 + 512);
              v155 = (unsigned __int16)v154 >> 1;
              if ( v154 >> 17 < 0x3FFE && v155 == (v154 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v76 + 456));
                *(_DWORD *)(v153 + 56) &= 0x10001u;
              }
              else
              {
                if ( v155 == 0 && (v154 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v76, 7uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v76 + 456), 0);
              }
            }
          }
          else
          {
            v78 = *(_QWORD *)(v76 + 8);
            if ( v78 && (v79 = *(_BYTE *)(v76 + 3)) != 0 )
            {
              while ( 1 )
              {
                v80 = (_BYTE *)(v78 + 2LL * (unsigned __int8)v77);
                if ( *v80 == 7 )
                {
                  v87 = v80[1];
                  if ( v87 )
                    break;
                }
                LOBYTE(v77) = v77 + 1;
                if ( (unsigned __int8)v77 >= v79 )
                  goto LABEL_115;
              }
              v80[1] = v87 - 1;
            }
            else
            {
LABEL_115:
              if ( !_bittestandreset((signed __int32 *)(v76 + 16), 7u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v76, 7uLL);
            }
          }
        }
        v49 = (*(_DWORD *)(v36 + 1304))-- == 1;
        if ( v49 )
        {
          v156 = *(_DWORD *)(v36 + 4);
          KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
          ndisIfDeleteStackEntries(v36);
          *(_QWORD *)(v36 + 1296) = 0LL;
          KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
          v157 = *(_QWORD *)(v36 + 1232);
          if ( *(_QWORD *)(v157 + 8) != v36 + 1232 || (v158 = *(_QWORD **)(v36 + 1240), *v158 != v36 + 1232) )
            __fastfail(3u);
          *v158 = v157;
          *(_QWORD *)(v157 + 8) = v158;
          v159 = *(_QWORD *)(v36 + 1248);
          if ( *(_QWORD *)(v159 + 8) != v36 + 1248 || (v160 = *(_QWORD **)(v36 + 1256), *v160 != v36 + 1248) )
            __fastfail(3u);
          *v160 = v159;
          *(_QWORD *)(v159 + 8) = v160;
          v161 = *(_QWORD *)(v36 + 1264);
          if ( *(_QWORD *)(v161 + 8) != v36 + 1264 || (v162 = *(_QWORD **)(v36 + 1272), *v162 != v36 + 1264) )
            __fastfail(3u);
          *v162 = v161;
          *(_QWORD *)(v161 + 8) = v162;
          NETWORKBLOCK_DECREMENT_REF(*(_QWORD *)(v36 + 1376));
          v163 = (unsigned int)(v156 - 1) >> 3;
          if ( IfUsedIfIndicesLength >= v163 + 1 )
            *((_BYTE *)IfUsedIfIndicesData + v163) &= ~(1 << ((v156 - 1) & 7));
          v164 = *(_QWORD *)(v36 + 1440);
          --ndisInterfaceCount;
          NdisFreeRefCount(v164);
          v165 = *(void **)(v36 + 1432);
          v24 = 0LL;
          *(_QWORD *)(v36 + 1440) = 0LL;
          if ( v165 )
          {
            ExFreePoolWithTag(v165, 0);
            *(_QWORD *)(v36 + 1432) = 0LL;
          }
          v166 = *(void **)(v36 + 1280);
          if ( v166 )
          {
            ExFreePoolWithTag(v166, 0);
            *(_QWORD *)(v36 + 1280) = 0LL;
            *(_QWORD *)(v36 + 1288) = 0LL;
          }
          v167 = *(struct _KEVENT **)(v36 + 1392);
          if ( v167 )
            KeSetEvent(v167, 0, 0);
          ExFreePoolWithTag((PVOID)v36, 0);
        }
        else
        {
LABEL_117:
          v24 = 0LL;
        }
        v81 = (ULONG_PTR)v35[90].Flink;
        v32 = v32->Flink;
        v186 = v32;
        if ( v81 != 2 && v81 != 3 )
        {
          if ( v81 < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v81, 0LL);
          if ( *(_BYTE *)(v81 + 2) <= 6u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v81, 6uLL);
          if ( *(_BYTE *)(v81 + 1) )
          {
            if ( *(_BYTE *)(v81 + 1) == 1 )
            {
              v168 = v81 + 392;
              v169 = *(_DWORD *)(v81 + 448);
              v170 = (unsigned __int16)v169 >> 1;
              if ( v169 >> 17 < 0x3FFE && v170 == (v169 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v81 + 392));
                *(_DWORD *)(v168 + 56) &= 0x10001u;
                v24 = 0LL;
              }
              else
              {
                if ( v170 == 0 && (v169 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v81, 6uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v81 + 392), 0);
                v24 = 0LL;
              }
            }
          }
          else
          {
            v82 = *(_QWORD *)(v81 + 8);
            if ( v82 && (v83 = *(_BYTE *)(v81 + 3), v84 = 0, v83) )
            {
              while ( 1 )
              {
                v85 = (_BYTE *)(v82 + 2LL * v84);
                if ( *v85 == 6 )
                {
                  v86 = v85[1];
                  if ( v86 )
                    break;
                }
                if ( ++v84 >= v83 )
                  goto LABEL_127;
              }
              v85[1] = v86 - 1;
            }
            else
            {
LABEL_127:
              if ( !_bittestandreset((signed __int32 *)(v81 + 16), 6u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v81, 6uLL);
            }
          }
        }
        v49 = LODWORD(v35[81].Blink)-- == 1;
        if ( v49 )
        {
          Flink_high = HIDWORD(v35->Flink);
          KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
          ndisIfDeleteStackEntries(v35);
          v35[81].Flink = 0LL;
          KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
          v172 = v199->Flink;
          if ( v199->Flink->Blink != v199 || (v173 = v199->Blink, v173->Flink != v199) )
            __fastfail(3u);
          v173->Flink = v172;
          v172->Blink = v173;
          v174 = v35[78].Flink;
          if ( v174->Blink != &v35[78] || (v175 = v35[78].Blink, v175->Flink != &v35[78]) )
            __fastfail(3u);
          v175->Flink = v174;
          v174->Blink = v175;
          v176 = v35[79].Flink;
          if ( v176->Blink != &v35[79] || (v177 = v35[79].Blink, v177->Flink != &v35[79]) )
            __fastfail(3u);
          v177->Flink = v176;
          v176->Blink = v177;
          NETWORKBLOCK_DECREMENT_REF(v35[86].Flink);
          v178 = (unsigned int)(Flink_high - 1) >> 3;
          if ( IfUsedIfIndicesLength >= v178 + 1 )
            *((_BYTE *)IfUsedIfIndicesData + v178) &= ~(1 << ((Flink_high - 1) & 7));
          v179 = (ULONG_PTR)v35[90].Flink;
          --ndisInterfaceCount;
          NdisFreeRefCount(v179);
          v180 = v35[89].Blink;
          v24 = 0LL;
          v35[90].Flink = 0LL;
          if ( v180 )
          {
            ExFreePoolWithTag(v180, 0);
            v35[89].Blink = 0LL;
          }
          v181 = v35[80].Flink;
          if ( v181 )
          {
            ExFreePoolWithTag(v181, 0);
            v35[80].Flink = 0LL;
            v35[80].Blink = 0LL;
          }
          v182 = (struct _KEVENT *)v35[87].Flink;
          if ( v182 )
            KeSetEvent(v182, 0, 0);
          ExFreePoolWithTag(v35, 0);
        }
        v4 = v188;
        v33 = v187;
        continue;
      }
      v32 = v32->Flink;
      v186 = v32;
    }
    else
    {
      v32 = v32->Flink;
      v186 = v32;
    }
  }
  *((_DWORD *)v6 + 22) = v33;
  if ( v33 > v4 )
LABEL_24:
    LODWORD(v24) = 261;
LABEL_25:
  KeReleaseSpinLock(&ndisIfListLock, v21);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qD(87LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, v6, (unsigned int)v24);
  return (unsigned int)v24;
}
