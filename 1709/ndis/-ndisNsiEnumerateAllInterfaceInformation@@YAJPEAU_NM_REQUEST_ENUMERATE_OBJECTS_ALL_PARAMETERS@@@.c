/*
 * XREFs of ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000A970
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     ndisIfDeleteStackEntries @ 0x1C00023D0 (ndisIfDeleteStackEntries.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C00027A4 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000BC90 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0067B44 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B8BF0 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B9600 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInterfaceInformation(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v1; // r13d
  _LIST_ENTRY *v2; // rbx
  int v3; // edi
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v4; // r15
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int *ThreadProperty; // rax
  unsigned int *v7; // rcx
  PACCESS_TOKEN v8; // rax
  void *v9; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  unsigned int v12; // r12d
  KIRQL v13; // al
  _LIST_ENTRY *v14; // rcx
  KIRQL v15; // r8
  _LIST_ENTRY *Flink; // rax
  unsigned int v17; // edx
  KIRQL v18; // si
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *Blink; // rdx
  void *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned int v25; // r8d
  unsigned int v26; // r10d
  unsigned int v27; // edx
  _LIST_ENTRY *v28; // rdi
  unsigned int v29; // r8d
  _LIST_ENTRY *v30; // rcx
  _LIST_ENTRY *v31; // r14
  __int64 v32; // r13
  KIRQL v33; // di
  int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rdi
  int v38; // esi
  KIRQL v39; // r15
  unsigned __int16 v40; // ax
  struct _NDIS_REFCOUNT_BLOCK *v41; // rcx
  KIRQL v42; // di
  ULONG_PTR v43; // r8
  int v44; // ecx
  __int64 v45; // rdx
  unsigned __int8 v46; // r10
  _BYTE *v47; // r9
  bool v48; // zf
  struct _KEVENT *v49; // rcx
  char v50; // si
  KIRQL v51; // al
  ULONG_PTR v52; // r10
  KIRQL v53; // r15
  int v54; // ecx
  __int64 v55; // r9
  unsigned __int8 v56; // r8
  _BYTE *v57; // rdx
  __int64 v58; // rbx
  char *v59; // rsi
  __int64 v60; // rbx
  __int64 v61; // rsi
  __int64 v62; // rbx
  KIRQL v63; // al
  ULONG_PTR v64; // r8
  KIRQL v65; // si
  int v66; // ecx
  __int64 v67; // r10
  unsigned __int8 v68; // r9
  _BYTE *v69; // rdx
  char v70; // al
  ULONG_PTR v71; // r8
  int v72; // ecx
  __int64 v73; // r10
  unsigned __int8 v74; // r9
  _BYTE *v75; // rdx
  ULONG_PTR v76; // r8
  int v77; // ecx
  __int64 v78; // r10
  unsigned __int8 v79; // r9
  _BYTE *v80; // rdx
  char v81; // al
  char v82; // al
  __int64 v83; // rbx
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // r15
  __int64 v87; // rdi
  int v88; // esi
  KIRQL v89; // r14
  unsigned __int16 v90; // cx
  KIRQL v91; // di
  ULONG_PTR v92; // r8
  int v93; // ecx
  __int64 v94; // r10
  unsigned __int8 v95; // r9
  _BYTE *v96; // rdx
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
  ULONG_PTR v107; // r8
  KIRQL v108; // bl
  __int64 v109; // rcx
  unsigned __int8 v110; // r10
  unsigned __int8 v111; // dl
  _BYTE *v112; // r9
  NTSTATUS v113; // ebx
  KIRQL v114; // r8
  unsigned __int64 v115; // r8
  unsigned __int64 v116; // rdx
  ULONG_PTR v117; // rbx
  unsigned int v118; // edx
  char v119; // al
  ULONG_PTR v120; // rbx
  unsigned int v121; // edx
  char v122; // al
  struct _KEVENT *v123; // rcx
  ULONG_PTR v124; // rdi
  unsigned int v125; // edx
  char v126; // al
  _LIST_ENTRY *v127; // rax
  struct _KEVENT *v128; // rcx
  ULONG_PTR v129; // rbx
  unsigned int v130; // edx
  char v131; // al
  ULONG_PTR v132; // rbx
  unsigned int v133; // edx
  char v134; // al
  struct _KEVENT *v135; // rcx
  ULONG_PTR v136; // rdi
  unsigned int v137; // edx
  ULONG_PTR v138; // rbx
  unsigned int v139; // edx
  int v140; // ebx
  __int64 v141; // rdx
  _QWORD *v142; // rcx
  __int64 v143; // rdx
  _QWORD *v144; // rcx
  __int64 v145; // rdx
  _QWORD *v146; // rcx
  unsigned int v147; // ecx
  struct _NDIS_REFCOUNT_BLOCK *v148; // rcx
  void *v149; // rcx
  void *v150; // rcx
  struct _KEVENT *v151; // rcx
  ULONG_PTR v152; // rbx
  unsigned int v153; // edx
  int Flink_high; // ebx
  _LIST_ENTRY *v155; // rdx
  _LIST_ENTRY *v156; // rcx
  _LIST_ENTRY *v157; // rdx
  _LIST_ENTRY *v158; // rcx
  _LIST_ENTRY *v159; // rdx
  _LIST_ENTRY *v160; // rcx
  unsigned int v161; // ecx
  struct _NDIS_REFCOUNT_BLOCK *v162; // rcx
  _LIST_ENTRY *v163; // rcx
  _LIST_ENTRY *v164; // rcx
  struct _KEVENT *v165; // rcx
  KIRQL v166; // [rsp+30h] [rbp-89h]
  BOOLEAN EffectiveOnly; // [rsp+31h] [rbp-88h] BYREF
  BOOLEAN CopyOnOpen[6]; // [rsp+32h] [rbp-87h] BYREF
  _LIST_ENTRY *v169; // [rsp+38h] [rbp-81h]
  int v170; // [rsp+40h] [rbp-79h]
  unsigned int v171; // [rsp+44h] [rbp-75h]
  unsigned int Size; // [rsp+48h] [rbp-71h]
  unsigned int Size_4; // [rsp+4Ch] [rbp-6Dh]
  unsigned int v174; // [rsp+50h] [rbp-69h]
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v175; // [rsp+58h] [rbp-61h]
  _LIST_ENTRY *v176; // [rsp+60h] [rbp-59h]
  void *v177; // [rsp+68h] [rbp-51h]
  __int64 v178; // [rsp+70h] [rbp-49h]
  __int64 v179; // [rsp+78h] [rbp-41h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+80h] [rbp-39h] BYREF
  PVOID TokenInformation; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v182[8]; // [rsp+90h] [rbp-29h] BYREF
  __int64 v183; // [rsp+D0h] [rbp+17h]
  __int128 v184; // [rsp+D8h] [rbp+1Fh]

  v1 = *((_DWORD *)a1 + 22);
  v2 = 0LL;
  v3 = 0;
  v175 = a1;
  v4 = a1;
  v171 = v1;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_q(86LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1);
  KeEnterCriticalRegion();
  CurrentThread = KeGetCurrentThread();
  v183 = 0LL;
  v184 = 0uLL;
  ThreadProperty = (unsigned int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v7 = ThreadProperty;
  if ( ThreadProperty )
  {
    v12 = *ThreadProperty;
    LODWORD(v183) = ThreadProperty[1];
    HIDWORD(v183) = v12;
    ObfDereferenceObject(ThreadProperty);
    if ( v12 )
      goto LABEL_14;
  }
  else
  {
    LODWORD(v183) = 0;
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
      v113 = SeQueryInformationToken(v8, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v9);
      if ( v113 >= 0 )
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
    v114 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    if ( ThreadSessionId < ndisCmSessionCount )
      v12 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
    KeReleaseSpinLock(&ndisCmSessionLock, v114);
    if ( !v12 )
      v12 = 1;
  }
  else
  {
    v12 = 1;
  }
  HIDWORD(v183) = v12;
  v2 = 0LL;
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
  v184 = *(__int128 *)((char *)&v14[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v15);
  v166 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v18 = v166;
  if ( !v1 )
  {
    for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
    {
      Blink = i[9].Blink;
      if ( v12 == LODWORD(Blink[1].Flink) )
        goto LABEL_20;
      if ( (_DWORD)v183 == -1 )
      {
        v115 = v184 - *(unsigned __int64 *)((char *)&Blink[105].Flink + 4);
        if ( (_LIST_ENTRY *)v184 == *(_LIST_ENTRY **)((char *)&Blink[105].Flink + 4) )
          v115 = *((_QWORD *)&v184 + 1) - *(unsigned __int64 *)((char *)&Blink[105].Blink + 4);
        if ( !v115 )
          goto LABEL_20;
      }
      if ( ((__int64)Blink[105].Flink & 2) == 0 && v12 == 1 )
LABEL_20:
        ++v3;
    }
    *((_DWORD *)v4 + 22) = v3;
    if ( v3 )
      LODWORD(v2) = 261;
    goto LABEL_24;
  }
  v22 = (void *)*((_QWORD *)v4 + 2);
  v23 = *((_QWORD *)v4 + 7);
  v24 = *((_QWORD *)v4 + 9);
  v25 = *((_DWORD *)v4 + 6);
  v26 = *((_DWORD *)v4 + 16);
  v27 = *((_DWORD *)v4 + 20);
  Size = v25;
  Size_4 = v26;
  v174 = v27;
  v177 = v22;
  v178 = v23;
  v179 = v24;
  if ( v22 && v25 != 8 || *((_QWORD *)v4 + 5) || *((_DWORD *)v4 + 12) || v23 && v26 < 0x28C || v24 && v27 < 0x238 )
  {
    LODWORD(v2) = -1073741306;
    goto LABEL_24;
  }
  memset(v182, 0, sizeof(v182));
  v28 = ndisIfList.Flink;
  HIDWORD(v182[6]) = 0;
  v29 = 0;
  v169 = ndisIfList.Flink;
  while ( v28 != &ndisIfList )
  {
    v30 = v28[9].Blink;
    v31 = v28 - 77;
    v176 = v28 - 77;
    if ( v12 == LODWORD(v30[1].Flink) )
      goto LABEL_36;
    if ( (_DWORD)v183 == -1 )
    {
      v116 = v184 - *(unsigned __int64 *)((char *)&v30[105].Flink + 4);
      if ( (_LIST_ENTRY *)v184 == *(_LIST_ENTRY **)((char *)&v30[105].Flink + 4) )
        v116 = *((_QWORD *)&v184 + 1) - *(unsigned __int64 *)((char *)&v30[105].Blink + 4);
      if ( !v116 )
        goto LABEL_36;
    }
    if ( ((__int64)v30[105].Flink & 2) == 0 && v12 == 1 )
    {
LABEL_36:
      v170 = ++v29;
      if ( v29 <= v1 )
      {
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v31[90].Flink);
        ++LODWORD(v31[81].Blink);
        v32 = 0LL;
        if ( BYTE1(v31[87].Blink) && *((_QWORD *)v4 + 1) < 2uLL )
        {
          v33 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
          if ( BYTE3(v31[87].Blink) )
          {
            v2 = v31[88].Blink;
            NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v31[90].Blink);
            ++HIDWORD(v31[87].Blink);
          }
          KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v33);
          if ( v2 )
          {
            v85 = ndisReferenceTopMiniportByNameForNsi((_DWORD)v2, 0, v34, 0, 2, 60);
            v86 = v85;
            if ( v85 )
            {
              KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v85 + 96));
              v87 = *(_QWORD *)(v86 + 2056);
              *(_QWORD *)(v86 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v86 + 1856) = 2234961;
              if ( v87 )
              {
                while ( 1 )
                {
                  v88 = 1;
                  v89 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v87 + 320));
                  if ( !*(_BYTE *)(v87 + 330) )
                  {
                    v90 = *(_WORD *)(v87 + 328);
                    if ( v90 >= 0xFFEBu )
                    {
                      ndisRefCountReferenceCountOverflow = 1;
                      v88 = 2;
                    }
                    else
                    {
                      *(_WORD *)(v87 + 328) = v90 + 1;
                      NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v87 + 336));
                      v88 = 0;
                    }
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)(v87 + 320), v89);
                  if ( !v88 )
                    break;
                  v87 = *(_QWORD *)(v87 + 112);
                  if ( !v87 )
                    goto LABEL_180;
                }
                v32 = *(_QWORD *)(v87 + 840);
              }
              else
              {
LABEL_180:
                v32 = *(_QWORD *)(v86 + 4064);
              }
              *(_QWORD *)(v86 + 520) = 0LL;
              *(_DWORD *)(v86 + 1856) = 0;
              KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v86 + 96));
              v91 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v86 + 96));
              v92 = *(_QWORD *)(v86 + 4928);
              *(_QWORD *)(v86 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v86 + 1856) = 71824;
              if ( v92 )
              {
                v93 = *(unsigned __int8 *)(v92 + 1);
                if ( *(_BYTE *)(v92 + 1) )
                {
                  if ( v93 == 1 )
                  {
                    v117 = v92 + 136;
                    v118 = *(_DWORD *)(v92 + 192);
                    if ( v118 >> 17 < 0x3FFE && (unsigned __int16)v118 >> 1 == (v118 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v92 + 136));
                      *(_DWORD *)(v117 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (v118 & 0xFFFE) == 0 && (v118 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, v92, 2uLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v92 + 136), 0);
                    }
                  }
                }
                else
                {
                  v94 = *(_QWORD *)(v92 + 8);
                  if ( v94 && (v95 = *(_BYTE *)(v92 + 3)) != 0 )
                  {
                    while ( 1 )
                    {
                      v96 = (_BYTE *)(v94 + 2LL * (unsigned __int8)v93);
                      if ( *v96 == 2 )
                      {
                        v119 = v96[1];
                        if ( v119 )
                          break;
                      }
                      LOBYTE(v93) = v93 + 1;
                      if ( (unsigned __int8)v93 >= v95 )
                        goto LABEL_139;
                    }
                    v96[1] = v119 - 1;
                  }
                  else
                  {
LABEL_139:
                    if ( !_bittestandreset((signed __int32 *)(v92 + 16), 2u) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v92, 2uLL);
                  }
                }
              }
              v48 = (*(_DWORD *)(v86 + 3132))-- == 1;
              if ( v48 )
              {
                v97 = *(struct _KEVENT **)(v86 + 3144);
                if ( v97 )
                  KeSetEvent(v97, 0, 0);
              }
              *(_QWORD *)(v86 + 520) = 0LL;
              *(_DWORD *)(v86 + 1856) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(v86 + 96), v91);
              if ( (unsigned __int8)byte_1C009875B >= 4u )
                WPP_SF_q(25LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v86);
              v98 = 0;
              v99 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v86 + 4464));
              v100 = *(_QWORD *)(v86 + 4920);
              v101 = v99;
              if ( v100 )
              {
                v102 = *(unsigned __int8 *)(v100 + 1);
                if ( *(_BYTE *)(v100 + 1) )
                {
                  if ( v102 == 1 )
                  {
                    v120 = v100 + 3848;
                    v121 = *(_DWORD *)(v100 + 3904);
                    if ( v121 >> 17 < 0x3FFE && (unsigned __int16)v121 >> 1 == (v121 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v100 + 3848));
                      *(_DWORD *)(v120 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (v121 & 0xFFFE) == 0 && (v121 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, *(_QWORD *)(v86 + 4920), 0x3CuLL);
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
                        v122 = v105[1];
                        if ( v122 )
                          break;
                      }
                      LOBYTE(v102) = v102 + 1;
                      if ( (unsigned __int8)v102 >= v104 )
                        goto LABEL_151;
                    }
                    v105[1] = v122 - 1;
                  }
                  else
                  {
LABEL_151:
                    if ( !_bittestandreset((signed __int32 *)(v100 + 20), 0x1Cu) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v100, 0x3CuLL);
                  }
                }
              }
              v48 = (*(_DWORD *)(v86 + 4472))-- == 1;
              if ( v48 )
                v98 = 1;
              if ( (unsigned __int8)byte_1C009875B >= 4u )
                WPP_SF_qD(14LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v86, *(unsigned int *)(v86 + 4472));
              KeReleaseSpinLock((PKSPIN_LOCK)(v86 + 4464), v101);
              if ( v98 )
              {
                v123 = *(struct _KEVENT **)(v86 + 1608);
                if ( v123 )
                  KeSetEvent(v123, 0, 0);
              }
              if ( (unsigned __int8)byte_1C009875B >= 4u )
                WPP_SF_q(26LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v86);
              v12 = HIDWORD(v183);
              v31 = v176;
            }
            else
            {
              v32 = 0LL;
            }
            v106 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
            v107 = (ULONG_PTR)v31[90].Blink;
            v108 = v106;
            if ( v107 )
            {
              if ( *(_BYTE *)(v107 + 1) )
              {
                if ( *(_BYTE *)(v107 + 1) == 1 )
                {
                  v124 = v107 + 200;
                  v125 = *(_DWORD *)(v107 + 256);
                  if ( v125 >> 17 < 0x3FFE && (unsigned __int16)v125 >> 1 == (v125 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v107 + 200));
                    *(_DWORD *)(v124 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( (v125 & 0xFFFE) == 0 && (v125 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v107, 3uLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v107 + 200), 0);
                  }
                }
              }
              else
              {
                v109 = *(_QWORD *)(v107 + 8);
                if ( v109 && (v110 = *(_BYTE *)(v107 + 3), v111 = 0, v110) )
                {
                  while ( 1 )
                  {
                    v112 = (_BYTE *)(v109 + 2LL * v111);
                    if ( *v112 == 3 )
                    {
                      v126 = v112[1];
                      if ( v126 )
                        break;
                    }
                    if ( ++v111 >= v110 )
                      goto LABEL_163;
                  }
                  v112[1] = v126 - 1;
                }
                else
                {
LABEL_163:
                  if ( !_bittestandreset((signed __int32 *)(v107 + 16), 3u) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v107, 3uLL);
                }
              }
            }
            v48 = HIDWORD(v31[87].Blink)-- == 1;
            if ( v48 )
            {
              v127 = v31[88].Blink;
              if ( v127 )
              {
                v128 = (struct _KEVENT *)v127[254].Blink;
                if ( v128 )
                  KeSetEvent(v128, 0, 0);
              }
            }
            KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v108);
LABEL_77:
            if ( v32 )
            {
              NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v32 + 1440));
              ++*(_DWORD *)(v32 + 1304);
            }
            v18 = v166;
            v4 = v175;
          }
          else if ( BYTE2(v31[87].Blink) )
          {
            v35 = ndisReferenceTopMiniportByNameForNsi(v31[88].Blink[2].Flink, 0, v34, 0, 2, 60);
            v36 = v35;
            if ( v35 )
            {
              KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v35 + 96));
              v37 = *(_QWORD *)(v36 + 2056);
              *(_QWORD *)(v36 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v36 + 1856) = 2234961;
              if ( v37 )
              {
                while ( 1 )
                {
                  v38 = 1;
                  v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v37 + 320));
                  if ( !*(_BYTE *)(v37 + 330) )
                  {
                    v40 = *(_WORD *)(v37 + 328);
                    if ( v40 >= 0xFFEBu )
                    {
                      ndisRefCountReferenceCountOverflow = 1;
                      v38 = 2;
                    }
                    else
                    {
                      v41 = *(struct _NDIS_REFCOUNT_BLOCK **)(v37 + 336);
                      *(_WORD *)(v37 + 328) = v40 + 1;
                      NdisReferenceWithTag(v41);
                      v38 = 0;
                    }
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)(v37 + 320), v39);
                  if ( !v38 )
                    break;
                  v37 = *(_QWORD *)(v37 + 112);
                  if ( !v37 )
                    goto LABEL_239;
                }
                v32 = *(_QWORD *)(v37 + 840);
              }
              else
              {
LABEL_239:
                v32 = *(_QWORD *)(v36 + 4064);
              }
              *(_QWORD *)(v36 + 520) = 0LL;
              *(_DWORD *)(v36 + 1856) = 0;
              KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v36 + 96));
              v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v36 + 96));
              v43 = *(_QWORD *)(v36 + 4928);
              *(_QWORD *)(v36 + 520) = KeGetCurrentThread();
              *(_DWORD *)(v36 + 1856) = 71824;
              if ( v43 )
              {
                v44 = *(unsigned __int8 *)(v43 + 1);
                if ( *(_BYTE *)(v43 + 1) )
                {
                  if ( v44 == 1 )
                  {
                    v129 = v43 + 136;
                    v130 = *(_DWORD *)(v43 + 192);
                    if ( v130 >> 17 < 0x3FFE && (unsigned __int16)v130 >> 1 == (v130 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v43 + 136));
                      *(_DWORD *)(v129 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (v130 & 0xFFFE) == 0 && (v130 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, v43, 2uLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v43 + 136), 0);
                    }
                  }
                }
                else
                {
                  v45 = *(_QWORD *)(v43 + 8);
                  if ( v45 && (v46 = *(_BYTE *)(v43 + 3)) != 0 )
                  {
                    while ( 1 )
                    {
                      v47 = (_BYTE *)(v45 + 2LL * (unsigned __int8)v44);
                      if ( *v47 == 2 )
                      {
                        v131 = v47[1];
                        if ( v131 )
                          break;
                      }
                      LOBYTE(v44) = v44 + 1;
                      if ( (unsigned __int8)v44 >= v46 )
                        goto LABEL_56;
                    }
                    v47[1] = v131 - 1;
                  }
                  else
                  {
LABEL_56:
                    if ( !_bittestandreset((signed __int32 *)(v43 + 16), 2u) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v43, 2uLL);
                  }
                }
              }
              v48 = (*(_DWORD *)(v36 + 3132))-- == 1;
              if ( v48 )
              {
                v49 = *(struct _KEVENT **)(v36 + 3144);
                if ( v49 )
                  KeSetEvent(v49, 0, 0);
              }
              *(_QWORD *)(v36 + 520) = 0LL;
              *(_DWORD *)(v36 + 1856) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(v36 + 96), v42);
              if ( (unsigned __int8)byte_1C009875B >= 4u )
                WPP_SF_q(25LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v36);
              v50 = 0;
              v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v36 + 4464));
              v52 = *(_QWORD *)(v36 + 4920);
              v53 = v51;
              if ( v52 )
              {
                v54 = *(unsigned __int8 *)(v52 + 1);
                if ( *(_BYTE *)(v52 + 1) )
                {
                  if ( v54 == 1 )
                  {
                    v132 = v52 + 3848;
                    v133 = *(_DWORD *)(v52 + 3904);
                    if ( v133 >> 17 < 0x3FFE && (unsigned __int16)v133 >> 1 == (v133 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v52 + 3848));
                      *(_DWORD *)(v132 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (v133 & 0xFFFE) == 0 && (v133 & 1) == 0 )
                        ndisBugCheckEx(0x1EuLL, 0LL, *(_QWORD *)(v36 + 4920), 0x3CuLL);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v52 + 3848), 0);
                    }
                  }
                }
                else
                {
                  v55 = *(_QWORD *)(v52 + 8);
                  if ( v55 && (v56 = *(_BYTE *)(v52 + 3)) != 0 )
                  {
                    while ( 1 )
                    {
                      v57 = (_BYTE *)(v55 + 2LL * (unsigned __int8)v54);
                      if ( *v57 == 60 )
                      {
                        v134 = v57[1];
                        if ( v134 )
                          break;
                      }
                      LOBYTE(v54) = v54 + 1;
                      if ( (unsigned __int8)v54 >= v56 )
                        goto LABEL_68;
                    }
                    v57[1] = v134 - 1;
                  }
                  else
                  {
LABEL_68:
                    if ( !_bittestandreset((signed __int32 *)(v52 + 20), 0x1Cu) )
                      ndisBugCheckEx(0x1EuLL, 0LL, v52, 0x3CuLL);
                  }
                }
              }
              v48 = (*(_DWORD *)(v36 + 4472))-- == 1;
              if ( v48 )
                v50 = 1;
              if ( (unsigned __int8)byte_1C009875B >= 4u )
                WPP_SF_qD(14LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v36, *(unsigned int *)(v36 + 4472));
              KeReleaseSpinLock((PKSPIN_LOCK)(v36 + 4464), v53);
              if ( v50 )
              {
                v135 = *(struct _KEVENT **)(v36 + 1608);
                if ( v135 )
                  KeSetEvent(v135, 0, 0);
              }
              if ( (unsigned __int8)byte_1C009875B >= 4u )
                WPP_SF_q(26LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v36);
              v12 = HIDWORD(v183);
              goto LABEL_77;
            }
            v32 = 0LL;
          }
          v31 = v176;
          v28 = v169;
        }
        KeReleaseSpinLock(&ndisIfListLock, v18);
        if ( *((_QWORD *)v4 + 2) )
        {
          v58 = Size;
          v59 = (char *)v177;
          memmove(v177, &v31[82], Size);
          v177 = &v59[v58];
        }
        if ( *((_QWORD *)v4 + 7) )
        {
          v83 = v178;
          v84 = Size_4;
          v182[5] = v178;
          LODWORD(v182[6]) = Size_4;
          LODWORD(v182[4]) = 1;
          ndisNsiGetInterfaceRodEnumObject(
            (struct _NDIS_IF_BLOCK *)v31,
            (struct _NDIS_IF_BLOCK *)v32,
            (struct _NM_REQUEST_GET_PARAMETER *)v182);
          v178 = v84 + v83;
        }
        if ( *((_QWORD *)v4 + 9) )
        {
          v60 = v179;
          v61 = v174;
          v182[5] = v179;
          LODWORD(v182[6]) = v174;
          LODWORD(v182[4]) = 2;
          ndisNsiGetInterfaceRosEnumObject(
            (struct _NDIS_IF_BLOCK *)v31,
            (struct _NDIS_IF_BLOCK *)v32,
            (struct _NM_REQUEST_GET_PARAMETER *)v182);
          v179 = v61 + v60;
        }
        v166 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        v18 = v166;
        if ( !v32 )
          goto LABEL_109;
        if ( *(_BYTE *)(v32 + 1402) )
        {
          v62 = *(_QWORD *)(v32 + 1416) + 320LL;
          v63 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v62);
          v64 = *(_QWORD *)(v62 + 16);
          v65 = v63;
          if ( v64 )
          {
            v66 = *(unsigned __int8 *)(v64 + 1);
            if ( *(_BYTE *)(v64 + 1) )
            {
              if ( v66 == 1 )
              {
                v136 = v64 + 712;
                v137 = *(_DWORD *)(v64 + 768);
                if ( v137 >> 17 < 0x3FFE && (unsigned __int16)v137 >> 1 == (v137 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v64 + 712));
                  *(_DWORD *)(v136 + 56) &= 0x10001u;
                  v28 = v169;
                }
                else
                {
                  if ( (v137 & 0xFFFE) == 0 && (v137 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v64, 0xBuLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v64 + 712), 0);
                  v28 = v169;
                }
              }
            }
            else
            {
              v67 = *(_QWORD *)(v64 + 8);
              if ( v67 && (v68 = *(_BYTE *)(v64 + 3)) != 0 )
              {
                while ( 1 )
                {
                  v69 = (_BYTE *)(v67 + 2LL * (unsigned __int8)v66);
                  if ( *v69 == 11 )
                  {
                    v70 = v69[1];
                    if ( v70 )
                      break;
                  }
                  LOBYTE(v66) = v66 + 1;
                  if ( (unsigned __int8)v66 >= v68 )
                    goto LABEL_96;
                }
                v69[1] = v70 - 1;
              }
              else
              {
LABEL_96:
                if ( !_bittestandreset((signed __int32 *)(v64 + 16), 0xBu) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v64, 0xBuLL);
              }
            }
          }
          v48 = (*(_WORD *)(v62 + 8))-- == 1;
          if ( v48 && !*(_BYTE *)(v62 + 11) )
          {
            NdisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(v62 + 16));
            *(_QWORD *)(v62 + 16) = 0LL;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)v62, v65);
          v18 = v166;
        }
        v71 = *(_QWORD *)(v32 + 1440);
        if ( v71 )
        {
          v72 = *(unsigned __int8 *)(v71 + 1);
          if ( *(_BYTE *)(v71 + 1) )
          {
            if ( v72 == 1 )
            {
              v138 = v71 + 456;
              v139 = *(_DWORD *)(v71 + 512);
              if ( v139 >> 17 < 0x3FFE && (unsigned __int16)v139 >> 1 == (v139 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v71 + 456));
                *(_DWORD *)(v138 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v139 & 0xFFFE) == 0 && (v139 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v71, 7uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v71 + 456), 0);
              }
            }
          }
          else
          {
            v73 = *(_QWORD *)(v71 + 8);
            if ( v73 && (v74 = *(_BYTE *)(v71 + 3)) != 0 )
            {
              while ( 1 )
              {
                v75 = (_BYTE *)(v73 + 2LL * (unsigned __int8)v72);
                if ( *v75 == 7 )
                {
                  v81 = v75[1];
                  if ( v81 )
                    break;
                }
                LOBYTE(v72) = v72 + 1;
                if ( (unsigned __int8)v72 >= v74 )
                  goto LABEL_107;
              }
              v75[1] = v81 - 1;
            }
            else
            {
LABEL_107:
              if ( !_bittestandreset((signed __int32 *)(v71 + 16), 7u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v71, 7uLL);
            }
          }
        }
        v48 = (*(_DWORD *)(v32 + 1304))-- == 1;
        if ( v48 )
        {
          v140 = *(_DWORD *)(v32 + 4);
          KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
          ndisIfDeleteStackEntries((_DWORD *)v32);
          *(_QWORD *)(v32 + 1296) = 0LL;
          KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
          v141 = *(_QWORD *)(v32 + 1232);
          if ( *(_QWORD *)(v141 + 8) != v32 + 1232 || (v142 = *(_QWORD **)(v32 + 1240), *v142 != v32 + 1232) )
            __fastfail(3u);
          *v142 = v141;
          *(_QWORD *)(v141 + 8) = v142;
          v143 = *(_QWORD *)(v32 + 1248);
          if ( *(_QWORD *)(v143 + 8) != v32 + 1248 || (v144 = *(_QWORD **)(v32 + 1256), *v144 != v32 + 1248) )
            __fastfail(3u);
          *v144 = v143;
          *(_QWORD *)(v143 + 8) = v144;
          v145 = *(_QWORD *)(v32 + 1264);
          if ( *(_QWORD *)(v145 + 8) != v32 + 1264 || (v146 = *(_QWORD **)(v32 + 1272), *v146 != v32 + 1264) )
            __fastfail(3u);
          *v146 = v145;
          *(_QWORD *)(v145 + 8) = v146;
          NETWORKBLOCK_DECREMENT_REF(*(_QWORD *)(v32 + 1376));
          v147 = (unsigned int)(v140 - 1) >> 3;
          if ( IfUsedIfIndicesLength >= v147 + 1 )
            *((_BYTE *)IfUsedIfIndicesData + v147) &= ~(1 << ((v140 - 1) & 7));
          v148 = *(struct _NDIS_REFCOUNT_BLOCK **)(v32 + 1440);
          --ndisInterfaceCount;
          NdisFreeRefCount(v148);
          v149 = *(void **)(v32 + 1432);
          v2 = 0LL;
          *(_QWORD *)(v32 + 1440) = 0LL;
          if ( v149 )
          {
            ExFreePoolWithTag(v149, 0);
            *(_QWORD *)(v32 + 1432) = 0LL;
          }
          v150 = *(void **)(v32 + 1280);
          if ( v150 )
          {
            ExFreePoolWithTag(v150, 0);
            *(_QWORD *)(v32 + 1280) = 0LL;
            *(_QWORD *)(v32 + 1288) = 0LL;
          }
          v151 = *(struct _KEVENT **)(v32 + 1392);
          if ( v151 )
            KeSetEvent(v151, 0, 0);
          ExFreePoolWithTag((PVOID)v32, 0);
        }
        else
        {
LABEL_109:
          v2 = 0LL;
        }
        v76 = (ULONG_PTR)v31[90].Flink;
        v28 = v28->Flink;
        v169 = v28;
        if ( v76 )
        {
          v77 = *(unsigned __int8 *)(v76 + 1);
          if ( *(_BYTE *)(v76 + 1) )
          {
            if ( v77 == 1 )
            {
              v152 = v76 + 392;
              v153 = *(_DWORD *)(v76 + 448);
              if ( v153 >> 17 < 0x3FFE && (unsigned __int16)v153 >> 1 == (v153 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v76 + 392));
                *(_DWORD *)(v152 + 56) &= 0x10001u;
                v2 = 0LL;
              }
              else
              {
                if ( (v153 & 0xFFFE) == 0 && (v153 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v76, 6uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v76 + 392), 0);
                v2 = 0LL;
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
                if ( *v80 == 6 )
                {
                  v82 = v80[1];
                  if ( v82 )
                    break;
                }
                LOBYTE(v77) = v77 + 1;
                if ( (unsigned __int8)v77 >= v79 )
                  goto LABEL_116;
              }
              v80[1] = v82 - 1;
            }
            else
            {
LABEL_116:
              if ( !_bittestandreset((signed __int32 *)(v76 + 16), 6u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v76, 6uLL);
            }
          }
        }
        v48 = LODWORD(v31[81].Blink)-- == 1;
        if ( v48 )
        {
          Flink_high = HIDWORD(v31->Flink);
          KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
          ndisIfDeleteStackEntries(v31);
          v31[81].Flink = 0LL;
          KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
          v155 = v31[77].Flink;
          if ( v155->Blink != &v31[77] || (v156 = v31[77].Blink, v156->Flink != &v31[77]) )
            __fastfail(3u);
          v156->Flink = v155;
          v155->Blink = v156;
          v157 = v31[78].Flink;
          if ( v157->Blink != &v31[78] || (v158 = v31[78].Blink, v158->Flink != &v31[78]) )
            __fastfail(3u);
          v158->Flink = v157;
          v157->Blink = v158;
          v159 = v31[79].Flink;
          if ( v159->Blink != &v31[79] || (v160 = v31[79].Blink, v160->Flink != &v31[79]) )
            __fastfail(3u);
          v160->Flink = v159;
          v159->Blink = v160;
          NETWORKBLOCK_DECREMENT_REF((__int64)v31[86].Flink);
          v161 = (unsigned int)(Flink_high - 1) >> 3;
          if ( IfUsedIfIndicesLength >= v161 + 1 )
            *((_BYTE *)IfUsedIfIndicesData + v161) &= ~(1 << ((Flink_high - 1) & 7));
          v162 = (struct _NDIS_REFCOUNT_BLOCK *)v31[90].Flink;
          --ndisInterfaceCount;
          NdisFreeRefCount(v162);
          v163 = v31[89].Blink;
          v2 = 0LL;
          v31[90].Flink = 0LL;
          if ( v163 )
          {
            ExFreePoolWithTag(v163, 0);
            v31[89].Blink = 0LL;
          }
          v164 = v31[80].Flink;
          if ( v164 )
          {
            ExFreePoolWithTag(v164, 0);
            v31[80].Flink = 0LL;
            v31[80].Blink = 0LL;
          }
          v165 = (struct _KEVENT *)v31[87].Flink;
          if ( v165 )
            KeSetEvent(v165, 0, 0);
          ExFreePoolWithTag(v31, 0);
        }
        v1 = v171;
        v29 = v170;
        continue;
      }
      v28 = v28->Flink;
      v169 = v28;
    }
    else
    {
      v28 = v28->Flink;
      v169 = v28;
    }
  }
  *((_DWORD *)v4 + 22) = v29;
  if ( v29 > v1 )
    LODWORD(v2) = 261;
LABEL_24:
  KeReleaseSpinLock(&ndisIfListLock, v18);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qD(87LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, v4, (unsigned int)v2);
  return (unsigned int)v2;
}
