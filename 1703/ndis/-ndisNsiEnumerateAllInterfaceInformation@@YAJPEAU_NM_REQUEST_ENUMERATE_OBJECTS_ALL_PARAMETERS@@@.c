/*
 * XREFs of ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00075D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C00093E0 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C000CF38 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     NdisFreeRefCount @ 0x1C0025560 (NdisFreeRefCount.c)
 *     ndisIfDeleteStackEntries @ 0x1C0026758 (ndisIfDeleteStackEntries.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0027164 (NETWORKBLOCK_DECREMENT_REF.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7A8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00A3320 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00A4190 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInterfaceInformation(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v1; // r13d
  unsigned int v2; // r12d
  int v3; // edi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int *ThreadProperty; // rax
  unsigned int *v7; // rcx
  PACCESS_TOKEN v8; // rax
  void *v9; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  unsigned int v12; // r14d
  KIRQL v13; // al
  _LIST_ENTRY *v14; // rcx
  KIRQL v15; // r8
  _LIST_ENTRY *Flink; // rax
  unsigned int v17; // edx
  KIRQL v18; // bl
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *Blink; // rdx
  bool v21; // zf
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v22; // rdi
  void *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // r10d
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  _LIST_ENTRY *v30; // rsi
  unsigned int v31; // r8d
  _LIST_ENTRY *v32; // rcx
  _LIST_ENTRY *v33; // r15
  _LIST_ENTRY *v34; // rbx
  _WORD *v35; // rcx
  __int64 v36; // r13
  _LIST_ENTRY *v37; // rbx
  KIRQL v38; // di
  int v39; // r8d
  __int64 v40; // rax
  __int64 v41; // r15
  __int64 v42; // rsi
  KIRQL v43; // r14
  int v44; // edi
  unsigned __int16 v45; // ax
  __int64 v46; // rdi
  _WORD *v47; // rcx
  KIRQL v48; // di
  ULONG_PTR v49; // r8
  __int64 v50; // rcx
  struct _KEVENT *v51; // rcx
  char v52; // si
  KIRQL v53; // al
  ULONG_PTR v54; // r10
  KIRQL v55; // r14
  int v56; // ecx
  __int64 v57; // r9
  unsigned __int8 v58; // r8
  _BYTE *v59; // rdx
  __int64 v60; // rbx
  _WORD *v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rbx
  __int64 v64; // rbx
  KIRQL v65; // al
  ULONG_PTR v66; // r8
  KIRQL v67; // si
  int v68; // ecx
  __int64 v69; // r10
  unsigned __int8 v70; // r9
  _BYTE *v71; // rdx
  ULONG_PTR v72; // r8
  int v73; // ecx
  __int64 v74; // r10
  unsigned __int8 v75; // r9
  _BYTE *v76; // rdx
  ULONG_PTR v77; // r8
  int v78; // ecx
  __int64 v79; // r10
  unsigned __int8 v80; // r9
  _BYTE *v81; // rdx
  __int64 v82; // rbx
  unsigned __int8 v83; // r10
  unsigned __int8 v84; // dl
  _BYTE *v85; // r9
  __int64 v86; // rax
  __int64 v87; // r15
  __int64 v88; // rsi
  int v89; // edi
  KIRQL v90; // r14
  unsigned __int16 v91; // cx
  __int64 v92; // rdi
  _WORD *v93; // rcx
  KIRQL v94; // di
  ULONG_PTR v95; // r8
  __int64 v96; // rdx
  struct _KEVENT *v97; // rcx
  char v98; // si
  KIRQL v99; // al
  ULONG_PTR v100; // r10
  KIRQL v101; // r14
  int v102; // ecx
  __int64 v103; // r9
  unsigned __int8 v104; // r8
  _BYTE *v105; // rdx
  KIRQL v106; // al
  KIRQL v107; // bl
  ULONG_PTR v108; // r8
  __int64 v109; // rcx
  _LIST_ENTRY *v110; // rsi
  _WORD *v111; // rcx
  unsigned __int8 v112; // r10
  unsigned __int8 v113; // cl
  _BYTE *v114; // r9
  NTSTATUS v115; // ebx
  __int64 v116; // r10
  unsigned __int8 v117; // r9
  unsigned __int8 v118; // r8
  _BYTE *v119; // rdx
  unsigned __int8 v120; // r10
  unsigned __int8 v121; // dl
  _BYTE *v122; // r9
  __int64 v123; // r9
  unsigned __int8 v124; // r10
  unsigned __int8 v125; // r8
  _BYTE *v126; // rdx
  _LIST_ENTRY *v127; // r9
  unsigned __int8 v128; // r10
  unsigned __int8 v129; // r8
  _BYTE *v130; // rdx
  __int64 v131; // r9
  unsigned __int8 v132; // r10
  unsigned __int8 v133; // r8
  _BYTE *v134; // rdx
  unsigned __int8 v135; // dl
  unsigned __int8 v136; // dl
  unsigned __int8 v137; // dl
  unsigned __int8 v138; // dl
  unsigned __int8 v139; // dl
  unsigned __int8 v140; // dl
  unsigned __int8 v141; // dl
  unsigned __int8 v142; // dl
  KIRQL v143; // r8
  unsigned __int64 v144; // r8
  unsigned __int64 v145; // rdx
  _LIST_ENTRY *v146; // r10
  unsigned __int8 v147; // r9
  unsigned __int8 v148; // r8
  _BYTE *v149; // rdx
  unsigned __int8 v150; // dl
  unsigned __int8 v151; // dl
  ULONG_PTR v152; // rbx
  unsigned int v153; // edx
  ULONG_PTR v154; // rbx
  unsigned int v155; // edx
  struct _KEVENT *v156; // rcx
  ULONG_PTR v157; // rdi
  unsigned int v158; // edx
  _LIST_ENTRY *v159; // rax
  struct _KEVENT *v160; // rcx
  ULONG_PTR v161; // rbx
  unsigned int v162; // edx
  ULONG_PTR v163; // rbx
  unsigned int v164; // edx
  struct _KEVENT *v165; // rcx
  ULONG_PTR v166; // rdi
  unsigned int v167; // edx
  ULONG_PTR v168; // rbx
  unsigned int v169; // edx
  int v170; // ebx
  __int64 v171; // rdx
  _QWORD *v172; // rcx
  __int64 v173; // rdx
  _QWORD *v174; // rcx
  __int64 v175; // rdx
  _QWORD *v176; // rcx
  unsigned int v177; // ecx
  void *v178; // rcx
  void *v179; // rcx
  void *v180; // rcx
  struct _KEVENT *v181; // rcx
  ULONG_PTR v182; // rbx
  unsigned int v183; // edx
  int Flink_high; // ebx
  _LIST_ENTRY *v185; // rdx
  _LIST_ENTRY *v186; // rcx
  _LIST_ENTRY *v187; // rdx
  _LIST_ENTRY *v188; // rcx
  _LIST_ENTRY *v189; // rdx
  _LIST_ENTRY *v190; // rcx
  unsigned int v191; // ecx
  _LIST_ENTRY *v192; // rcx
  _LIST_ENTRY *v193; // rcx
  _LIST_ENTRY *v194; // rcx
  struct _KEVENT *v195; // rcx
  KIRQL v196; // [rsp+30h] [rbp-89h]
  BOOLEAN EffectiveOnly; // [rsp+31h] [rbp-88h] BYREF
  BOOLEAN CopyOnOpen[6]; // [rsp+32h] [rbp-87h] BYREF
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v199; // [rsp+38h] [rbp-81h]
  _LIST_ENTRY *v200; // [rsp+40h] [rbp-79h]
  unsigned int v201; // [rsp+48h] [rbp-71h]
  unsigned int v202; // [rsp+4Ch] [rbp-6Dh]
  int v203; // [rsp+50h] [rbp-69h]
  unsigned int v204; // [rsp+54h] [rbp-65h]
  size_t Size; // [rsp+58h] [rbp-61h]
  _LIST_ENTRY *v206; // [rsp+60h] [rbp-59h]
  void *v207; // [rsp+68h] [rbp-51h]
  __int64 v208; // [rsp+70h] [rbp-49h]
  __int64 v209; // [rsp+78h] [rbp-41h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+80h] [rbp-39h] BYREF
  PVOID TokenInformation; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v212[8]; // [rsp+90h] [rbp-29h] BYREF
  __int64 v213; // [rsp+D0h] [rbp+17h]
  __int128 v214; // [rsp+D8h] [rbp+1Fh]

  v1 = *((_DWORD *)a1 + 22);
  v2 = 0;
  v3 = 0;
  v199 = a1;
  v204 = v1;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_q(86LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1);
  KeEnterCriticalRegion();
  CurrentThread = KeGetCurrentThread();
  v213 = 0LL;
  v214 = 0uLL;
  ThreadProperty = (unsigned int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v7 = ThreadProperty;
  if ( ThreadProperty )
  {
    v12 = *ThreadProperty;
    LODWORD(v213) = ThreadProperty[1];
    HIDWORD(v213) = v12;
    ObfDereferenceObject(ThreadProperty);
    if ( v12 )
      goto LABEL_14;
  }
  else
  {
    LODWORD(v213) = 0;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
  }
  else
  {
    v8 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v9 = v8;
    if ( v8 )
    {
      v115 = SeQueryInformationToken(v8, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v9);
      if ( v115 >= 0 )
      {
        ThreadSessionId = (unsigned int)TokenInformation;
        goto LABEL_9;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
  }
  ThreadSessionId = CurrentProcessSessionId;
LABEL_9:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId < ndisCmSessionCount )
  {
    v12 = 0;
    v143 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    if ( ThreadSessionId < ndisCmSessionCount )
      v12 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
    KeReleaseSpinLock(&ndisCmSessionLock, v143);
    if ( !v12 )
      v12 = 1;
  }
  else
  {
    v12 = 1;
  }
  HIDWORD(v213) = v12;
LABEL_14:
  v13 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v14 = 0LL;
  v15 = v13;
  Flink = ndisIfCompartmentList.Flink;
  if ( ndisIfCompartmentList.Flink != &ndisIfCompartmentList )
  {
    while ( 1 )
    {
      v17 = (unsigned int)Flink[1].Flink;
      if ( v17 == v12 )
        break;
      if ( v17 <= v12 )
      {
        Flink = Flink->Flink;
        if ( Flink != &ndisIfCompartmentList )
          continue;
      }
      goto LABEL_17;
    }
    v14 = Flink;
  }
LABEL_17:
  v214 = *(__int128 *)((char *)&v14[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v15);
  v196 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v18 = v196;
  if ( !v1 )
  {
    for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
    {
      Blink = i[9].Blink;
      if ( v12 == LODWORD(Blink[1].Flink) )
        goto LABEL_20;
      if ( (_DWORD)v213 == -1 )
      {
        v144 = v214 - *(unsigned __int64 *)((char *)&Blink[105].Flink + 4);
        if ( (_LIST_ENTRY *)v214 == *(_LIST_ENTRY **)((char *)&Blink[105].Flink + 4) )
          v144 = *((_QWORD *)&v214 + 1) - *(unsigned __int64 *)((char *)&Blink[105].Blink + 4);
        if ( !v144 )
          goto LABEL_20;
      }
      if ( ((__int64)Blink[105].Flink & 2) == 0 && v12 == 1 )
LABEL_20:
        ++v3;
    }
    *((_DWORD *)a1 + 22) = v3;
    v21 = v3 == 0;
    v22 = a1;
    if ( !v21 )
      v2 = 261;
    goto LABEL_24;
  }
  v24 = (void *)*((_QWORD *)a1 + 2);
  v22 = a1;
  v25 = *((_QWORD *)a1 + 7);
  v26 = *((_QWORD *)a1 + 9);
  v27 = *((_DWORD *)a1 + 6);
  v28 = *((_DWORD *)a1 + 16);
  v29 = *((_DWORD *)a1 + 20);
  LODWORD(Size) = v27;
  v201 = v28;
  v202 = v29;
  v207 = v24;
  v208 = v25;
  v209 = v26;
  if ( v24 && v27 != 8 || *((_QWORD *)a1 + 5) || *((_DWORD *)a1 + 12) || v25 && v28 < 0x28C || v26 && v29 < 0x238 )
  {
    v2 = -1073741306;
    goto LABEL_24;
  }
  memset(v212, 0, sizeof(v212));
  v30 = ndisIfList.Flink;
  HIDWORD(v212[6]) = 0;
  v31 = 0;
  v200 = ndisIfList.Flink;
  while ( v30 != &ndisIfList )
  {
    v32 = v30[9].Blink;
    v33 = v30 - 77;
    v206 = v30 - 77;
    if ( v12 == LODWORD(v32[1].Flink) )
      goto LABEL_36;
    if ( (_DWORD)v213 == -1 )
    {
      v145 = v214 - *(unsigned __int64 *)((char *)&v32[105].Flink + 4);
      if ( (_LIST_ENTRY *)v214 == *(_LIST_ENTRY **)((char *)&v32[105].Flink + 4) )
        v145 = *((_QWORD *)&v214 + 1) - *(unsigned __int64 *)((char *)&v32[105].Blink + 4);
      if ( !v145 )
        goto LABEL_36;
    }
    if ( ((__int64)v32[105].Flink & 2) == 0 && v12 == 1 )
    {
LABEL_36:
      v203 = ++v31;
      if ( v31 <= v1 )
      {
        v34 = v33[90].Flink;
        if ( v34 )
        {
          if ( BYTE1(v34->Flink) )
          {
            if ( BYTE1(v34->Flink) == 1 )
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v34[24].Blink, 1u);
          }
          else
          {
            v35 = 0LL;
            if ( _bittestandset((signed __int32 *)&v34[1], 6u) )
            {
              v127 = v34->Blink;
              if ( v127 && (v128 = BYTE3(v34->Flink), v129 = 0, v128) )
              {
                do
                {
                  v130 = (char *)v127 + 2 * v129;
                  if ( *v130 == 6 )
                  {
                    if ( v130[1] != 0xFF )
                    {
                      ++v130[1];
                      goto LABEL_40;
                    }
                  }
                  else if ( !v130[1] )
                  {
                    v35 = (_WORD *)v127 + v129;
                  }
                  ++v129;
                }
                while ( v129 < v128 );
                if ( !v35 )
                  goto LABEL_233;
                *v35 = 262;
              }
              else
              {
LABEL_233:
                if ( !BYTE1(v34->Flink) )
                {
                  v135 = BYTE3(v34->Flink);
                  if ( v135 == 0xFF )
                  {
                    ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v34);
                    BYTE1(v34->Flink) = 2;
                  }
                  else
                  {
                    if ( (unsigned int)v135 + 2 > 0xFF )
                      v136 = -1;
                    else
                      v136 = v135 + 2;
                    ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v34, v136);
                  }
                }
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v34);
              }
            }
          }
        }
LABEL_40:
        ++LODWORD(v33[81].Blink);
        v36 = 0LL;
        if ( !BYTE1(v33[87].Blink) || *((_QWORD *)v22 + 1) >= 2uLL )
          goto LABEL_85;
        v37 = 0LL;
        v38 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
        if ( BYTE3(v33[87].Blink) )
        {
          v110 = v33[90].Blink;
          v37 = v33[88].Blink;
          if ( v110 )
          {
            if ( BYTE1(v110->Flink) )
            {
              if ( BYTE1(v110->Flink) == 1 )
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v110[12].Blink, 1u);
            }
            else
            {
              v111 = 0LL;
              if ( _bittestandset((signed __int32 *)&v110[1], 3u) )
              {
                v146 = v110->Blink;
                if ( !v146 )
                  goto LABEL_449;
                v147 = BYTE3(v110->Flink);
                v148 = 0;
                if ( !v147 )
                  goto LABEL_449;
                do
                {
                  v149 = (char *)v146 + 2 * v148;
                  if ( *v149 == 3 )
                  {
                    if ( v149[1] != 0xFF )
                    {
                      ++v149[1];
                      goto LABEL_177;
                    }
                  }
                  else if ( !v149[1] )
                  {
                    v111 = (_WORD *)v146 + v148;
                  }
                  ++v148;
                }
                while ( v148 < v147 );
                if ( v111 )
                {
                  *v111 = 259;
                }
                else
                {
LABEL_449:
                  if ( !BYTE1(v110->Flink) )
                  {
                    v150 = BYTE3(v110->Flink);
                    if ( v150 == 0xFF )
                    {
                      ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v110);
                      BYTE1(v110->Flink) = 2;
                    }
                    else
                    {
                      if ( (unsigned int)v150 + 2 <= 0xFF )
                        v151 = v150 + 2;
                      else
                        v151 = -1;
                      ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v110, v151);
                    }
                  }
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v110);
                }
              }
            }
          }
LABEL_177:
          ++HIDWORD(v33[87].Blink);
        }
        KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v38);
        if ( !v37 )
        {
          if ( BYTE2(v33[87].Blink) )
          {
            v40 = ndisReferenceTopMiniportByNameForNsi(v33[88].Blink[2].Flink, 0, v39, 0, 2, 60);
            v41 = v40;
            if ( v40 )
            {
              KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v40 + 96));
              v42 = *(_QWORD *)(v41 + 2056);
              *(_QWORD *)(v41 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v41 + 1856) = 2234961;
              if ( v42 )
              {
                while ( 1 )
                {
                  v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v42 + 320));
                  v44 = 1;
                  if ( !*(_BYTE *)(v42 + 330) )
                  {
                    v45 = *(_WORD *)(v42 + 328);
                    if ( v45 >= 0xFFEBu )
                    {
                      ndisRefCountReferenceCountOverflow = 1;
                      v44 = 2;
                    }
                    else
                    {
                      v46 = *(_QWORD *)(v42 + 336);
                      *(_WORD *)(v42 + 328) = v45 + 1;
                      if ( v46 )
                      {
                        if ( *(_BYTE *)(v46 + 1) )
                        {
                          if ( *(_BYTE *)(v46 + 1) == 1 )
                            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v46 + 712), 1u);
                        }
                        else
                        {
                          v47 = 0LL;
                          if ( _bittestandset((signed __int32 *)(v46 + 16), 0xBu) )
                          {
                            v116 = *(_QWORD *)(v46 + 8);
                            if ( !v116 )
                              goto LABEL_450;
                            v117 = *(_BYTE *)(v46 + 3);
                            v118 = 0;
                            if ( !v117 )
                              goto LABEL_450;
                            do
                            {
                              v119 = (_BYTE *)(v116 + 2LL * v118);
                              if ( *v119 == 11 )
                              {
                                if ( v119[1] != 0xFF )
                                {
                                  ++v119[1];
                                  goto LABEL_52;
                                }
                              }
                              else if ( !v119[1] )
                              {
                                v47 = (_WORD *)(v116 + 2LL * v118);
                              }
                              ++v118;
                            }
                            while ( v118 < v117 );
                            if ( v47 )
                            {
                              *v47 = 267;
                            }
                            else
                            {
LABEL_450:
                              if ( !*(_BYTE *)(v46 + 1) )
                              {
                                v139 = *(_BYTE *)(v46 + 3);
                                if ( v139 == 0xFF )
                                {
                                  ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v46);
                                  *(_BYTE *)(v46 + 1) = 2;
                                }
                                else
                                {
                                  if ( (unsigned int)v139 + 2 > 0xFF )
                                    v140 = -1;
                                  else
                                    v140 = v139 + 2;
                                  ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v46, v140);
                                }
                              }
                              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v46);
                            }
                          }
                        }
                      }
LABEL_52:
                      v44 = 0;
                    }
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)(v42 + 320), v43);
                  if ( !v44 )
                    break;
                  v42 = *(_QWORD *)(v42 + 112);
                  if ( !v42 )
                    goto LABEL_352;
                }
                v36 = *(_QWORD *)(v42 + 840);
              }
              else
              {
LABEL_352:
                v36 = *(_QWORD *)(v41 + 4064);
              }
              *(_QWORD *)(v41 + 520) = 0LL;
              *(_DWORD *)(v41 + 1856) = 0;
              KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v41 + 96));
              v48 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v41 + 96));
              v49 = *(_QWORD *)(v41 + 4928);
              *(_QWORD *)(v41 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v41 + 1856) = 72039;
              if ( v49 )
              {
                if ( *(_BYTE *)(v49 + 1) )
                {
                  if ( *(_BYTE *)(v49 + 1) == 1 )
                  {
                    v161 = v49 + 136;
                    v162 = *(_DWORD *)(v49 + 192);
                    if ( v162 >> 17 < 0x3FFE && (unsigned __int16)v162 >> 1 == (v162 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v49 + 136));
                      *(_DWORD *)(v161 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (v162 & 0xFFFE) == 0 && (v162 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, v49, 2uLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v49 + 136), 0);
                    }
                  }
                }
                else
                {
                  v50 = *(_QWORD *)(v49 + 8);
                  if ( v50 && (v83 = *(_BYTE *)(v49 + 3), v84 = 0, v83) )
                  {
                    while ( 1 )
                    {
                      v85 = (_BYTE *)(v50 + 2LL * v84);
                      if ( *v85 == 2 )
                      {
                        if ( v85[1] )
                          break;
                      }
                      if ( ++v84 >= v83 )
                        goto LABEL_58;
                    }
                    --v85[1];
                  }
                  else
                  {
LABEL_58:
                    if ( !_bittestandreset((signed __int32 *)(v49 + 16), 2u) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v49, 2uLL);
                  }
                }
              }
              v21 = (*(_DWORD *)(v41 + 3132))-- == 1;
              if ( v21 )
              {
                v51 = *(struct _KEVENT **)(v41 + 3144);
                if ( v51 )
                  KeSetEvent(v51, 0, 0);
              }
              *(_QWORD *)(v41 + 520) = 0LL;
              *(_DWORD *)(v41 + 1856) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(v41 + 96), v48);
              if ( (unsigned __int8)byte_1C009261B >= 4u )
                WPP_SF_q(25LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v41);
              v52 = 0;
              v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v41 + 4464));
              v54 = *(_QWORD *)(v41 + 4920);
              v55 = v53;
              if ( v54 )
              {
                v56 = *(unsigned __int8 *)(v54 + 1);
                if ( *(_BYTE *)(v54 + 1) )
                {
                  if ( v56 == 1 )
                  {
                    v163 = v54 + 3848;
                    v164 = *(_DWORD *)(v54 + 3904);
                    if ( v164 >> 17 < 0x3FFE && (unsigned __int16)v164 >> 1 == (v164 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v54 + 3848));
                      *(_DWORD *)(v163 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (v164 & 0xFFFE) == 0 && (v164 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, *(_QWORD *)(v41 + 4920), 0x3CuLL);
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
                        if ( v59[1] )
                          break;
                      }
                      LOBYTE(v56) = v56 + 1;
                      if ( (unsigned __int8)v56 >= v58 )
                        goto LABEL_70;
                    }
                    --v59[1];
                  }
                  else
                  {
LABEL_70:
                    if ( !_bittestandreset((signed __int32 *)(v54 + 20), 0x1Cu) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v54, 0x3CuLL);
                  }
                }
              }
              v21 = (*(_DWORD *)(v41 + 4472))-- == 1;
              if ( v21 )
                v52 = 1;
              if ( (unsigned __int8)byte_1C009261B >= 4u )
                WPP_SF_qD(14LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, v41, *(unsigned int *)(v41 + 4472));
              KeReleaseSpinLock((PKSPIN_LOCK)(v41 + 4464), v55);
              if ( v52 )
              {
                v165 = *(struct _KEVENT **)(v41 + 1608);
                if ( v165 )
                  KeSetEvent(v165, 0, 0);
              }
              if ( (unsigned __int8)byte_1C009261B >= 4u )
                WPP_SF_q(26LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v41);
              v12 = HIDWORD(v213);
              v33 = v206;
              goto LABEL_79;
            }
            v33 = v206;
          }
LABEL_84:
          v22 = v199;
          v30 = v200;
LABEL_85:
          KeReleaseSpinLock(&ndisIfListLock, v196);
          if ( *((_QWORD *)v22 + 2) )
          {
            v62 = (unsigned int)Size;
            memmove(v207, &v33[82], (unsigned int)Size);
            v207 = (char *)v207 + v62;
          }
          if ( *((_QWORD *)v22 + 7) )
          {
            v82 = v208;
            v212[5] = v208;
            LODWORD(v212[4]) = 1;
            LODWORD(v212[6]) = v201;
            ndisNsiGetInterfaceRodEnumObject(
              (struct _NDIS_IF_BLOCK *)v33,
              (struct _NDIS_IF_BLOCK *)v36,
              (struct _NM_REQUEST_GET_PARAMETER *)v212);
            v208 = v201 + v82;
          }
          if ( *((_QWORD *)v22 + 9) )
          {
            v63 = v209;
            v212[5] = v209;
            LODWORD(v212[4]) = 2;
            LODWORD(v212[6]) = v202;
            ndisNsiGetInterfaceRosEnumObject(
              (struct _NDIS_IF_BLOCK *)v33,
              (struct _NDIS_IF_BLOCK *)v36,
              (struct _NM_REQUEST_GET_PARAMETER *)v212);
            v209 = v202 + v63;
          }
          v196 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          v18 = v196;
          if ( v36 )
          {
            if ( *(_BYTE *)(v36 + 1402) )
            {
              v64 = *(_QWORD *)(v36 + 1416) + 320LL;
              v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v64);
              v66 = *(_QWORD *)(v64 + 16);
              v67 = v65;
              if ( v66 )
              {
                v68 = *(unsigned __int8 *)(v66 + 1);
                if ( *(_BYTE *)(v66 + 1) )
                {
                  if ( v68 == 1 )
                  {
                    v166 = v66 + 712;
                    v167 = *(_DWORD *)(v66 + 768);
                    if ( v167 >> 17 < 0x3FFE && (unsigned __int16)v167 >> 1 == (v167 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v66 + 712));
                      *(_DWORD *)(v166 + 56) &= 0x10001u;
                      v22 = v199;
                    }
                    else
                    {
                      if ( (v167 & 0xFFFE) == 0 && (v167 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, v66, 0xBuLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v66 + 712), 0);
                      v22 = v199;
                    }
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
                        if ( v71[1] )
                          break;
                      }
                      LOBYTE(v68) = v68 + 1;
                      if ( (unsigned __int8)v68 >= v70 )
                        goto LABEL_100;
                    }
                    --v71[1];
                  }
                  else
                  {
LABEL_100:
                    if ( !_bittestandreset((signed __int32 *)(v66 + 16), 0xBu) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v66, 0xBuLL);
                  }
                }
              }
              v21 = (*(_WORD *)(v64 + 8))-- == 1;
              if ( v21 && !*(_BYTE *)(v64 + 11) )
              {
                NdisFreeRefCount(*(PVOID *)(v64 + 16));
                *(_QWORD *)(v64 + 16) = 0LL;
              }
              KeReleaseSpinLock((PKSPIN_LOCK)v64, v67);
            }
            v72 = *(_QWORD *)(v36 + 1440);
            if ( v72 )
            {
              v73 = *(unsigned __int8 *)(v72 + 1);
              if ( *(_BYTE *)(v72 + 1) )
              {
                if ( v73 == 1 )
                {
                  v168 = v72 + 456;
                  v169 = *(_DWORD *)(v72 + 512);
                  if ( v169 >> 17 < 0x3FFE && (unsigned __int16)v169 >> 1 == (v169 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v72 + 456));
                    *(_DWORD *)(v168 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( (v169 & 0xFFFE) == 0 && (v169 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v72, 7uLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v72 + 456), 0);
                  }
                }
              }
              else
              {
                v74 = *(_QWORD *)(v72 + 8);
                if ( v74 && (v75 = *(_BYTE *)(v72 + 3)) != 0 )
                {
                  while ( 1 )
                  {
                    v76 = (_BYTE *)(v74 + 2LL * (unsigned __int8)v73);
                    if ( *v76 == 7 )
                    {
                      if ( v76[1] )
                        break;
                    }
                    LOBYTE(v73) = v73 + 1;
                    if ( (unsigned __int8)v73 >= v75 )
                      goto LABEL_111;
                  }
                  --v76[1];
                }
                else
                {
LABEL_111:
                  if ( !_bittestandreset((signed __int32 *)(v72 + 16), 7u) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v72, 7uLL);
                }
              }
            }
            v21 = (*(_DWORD *)(v36 + 1304))-- == 1;
            if ( v21 )
            {
              v170 = *(_DWORD *)(v36 + 4);
              KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
              ndisIfDeleteStackEntries(v36);
              *(_QWORD *)(v36 + 1296) = 0LL;
              KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
              v171 = *(_QWORD *)(v36 + 1232);
              v172 = *(_QWORD **)(v36 + 1240);
              if ( *(_QWORD *)(v171 + 8) != v36 + 1232 || *v172 != v36 + 1232 )
                __fastfail(3u);
              *v172 = v171;
              *(_QWORD *)(v171 + 8) = v172;
              v173 = *(_QWORD *)(v36 + 1248);
              v174 = *(_QWORD **)(v36 + 1256);
              if ( *(_QWORD *)(v173 + 8) != v36 + 1248 || *v174 != v36 + 1248 )
                __fastfail(3u);
              *v174 = v173;
              *(_QWORD *)(v173 + 8) = v174;
              v175 = *(_QWORD *)(v36 + 1264);
              v176 = *(_QWORD **)(v36 + 1272);
              if ( *(_QWORD *)(v175 + 8) != v36 + 1264 || *v176 != v36 + 1264 )
                __fastfail(3u);
              *v176 = v175;
              *(_QWORD *)(v175 + 8) = v176;
              NETWORKBLOCK_DECREMENT_REF(*(_QWORD *)(v36 + 1376));
              v177 = (unsigned int)(v170 - 1) >> 3;
              if ( IfUsedIfIndicesLength >= v177 + 1 )
                *((_BYTE *)IfUsedIfIndicesData + v177) &= ~(1 << ((v170 - 1) & 7));
              v178 = *(void **)(v36 + 1440);
              --ndisInterfaceCount;
              NdisFreeRefCount(v178);
              v179 = *(void **)(v36 + 1432);
              *(_QWORD *)(v36 + 1440) = 0LL;
              if ( v179 )
              {
                ExFreePoolWithTag(v179, 0);
                *(_QWORD *)(v36 + 1432) = 0LL;
              }
              v180 = *(void **)(v36 + 1280);
              if ( v180 )
              {
                ExFreePoolWithTag(v180, 0);
                *(_QWORD *)(v36 + 1280) = 0LL;
                *(_QWORD *)(v36 + 1288) = 0LL;
              }
              v181 = *(struct _KEVENT **)(v36 + 1392);
              if ( v181 )
                KeSetEvent(v181, 0, 0);
              ExFreePoolWithTag((PVOID)v36, 0);
            }
            v18 = v196;
            v30 = v200;
          }
          v77 = (ULONG_PTR)v33[90].Flink;
          v30 = v30->Flink;
          v200 = v30;
          if ( v77 )
          {
            v78 = *(unsigned __int8 *)(v77 + 1);
            if ( *(_BYTE *)(v77 + 1) )
            {
              if ( v78 == 1 )
              {
                v182 = v77 + 392;
                v183 = *(_DWORD *)(v77 + 448);
                if ( v183 >> 17 < 0x3FFE && (unsigned __int16)v183 >> 1 == (v183 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v77 + 392));
                  *(_DWORD *)(v182 + 56) &= 0x10001u;
                  v18 = v196;
                }
                else
                {
                  if ( (v183 & 0xFFFE) == 0 && (v183 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v77, 6uLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v77 + 392), 0);
                  v18 = v196;
                }
              }
            }
            else
            {
              v79 = *(_QWORD *)(v77 + 8);
              if ( v79 && (v80 = *(_BYTE *)(v77 + 3)) != 0 )
              {
                while ( 1 )
                {
                  v81 = (_BYTE *)(v79 + 2LL * (unsigned __int8)v78);
                  if ( *v81 == 6 )
                  {
                    if ( v81[1] )
                      break;
                  }
                  LOBYTE(v78) = v78 + 1;
                  if ( (unsigned __int8)v78 >= v80 )
                    goto LABEL_120;
                }
                --v81[1];
              }
              else
              {
LABEL_120:
                if ( !_bittestandreset((signed __int32 *)(v77 + 16), 6u) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v77, 6uLL);
              }
            }
          }
          v21 = LODWORD(v33[81].Blink)-- == 1;
          if ( v21 )
          {
            Flink_high = HIDWORD(v33->Flink);
            KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
            ndisIfDeleteStackEntries(v33);
            v33[81].Flink = 0LL;
            KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
            v185 = v33[77].Flink;
            v186 = v33[77].Blink;
            if ( v185->Blink != &v33[77] || v186->Flink != &v33[77] )
              __fastfail(3u);
            v186->Flink = v185;
            v185->Blink = v186;
            v187 = v33[78].Flink;
            v188 = v33[78].Blink;
            if ( v187->Blink != &v33[78] || v188->Flink != &v33[78] )
              __fastfail(3u);
            v188->Flink = v187;
            v187->Blink = v188;
            v189 = v33[79].Flink;
            v190 = v33[79].Blink;
            if ( v189->Blink != &v33[79] || v190->Flink != &v33[79] )
              __fastfail(3u);
            v190->Flink = v189;
            v189->Blink = v190;
            NETWORKBLOCK_DECREMENT_REF(v33[86].Flink);
            v191 = (unsigned int)(Flink_high - 1) >> 3;
            if ( IfUsedIfIndicesLength >= v191 + 1 )
              *((_BYTE *)IfUsedIfIndicesData + v191) &= ~(1 << ((Flink_high - 1) & 7));
            v192 = v33[90].Flink;
            --ndisInterfaceCount;
            NdisFreeRefCount(v192);
            v193 = v33[89].Blink;
            v33[90].Flink = 0LL;
            if ( v193 )
            {
              ExFreePoolWithTag(v193, 0);
              v33[89].Blink = 0LL;
            }
            v194 = v33[80].Flink;
            if ( v194 )
            {
              ExFreePoolWithTag(v194, 0);
              v33[80].Flink = 0LL;
              v33[80].Blink = 0LL;
            }
            v195 = (struct _KEVENT *)v33[87].Flink;
            if ( v195 )
              KeSetEvent(v195, 0, 0);
            ExFreePoolWithTag(v33, 0);
            v18 = v196;
          }
          v1 = v204;
          v31 = v203;
          continue;
        }
        v86 = ndisReferenceTopMiniportByNameForNsi((_DWORD)v37, 0, v39, 0, 2, 60);
        v87 = v86;
        if ( v86 )
        {
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v86 + 96));
          v88 = *(_QWORD *)(v87 + 2056);
          *(_QWORD *)(v87 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v87 + 1856) = 2234961;
          if ( v88 )
          {
            while ( 1 )
            {
              v89 = 1;
              v90 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v88 + 320));
              if ( !*(_BYTE *)(v88 + 330) )
              {
                v91 = *(_WORD *)(v88 + 328);
                if ( v91 >= 0xFFEBu )
                {
                  ndisRefCountReferenceCountOverflow = 1;
                  v89 = 2;
                }
                else
                {
                  v92 = *(_QWORD *)(v88 + 336);
                  *(_WORD *)(v88 + 328) = v91 + 1;
                  if ( v92 )
                  {
                    if ( *(_BYTE *)(v92 + 1) )
                    {
                      if ( *(_BYTE *)(v92 + 1) == 1 )
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v92 + 712), 1u);
                    }
                    else
                    {
                      v93 = 0LL;
                      if ( _bittestandset((signed __int32 *)(v92 + 16), 0xBu) )
                      {
                        v131 = *(_QWORD *)(v92 + 8);
                        if ( !v131 )
                          goto LABEL_451;
                        v132 = *(_BYTE *)(v92 + 3);
                        v133 = 0;
                        if ( !v132 )
                          goto LABEL_451;
                        do
                        {
                          v134 = (_BYTE *)(v131 + 2LL * v133);
                          if ( *v134 == 11 )
                          {
                            if ( v134[1] != 0xFF )
                            {
                              ++v134[1];
                              goto LABEL_141;
                            }
                          }
                          else if ( !v134[1] )
                          {
                            v93 = (_WORD *)(v131 + 2LL * v133);
                          }
                          ++v133;
                        }
                        while ( v133 < v132 );
                        if ( v93 )
                        {
                          *v93 = 267;
                        }
                        else
                        {
LABEL_451:
                          if ( !*(_BYTE *)(v92 + 1) )
                          {
                            v141 = *(_BYTE *)(v92 + 3);
                            if ( v141 == 0xFF )
                            {
                              ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v92);
                              *(_BYTE *)(v92 + 1) = 2;
                            }
                            else
                            {
                              if ( (unsigned int)v141 + 2 > 0xFF )
                                v142 = -1;
                              else
                                v142 = v141 + 2;
                              ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v92, v142);
                            }
                          }
                          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v92);
                        }
                      }
                    }
                  }
LABEL_141:
                  v89 = 0;
                }
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(v88 + 320), v90);
              if ( !v89 )
                break;
              v88 = *(_QWORD *)(v88 + 112);
              if ( !v88 )
                goto LABEL_315;
            }
            v36 = *(_QWORD *)(v88 + 840);
          }
          else
          {
LABEL_315:
            v36 = *(_QWORD *)(v87 + 4064);
          }
          *(_QWORD *)(v87 + 520) = 0LL;
          *(_DWORD *)(v87 + 1856) = 0;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v87 + 96));
          v94 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v87 + 96));
          v95 = *(_QWORD *)(v87 + 4928);
          *(_QWORD *)(v87 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v87 + 1856) = 72039;
          if ( v95 )
          {
            if ( *(_BYTE *)(v95 + 1) )
            {
              if ( *(_BYTE *)(v95 + 1) == 1 )
              {
                v152 = v95 + 136;
                v153 = *(_DWORD *)(v95 + 192);
                if ( v153 >> 17 < 0x3FFE && (unsigned __int16)v153 >> 1 == (v153 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v95 + 136));
                  *(_DWORD *)(v152 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v153 & 0xFFFE) == 0 && (v153 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v95, 2uLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v95 + 136), 0);
                }
              }
            }
            else
            {
              v96 = *(_QWORD *)(v95 + 8);
              if ( v96 && (v112 = *(_BYTE *)(v95 + 3), v113 = 0, v112) )
              {
                while ( 1 )
                {
                  v114 = (_BYTE *)(v96 + 2LL * v113);
                  if ( *v114 == 2 )
                  {
                    if ( v114[1] )
                      break;
                  }
                  if ( ++v113 >= v112 )
                    goto LABEL_147;
                }
                --v114[1];
              }
              else
              {
LABEL_147:
                if ( !_bittestandreset((signed __int32 *)(v95 + 16), 2u) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v95, 2uLL);
              }
            }
          }
          v21 = (*(_DWORD *)(v87 + 3132))-- == 1;
          if ( v21 )
          {
            v97 = *(struct _KEVENT **)(v87 + 3144);
            if ( v97 )
              KeSetEvent(v97, 0, 0);
          }
          *(_QWORD *)(v87 + 520) = 0LL;
          *(_DWORD *)(v87 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v87 + 96), v94);
          if ( (unsigned __int8)byte_1C009261B >= 4u )
            WPP_SF_q(25LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v87);
          v98 = 0;
          v99 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v87 + 4464));
          v100 = *(_QWORD *)(v87 + 4920);
          v101 = v99;
          if ( v100 )
          {
            v102 = *(unsigned __int8 *)(v100 + 1);
            if ( *(_BYTE *)(v100 + 1) )
            {
              if ( v102 == 1 )
              {
                v154 = v100 + 3848;
                v155 = *(_DWORD *)(v100 + 3904);
                if ( v155 >> 17 < 0x3FFE && (unsigned __int16)v155 >> 1 == (v155 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v100 + 3848));
                  *(_DWORD *)(v154 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v155 & 0xFFFE) == 0 && (v155 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, *(_QWORD *)(v87 + 4920), 0x3CuLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v100 + 3848), 0);
                }
              }
            }
            else
            {
              v103 = *(_QWORD *)(v100 + 8);
              if ( v103 && (v104 = *(_BYTE *)(v100 + 3)) != 0 )
              {
                while ( 1 )
                {
                  v105 = (_BYTE *)(v103 + 2LL * (unsigned __int8)v102);
                  if ( *v105 == 60 )
                  {
                    if ( v105[1] )
                      break;
                  }
                  LOBYTE(v102) = v102 + 1;
                  if ( (unsigned __int8)v102 >= v104 )
                    goto LABEL_159;
                }
                --v105[1];
              }
              else
              {
LABEL_159:
                if ( !_bittestandreset((signed __int32 *)(v100 + 20), 0x1Cu) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v100, 0x3CuLL);
              }
            }
          }
          v21 = (*(_DWORD *)(v87 + 4472))-- == 1;
          if ( v21 )
            v98 = 1;
          if ( (unsigned __int8)byte_1C009261B >= 4u )
            WPP_SF_qD(14LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, v87, *(unsigned int *)(v87 + 4472));
          KeReleaseSpinLock((PKSPIN_LOCK)(v87 + 4464), v101);
          if ( v98 )
          {
            v156 = *(struct _KEVENT **)(v87 + 1608);
            if ( v156 )
              KeSetEvent(v156, 0, 0);
          }
          if ( (unsigned __int8)byte_1C009261B >= 4u )
            WPP_SF_q(26LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v87);
          v12 = HIDWORD(v213);
        }
        v106 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
        v33 = v206;
        v107 = v106;
        v108 = (ULONG_PTR)v206[90].Blink;
        if ( v108 )
        {
          if ( *(_BYTE *)(v108 + 1) )
          {
            if ( *(_BYTE *)(v108 + 1) == 1 )
            {
              v157 = v108 + 200;
              v158 = *(_DWORD *)(v108 + 256);
              if ( v158 >> 17 < 0x3FFE && (unsigned __int16)v158 >> 1 == (v158 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v108 + 200));
                *(_DWORD *)(v157 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v158 & 0xFFFE) == 0 && (v158 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v108, 3uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v108 + 200), 0);
              }
            }
          }
          else
          {
            v109 = *(_QWORD *)(v108 + 8);
            if ( v109 && (v120 = *(_BYTE *)(v108 + 3), v121 = 0, v120) )
            {
              while ( 1 )
              {
                v122 = (_BYTE *)(v109 + 2LL * v121);
                if ( *v122 == 3 )
                {
                  if ( v122[1] )
                    break;
                }
                if ( ++v121 >= v120 )
                  goto LABEL_171;
              }
              --v122[1];
            }
            else
            {
LABEL_171:
              if ( !_bittestandreset((signed __int32 *)(v108 + 16), 3u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v108, 3uLL);
            }
          }
        }
        v21 = HIDWORD(v33[87].Blink)-- == 1;
        if ( v21 )
        {
          v159 = v33[88].Blink;
          if ( v159 )
          {
            v160 = (struct _KEVENT *)v159[254].Blink;
            if ( v160 )
              KeSetEvent(v160, 0, 0);
          }
        }
        KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v107);
LABEL_79:
        if ( !v36 )
        {
          v2 = 0;
          goto LABEL_84;
        }
        v60 = *(_QWORD *)(v36 + 1440);
        if ( v60 )
        {
          if ( !*(_BYTE *)(v60 + 1) )
          {
            v2 = 0;
            v61 = 0LL;
            if ( _bittestandset((signed __int32 *)(v60 + 16), 7u) )
            {
              v123 = *(_QWORD *)(v60 + 8);
              if ( !v123 )
                goto LABEL_452;
              v124 = *(_BYTE *)(v60 + 3);
              v125 = 0;
              if ( !v124 )
                goto LABEL_452;
              do
              {
                v126 = (_BYTE *)(v123 + 2LL * v125);
                if ( *v126 == 7 )
                {
                  if ( v126[1] != 0xFF )
                  {
                    ++v126[1];
                    goto LABEL_83;
                  }
                }
                else if ( !v126[1] )
                {
                  v61 = (_WORD *)(v123 + 2LL * v125);
                }
                ++v125;
              }
              while ( v125 < v124 );
              if ( v61 )
              {
                *v61 = 263;
              }
              else
              {
LABEL_452:
                if ( !*(_BYTE *)(v60 + 1) )
                {
                  v137 = *(_BYTE *)(v60 + 3);
                  if ( v137 == 0xFF )
                  {
                    ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v60);
                    *(_BYTE *)(v60 + 1) = 2;
                  }
                  else
                  {
                    if ( (unsigned int)v137 + 2 > 0xFF )
                      v138 = -1;
                    else
                      v138 = v137 + 2;
                    ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v60, v138);
                  }
                }
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v60);
              }
            }
            goto LABEL_83;
          }
          if ( *(_BYTE *)(v60 + 1) == 1 )
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v60 + 456), 1u);
        }
        v2 = 0;
LABEL_83:
        ++*(_DWORD *)(v36 + 1304);
        goto LABEL_84;
      }
      v30 = v30->Flink;
      v18 = v196;
      v200 = v30;
    }
    else
    {
      v30 = v30->Flink;
      v18 = v196;
      v200 = v30;
    }
  }
  *((_DWORD *)v22 + 22) = v31;
  if ( v31 > v1 )
    v2 = 261;
LABEL_24:
  KeReleaseSpinLock(&ndisIfListLock, v18);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qD(87LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, v22, v2);
  return v2;
}
