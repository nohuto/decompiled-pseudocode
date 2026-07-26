/*
 * XREFs of ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E3F0
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     ndisIfDeleteStackEntries @ 0x1C00023D0 (ndisIfDeleteStackEntries.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C00027A4 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000BC90 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C00202F0 (ndisIsCompartmentAccessibleByClient.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ?ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C003DCCC (-ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
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

__int64 __fastcall ndisNsiGetInterfaceInformation(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  struct _NDIS_IF_BLOCK *v1; // r13
  __int64 v2; // r15
  struct _NM_REQUEST_GET_PARAMETER *v3; // r14
  int v4; // r12d
  unsigned int v5; // ebp
  union _NET_LUID_LH *v6; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  union _NET_LUID_LH v8; // rbx
  unsigned int *ThreadProperty; // rax
  unsigned int *v10; // rcx
  PACCESS_TOKEN v11; // rax
  void *v12; // rbp
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // edi
  KIRQL v15; // al
  _LIST_ENTRY *v16; // rcx
  KIRQL v17; // r8
  _LIST_ENTRY *Flink; // rax
  unsigned int v19; // edx
  KIRQL v20; // al
  int v21; // ecx
  KIRQL v22; // di
  _LIST_ENTRY *v23; // rax
  _LIST_ENTRY *v24; // rcx
  _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  __int64 Miniport; // rbx
  KIRQL v27; // di
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rsi
  int v32; // ebp
  KIRQL v33; // r14
  unsigned __int16 v34; // cx
  KIRQL v35; // si
  ULONG_PTR v36; // r8
  __int64 v37; // r9
  unsigned __int8 v38; // dl
  unsigned __int8 v39; // cl
  _BYTE *v40; // r10
  bool v41; // zf
  struct _KEVENT *v42; // rcx
  char v43; // bp
  KIRQL v44; // al
  ULONG_PTR v45; // r8
  KIRQL v46; // r14
  __int64 v47; // r10
  unsigned __int8 v48; // r9
  unsigned __int8 v49; // cl
  _BYTE *v50; // rdx
  KIRQL v51; // al
  ULONG_PTR MpRefCountTracker; // r8
  KIRQL v53; // bl
  __int64 v54; // rdx
  __int64 v55; // rax
  int v56; // eax
  int InterfaceRodInformation; // eax
  KIRQL v58; // bp
  __int64 v59; // rbx
  KIRQL v60; // al
  ULONG_PTR v61; // r8
  KIRQL v62; // si
  __int64 v63; // r10
  unsigned __int8 v64; // r9
  unsigned __int8 v65; // cl
  _BYTE *v66; // rdx
  char v67; // al
  ULONG_PTR v68; // r8
  int v69; // ecx
  __int64 v70; // r9
  unsigned __int8 v71; // dl
  _BYTE *v72; // r10
  ULONG_PTR RefCountTracker; // r8
  int v74; // ecx
  __int64 v75; // r9
  unsigned __int8 v76; // r10
  _BYTE *v77; // rdx
  char v79; // al
  char v80; // al
  unsigned __int8 v81; // r10
  unsigned __int8 v82; // cl
  _BYTE *v83; // r9
  __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rsi
  int v87; // ebp
  KIRQL v88; // r14
  unsigned __int16 v89; // cx
  KIRQL v90; // si
  ULONG_PTR v91; // r8
  __int64 v92; // r9
  unsigned __int8 v93; // dl
  unsigned __int8 v94; // cl
  _BYTE *v95; // r10
  struct _KEVENT *v96; // rcx
  char v97; // bp
  KIRQL v98; // al
  ULONG_PTR v99; // r8
  KIRQL v100; // r14
  __int64 v101; // r10
  unsigned __int8 v102; // r9
  unsigned __int8 v103; // cl
  _BYTE *v104; // rdx
  NTSTATUS v105; // edi
  int v106; // eax
  KIRQL v107; // r8
  int v108; // ecx
  struct _NDIS_IF_BLOCK *NextInterfaceByNetLuid; // rax
  __int64 v110; // rdx
  ULONG_PTR v111; // rdi
  unsigned int v112; // edx
  char v113; // al
  ULONG_PTR v114; // rdi
  unsigned int v115; // edx
  char v116; // al
  struct _KEVENT *v117; // rcx
  ULONG_PTR v118; // rdi
  unsigned int v119; // edx
  char v120; // al
  _NDIS_MINIPORT_BLOCK *v121; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  ULONG_PTR v123; // rdi
  unsigned int v124; // edx
  char v125; // al
  ULONG_PTR v126; // rsi
  unsigned int v127; // edx
  char v128; // al
  struct _KEVENT *v129; // rcx
  ULONG_PTR v130; // rdi
  unsigned int v131; // edx
  ULONG_PTR v132; // rbx
  unsigned int v133; // edx
  int v134; // ebx
  __int64 v135; // rdx
  _QWORD *v136; // rcx
  __int64 v137; // rdx
  _QWORD *v138; // rcx
  __int64 v139; // rdx
  _QWORD *v140; // rcx
  unsigned int v141; // ecx
  struct _NDIS_REFCOUNT_BLOCK *v142; // rcx
  void *v143; // rcx
  void *v144; // rcx
  struct _KEVENT *v145; // rcx
  ULONG_PTR v146; // rbx
  unsigned int v147; // edx
  unsigned int ifIndex; // ebx
  _LIST_ENTRY *v149; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v151; // rdx
  _LIST_ENTRY *v152; // rcx
  _LIST_ENTRY *v153; // rdx
  _LIST_ENTRY *v154; // rcx
  unsigned int v155; // ecx
  struct _NDIS_REFCOUNT_BLOCK *v156; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  KIRQL v160; // [rsp+30h] [rbp-68h]
  BOOLEAN EffectiveOnly; // [rsp+31h] [rbp-67h] BYREF
  BOOLEAN CopyOnOpen[6]; // [rsp+32h] [rbp-66h] BYREF
  struct _NM_REQUEST_GET_PARAMETER *v163; // [rsp+38h] [rbp-60h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+40h] [rbp-58h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-50h] BYREF
  __int64 v166; // [rsp+50h] [rbp-48h] BYREF
  __int128 v167; // [rsp+58h] [rbp-40h]

  v1 = 0LL;
  v163 = a1;
  v2 = 0LL;
  v3 = a1;
  v4 = 0;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_q(74LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1);
  KeEnterCriticalRegion();
  v5 = 1;
  if ( *((_DWORD *)v3 + 6) != 8 )
  {
    v4 = -1073741808;
    goto LABEL_85;
  }
  if ( !*((_DWORD *)v3 + 12) )
  {
    v4 = -1073741808;
    goto LABEL_85;
  }
  if ( !*((_QWORD *)v3 + 5) )
  {
    v4 = -1073741808;
    goto LABEL_85;
  }
  v6 = (union _NET_LUID_LH *)*((_QWORD *)v3 + 2);
  CurrentThread = KeGetCurrentThread();
  v166 = 0LL;
  v167 = 0uLL;
  v8.Value = v6->Value;
  ThreadProperty = (unsigned int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v10 = ThreadProperty;
  if ( ThreadProperty )
  {
    v5 = *ThreadProperty;
    LODWORD(v166) = ThreadProperty[1];
    HIDWORD(v166) = v5;
    ObfDereferenceObject(ThreadProperty);
    if ( v5 )
      goto LABEL_16;
    v5 = 1;
  }
  else
  {
    LODWORD(v166) = 0;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
  }
  else
  {
    v11 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v12 = v11;
    if ( v11 )
    {
      v105 = SeQueryInformationToken(v11, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v12);
      if ( v105 >= 0 )
      {
        ThreadSessionId = (unsigned int)TokenInformation;
        v5 = 1;
        goto LABEL_12;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    v5 = 1;
  }
  ThreadSessionId = CurrentProcessSessionId;
LABEL_12:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId < ndisCmSessionCount )
  {
    v5 = 0;
    v107 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    if ( ThreadSessionId < ndisCmSessionCount )
      v5 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
    KeReleaseSpinLock(&ndisCmSessionLock, v107);
    if ( !v5 )
      v5 = 1;
  }
  HIDWORD(v166) = v5;
LABEL_16:
  v15 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v16 = 0LL;
  v17 = v15;
  Flink = ndisIfCompartmentList.Flink;
  if ( ndisIfCompartmentList.Flink != &ndisIfCompartmentList )
  {
    while ( 1 )
    {
      v19 = (unsigned int)Flink[1].Flink;
      if ( v19 == v5 )
        break;
      if ( v19 <= v5 )
      {
        Flink = Flink->Flink;
        if ( Flink != &ndisIfCompartmentList )
          continue;
      }
      goto LABEL_19;
    }
    v16 = Flink;
  }
LABEL_19:
  v167 = *(__int128 *)((char *)&v16[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v17);
  v20 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v21 = *((_DWORD *)v3 + 14);
  v22 = v20;
  v160 = v20;
  if ( v21 )
  {
    v108 = v21 - 1;
    if ( v108 )
    {
      if ( v108 == 1 )
        goto LABEL_190;
      v4 = -1073741808;
    }
    else
    {
      v8.Value = 0LL;
LABEL_190:
      while ( 1 )
      {
        NextInterfaceByNetLuid = ndisIfFindNextInterfaceByNetLuid(v8);
        v1 = NextInterfaceByNetLuid;
        if ( !NextInterfaceByNetLuid )
          break;
        v8.Value = (ULONG64)NextInterfaceByNetLuid->NetLuid;
        if ( (unsigned __int8)ndisIsCompartmentAccessibleByClient(NextInterfaceByNetLuid->Compartment, &v166, 0LL) )
          goto LABEL_28;
      }
    }
  }
  else
  {
    v23 = ndisIfList.Flink;
    if ( ndisIfList.Flink != &ndisIfList )
    {
      while ( 1 )
      {
        v24 = v23[5].Flink;
        if ( v24 == (_LIST_ENTRY *)v8.Value )
          break;
        if ( (unsigned __int64)v24 <= v8.Value )
        {
          v23 = v23->Flink;
          if ( v23 != &ndisIfList )
            continue;
        }
        goto LABEL_26;
      }
      v1 = (struct _NDIS_IF_BLOCK *)&v23[-77];
    }
LABEL_26:
    if ( v1 )
    {
      Compartment = v1->Compartment;
      if ( v5 != Compartment->CompartmentId )
      {
        v110 = v167 - *(_QWORD *)&Compartment->LoopbackInfo.NamespaceGuid.Data1;
        if ( (_QWORD)v167 == *(_QWORD *)&Compartment->LoopbackInfo.NamespaceGuid.Data1 )
          v110 = *((_QWORD *)&v167 + 1) - *(_QWORD *)Compartment->LoopbackInfo.NamespaceGuid.Data4;
        if ( v110 && ((Compartment->LoopbackInfo.Flags & 2) != 0 || v5 != 1) )
        {
          v1 = 0LL;
          goto LABEL_77;
        }
      }
LABEL_28:
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v1->RefCountTracker, 1u);
      ++v1->Ref;
      if ( !v1->bNdisIsProvider || *((_QWORD *)v3 + 1) >= 2uLL )
      {
LABEL_76:
        **((_QWORD **)v3 + 2) = v1->NetLuid.Value;
        goto LABEL_77;
      }
      Miniport = 0LL;
      v27 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
      if ( v1->MiniportAvailable )
      {
        Miniport = (__int64)v1->Miniport;
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v1->MpRefCountTracker, 3u);
        ++v1->MiniportLinkReference;
      }
      KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v27);
      if ( Miniport )
      {
        v29 = ndisReferenceTopMiniportByNameForNsi(Miniport, 0, v28, 0, 2u, 0x3Cu);
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
              v32 = 1;
              v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v31 + 320));
              if ( !*(_BYTE *)(v31 + 330) )
              {
                v34 = *(_WORD *)(v31 + 328);
                if ( v34 >= 0xFFEBu )
                {
                  ndisRefCountReferenceCountOverflow = 1;
                  v32 = 2;
                }
                else
                {
                  *(_WORD *)(v31 + 328) = v34 + 1;
                  NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v31 + 336), 0xBu);
                  v32 = 0;
                }
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(v31 + 320), v33);
              if ( !v32 )
                break;
              v31 = *(_QWORD *)(v31 + 112);
              if ( !v31 )
                goto LABEL_167;
            }
            v2 = *(_QWORD *)(v31 + 840);
          }
          else
          {
LABEL_167:
            v2 = *(_QWORD *)(v30 + 4064);
          }
          *(_QWORD *)(v30 + 520) = 0LL;
          *(_DWORD *)(v30 + 1856) = 0;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v30 + 96));
          v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v30 + 96));
          v36 = *(_QWORD *)(v30 + 4928);
          *(_QWORD *)(v30 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v30 + 1856) = 71824;
          if ( v36 )
          {
            if ( *(_BYTE *)(v36 + 1) )
            {
              if ( *(_BYTE *)(v36 + 1) == 1 )
              {
                v111 = v36 + 136;
                v112 = *(_DWORD *)(v36 + 192);
                if ( v112 >> 17 < 0x3FFE && (unsigned __int16)v112 >> 1 == (v112 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v36 + 136));
                  *(_DWORD *)(v111 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v112 & 0xFFFE) == 0 && (v112 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v36, 2uLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v36 + 136), 0);
                }
              }
            }
            else
            {
              v37 = *(_QWORD *)(v36 + 8);
              if ( v37 && (v38 = *(_BYTE *)(v36 + 3), v39 = 0, v38) )
              {
                while ( 1 )
                {
                  v40 = (_BYTE *)(v37 + 2LL * v39);
                  if ( *v40 == 2 )
                  {
                    v113 = v40[1];
                    if ( v113 )
                      break;
                  }
                  if ( ++v39 >= v38 )
                    goto LABEL_46;
                }
                v40[1] = v113 - 1;
              }
              else
              {
LABEL_46:
                if ( !_bittestandreset((signed __int32 *)(v36 + 16), 2u) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v36, 2uLL);
              }
            }
          }
          v41 = (*(_DWORD *)(v30 + 3132))-- == 1;
          if ( v41 )
          {
            v42 = *(struct _KEVENT **)(v30 + 3144);
            if ( v42 )
              KeSetEvent(v42, 0, 0);
          }
          *(_QWORD *)(v30 + 520) = 0LL;
          *(_DWORD *)(v30 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v30 + 96), v35);
          if ( (unsigned __int8)byte_1C009875B >= 4u )
            WPP_SF_q(25LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v30);
          v43 = 0;
          v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v30 + 4464));
          v45 = *(_QWORD *)(v30 + 4920);
          v46 = v44;
          if ( v45 )
          {
            if ( *(_BYTE *)(v45 + 1) )
            {
              if ( *(_BYTE *)(v45 + 1) == 1 )
              {
                v114 = v45 + 3848;
                v115 = *(_DWORD *)(v45 + 3904);
                if ( v115 >> 17 < 0x3FFE && (unsigned __int16)v115 >> 1 == (v115 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v45 + 3848));
                  *(_DWORD *)(v114 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v115 & 0xFFFE) == 0 && (v115 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v45, 0x3CuLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v45 + 3848), 0);
                }
              }
            }
            else
            {
              v47 = *(_QWORD *)(v45 + 8);
              if ( v47 && (v48 = *(_BYTE *)(v45 + 3), v49 = 0, v48) )
              {
                while ( 1 )
                {
                  v50 = (_BYTE *)(v47 + 2LL * v49);
                  if ( *v50 == 60 )
                  {
                    v116 = v50[1];
                    if ( v116 )
                      break;
                  }
                  if ( ++v49 >= v48 )
                    goto LABEL_58;
                }
                v50[1] = v116 - 1;
              }
              else
              {
LABEL_58:
                if ( !_bittestandreset((signed __int32 *)(v45 + 20), 0x1Cu) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v45, 0x3CuLL);
              }
            }
          }
          v41 = (*(_DWORD *)(v30 + 4472))-- == 1;
          if ( v41 )
            v43 = 1;
          if ( (unsigned __int8)byte_1C009875B >= 4u )
            WPP_SF_qD(14LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v30, *(unsigned int *)(v30 + 4472));
          KeReleaseSpinLock((PKSPIN_LOCK)(v30 + 4464), v46);
          if ( v43 )
          {
            v117 = *(struct _KEVENT **)(v30 + 1608);
            if ( v117 )
              KeSetEvent(v117, 0, 0);
          }
          if ( (unsigned __int8)byte_1C009875B >= 4u )
            WPP_SF_q(26LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v30);
        }
        v51 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
        MpRefCountTracker = (ULONG_PTR)v1->MpRefCountTracker;
        v53 = v51;
        if ( MpRefCountTracker )
        {
          if ( *(_BYTE *)(MpRefCountTracker + 1) )
          {
            if ( *(_BYTE *)(MpRefCountTracker + 1) == 1 )
            {
              v118 = MpRefCountTracker + 200;
              v119 = *(_DWORD *)(MpRefCountTracker + 256);
              if ( v119 >> 17 < 0x3FFE && (unsigned __int16)v119 >> 1 == (v119 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(MpRefCountTracker + 200));
                *(_DWORD *)(v118 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v119 & 0xFFFE) == 0 && (v119 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, MpRefCountTracker, 3uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(MpRefCountTracker + 200), 0);
              }
            }
          }
          else
          {
            v54 = *(_QWORD *)(MpRefCountTracker + 8);
            if ( v54 && (v81 = *(_BYTE *)(MpRefCountTracker + 3), v82 = 0, v81) )
            {
              while ( 1 )
              {
                v83 = (_BYTE *)(v54 + 2LL * v82);
                if ( *v83 == 3 )
                {
                  v120 = v83[1];
                  if ( v120 )
                    break;
                }
                if ( ++v82 >= v81 )
                  goto LABEL_69;
              }
              v83[1] = v120 - 1;
            }
            else
            {
LABEL_69:
              if ( !_bittestandreset((signed __int32 *)(MpRefCountTracker + 16), 3u) )
                ndisBugCheckEx(0x1EuLL, 0LL, MpRefCountTracker, 3uLL);
            }
          }
        }
        v41 = v1->MiniportLinkReference-- == 1;
        if ( v41 )
        {
          v121 = v1->Miniport;
          if ( v121 )
          {
            IfBlockPointerRefZeroEvent = v121->IfBlockPointerRefZeroEvent;
            if ( IfBlockPointerRefZeroEvent )
              KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
          }
        }
        KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v53);
      }
      else
      {
        if ( !v1->IsNdisFilter
          || (v84 = ndisReferenceTopMiniportByNameForNsi(
                      *(_QWORD *)&v1->Miniport->Reserved4.Length,
                      0,
                      v28,
                      0,
                      2u,
                      0x3Cu),
              (v85 = v84) == 0) )
        {
LABEL_75:
          v22 = v160;
          goto LABEL_76;
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v84 + 96));
        v86 = *(_QWORD *)(v85 + 2056);
        *(_QWORD *)(v85 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v85 + 1856) = 2234961;
        if ( v86 )
        {
          while ( 1 )
          {
            v87 = 1;
            v88 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v86 + 320));
            if ( !*(_BYTE *)(v86 + 330) )
            {
              v89 = *(_WORD *)(v86 + 328);
              if ( v89 >= 0xFFEBu )
              {
                ndisRefCountReferenceCountOverflow = 1;
                v87 = 2;
              }
              else
              {
                *(_WORD *)(v86 + 328) = v89 + 1;
                NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v86 + 336), 0xBu);
                v87 = 0;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v86 + 320), v88);
            if ( !v87 )
              break;
            v86 = *(_QWORD *)(v86 + 112);
            if ( !v86 )
              goto LABEL_237;
          }
          v2 = *(_QWORD *)(v86 + 840);
        }
        else
        {
LABEL_237:
          v2 = *(_QWORD *)(v85 + 4064);
        }
        *(_QWORD *)(v85 + 520) = 0LL;
        *(_DWORD *)(v85 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v85 + 96));
        v90 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v85 + 96));
        v91 = *(_QWORD *)(v85 + 4928);
        *(_QWORD *)(v85 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v85 + 1856) = 71824;
        if ( v91 )
        {
          if ( *(_BYTE *)(v91 + 1) )
          {
            if ( *(_BYTE *)(v91 + 1) == 1 )
            {
              v123 = v91 + 136;
              v124 = *(_DWORD *)(v91 + 192);
              if ( v124 >> 17 < 0x3FFE && (unsigned __int16)v124 >> 1 == (v124 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v91 + 136));
                *(_DWORD *)(v123 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v124 & 0xFFFE) == 0 && (v124 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v91, 2uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v91 + 136), 0);
              }
            }
          }
          else
          {
            v92 = *(_QWORD *)(v91 + 8);
            if ( v92 && (v93 = *(_BYTE *)(v91 + 3), v94 = 0, v93) )
            {
              while ( 1 )
              {
                v95 = (_BYTE *)(v92 + 2LL * v94);
                if ( *v95 == 2 )
                {
                  v125 = v95[1];
                  if ( v125 )
                    break;
                }
                if ( ++v94 >= v93 )
                  goto LABEL_141;
              }
              v95[1] = v125 - 1;
            }
            else
            {
LABEL_141:
              if ( !_bittestandreset((signed __int32 *)(v91 + 16), 2u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v91, 2uLL);
            }
          }
        }
        v41 = (*(_DWORD *)(v85 + 3132))-- == 1;
        if ( v41 )
        {
          v96 = *(struct _KEVENT **)(v85 + 3144);
          if ( v96 )
            KeSetEvent(v96, 0, 0);
        }
        *(_QWORD *)(v85 + 520) = 0LL;
        *(_DWORD *)(v85 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v85 + 96), v90);
        if ( (unsigned __int8)byte_1C009875B >= 4u )
          WPP_SF_q(25LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v85);
        v97 = 0;
        v98 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v85 + 4464));
        v99 = *(_QWORD *)(v85 + 4920);
        v100 = v98;
        if ( v99 )
        {
          if ( *(_BYTE *)(v99 + 1) )
          {
            if ( *(_BYTE *)(v99 + 1) == 1 )
            {
              v126 = v99 + 3848;
              v127 = *(_DWORD *)(v99 + 3904);
              if ( v127 >> 17 < 0x3FFE && (unsigned __int16)v127 >> 1 == (v127 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v99 + 3848));
                *(_DWORD *)(v126 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v127 & 0xFFFE) == 0 && (v127 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v99, 0x3CuLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v99 + 3848), 0);
              }
            }
          }
          else
          {
            v101 = *(_QWORD *)(v99 + 8);
            if ( v101 && (v102 = *(_BYTE *)(v99 + 3), v103 = 0, v102) )
            {
              while ( 1 )
              {
                v104 = (_BYTE *)(v101 + 2LL * v103);
                if ( *v104 == 60 )
                {
                  v128 = v104[1];
                  if ( v128 )
                    break;
                }
                if ( ++v103 >= v102 )
                  goto LABEL_153;
              }
              v104[1] = v128 - 1;
            }
            else
            {
LABEL_153:
              if ( !_bittestandreset((signed __int32 *)(v99 + 20), 0x1Cu) )
                ndisBugCheckEx(0x1EuLL, 0LL, v99, 0x3CuLL);
            }
          }
        }
        v41 = (*(_DWORD *)(v85 + 4472))-- == 1;
        if ( v41 )
          v97 = 1;
        if ( (unsigned __int8)byte_1C009875B >= 4u )
          WPP_SF_qD(14LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v85, *(unsigned int *)(v85 + 4472));
        KeReleaseSpinLock((PKSPIN_LOCK)(v85 + 4464), v100);
        if ( v97 )
        {
          v129 = *(struct _KEVENT **)(v85 + 1608);
          if ( v129 )
            KeSetEvent(v129, 0, 0);
        }
        if ( (unsigned __int8)byte_1C009875B >= 4u )
          WPP_SF_q(26LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v85);
      }
      if ( v2 )
      {
        NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v2 + 1440), 2u);
        ++*(_DWORD *)(v2 + 1304);
      }
      v3 = v163;
      goto LABEL_75;
    }
  }
LABEL_77:
  KeReleaseSpinLock(&ndisIfListLock, v22);
  if ( v4 < 0 )
    goto LABEL_85;
  if ( v1 )
  {
    v55 = *((_QWORD *)v3 + 1);
    v4 = -1073741811;
    switch ( v55 )
    {
      case 0LL:
        goto LABEL_80;
      case 1LL:
        goto LABEL_169;
      case 12LL:
LABEL_80:
        v56 = *((_DWORD *)v3 + 8);
        if ( v56 )
        {
          if ( v56 == 1 )
          {
            InterfaceRodInformation = ndisNsiGetInterfaceRodInformation(v1, (struct _NDIS_IF_BLOCK *)v2, v3);
          }
          else
          {
            if ( v56 != 2 )
              break;
            InterfaceRodInformation = ndisNsiGetInterfaceRosInformation(v1, (struct _NDIS_IF_BLOCK *)v2, v3);
          }
        }
        else
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRwInformation(v1, (struct _NDIS_IF_BLOCK *)v2, v3);
        }
        goto LABEL_84;
      case 13LL:
LABEL_169:
        v106 = *((_DWORD *)v3 + 8);
        if ( v106 == 1 )
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRodEnumObject(v1, (struct _NDIS_IF_BLOCK *)v2, v3);
          goto LABEL_84;
        }
        if ( v106 == 2 )
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRosEnumObject(v1, (struct _NDIS_IF_BLOCK *)v2, v3);
LABEL_84:
          v4 = InterfaceRodInformation;
        }
        break;
    }
  }
  else
  {
    v4 = -1073741772;
    if ( *((_DWORD *)v3 + 14) )
      v4 = -2147483622;
  }
LABEL_85:
  v58 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 1402) )
    {
      v59 = *(_QWORD *)(v2 + 1416) + 320LL;
      v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v59);
      v61 = *(_QWORD *)(v59 + 16);
      v62 = v60;
      if ( v61 )
      {
        if ( *(_BYTE *)(v61 + 1) )
        {
          if ( *(_BYTE *)(v61 + 1) == 1 )
          {
            v130 = v61 + 712;
            v131 = *(_DWORD *)(v61 + 768);
            if ( v131 >> 17 < 0x3FFE && (unsigned __int16)v131 >> 1 == (v131 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v61 + 712));
              *(_DWORD *)(v130 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v131 & 0xFFFE) == 0 && (v131 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v61, 0xBuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v61 + 712), 0);
            }
          }
        }
        else
        {
          v63 = *(_QWORD *)(v61 + 8);
          if ( v63 && (v64 = *(_BYTE *)(v61 + 3), v65 = 0, v64) )
          {
            while ( 1 )
            {
              v66 = (_BYTE *)(v63 + 2LL * v65);
              if ( *v66 == 11 )
              {
                v67 = v66[1];
                if ( v67 )
                  break;
              }
              if ( ++v65 >= v64 )
                goto LABEL_94;
            }
            v66[1] = v67 - 1;
          }
          else
          {
LABEL_94:
            if ( !_bittestandreset((signed __int32 *)(v61 + 16), 0xBu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v61, 0xBuLL);
          }
        }
      }
      v41 = (*(_WORD *)(v59 + 8))-- == 1;
      if ( v41 && !*(_BYTE *)(v59 + 11) )
      {
        NdisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(v59 + 16));
        *(_QWORD *)(v59 + 16) = 0LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v59, v62);
    }
    v68 = *(_QWORD *)(v2 + 1440);
    if ( v68 )
    {
      v69 = *(unsigned __int8 *)(v68 + 1);
      if ( *(_BYTE *)(v68 + 1) )
      {
        if ( v69 == 1 )
        {
          v132 = v68 + 136;
          v133 = *(_DWORD *)(v68 + 192);
          if ( v133 >> 17 < 0x3FFE && (unsigned __int16)v133 >> 1 == (v133 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v68 + 136));
            *(_DWORD *)(v132 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v133 & 0xFFFE) == 0 && (v133 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v68, 2uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v68 + 136), 0);
          }
        }
      }
      else
      {
        v70 = *(_QWORD *)(v68 + 8);
        if ( v70 && (v71 = *(_BYTE *)(v68 + 3)) != 0 )
        {
          while ( 1 )
          {
            v72 = (_BYTE *)(v70 + 2LL * (unsigned __int8)v69);
            if ( *v72 == 2 )
            {
              v80 = v72[1];
              if ( v80 )
                break;
            }
            LOBYTE(v69) = v69 + 1;
            if ( (unsigned __int8)v69 >= v71 )
              goto LABEL_105;
          }
          v72[1] = v80 - 1;
        }
        else
        {
LABEL_105:
          if ( !_bittestandreset((signed __int32 *)(v68 + 16), 2u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v68, 2uLL);
        }
      }
    }
    v41 = (*(_DWORD *)(v2 + 1304))-- == 1;
    if ( v41 )
    {
      v134 = *(_DWORD *)(v2 + 4);
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries((_DWORD *)v2);
      *(_QWORD *)(v2 + 1296) = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v135 = *(_QWORD *)(v2 + 1232);
      if ( *(_QWORD *)(v135 + 8) != v2 + 1232 || (v136 = *(_QWORD **)(v2 + 1240), *v136 != v2 + 1232) )
        __fastfail(3u);
      *v136 = v135;
      *(_QWORD *)(v135 + 8) = v136;
      v137 = *(_QWORD *)(v2 + 1248);
      if ( *(_QWORD *)(v137 + 8) != v2 + 1248 || (v138 = *(_QWORD **)(v2 + 1256), *v138 != v2 + 1248) )
        __fastfail(3u);
      *v138 = v137;
      *(_QWORD *)(v137 + 8) = v138;
      v139 = *(_QWORD *)(v2 + 1264);
      if ( *(_QWORD *)(v139 + 8) != v2 + 1264 || (v140 = *(_QWORD **)(v2 + 1272), *v140 != v2 + 1264) )
        __fastfail(3u);
      *v140 = v139;
      *(_QWORD *)(v139 + 8) = v140;
      NETWORKBLOCK_DECREMENT_REF(*(_QWORD *)(v2 + 1376));
      v141 = (unsigned int)(v134 - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v141 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v141) &= ~(1 << ((v134 - 1) & 7));
      v142 = *(struct _NDIS_REFCOUNT_BLOCK **)(v2 + 1440);
      --ndisInterfaceCount;
      NdisFreeRefCount(v142);
      v143 = *(void **)(v2 + 1432);
      *(_QWORD *)(v2 + 1440) = 0LL;
      if ( v143 )
      {
        ExFreePoolWithTag(v143, 0);
        *(_QWORD *)(v2 + 1432) = 0LL;
      }
      v144 = *(void **)(v2 + 1280);
      if ( v144 )
      {
        ExFreePoolWithTag(v144, 0);
        *(_QWORD *)(v2 + 1280) = 0LL;
        *(_QWORD *)(v2 + 1288) = 0LL;
      }
      v145 = *(struct _KEVENT **)(v2 + 1392);
      if ( v145 )
        KeSetEvent(v145, 0, 0);
      ExFreePoolWithTag((PVOID)v2, 0);
    }
  }
  if ( v1 )
  {
    RefCountTracker = (ULONG_PTR)v1->RefCountTracker;
    if ( RefCountTracker )
    {
      v74 = *(unsigned __int8 *)(RefCountTracker + 1);
      if ( *(_BYTE *)(RefCountTracker + 1) )
      {
        if ( v74 == 1 )
        {
          v146 = RefCountTracker + 72;
          v147 = *(_DWORD *)(RefCountTracker + 128);
          if ( v147 >> 17 < 0x3FFE && (unsigned __int16)v147 >> 1 == (v147 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 72));
            *(_DWORD *)(v146 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v147 & 0xFFFE) == 0 && (v147 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 1uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 72), 0);
          }
        }
      }
      else
      {
        v75 = *(_QWORD *)(RefCountTracker + 8);
        if ( v75 && (v76 = *(_BYTE *)(RefCountTracker + 3)) != 0 )
        {
          while ( 1 )
          {
            v77 = (_BYTE *)(v75 + 2LL * (unsigned __int8)v74);
            if ( *v77 == 1 )
            {
              v79 = v77[1];
              if ( v79 )
                break;
            }
            LOBYTE(v74) = v74 + 1;
            if ( (unsigned __int8)v74 >= v76 )
              goto LABEL_114;
          }
          v77[1] = v79 - 1;
        }
        else
        {
LABEL_114:
          if ( !_bittestandreset((signed __int32 *)(RefCountTracker + 16), 1u) )
            ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 1uLL);
        }
      }
    }
    v41 = v1->Ref-- == 1;
    if ( v41 )
    {
      ifIndex = v1->ifIndex;
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v1);
      *(_QWORD *)&v1->LowerLayerIfCount = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v149 = v1->Link.Flink;
      if ( v149->Blink != &v1->Link || (Blink = v1->Link.Blink, Blink->Flink != &v1->Link) )
        __fastfail(3u);
      Blink->Flink = v149;
      v149->Blink = Blink;
      v151 = v1->ProviderLink.Flink;
      if ( v151->Blink != &v1->ProviderLink || (v152 = v1->ProviderLink.Blink, v152->Flink != &v1->ProviderLink) )
        __fastfail(3u);
      v152->Flink = v151;
      v151->Blink = v152;
      v153 = v1->NetworkLink.Flink;
      if ( v153->Blink != &v1->NetworkLink || (v154 = v1->NetworkLink.Blink, v154->Flink != &v1->NetworkLink) )
        __fastfail(3u);
      v154->Flink = v153;
      v153->Blink = v154;
      NETWORKBLOCK_DECREMENT_REF((__int64)v1->Network);
      v155 = (ifIndex - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v155 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v155) &= ~(1 << ((ifIndex - 1) & 7));
      v156 = (struct _NDIS_REFCOUNT_BLOCK *)v1->RefCountTracker;
      --ndisInterfaceCount;
      NdisFreeRefCount(v156);
      ifL2NetworkInfo = v1->ifL2NetworkInfo;
      v1->RefCountTracker = 0LL;
      if ( ifL2NetworkInfo )
      {
        ExFreePoolWithTag(ifL2NetworkInfo, 0);
        v1->ifL2NetworkInfo = 0LL;
      }
      ifRcvAddressTable = v1->ifRcvAddressTable;
      if ( ifRcvAddressTable )
      {
        ExFreePoolWithTag(ifRcvAddressTable, 0);
        v1->ifRcvAddressTable = 0LL;
        *(_QWORD *)&v1->ifRcvAddressCount = 0LL;
      }
      AsyncEvent = v1->AsyncEvent;
      if ( AsyncEvent )
        KeSetEvent(AsyncEvent, 0, 0);
      ExFreePoolWithTag(v1, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v58);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qD(75LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, v3, (unsigned int)v4);
  return (unsigned int)v4;
}
