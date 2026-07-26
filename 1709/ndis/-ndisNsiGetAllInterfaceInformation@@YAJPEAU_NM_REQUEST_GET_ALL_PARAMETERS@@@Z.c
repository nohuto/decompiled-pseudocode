/*
 * XREFs of ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000D6B0
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     ndisIfDeleteStackEntries @ 0x1C00023D0 (ndisIfDeleteStackEntries.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C00027A4 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000BC90 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0067B44 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B8820 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B8BF0 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B9600 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B9D20 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B9F64 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiGetAllInterfaceInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  _LIST_ENTRY *v1; // r14
  __int64 v2; // r13
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v3; // rdi
  _LIST_ENTRY **v4; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  _LIST_ENTRY *v6; // rbx
  _DWORD *ThreadProperty; // rax
  __int64 v8; // rcx
  unsigned int v9; // r12d
  int v10; // r15d
  PACCESS_TOKEN v11; // rax
  void *v12; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v14; // edi
  KIRQL v15; // al
  _LIST_ENTRY *v16; // rcx
  KIRQL v17; // r8
  _LIST_ENTRY *Flink; // rax
  unsigned int v19; // edx
  KIRQL v20; // al
  int v21; // ecx
  KIRQL v22; // si
  _LIST_ENTRY *v23; // rax
  _LIST_ENTRY *v24; // rcx
  _LIST_ENTRY *Blink; // rcx
  __int64 v26; // rbx
  KIRQL v27; // di
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rsi
  KIRQL v32; // r12
  int v33; // r14d
  unsigned __int16 v34; // ax
  struct _NDIS_REFCOUNT_BLOCK *v35; // rcx
  __int64 v36; // rax
  KIRQL v37; // si
  ULONG_PTR v38; // r8
  int v39; // ecx
  __int64 v40; // r9
  unsigned __int8 v41; // dl
  _BYTE *v42; // r10
  bool v43; // zf
  struct _KEVENT *v44; // rcx
  char v45; // r14
  KIRQL v46; // al
  ULONG_PTR v47; // r8
  KIRQL v48; // r15
  int v49; // ecx
  __int64 v50; // r10
  unsigned __int8 v51; // r9
  _BYTE *v52; // rdx
  KIRQL v53; // al
  ULONG_PTR v54; // r8
  KIRQL v55; // bl
  __int64 v56; // rcx
  int v57; // r12d
  __int64 v58; // rax
  KIRQL v59; // r15
  __int64 v60; // rbx
  KIRQL v61; // al
  ULONG_PTR v62; // r8
  KIRQL v63; // si
  int v64; // ecx
  __int64 v65; // r10
  unsigned __int8 v66; // r9
  _BYTE *v67; // rdx
  char v68; // al
  ULONG_PTR v69; // r8
  int v70; // ecx
  __int64 v71; // r10
  unsigned __int8 v72; // r9
  _BYTE *v73; // rdx
  ULONG_PTR v74; // r8
  int v75; // ecx
  __int64 v76; // r10
  unsigned __int8 v77; // r9
  _BYTE *v78; // rdx
  __int64 v80; // rax
  __int64 v81; // rbx
  __int64 v82; // rsi
  int v83; // r14d
  KIRQL v84; // r12
  unsigned __int16 v85; // cx
  __int64 v86; // rax
  KIRQL v87; // si
  ULONG_PTR v88; // r8
  int v89; // ecx
  __int64 v90; // r9
  unsigned __int8 v91; // dl
  _BYTE *v92; // r10
  struct _KEVENT *v93; // rcx
  char v94; // r14
  KIRQL v95; // al
  ULONG_PTR v96; // r8
  KIRQL v97; // r15
  int v98; // ecx
  __int64 v99; // r10
  unsigned __int8 v100; // r9
  _BYTE *v101; // rdx
  int v102; // ecx
  _LIST_ENTRY *v103; // rax
  _LIST_ENTRY *v104; // rcx
  char v105; // al
  char v106; // al
  NTSTATUS v107; // edi
  unsigned __int8 v108; // r9
  unsigned __int8 v109; // dl
  _BYTE *v110; // r10
  unsigned int ThreadSessionId; // eax
  KIRQL v112; // dl
  unsigned __int64 v113; // rdx
  unsigned __int64 v114; // rdx
  ULONG_PTR v115; // rdi
  unsigned int v116; // edx
  char v117; // al
  ULONG_PTR v118; // rdi
  unsigned int v119; // edx
  char v120; // al
  struct _KEVENT *v121; // rcx
  ULONG_PTR v122; // rdi
  unsigned int v123; // edx
  char v124; // al
  _LIST_ENTRY *v125; // rax
  struct _KEVENT *v126; // rcx
  ULONG_PTR v127; // rdi
  unsigned int v128; // edx
  char v129; // al
  ULONG_PTR v130; // rsi
  unsigned int v131; // edx
  char v132; // al
  struct _KEVENT *v133; // rcx
  ULONG_PTR v134; // rdi
  unsigned int v135; // edx
  ULONG_PTR v136; // rbx
  unsigned int v137; // edx
  int v138; // ebx
  __int64 v139; // rdx
  _QWORD *v140; // rcx
  __int64 v141; // rdx
  _QWORD *v142; // rcx
  __int64 v143; // rdx
  _QWORD *v144; // rcx
  unsigned int v145; // ecx
  struct _NDIS_REFCOUNT_BLOCK *v146; // rcx
  void *v147; // rcx
  void *v148; // rcx
  struct _KEVENT *v149; // rcx
  ULONG_PTR v150; // rbx
  unsigned int v151; // edx
  int Flink_high; // ebx
  _LIST_ENTRY *v153; // rdx
  _LIST_ENTRY *v154; // rcx
  _LIST_ENTRY *v155; // rdx
  _LIST_ENTRY *v156; // rcx
  _LIST_ENTRY *v157; // rdx
  _LIST_ENTRY *v158; // rcx
  unsigned int v159; // ecx
  struct _NDIS_REFCOUNT_BLOCK *v160; // rcx
  _LIST_ENTRY *v161; // rcx
  _LIST_ENTRY *v162; // rcx
  struct _KEVENT *v163; // rcx
  KIRQL v164; // [rsp+30h] [rbp-69h]
  _LIST_ENTRY *v165; // [rsp+38h] [rbp-61h]
  BOOLEAN EffectiveOnly; // [rsp+40h] [rbp-59h] BYREF
  BOOLEAN CopyOnOpen[7]; // [rsp+41h] [rbp-58h] BYREF
  __int64 v168; // [rsp+48h] [rbp-51h]
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v169; // [rsp+50h] [rbp-49h]
  _QWORD v170[8]; // [rsp+60h] [rbp-39h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+A0h] [rbp+7h] BYREF
  PVOID TokenInformation; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v173; // [rsp+B0h] [rbp+17h]
  __int128 v174; // [rsp+B8h] [rbp+1Fh]

  v1 = 0LL;
  v169 = a1;
  v2 = 0LL;
  v3 = a1;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_q(82LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1);
  memset(v170, 0, sizeof(v170));
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v3 + 6) != 8 )
  {
    v57 = -1073741808;
    goto LABEL_81;
  }
  v4 = (_LIST_ENTRY **)*((_QWORD *)v3 + 2);
  CurrentThread = KeGetCurrentThread();
  v173 = 0LL;
  v174 = 0uLL;
  v6 = *v4;
  ThreadProperty = PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v9 = 1;
  if ( ThreadProperty )
  {
    v10 = ThreadProperty[1];
    HIDWORD(v173) = *ThreadProperty;
    v9 = HIDWORD(v173);
    LODWORD(v173) = v10;
    ObfDereferenceObject(ThreadProperty);
    if ( v9 )
      goto LABEL_14;
    v9 = 1;
  }
  else
  {
    v10 = 0;
    LODWORD(v173) = 0;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
  }
  else
  {
    v11 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v12 = v11;
    if ( v11 )
    {
      v107 = SeQueryInformationToken(v11, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v12);
      if ( v107 >= 0 )
      {
        v14 = (unsigned int)TokenInformation;
        v1 = 0LL;
        goto LABEL_10;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    v1 = 0LL;
  }
  v14 = CurrentProcessSessionId;
LABEL_10:
  if ( v14 == -1 )
  {
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    v10 = v173;
    v14 = ThreadSessionId;
  }
  if ( v14 < ndisCmSessionCount )
  {
    v9 = 0;
    v112 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    if ( v14 < ndisCmSessionCount )
      v9 = *((_DWORD *)ndisCmSession + 6 * v14);
    KeReleaseSpinLock(&ndisCmSessionLock, v112);
    if ( !v9 )
      v9 = 1;
  }
  v3 = v169;
  HIDWORD(v173) = v9;
LABEL_14:
  v15 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v16 = 0LL;
  v17 = v15;
  Flink = ndisIfCompartmentList.Flink;
  if ( ndisIfCompartmentList.Flink != &ndisIfCompartmentList )
  {
    while ( 1 )
    {
      v19 = (unsigned int)Flink[1].Flink;
      if ( v19 == v9 )
        break;
      if ( v19 <= v9 )
      {
        Flink = Flink->Flink;
        if ( Flink != &ndisIfCompartmentList )
          continue;
      }
      goto LABEL_17;
    }
    v16 = Flink;
  }
LABEL_17:
  v174 = *(__int128 *)((char *)&v16[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v17);
  v20 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v21 = *((_DWORD *)v3 + 8);
  v22 = v20;
  v164 = v20;
  if ( !v21 )
  {
    v23 = ndisIfList.Flink;
    v1 = 0LL;
    v165 = 0LL;
    if ( ndisIfList.Flink != &ndisIfList )
    {
      while ( 1 )
      {
        v24 = v23[5].Flink;
        if ( v24 == v6 )
          break;
        if ( v24 <= v6 )
        {
          v23 = v23->Flink;
          if ( v23 != &ndisIfList )
            continue;
        }
        goto LABEL_24;
      }
      v1 = v23 - 77;
      v165 = v23 - 77;
    }
LABEL_24:
    if ( !v1 )
      goto LABEL_174;
    Blink = v1[86].Blink;
    if ( v9 != LODWORD(Blink[1].Flink) )
    {
      v114 = v174 - *(unsigned __int64 *)((char *)&Blink[105].Flink + 4);
      if ( (_LIST_ENTRY *)v174 == *(_LIST_ENTRY **)((char *)&Blink[105].Flink + 4) )
        v114 = *((_QWORD *)&v174 + 1) - *(unsigned __int64 *)((char *)&Blink[105].Blink + 4);
      if ( v114 && (((__int64)Blink[105].Flink & 2) != 0 || v9 != 1) )
      {
        v1 = 0LL;
LABEL_174:
        v57 = 0;
        goto LABEL_76;
      }
    }
LABEL_26:
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v1[90].Flink, 3u);
    ++LODWORD(v1[81].Blink);
    if ( !BYTE1(v1[87].Blink) || *((_QWORD *)v3 + 1) >= 2uLL )
    {
LABEL_75:
      v57 = 0;
      **((_QWORD **)v3 + 2) = v1[82].Flink;
      goto LABEL_76;
    }
    v26 = 0LL;
    v27 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
    if ( BYTE3(v1[87].Blink) )
    {
      v26 = (__int64)v1[88].Blink;
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v1[90].Blink, 3u);
      ++HIDWORD(v1[87].Blink);
    }
    KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v27);
    if ( v26 )
    {
      v29 = ndisReferenceTopMiniportByNameForNsi(v26, 0, v28, 0, 2u, 0x3Cu);
      v30 = v29;
      if ( v29 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v29 + 96));
        v31 = *(_QWORD *)(v30 + 2056);
        *(_QWORD *)(v30 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v30 + 1856) = 2234961;
        if ( v31 )
        {
          while ( 1 )
          {
            v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v31 + 320));
            v33 = 1;
            if ( !*(_BYTE *)(v31 + 330) )
            {
              v34 = *(_WORD *)(v31 + 328);
              if ( v34 >= 0xFFEBu )
              {
                ndisRefCountReferenceCountOverflow = 1;
                v33 = 2;
              }
              else
              {
                v35 = *(struct _NDIS_REFCOUNT_BLOCK **)(v31 + 336);
                *(_WORD *)(v31 + 328) = v34 + 1;
                NdisReferenceWithTag(v35, 0xBu);
                v33 = 0;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v31 + 320), v32);
            if ( !v33 )
              break;
            v31 = *(_QWORD *)(v31 + 112);
            if ( !v31 )
              goto LABEL_180;
          }
          v36 = *(_QWORD *)(v31 + 840);
        }
        else
        {
LABEL_180:
          v36 = *(_QWORD *)(v30 + 4064);
        }
        v168 = v36;
        *(_QWORD *)(v30 + 520) = 0LL;
        *(_DWORD *)(v30 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v30 + 96));
        v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v30 + 96));
        v38 = *(_QWORD *)(v30 + 4928);
        *(_QWORD *)(v30 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v30 + 1856) = 71824;
        if ( v38 )
        {
          v39 = *(unsigned __int8 *)(v38 + 1);
          if ( *(_BYTE *)(v38 + 1) )
          {
            if ( v39 == 1 )
            {
              v115 = v38 + 136;
              v116 = *(_DWORD *)(v38 + 192);
              if ( v116 >> 17 < 0x3FFE && (unsigned __int16)v116 >> 1 == (v116 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v38 + 136));
                *(_DWORD *)(v115 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v116 & 0xFFFE) == 0 && (v116 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v38, 2uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v38 + 136), 0);
              }
            }
          }
          else
          {
            v40 = *(_QWORD *)(v38 + 8);
            if ( v40 && (v41 = *(_BYTE *)(v38 + 3)) != 0 )
            {
              while ( 1 )
              {
                v42 = (_BYTE *)(v40 + 2LL * (unsigned __int8)v39);
                if ( *v42 == 2 )
                {
                  v117 = v42[1];
                  if ( v117 )
                    break;
                }
                LOBYTE(v39) = v39 + 1;
                if ( (unsigned __int8)v39 >= v41 )
                  goto LABEL_44;
              }
              v42[1] = v117 - 1;
            }
            else
            {
LABEL_44:
              if ( !_bittestandreset((signed __int32 *)(v38 + 16), 2u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v38, 2uLL);
            }
          }
        }
        v43 = (*(_DWORD *)(v30 + 3132))-- == 1;
        if ( v43 )
        {
          v44 = *(struct _KEVENT **)(v30 + 3144);
          if ( v44 )
            KeSetEvent(v44, 0, 0);
        }
        *(_QWORD *)(v30 + 520) = 0LL;
        *(_DWORD *)(v30 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v30 + 96), v37);
        if ( (unsigned __int8)byte_1C009875B >= 4u )
          WPP_SF_q(25LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v30);
        v45 = 0;
        v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v30 + 4464));
        v47 = *(_QWORD *)(v30 + 4920);
        v48 = v46;
        if ( v47 )
        {
          v49 = *(unsigned __int8 *)(v47 + 1);
          if ( *(_BYTE *)(v47 + 1) )
          {
            if ( v49 == 1 )
            {
              v118 = v47 + 3848;
              v119 = *(_DWORD *)(v47 + 3904);
              if ( v119 >> 17 < 0x3FFE && (unsigned __int16)v119 >> 1 == (v119 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v47 + 3848));
                *(_DWORD *)(v118 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v119 & 0xFFFE) == 0 && (v119 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v47, 0x3CuLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v47 + 3848), 0);
              }
            }
          }
          else
          {
            v50 = *(_QWORD *)(v47 + 8);
            if ( v50 && (v51 = *(_BYTE *)(v47 + 3)) != 0 )
            {
              while ( 1 )
              {
                v52 = (_BYTE *)(v50 + 2LL * (unsigned __int8)v49);
                if ( *v52 == 60 )
                {
                  v120 = v52[1];
                  if ( v120 )
                    break;
                }
                LOBYTE(v49) = v49 + 1;
                if ( (unsigned __int8)v49 >= v51 )
                  goto LABEL_56;
              }
              v52[1] = v120 - 1;
            }
            else
            {
LABEL_56:
              if ( !_bittestandreset((signed __int32 *)(v47 + 20), 0x1Cu) )
                ndisBugCheckEx(0x1EuLL, 0LL, v47, 0x3CuLL);
            }
          }
        }
        v43 = (*(_DWORD *)(v30 + 4472))-- == 1;
        if ( v43 )
          v45 = 1;
        if ( (unsigned __int8)byte_1C009875B >= 4u )
          WPP_SF_qD(14LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v30, *(unsigned int *)(v30 + 4472));
        KeReleaseSpinLock((PKSPIN_LOCK)(v30 + 4464), v48);
        if ( v45 )
        {
          v121 = *(struct _KEVENT **)(v30 + 1608);
          if ( v121 )
            KeSetEvent(v121, 0, 0);
        }
        if ( (unsigned __int8)byte_1C009875B >= 4u )
          WPP_SF_q(26LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v30);
        v1 = v165;
        v2 = v168;
      }
      v53 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
      v54 = (ULONG_PTR)v1[90].Blink;
      v55 = v53;
      if ( v54 )
      {
        if ( *(_BYTE *)(v54 + 1) )
        {
          if ( *(_BYTE *)(v54 + 1) == 1 )
          {
            v122 = v54 + 200;
            v123 = *(_DWORD *)(v54 + 256);
            if ( v123 >> 17 < 0x3FFE && (unsigned __int16)v123 >> 1 == (v123 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v54 + 200));
              *(_DWORD *)(v122 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v123 & 0xFFFE) == 0 && (v123 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v54, 3uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v54 + 200), 0);
            }
          }
        }
        else
        {
          v56 = *(_QWORD *)(v54 + 8);
          if ( v56 && (v108 = *(_BYTE *)(v54 + 3), v109 = 0, v108) )
          {
            while ( 1 )
            {
              v110 = (_BYTE *)(v56 + 2LL * v109);
              if ( *v110 == 3 )
              {
                v124 = v110[1];
                if ( v124 )
                  break;
              }
              if ( ++v109 >= v108 )
                goto LABEL_68;
            }
            v110[1] = v124 - 1;
          }
          else
          {
LABEL_68:
            if ( !_bittestandreset((signed __int32 *)(v54 + 16), 3u) )
              ndisBugCheckEx(0x1EuLL, 0LL, v54, 3uLL);
          }
        }
      }
      v43 = HIDWORD(v1[87].Blink)-- == 1;
      if ( v43 )
      {
        v125 = v1[88].Blink;
        if ( v125 )
        {
          v126 = (struct _KEVENT *)v125[254].Blink;
          if ( v126 )
            KeSetEvent(v126, 0, 0);
        }
      }
      KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v55);
    }
    else
    {
      if ( !BYTE2(v1[87].Blink)
        || (v80 = ndisReferenceTopMiniportByNameForNsi((__int64)v1[88].Blink[2].Flink, 0, v28, 0, 2u, 0x3Cu),
            (v81 = v80) == 0) )
      {
LABEL_74:
        v3 = v169;
        goto LABEL_75;
      }
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v80 + 96));
      v82 = *(_QWORD *)(v81 + 2056);
      *(_QWORD *)(v81 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v81 + 1856) = 2234961;
      if ( v82 )
      {
        while ( 1 )
        {
          v83 = 1;
          v84 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v82 + 320));
          if ( !*(_BYTE *)(v82 + 330) )
          {
            v85 = *(_WORD *)(v82 + 328);
            if ( v85 >= 0xFFEBu )
            {
              ndisRefCountReferenceCountOverflow = 1;
              v83 = 2;
            }
            else
            {
              *(_WORD *)(v82 + 328) = v85 + 1;
              NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v82 + 336), 0xBu);
              v83 = 0;
            }
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v82 + 320), v84);
          if ( !v83 )
            break;
          v82 = *(_QWORD *)(v82 + 112);
          if ( !v82 )
            goto LABEL_244;
        }
        v86 = *(_QWORD *)(v82 + 840);
      }
      else
      {
LABEL_244:
        v86 = *(_QWORD *)(v81 + 4064);
      }
      v168 = v86;
      *(_QWORD *)(v81 + 520) = 0LL;
      *(_DWORD *)(v81 + 1856) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v81 + 96));
      v87 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v81 + 96));
      v88 = *(_QWORD *)(v81 + 4928);
      *(_QWORD *)(v81 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v81 + 1856) = 71824;
      if ( v88 )
      {
        v89 = *(unsigned __int8 *)(v88 + 1);
        if ( *(_BYTE *)(v88 + 1) )
        {
          if ( v89 == 1 )
          {
            v127 = v88 + 136;
            v128 = *(_DWORD *)(v88 + 192);
            if ( v128 >> 17 < 0x3FFE && (unsigned __int16)v128 >> 1 == (v128 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v88 + 136));
              *(_DWORD *)(v127 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v128 & 0xFFFE) == 0 && (v128 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v88, 2uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v88 + 136), 0);
            }
          }
        }
        else
        {
          v90 = *(_QWORD *)(v88 + 8);
          if ( v90 && (v91 = *(_BYTE *)(v88 + 3)) != 0 )
          {
            while ( 1 )
            {
              v92 = (_BYTE *)(v90 + 2LL * (unsigned __int8)v89);
              if ( *v92 == 2 )
              {
                v129 = v92[1];
                if ( v129 )
                  break;
              }
              LOBYTE(v89) = v89 + 1;
              if ( (unsigned __int8)v89 >= v91 )
                goto LABEL_129;
            }
            v92[1] = v129 - 1;
          }
          else
          {
LABEL_129:
            if ( !_bittestandreset((signed __int32 *)(v88 + 16), 2u) )
              ndisBugCheckEx(0x1EuLL, 0LL, v88, 2uLL);
          }
        }
      }
      v43 = (*(_DWORD *)(v81 + 3132))-- == 1;
      if ( v43 )
      {
        v93 = *(struct _KEVENT **)(v81 + 3144);
        if ( v93 )
          KeSetEvent(v93, 0, 0);
      }
      *(_QWORD *)(v81 + 520) = 0LL;
      *(_DWORD *)(v81 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v81 + 96), v87);
      if ( (unsigned __int8)byte_1C009875B >= 4u )
        WPP_SF_q(25LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v81);
      v94 = 0;
      v95 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v81 + 4464));
      v96 = *(_QWORD *)(v81 + 4920);
      v97 = v95;
      if ( v96 )
      {
        v98 = *(unsigned __int8 *)(v96 + 1);
        if ( *(_BYTE *)(v96 + 1) )
        {
          if ( v98 == 1 )
          {
            v130 = v96 + 3848;
            v131 = *(_DWORD *)(v96 + 3904);
            if ( v131 >> 17 < 0x3FFE && (unsigned __int16)v131 >> 1 == (v131 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v96 + 3848));
              *(_DWORD *)(v130 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v131 & 0xFFFE) == 0 && (v131 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v96, 0x3CuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v96 + 3848), 0);
            }
          }
        }
        else
        {
          v99 = *(_QWORD *)(v96 + 8);
          if ( v99 && (v100 = *(_BYTE *)(v96 + 3)) != 0 )
          {
            while ( 1 )
            {
              v101 = (_BYTE *)(v99 + 2LL * (unsigned __int8)v98);
              if ( *v101 == 60 )
              {
                v132 = v101[1];
                if ( v132 )
                  break;
              }
              LOBYTE(v98) = v98 + 1;
              if ( (unsigned __int8)v98 >= v100 )
                goto LABEL_141;
            }
            v101[1] = v132 - 1;
          }
          else
          {
LABEL_141:
            if ( !_bittestandreset((signed __int32 *)(v96 + 20), 0x1Cu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v96, 0x3CuLL);
          }
        }
      }
      v43 = (*(_DWORD *)(v81 + 4472))-- == 1;
      if ( v43 )
        v94 = 1;
      if ( (unsigned __int8)byte_1C009875B >= 4u )
        WPP_SF_qD(14LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v81, *(unsigned int *)(v81 + 4472));
      KeReleaseSpinLock((PKSPIN_LOCK)(v81 + 4464), v97);
      if ( v94 )
      {
        v133 = *(struct _KEVENT **)(v81 + 1608);
        if ( v133 )
          KeSetEvent(v133, 0, 0);
      }
      if ( (unsigned __int8)byte_1C009875B >= 4u )
        WPP_SF_q(26LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v81);
      v1 = v165;
      v2 = v168;
    }
    if ( v2 )
    {
      NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v2 + 1440), 4u);
      ++*(_DWORD *)(v2 + 1304);
    }
    v22 = v164;
    goto LABEL_74;
  }
  v102 = v21 - 1;
  if ( !v102 )
  {
    v6 = 0LL;
    while ( 1 )
    {
LABEL_152:
      v103 = ndisIfList.Flink;
      v1 = 0LL;
      v165 = 0LL;
      if ( ndisIfList.Flink != &ndisIfList )
      {
        while ( v103[5].Flink <= v6 )
        {
          v103 = v103->Flink;
          if ( v103 == &ndisIfList )
            goto LABEL_157;
        }
        v1 = v103 - 77;
        v165 = v103 - 77;
      }
LABEL_157:
      if ( !v1 )
        goto LABEL_174;
      v104 = v1[86].Blink;
      v6 = v1[82].Flink;
      if ( v9 == LODWORD(v104[1].Flink) )
        goto LABEL_26;
      if ( v10 == -1 )
      {
        v113 = v174 - *(unsigned __int64 *)((char *)&v104[105].Flink + 4);
        if ( (_LIST_ENTRY *)v174 == *(_LIST_ENTRY **)((char *)&v104[105].Flink + 4) )
          v113 = *((_QWORD *)&v174 + 1) - *(unsigned __int64 *)((char *)&v104[105].Blink + 4);
        if ( !v113 )
          goto LABEL_26;
      }
      if ( ((__int64)v104[105].Flink & 2) == 0 && v9 == 1 )
        goto LABEL_26;
    }
  }
  if ( v102 == 1 )
    goto LABEL_152;
  v57 = -1073741811;
LABEL_76:
  KeReleaseSpinLock(&ndisIfListLock, v22);
  if ( v57 < 0 )
    goto LABEL_81;
  if ( v1 )
  {
    v58 = *((_QWORD *)v3 + 1);
    HIDWORD(v170[6]) = 0;
    switch ( v58 )
    {
      case 0LL:
LABEL_79:
        v170[5] = *((_QWORD *)v3 + 5);
        LODWORD(v170[6]) = *((_DWORD *)v3 + 12);
        LODWORD(v170[4]) = 0;
        ndisNsiGetInterfaceRwInformation(
          (struct _NDIS_IF_BLOCK *)v1,
          (struct _NDIS_IF_BLOCK *)v2,
          (struct _NM_REQUEST_GET_PARAMETER *)v170);
        *((_DWORD *)v3 + 12) = v170[6];
        LODWORD(v170[4]) = 1;
        v170[5] = *((_QWORD *)v3 + 7);
        LODWORD(v170[6]) = *((_DWORD *)v3 + 16);
        ndisNsiGetInterfaceRodInformation(
          (struct _NDIS_IF_BLOCK *)v1,
          (struct _NDIS_IF_BLOCK *)v2,
          (struct _NM_REQUEST_GET_PARAMETER *)v170);
        *((_DWORD *)v3 + 16) = v170[6];
        v170[5] = *((_QWORD *)v3 + 9);
        LODWORD(v170[6]) = *((_DWORD *)v3 + 20);
        LODWORD(v170[4]) = 2;
        ndisNsiGetInterfaceRosInformation(
          (struct _NDIS_IF_BLOCK *)v1,
          (struct _NDIS_IF_BLOCK *)v2,
          (struct _NM_REQUEST_GET_PARAMETER *)v170);
LABEL_80:
        *((_DWORD *)v3 + 20) = v170[6];
        goto LABEL_81;
      case 1LL:
        goto LABEL_165;
      case 12LL:
        goto LABEL_79;
      case 13LL:
LABEL_165:
        LODWORD(v170[4]) = 1;
        v170[5] = *((_QWORD *)v3 + 7);
        LODWORD(v170[6]) = *((_DWORD *)v3 + 16);
        ndisNsiGetInterfaceRodEnumObject(
          (struct _NDIS_IF_BLOCK *)v1,
          (struct _NDIS_IF_BLOCK *)v2,
          (struct _NM_REQUEST_GET_PARAMETER *)v170);
        *((_DWORD *)v3 + 16) = v170[6];
        v170[5] = *((_QWORD *)v3 + 9);
        LODWORD(v170[6]) = *((_DWORD *)v3 + 20);
        LODWORD(v170[4]) = 2;
        ndisNsiGetInterfaceRosEnumObject(
          (struct _NDIS_IF_BLOCK *)v1,
          (struct _NDIS_IF_BLOCK *)v2,
          (struct _NM_REQUEST_GET_PARAMETER *)v170);
        goto LABEL_80;
    }
    v57 = -1073741811;
  }
  else if ( *((_DWORD *)v3 + 8) )
  {
    v57 = -2147483622;
  }
  else
  {
    v57 = -1073741772;
  }
LABEL_81:
  v59 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 1402) )
    {
      v60 = *(_QWORD *)(v2 + 1416) + 320LL;
      v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v60);
      v62 = *(_QWORD *)(v60 + 16);
      v63 = v61;
      if ( v62 )
      {
        v64 = *(unsigned __int8 *)(v62 + 1);
        if ( *(_BYTE *)(v62 + 1) )
        {
          if ( v64 == 1 )
          {
            v134 = v62 + 712;
            v135 = *(_DWORD *)(v62 + 768);
            if ( v135 >> 17 < 0x3FFE && (unsigned __int16)v135 >> 1 == (v135 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v62 + 712));
              *(_DWORD *)(v134 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v135 & 0xFFFE) == 0 && (v135 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v62, 0xBuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v62 + 712), 0);
            }
            v3 = v169;
          }
        }
        else
        {
          v65 = *(_QWORD *)(v62 + 8);
          if ( v65 && (v66 = *(_BYTE *)(v62 + 3)) != 0 )
          {
            while ( 1 )
            {
              v67 = (_BYTE *)(v65 + 2LL * (unsigned __int8)v64);
              if ( *v67 == 11 )
              {
                v68 = v67[1];
                if ( v68 )
                  break;
              }
              LOBYTE(v64) = v64 + 1;
              if ( (unsigned __int8)v64 >= v66 )
                goto LABEL_90;
            }
            v67[1] = v68 - 1;
          }
          else
          {
LABEL_90:
            if ( !_bittestandreset((signed __int32 *)(v62 + 16), 0xBu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v62, 0xBuLL);
          }
        }
      }
      v43 = (*(_WORD *)(v60 + 8))-- == 1;
      if ( v43 && !*(_BYTE *)(v60 + 11) )
      {
        NdisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(v60 + 16));
        *(_QWORD *)(v60 + 16) = 0LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v60, v63);
    }
    v69 = *(_QWORD *)(v2 + 1440);
    if ( v69 )
    {
      v70 = *(unsigned __int8 *)(v69 + 1);
      if ( *(_BYTE *)(v69 + 1) )
      {
        if ( v70 == 1 )
        {
          v136 = v69 + 264;
          v137 = *(_DWORD *)(v69 + 320);
          if ( v137 >> 17 < 0x3FFE && (unsigned __int16)v137 >> 1 == (v137 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v69 + 264));
            *(_DWORD *)(v136 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v137 & 0xFFFE) == 0 && (v137 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v69, 4uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v69 + 264), 0);
          }
        }
      }
      else
      {
        v71 = *(_QWORD *)(v69 + 8);
        if ( v71 && (v72 = *(_BYTE *)(v69 + 3)) != 0 )
        {
          while ( 1 )
          {
            v73 = (_BYTE *)(v71 + 2LL * (unsigned __int8)v70);
            if ( *v73 == 4 )
            {
              v105 = v73[1];
              if ( v105 )
                break;
            }
            LOBYTE(v70) = v70 + 1;
            if ( (unsigned __int8)v70 >= v72 )
              goto LABEL_101;
          }
          v73[1] = v105 - 1;
        }
        else
        {
LABEL_101:
          if ( !_bittestandreset((signed __int32 *)(v69 + 16), 4u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v69, 4uLL);
        }
      }
    }
    v43 = (*(_DWORD *)(v2 + 1304))-- == 1;
    if ( v43 )
    {
      v138 = *(_DWORD *)(v2 + 4);
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries((_DWORD *)v2);
      *(_QWORD *)(v2 + 1296) = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v139 = *(_QWORD *)(v2 + 1232);
      if ( *(_QWORD *)(v139 + 8) != v2 + 1232 || (v140 = *(_QWORD **)(v2 + 1240), *v140 != v2 + 1232) )
        __fastfail(3u);
      *v140 = v139;
      *(_QWORD *)(v139 + 8) = v140;
      v141 = *(_QWORD *)(v2 + 1248);
      if ( *(_QWORD *)(v141 + 8) != v2 + 1248 || (v142 = *(_QWORD **)(v2 + 1256), *v142 != v2 + 1248) )
        __fastfail(3u);
      *v142 = v141;
      *(_QWORD *)(v141 + 8) = v142;
      v143 = *(_QWORD *)(v2 + 1264);
      if ( *(_QWORD *)(v143 + 8) != v2 + 1264 || (v144 = *(_QWORD **)(v2 + 1272), *v144 != v2 + 1264) )
        __fastfail(3u);
      *v144 = v143;
      *(_QWORD *)(v143 + 8) = v144;
      NETWORKBLOCK_DECREMENT_REF(*(_QWORD *)(v2 + 1376));
      v145 = (unsigned int)(v138 - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v145 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v145) &= ~(1 << ((v138 - 1) & 7));
      v146 = *(struct _NDIS_REFCOUNT_BLOCK **)(v2 + 1440);
      --ndisInterfaceCount;
      NdisFreeRefCount(v146);
      v147 = *(void **)(v2 + 1432);
      *(_QWORD *)(v2 + 1440) = 0LL;
      if ( v147 )
      {
        ExFreePoolWithTag(v147, 0);
        *(_QWORD *)(v2 + 1432) = 0LL;
      }
      v148 = *(void **)(v2 + 1280);
      if ( v148 )
      {
        ExFreePoolWithTag(v148, 0);
        *(_QWORD *)(v2 + 1280) = 0LL;
        *(_QWORD *)(v2 + 1288) = 0LL;
      }
      v149 = *(struct _KEVENT **)(v2 + 1392);
      if ( v149 )
        KeSetEvent(v149, 0, 0);
      ExFreePoolWithTag((PVOID)v2, 0);
    }
  }
  if ( v1 )
  {
    v74 = (ULONG_PTR)v1[90].Flink;
    if ( v74 )
    {
      v75 = *(unsigned __int8 *)(v74 + 1);
      if ( *(_BYTE *)(v74 + 1) )
      {
        if ( v75 == 1 )
        {
          v150 = v74 + 200;
          v151 = *(_DWORD *)(v74 + 256);
          if ( v151 >> 17 < 0x3FFE && (unsigned __int16)v151 >> 1 == (v151 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v74 + 200));
            *(_DWORD *)(v150 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v151 & 0xFFFE) == 0 && (v151 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v74, 3uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v74 + 200), 0);
          }
        }
      }
      else
      {
        v76 = *(_QWORD *)(v74 + 8);
        if ( v76 && (v77 = *(_BYTE *)(v74 + 3)) != 0 )
        {
          while ( 1 )
          {
            v78 = (_BYTE *)(v76 + 2LL * (unsigned __int8)v75);
            if ( *v78 == 3 )
            {
              v106 = v78[1];
              if ( v106 )
                break;
            }
            LOBYTE(v75) = v75 + 1;
            if ( (unsigned __int8)v75 >= v77 )
              goto LABEL_110;
          }
          v78[1] = v106 - 1;
        }
        else
        {
LABEL_110:
          if ( !_bittestandreset((signed __int32 *)(v74 + 16), 3u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v74, 3uLL);
        }
      }
    }
    v43 = LODWORD(v1[81].Blink)-- == 1;
    if ( v43 )
    {
      Flink_high = HIDWORD(v1->Flink);
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v1);
      v1[81].Flink = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v153 = v1[77].Flink;
      if ( v153->Blink != &v1[77] || (v154 = v1[77].Blink, v154->Flink != &v1[77]) )
        __fastfail(3u);
      v154->Flink = v153;
      v153->Blink = v154;
      v155 = v1[78].Flink;
      if ( v155->Blink != &v1[78] || (v156 = v1[78].Blink, v156->Flink != &v1[78]) )
        __fastfail(3u);
      v156->Flink = v155;
      v155->Blink = v156;
      v157 = v1[79].Flink;
      if ( v157->Blink != &v1[79] || (v158 = v1[79].Blink, v158->Flink != &v1[79]) )
        __fastfail(3u);
      v158->Flink = v157;
      v157->Blink = v158;
      NETWORKBLOCK_DECREMENT_REF((__int64)v1[86].Flink);
      v159 = (unsigned int)(Flink_high - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v159 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v159) &= ~(1 << ((Flink_high - 1) & 7));
      v160 = (struct _NDIS_REFCOUNT_BLOCK *)v1[90].Flink;
      --ndisInterfaceCount;
      NdisFreeRefCount(v160);
      v161 = v1[89].Blink;
      v1[90].Flink = 0LL;
      if ( v161 )
      {
        ExFreePoolWithTag(v161, 0);
        v1[89].Blink = 0LL;
      }
      v162 = v1[80].Flink;
      if ( v162 )
      {
        ExFreePoolWithTag(v162, 0);
        v1[80].Flink = 0LL;
        v1[80].Blink = 0LL;
      }
      v163 = (struct _KEVENT *)v1[87].Flink;
      if ( v163 )
        KeSetEvent(v163, 0, 0);
      ExFreePoolWithTag(v1, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v59);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qD(83LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, v3, (unsigned int)v57);
  return (unsigned int)v57;
}
