/*
 * XREFs of ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000A2C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB30 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 *     ndisIfDeleteStackEntries @ 0x1C0013B3C (ndisIfDeleteStackEntries.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0014988 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021158 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C002243C (ndisIsCompartmentAccessibleByClient.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ?ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C003F01C (-ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
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

__int64 __fastcall ndisNsiGetInterfaceInformation(
        struct _NM_REQUEST_GET_PARAMETER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _NDIS_IF_BLOCK *v4; // rsi
  struct _NDIS_IF_BLOCK *TopIfBlockFromMiniport; // r15
  int v6; // r12d
  union _NET_LUID_LH *v8; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  union _NET_LUID_LH v10; // rbx
  int *ThreadProperty; // rax
  int *v12; // rcx
  int v13; // r14d
  unsigned int v14; // edi
  PACCESS_TOKEN v15; // rax
  void *v16; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // edi
  KIRQL v19; // al
  _LIST_ENTRY *v20; // rcx
  KIRQL v21; // r8
  _LIST_ENTRY *Flink; // rax
  unsigned int v23; // edx
  KIRQL v24; // al
  int v25; // ecx
  KIRQL v26; // di
  _LIST_ENTRY *v27; // rax
  _LIST_ENTRY *v28; // rcx
  _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  KIRQL v31; // di
  int v32; // r8d
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rdi
  int v36; // r14d
  KIRQL v37; // r15
  unsigned __int16 v38; // cx
  struct _NDIS_IF_BLOCK *v39; // rax
  KIRQL v40; // di
  ULONG_PTR v41; // r8
  int v42; // ecx
  __int64 v43; // r10
  unsigned __int8 v44; // r9
  _BYTE *v45; // rdx
  bool v46; // zf
  struct _KEVENT *v47; // rcx
  __int64 v48; // r9
  char v49; // r14
  KIRQL v50; // al
  ULONG_PTR v51; // r8
  KIRQL v52; // r15
  int v53; // ecx
  __int64 v54; // r10
  unsigned __int8 v55; // r9
  _BYTE *v56; // rdx
  __int64 v57; // r9
  KIRQL v58; // al
  ULONG_PTR MpRefCountTracker; // r8
  KIRQL v60; // bl
  __int64 v61; // rcx
  __int64 v62; // rax
  int v63; // eax
  int InterfaceRodInformation; // eax
  KIRQL v65; // r14
  __int64 p_SystemArgument1; // rbx
  KIRQL v67; // al
  ULONG_PTR v68; // r8
  KIRQL v69; // bp
  int v70; // ecx
  __int64 v71; // r10
  unsigned __int8 v72; // r9
  _BYTE *v73; // rdx
  char v74; // al
  ULONG_PTR RefCountTracker; // r8
  int v76; // ecx
  __int64 v77; // r10
  unsigned __int8 v78; // r9
  _BYTE *v79; // rdx
  ULONG_PTR v80; // r8
  int v81; // ecx
  __int64 v82; // rdx
  unsigned __int8 v83; // r9
  _BYTE *v84; // r10
  char v86; // al
  unsigned __int8 v87; // r9
  unsigned __int8 v88; // dl
  _BYTE *v89; // r10
  char v90; // al
  NTSTATUS v91; // edi
  KIRQL v92; // r8
  int v93; // ecx
  struct _NDIS_IF_BLOCK *NextInterfaceByNetLuid; // rax
  __int64 v95; // rdx
  ULONG_PTR v96; // rbx
  unsigned int v97; // edx
  int v98; // ecx
  char v99; // al
  ULONG_PTR v100; // rbx
  unsigned int v101; // edx
  int v102; // ecx
  char v103; // al
  struct _KEVENT *v104; // rcx
  ULONG_PTR v105; // rdi
  unsigned int v106; // edx
  int v107; // ecx
  char v108; // al
  _NDIS_MINIPORT_BLOCK *v109; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  int v111; // eax
  ULONG_PTR v112; // rdi
  unsigned int v113; // edx
  int v114; // ecx
  ULONG_PTR v115; // rbx
  unsigned int v116; // edx
  int v117; // ecx
  unsigned int ifIndex; // ebx
  _LIST_ENTRY *v119; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v121; // rdx
  _LIST_ENTRY *v122; // rcx
  _LIST_ENTRY *v123; // rdx
  _LIST_ENTRY *v124; // rcx
  unsigned int v125; // ecx
  ULONG_PTR v126; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  ULONG_PTR v130; // rbx
  unsigned int v131; // edx
  int v132; // ecx
  unsigned int v133; // ebx
  _LIST_ENTRY *v134; // rdx
  _LIST_ENTRY *v135; // rcx
  _LIST_ENTRY *v136; // rdx
  _LIST_ENTRY *v137; // rcx
  _LIST_ENTRY *v138; // rdx
  _LIST_ENTRY *v139; // rcx
  unsigned int v140; // ecx
  ULONG_PTR v141; // rcx
  _IF_COUNTED_STRING_LH *v142; // rcx
  _NDIS_IF_RCV_ADDRESS *v143; // rcx
  struct _KEVENT *v144; // rcx
  KIRQL v145; // [rsp+30h] [rbp-68h]
  BOOLEAN EffectiveOnly; // [rsp+31h] [rbp-67h] BYREF
  BOOLEAN CopyOnOpen[6]; // [rsp+32h] [rbp-66h] BYREF
  struct _NDIS_IF_BLOCK *v148; // [rsp+38h] [rbp-60h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+40h] [rbp-58h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-50h] BYREF
  __int64 v151; // [rsp+50h] [rbp-48h] BYREF
  __int128 v152; // [rsp+58h] [rbp-40h]

  v4 = 0LL;
  TopIfBlockFromMiniport = 0LL;
  v6 = 0;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(74LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a4);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 8 )
  {
    v6 = -1073741808;
    goto LABEL_94;
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v6 = -1073741808;
    goto LABEL_94;
  }
  if ( !*((_QWORD *)a1 + 5) )
  {
    v6 = -1073741808;
    goto LABEL_94;
  }
  v8 = (union _NET_LUID_LH *)*((_QWORD *)a1 + 2);
  CurrentThread = KeGetCurrentThread();
  v151 = 0LL;
  v152 = 0uLL;
  v10.Value = v8->Value;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v12 = ThreadProperty;
  if ( ThreadProperty )
  {
    v13 = *ThreadProperty;
    LODWORD(v151) = ThreadProperty[1];
    HIDWORD(v151) = v13;
    ObfDereferenceObject(ThreadProperty);
    v14 = v13;
  }
  else
  {
    v13 = 0;
    v151 = 0LL;
    v14 = 0;
  }
  if ( !v14 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
    }
    else
    {
      v15 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v16 = v15;
      if ( v15 )
      {
        v91 = SeQueryInformationToken(v15, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v16);
        if ( v91 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_13;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_13:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < ndisCmSessionCount )
    {
      v13 = 0;
      v92 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ThreadSessionId < ndisCmSessionCount )
        v13 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v92);
      if ( !v13 )
        v13 = 1;
    }
    else
    {
      v13 = 1;
    }
    HIDWORD(v151) = v13;
    v14 = v13;
  }
  v19 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v20 = 0LL;
  v21 = v19;
  Flink = ndisIfCompartmentList.Flink;
  if ( ndisIfCompartmentList.Flink != &ndisIfCompartmentList )
  {
    while ( 1 )
    {
      v23 = (unsigned int)Flink[1].Flink;
      if ( v23 == v14 )
        break;
      if ( v23 <= v14 )
      {
        Flink = Flink->Flink;
        if ( Flink != &ndisIfCompartmentList )
          continue;
      }
      goto LABEL_21;
    }
    v20 = Flink;
  }
LABEL_21:
  v152 = *(__int128 *)((char *)&v20[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v21);
  v24 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v25 = *((_DWORD *)a1 + 14);
  v26 = v24;
  v145 = v24;
  if ( v25 )
  {
    v93 = v25 - 1;
    if ( v93 )
    {
      if ( v93 == 1 )
        goto LABEL_170;
      v6 = -1073741808;
    }
    else
    {
      v10.Value = 0LL;
LABEL_170:
      while ( 1 )
      {
        NextInterfaceByNetLuid = ndisIfFindNextInterfaceByNetLuid(v10);
        v4 = NextInterfaceByNetLuid;
        if ( !NextInterfaceByNetLuid )
          break;
        v10.Value = (ULONG64)NextInterfaceByNetLuid->NetLuid;
        if ( (unsigned __int8)ndisIsCompartmentAccessibleByClient(NextInterfaceByNetLuid->Compartment, &v151, 0LL) )
          goto LABEL_30;
      }
    }
  }
  else
  {
    v27 = ndisIfList.Flink;
    if ( ndisIfList.Flink != &ndisIfList )
    {
      while ( 1 )
      {
        v28 = v27[5].Flink;
        if ( v28 == (_LIST_ENTRY *)v10.Value )
          break;
        if ( (unsigned __int64)v28 <= v10.Value )
        {
          v27 = v27->Flink;
          if ( v27 != &ndisIfList )
            continue;
        }
        goto LABEL_28;
      }
      v4 = (struct _NDIS_IF_BLOCK *)&v27[-77];
    }
LABEL_28:
    if ( v4 )
    {
      Compartment = v4->Compartment;
      if ( v13 != Compartment->CompartmentId )
      {
        v95 = v152 - *(_QWORD *)&Compartment->LoopbackInfo.NamespaceGuid.Data1;
        if ( (_QWORD)v152 == *(_QWORD *)&Compartment->LoopbackInfo.NamespaceGuid.Data1 )
          v95 = *((_QWORD *)&v152 + 1) - *(_QWORD *)Compartment->LoopbackInfo.NamespaceGuid.Data4;
        if ( v95 && ((Compartment->LoopbackInfo.Flags & 2) != 0 || v13 != 1) )
        {
          v4 = 0LL;
          goto LABEL_86;
        }
      }
LABEL_30:
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v4->RefCountTracker);
      ++v4->Ref;
      if ( !v4->bNdisIsProvider || *((_QWORD *)a1 + 1) >= 2uLL )
      {
LABEL_85:
        **((_QWORD **)a1 + 2) = v4->NetLuid.Value;
        goto LABEL_86;
      }
      Miniport = 0LL;
      v31 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
      if ( v4->MiniportAvailable )
      {
        Miniport = v4->Miniport;
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v4->MpRefCountTracker);
        ++v4->MiniportLinkReference;
      }
      KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v31);
      if ( Miniport )
      {
        v33 = ndisReferenceTopMiniportByNameForNsi((_DWORD)Miniport, 0, v32, 0, 2, 60);
        v34 = v33;
        if ( v33 )
        {
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v33 + 96));
          v35 = *(_QWORD *)(v34 + 2056);
          *(_QWORD *)(v34 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v34 + 1856) = 2234961;
          if ( v35 )
          {
            while ( 1 )
            {
              v36 = 1;
              v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v35 + 320));
              if ( !*(_BYTE *)(v35 + 330) )
              {
                v38 = *(_WORD *)(v35 + 328);
                if ( v38 >= 0xFFEBu )
                {
                  ndisRefCountReferenceCountOverflow = 1;
                  v36 = 2;
                }
                else
                {
                  *(_WORD *)(v35 + 328) = v38 + 1;
                  NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v35 + 336));
                  v36 = 0;
                }
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(v35 + 320), v37);
              if ( !v36 )
                break;
              v35 = *(_QWORD *)(v35 + 112);
              if ( !v35 )
                goto LABEL_151;
            }
            v39 = *(struct _NDIS_IF_BLOCK **)(v35 + 840);
          }
          else
          {
LABEL_151:
            v39 = *(struct _NDIS_IF_BLOCK **)(v34 + 4064);
          }
          v148 = v39;
          *(_QWORD *)(v34 + 520) = 0LL;
          *(_DWORD *)(v34 + 1856) = 0;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v34 + 96));
          v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v34 + 96));
          v41 = *(_QWORD *)(v34 + 4928);
          *(_QWORD *)(v34 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v34 + 1856) = 71394;
          if ( v41 - 2 > 1 )
          {
            if ( v41 <= 1 )
              ndisBugCheckEx(0x1EuLL, 3uLL, v41, 0LL);
            if ( *(_BYTE *)(v41 + 2) <= 2u )
              ndisBugCheckEx(0x1EuLL, 2uLL, v41, 2uLL);
            v42 = *(unsigned __int8 *)(v41 + 1);
            if ( *(_BYTE *)(v41 + 1) )
            {
              if ( v42 == 1 )
              {
                v96 = v41 + 136;
                v97 = *(_DWORD *)(v41 + 192);
                v98 = (unsigned __int16)v97 >> 1;
                if ( v97 >> 17 < 0x3FFE && v98 == (v97 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v41 + 136));
                  *(_DWORD *)(v96 + 56) &= 0x10001u;
                }
                else
                {
                  if ( v98 == 0 && (v97 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v41, 2uLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v41 + 136), 0);
                }
              }
            }
            else
            {
              v43 = *(_QWORD *)(v41 + 8);
              if ( v43 && (v44 = *(_BYTE *)(v41 + 3)) != 0 )
              {
                while ( 1 )
                {
                  v45 = (_BYTE *)(v43 + 2LL * (unsigned __int8)v42);
                  if ( *v45 == 2 )
                  {
                    v99 = v45[1];
                    if ( v99 )
                      break;
                  }
                  LOBYTE(v42) = v42 + 1;
                  if ( (unsigned __int8)v42 >= v44 )
                    goto LABEL_50;
                }
                v45[1] = v99 - 1;
              }
              else
              {
LABEL_50:
                if ( !_bittestandreset((signed __int32 *)(v41 + 16), 2u) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v41, 2uLL);
              }
            }
          }
          v46 = (*(_DWORD *)(v34 + 3132))-- == 1;
          if ( v46 )
          {
            v47 = *(struct _KEVENT **)(v34 + 3144);
            if ( v47 )
              KeSetEvent(v47, 0, 0);
          }
          *(_QWORD *)(v34 + 520) = 0LL;
          *(_DWORD *)(v34 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 96), v40);
          if ( (unsigned __int8)byte_1C009961B >= 4u )
            WPP_SF_q(25LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v34, v48);
          v49 = 0;
          v50 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v34 + 4464));
          v51 = *(_QWORD *)(v34 + 4920);
          v52 = v50;
          if ( v51 && v51 - 2 > 1 )
          {
            if ( v51 == 1 )
              ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
            if ( *(_BYTE *)(v51 + 2) <= 0x3Cu )
              ndisBugCheckEx(0x1EuLL, 2uLL, v51, 0x3CuLL);
            v53 = *(unsigned __int8 *)(v51 + 1);
            if ( *(_BYTE *)(v51 + 1) )
            {
              if ( v53 == 1 )
              {
                v100 = v51 + 3848;
                v101 = *(_DWORD *)(v51 + 3904);
                v102 = (unsigned __int16)v101 >> 1;
                if ( v101 >> 17 < 0x3FFE && v102 == (v101 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v51 + 3848));
                  *(_DWORD *)(v100 + 56) &= 0x10001u;
                }
                else
                {
                  if ( v102 == 0 && (v101 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v51, 0x3CuLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v51 + 3848), 0);
                }
              }
            }
            else
            {
              v54 = *(_QWORD *)(v51 + 8);
              if ( v54 && (v55 = *(_BYTE *)(v51 + 3)) != 0 )
              {
                while ( 1 )
                {
                  v56 = (_BYTE *)(v54 + 2LL * (unsigned __int8)v53);
                  if ( *v56 == 60 )
                  {
                    v103 = v56[1];
                    if ( v103 )
                      break;
                  }
                  LOBYTE(v53) = v53 + 1;
                  if ( (unsigned __int8)v53 >= v55 )
                    goto LABEL_65;
                }
                v56[1] = v103 - 1;
              }
              else
              {
LABEL_65:
                if ( !_bittestandreset((signed __int32 *)(v51 + 20), 0x1Cu) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v51, 0x3CuLL);
              }
            }
          }
          v46 = (*(_DWORD *)(v34 + 4472))-- == 1;
          if ( v46 )
            v49 = 1;
          if ( (unsigned __int8)byte_1C009961B >= 4u )
            WPP_SF_qD(14LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v34, *(unsigned int *)(v34 + 4472));
          KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 4464), v52);
          if ( v49 )
          {
            v104 = *(struct _KEVENT **)(v34 + 1608);
            if ( v104 )
              KeSetEvent(v104, 0, 0);
          }
          if ( (unsigned __int8)byte_1C009961B >= 4u )
            WPP_SF_q(26LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v34, v57);
          TopIfBlockFromMiniport = v148;
        }
        v58 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
        MpRefCountTracker = (ULONG_PTR)v4->MpRefCountTracker;
        v60 = v58;
        if ( MpRefCountTracker - 2 > 1 )
        {
          if ( MpRefCountTracker <= 1 )
            ndisBugCheckEx(0x1EuLL, 3uLL, MpRefCountTracker, 0LL);
          if ( *(_BYTE *)(MpRefCountTracker + 2) <= 3u )
            ndisBugCheckEx(0x1EuLL, 2uLL, MpRefCountTracker, 3uLL);
          if ( *(_BYTE *)(MpRefCountTracker + 1) )
          {
            if ( *(_BYTE *)(MpRefCountTracker + 1) == 1 )
            {
              v105 = MpRefCountTracker + 200;
              v106 = *(_DWORD *)(MpRefCountTracker + 256);
              v107 = (unsigned __int16)v106 >> 1;
              if ( v106 >> 17 < 0x3FFE && v107 == (v106 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(MpRefCountTracker + 200));
                *(_DWORD *)(v105 + 56) &= 0x10001u;
              }
              else
              {
                if ( v107 == 0 && (v106 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, MpRefCountTracker, 3uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(MpRefCountTracker + 200), 0);
              }
            }
          }
          else
          {
            v61 = *(_QWORD *)(MpRefCountTracker + 8);
            if ( v61 && (v87 = *(_BYTE *)(MpRefCountTracker + 3), v88 = 0, v87) )
            {
              while ( 1 )
              {
                v89 = (_BYTE *)(v61 + 2LL * v88);
                if ( *v89 == 3 )
                {
                  v108 = v89[1];
                  if ( v108 )
                    break;
                }
                if ( ++v88 >= v87 )
                  goto LABEL_79;
              }
              v89[1] = v108 - 1;
            }
            else
            {
LABEL_79:
              if ( !_bittestandreset((signed __int32 *)(MpRefCountTracker + 16), 3u) )
                ndisBugCheckEx(0x1EuLL, 0LL, MpRefCountTracker, 3uLL);
            }
          }
        }
        v46 = v4->MiniportLinkReference-- == 1;
        if ( v46 )
        {
          v109 = v4->Miniport;
          if ( v109 )
          {
            IfBlockPointerRefZeroEvent = v109->IfBlockPointerRefZeroEvent;
            if ( IfBlockPointerRefZeroEvent )
              KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
          }
        }
        KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v60);
      }
      else
      {
        if ( !v4->IsNdisFilter )
        {
LABEL_84:
          v26 = v145;
          goto LABEL_85;
        }
        TopIfBlockFromMiniport = ndisNsiGetTopIfBlockFromMiniport(*(struct _NDIS_MINIPORT_BLOCK **)&v4->Miniport->Reserved4.Length);
      }
      if ( TopIfBlockFromMiniport )
      {
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)TopIfBlockFromMiniport->RefCountTracker);
        ++TopIfBlockFromMiniport->Ref;
      }
      goto LABEL_84;
    }
  }
LABEL_86:
  KeReleaseSpinLock(&ndisIfListLock, v26);
  if ( v6 < 0 )
    goto LABEL_94;
  if ( v4 )
  {
    v62 = *((_QWORD *)a1 + 1);
    v6 = -1073741811;
    if ( !v62 || v62 == 12 )
    {
      v63 = *((_DWORD *)a1 + 8);
      if ( v63 )
      {
        if ( v63 == 1 )
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRodInformation(v4, TopIfBlockFromMiniport, a1);
        }
        else
        {
          if ( v63 != 2 )
            goto LABEL_94;
          InterfaceRodInformation = ndisNsiGetInterfaceRosInformation(v4, TopIfBlockFromMiniport, a1);
        }
      }
      else
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRwInformation(v4, TopIfBlockFromMiniport, a1);
      }
      goto LABEL_93;
    }
    if ( v62 == 1 || v62 == 13 )
    {
      v111 = *((_DWORD *)a1 + 8);
      if ( v111 == 1 )
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRodEnumObject(v4, TopIfBlockFromMiniport, a1);
LABEL_93:
        v6 = InterfaceRodInformation;
        goto LABEL_94;
      }
      if ( v111 == 2 )
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRosEnumObject(v4, TopIfBlockFromMiniport, a1);
        goto LABEL_93;
      }
    }
  }
  else if ( *((_DWORD *)a1 + 14) )
  {
    v6 = -2147483622;
  }
  else
  {
    v6 = -1073741772;
  }
LABEL_94:
  v65 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( TopIfBlockFromMiniport )
  {
    if ( TopIfBlockFromMiniport->IsNdisFilter )
    {
      p_SystemArgument1 = (__int64)&TopIfBlockFromMiniport->Miniport->WakeUpDpcTimer.Dpc.SystemArgument1;
      v67 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_SystemArgument1);
      v68 = *(_QWORD *)(p_SystemArgument1 + 16);
      v69 = v67;
      if ( v68 - 2 > 1 )
      {
        if ( v68 <= 1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v68, 0LL);
        if ( *(_BYTE *)(v68 + 2) <= 0xBu )
          ndisBugCheckEx(0x1EuLL, 2uLL, v68, 0xBuLL);
        v70 = *(unsigned __int8 *)(v68 + 1);
        if ( *(_BYTE *)(v68 + 1) )
        {
          if ( v70 == 1 )
          {
            v112 = v68 + 712;
            v113 = *(_DWORD *)(v68 + 768);
            v114 = (unsigned __int16)v113 >> 1;
            if ( v113 >> 17 < 0x3FFE && v114 == (v113 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v68 + 712));
              *(_DWORD *)(v112 + 56) &= 0x10001u;
            }
            else
            {
              if ( v114 == 0 && (v113 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v68, 0xBuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v68 + 712), 0);
            }
          }
        }
        else
        {
          v71 = *(_QWORD *)(v68 + 8);
          if ( v71 && (v72 = *(_BYTE *)(v68 + 3)) != 0 )
          {
            while ( 1 )
            {
              v73 = (_BYTE *)(v71 + 2LL * (unsigned __int8)v70);
              if ( *v73 == 11 )
              {
                v74 = v73[1];
                if ( v74 )
                  break;
              }
              LOBYTE(v70) = v70 + 1;
              if ( (unsigned __int8)v70 >= v72 )
                goto LABEL_105;
            }
            v73[1] = v74 - 1;
          }
          else
          {
LABEL_105:
            if ( !_bittestandreset((signed __int32 *)(v68 + 16), 0xBu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v68, 0xBuLL);
          }
        }
      }
      v46 = (*(_WORD *)(p_SystemArgument1 + 8))-- == 1;
      if ( v46 && !*(_BYTE *)(p_SystemArgument1 + 11) )
      {
        NdisFreeRefCount(*(_QWORD *)(p_SystemArgument1 + 16));
        *(_QWORD *)(p_SystemArgument1 + 16) = 1LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)p_SystemArgument1, v69);
    }
    RefCountTracker = (ULONG_PTR)TopIfBlockFromMiniport->RefCountTracker;
    if ( RefCountTracker - 2 > 1 )
    {
      if ( RefCountTracker <= 1 )
        ndisBugCheckEx(0x1EuLL, 3uLL, RefCountTracker, 0LL);
      if ( *(_BYTE *)(RefCountTracker + 2) <= 2u )
        ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 2uLL);
      v76 = *(unsigned __int8 *)(RefCountTracker + 1);
      if ( *(_BYTE *)(RefCountTracker + 1) )
      {
        if ( v76 == 1 )
        {
          v115 = RefCountTracker + 136;
          v116 = *(_DWORD *)(RefCountTracker + 192);
          v117 = (unsigned __int16)v116 >> 1;
          if ( v116 >> 17 < 0x3FFE && v117 == (v116 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 136));
            *(_DWORD *)(v115 + 56) &= 0x10001u;
          }
          else
          {
            if ( v117 == 0 && (v116 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 2uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 136), 0);
          }
        }
      }
      else
      {
        v77 = *(_QWORD *)(RefCountTracker + 8);
        if ( v77 && (v78 = *(_BYTE *)(RefCountTracker + 3)) != 0 )
        {
          while ( 1 )
          {
            v79 = (_BYTE *)(v77 + 2LL * (unsigned __int8)v76);
            if ( *v79 == 2 )
            {
              v90 = v79[1];
              if ( v90 )
                break;
            }
            LOBYTE(v76) = v76 + 1;
            if ( (unsigned __int8)v76 >= v78 )
              goto LABEL_118;
          }
          v79[1] = v90 - 1;
        }
        else
        {
LABEL_118:
          if ( !_bittestandreset((signed __int32 *)(RefCountTracker + 16), 2u) )
            ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 2uLL);
        }
      }
    }
    v46 = TopIfBlockFromMiniport->Ref-- == 1;
    if ( v46 )
    {
      ifIndex = TopIfBlockFromMiniport->ifIndex;
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(TopIfBlockFromMiniport);
      *(_QWORD *)&TopIfBlockFromMiniport->LowerLayerIfCount = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v119 = TopIfBlockFromMiniport->Link.Flink;
      if ( v119->Blink != &TopIfBlockFromMiniport->Link
        || (Blink = TopIfBlockFromMiniport->Link.Blink, Blink->Flink != &TopIfBlockFromMiniport->Link) )
      {
        __fastfail(3u);
      }
      Blink->Flink = v119;
      v119->Blink = Blink;
      v121 = TopIfBlockFromMiniport->ProviderLink.Flink;
      if ( v121->Blink != &TopIfBlockFromMiniport->ProviderLink
        || (v122 = TopIfBlockFromMiniport->ProviderLink.Blink, v122->Flink != &TopIfBlockFromMiniport->ProviderLink) )
      {
        __fastfail(3u);
      }
      v122->Flink = v121;
      v121->Blink = v122;
      v123 = TopIfBlockFromMiniport->NetworkLink.Flink;
      if ( v123->Blink != &TopIfBlockFromMiniport->NetworkLink
        || (v124 = TopIfBlockFromMiniport->NetworkLink.Blink, v124->Flink != &TopIfBlockFromMiniport->NetworkLink) )
      {
        __fastfail(3u);
      }
      v124->Flink = v123;
      v123->Blink = v124;
      NETWORKBLOCK_DECREMENT_REF(TopIfBlockFromMiniport->Network);
      v125 = (ifIndex - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v125 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v125) &= ~(1 << ((ifIndex - 1) & 7));
      v126 = (ULONG_PTR)TopIfBlockFromMiniport->RefCountTracker;
      --ndisInterfaceCount;
      NdisFreeRefCount(v126);
      ifL2NetworkInfo = TopIfBlockFromMiniport->ifL2NetworkInfo;
      TopIfBlockFromMiniport->RefCountTracker = 0LL;
      if ( ifL2NetworkInfo )
      {
        ExFreePoolWithTag(ifL2NetworkInfo, 0);
        TopIfBlockFromMiniport->ifL2NetworkInfo = 0LL;
      }
      ifRcvAddressTable = TopIfBlockFromMiniport->ifRcvAddressTable;
      if ( ifRcvAddressTable )
      {
        ExFreePoolWithTag(ifRcvAddressTable, 0);
        TopIfBlockFromMiniport->ifRcvAddressTable = 0LL;
        *(_QWORD *)&TopIfBlockFromMiniport->ifRcvAddressCount = 0LL;
      }
      AsyncEvent = TopIfBlockFromMiniport->AsyncEvent;
      if ( AsyncEvent )
        KeSetEvent(AsyncEvent, 0, 0);
      ExFreePoolWithTag(TopIfBlockFromMiniport, 0);
    }
  }
  if ( v4 )
  {
    v80 = (ULONG_PTR)v4->RefCountTracker;
    if ( v80 - 2 > 1 )
    {
      if ( v80 <= 1 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v80, 0LL);
      if ( *(_BYTE *)(v80 + 2) <= 1u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v80, 1uLL);
      v81 = *(unsigned __int8 *)(v80 + 1);
      if ( *(_BYTE *)(v80 + 1) )
      {
        if ( v81 == 1 )
        {
          v130 = v80 + 72;
          v131 = *(_DWORD *)(v80 + 128);
          v132 = (unsigned __int16)v131 >> 1;
          if ( v131 >> 17 < 0x3FFE && v132 == (v131 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v80 + 72));
            *(_DWORD *)(v130 + 56) &= 0x10001u;
          }
          else
          {
            if ( v132 == 0 && (v131 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v80, 1uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v80 + 72), 0);
          }
        }
      }
      else
      {
        v82 = *(_QWORD *)(v80 + 8);
        if ( v82 && (v83 = *(_BYTE *)(v80 + 3)) != 0 )
        {
          while ( 1 )
          {
            v84 = (_BYTE *)(v82 + 2LL * (unsigned __int8)v81);
            if ( *v84 == 1 )
            {
              v86 = v84[1];
              if ( v86 )
                break;
            }
            LOBYTE(v81) = v81 + 1;
            if ( (unsigned __int8)v81 >= v83 )
              goto LABEL_129;
          }
          v84[1] = v86 - 1;
        }
        else
        {
LABEL_129:
          if ( !_bittestandreset((signed __int32 *)(v80 + 16), 1u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v80, 1uLL);
        }
      }
    }
    v46 = v4->Ref-- == 1;
    if ( v46 )
    {
      v133 = v4->ifIndex;
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v4);
      *(_QWORD *)&v4->LowerLayerIfCount = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v134 = v4->Link.Flink;
      if ( v134->Blink != &v4->Link || (v135 = v4->Link.Blink, v135->Flink != &v4->Link) )
        __fastfail(3u);
      v135->Flink = v134;
      v134->Blink = v135;
      v136 = v4->ProviderLink.Flink;
      if ( v136->Blink != &v4->ProviderLink || (v137 = v4->ProviderLink.Blink, v137->Flink != &v4->ProviderLink) )
        __fastfail(3u);
      v137->Flink = v136;
      v136->Blink = v137;
      v138 = v4->NetworkLink.Flink;
      if ( v138->Blink != &v4->NetworkLink || (v139 = v4->NetworkLink.Blink, v139->Flink != &v4->NetworkLink) )
        __fastfail(3u);
      v139->Flink = v138;
      v138->Blink = v139;
      NETWORKBLOCK_DECREMENT_REF(v4->Network);
      v140 = (v133 - 1) >> 3;
      if ( IfUsedIfIndicesLength >= v140 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + v140) &= ~(1 << ((v133 - 1) & 7));
      v141 = (ULONG_PTR)v4->RefCountTracker;
      --ndisInterfaceCount;
      NdisFreeRefCount(v141);
      v142 = v4->ifL2NetworkInfo;
      v4->RefCountTracker = 0LL;
      if ( v142 )
      {
        ExFreePoolWithTag(v142, 0);
        v4->ifL2NetworkInfo = 0LL;
      }
      v143 = v4->ifRcvAddressTable;
      if ( v143 )
      {
        ExFreePoolWithTag(v143, 0);
        v4->ifRcvAddressTable = 0LL;
        *(_QWORD *)&v4->ifRcvAddressCount = 0LL;
      }
      v144 = v4->AsyncEvent;
      if ( v144 )
        KeSetEvent(v144, 0, 0);
      ExFreePoolWithTag(v4, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v65);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qD(75LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, (unsigned int)v6);
  return (unsigned int)v6;
}
