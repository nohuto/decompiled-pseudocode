/*
 * XREFs of ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0006B60
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C00093E0 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C000CF38 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D34C (ndisIsCompartmentAccessibleByClient.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001EB44 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     NdisFreeRefCount @ 0x1C0025560 (NdisFreeRefCount.c)
 *     ndisIfDeleteStackEntries @ 0x1C0026758 (ndisIfDeleteStackEntries.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0027164 (NETWORKBLOCK_DECREMENT_REF.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ?ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0041184 (-ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7A8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00A3320 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00A3570 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00A3830 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00A4190 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00A4804 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceInformation(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  struct _NDIS_IF_BLOCK *v1; // rsi
  struct _NDIS_IF_BLOCK *TopIfBlockFromMiniport; // r13
  struct _NM_REQUEST_GET_PARAMETER *v3; // r14
  int InterfaceRwInformation; // r12d
  union _NET_LUID_LH *v5; // rbx
  struct _KTHREAD *CurrentThread; // r15
  union _NET_LUID_LH v7; // rbx
  unsigned int *ThreadProperty; // rax
  unsigned int *v9; // rcx
  unsigned int v10; // edi
  PACCESS_TOKEN v11; // rax
  void *v12; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // r14d
  KIRQL v15; // al
  _LIST_ENTRY *v16; // rdx
  KIRQL v17; // r8
  _LIST_ENTRY *i; // rax
  unsigned int Flink; // ecx
  KIRQL v20; // al
  int v21; // ecx
  KIRQL v22; // r15
  _LIST_ENTRY *j; // rax
  _LIST_ENTRY *v24; // rdx
  _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rdx
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rbx
  _WORD *v27; // rdx
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  KIRQL v29; // r14
  NDIS_REFCOUNT_HANDLE__ *MpRefCountTracker; // rbx
  _WORD *v31; // rdx
  int v32; // r8d
  __int64 v33; // rax
  __int64 v34; // rdi
  KSPIN_LOCK *v35; // r12
  __int64 v36; // r13
  int v37; // ebx
  KIRQL v38; // r15
  unsigned __int16 v39; // cx
  __int64 v40; // rbx
  _WORD *v41; // rdx
  KIRQL v42; // r14
  ULONG_PTR v43; // r8
  __int64 v44; // rcx
  bool v45; // zf
  struct _KEVENT *v46; // rcx
  KIRQL v47; // al
  ULONG_PTR v48; // r8
  KIRQL v49; // r15
  int v50; // edx
  __int64 v51; // rax
  unsigned __int8 v52; // r9
  int v53; // ebx
  KIRQL v54; // al
  ULONG_PTR v55; // r8
  KIRQL v56; // di
  __int64 v57; // rax
  NDIS_REFCOUNT_HANDLE__ *v58; // rbx
  _WORD *v59; // rdx
  __int64 v60; // rax
  int v61; // eax
  int InterfaceRodInformation; // eax
  KIRQL v63; // r15
  __int64 p_SystemArgument1; // rbx
  KIRQL v65; // al
  ULONG_PTR v66; // r8
  KIRQL v67; // r14
  int v68; // edx
  __int64 v69; // rax
  unsigned __int8 v70; // r9
  ULONG_PTR v71; // r8
  __int64 v72; // rax
  unsigned __int8 v73; // r9
  unsigned __int8 v74; // dl
  ULONG_PTR v75; // r8
  int v76; // ecx
  __int64 v77; // rax
  unsigned __int8 v78; // r9
  unsigned __int8 v79; // dl
  unsigned __int8 v81; // r9
  unsigned __int8 v82; // dl
  __int64 v83; // r10
  unsigned __int8 v84; // r9
  unsigned __int8 v85; // r8
  _BYTE *v86; // rcx
  unsigned __int8 v87; // r9
  unsigned __int8 v88; // dl
  __int64 v89; // r10
  unsigned __int8 v90; // r9
  unsigned __int8 v91; // r8
  _BYTE *v92; // rcx
  __int64 v93; // r10
  unsigned __int8 v94; // r9
  unsigned __int8 v95; // r8
  _BYTE *v96; // rcx
  unsigned __int8 v97; // dl
  unsigned __int8 v98; // dl
  unsigned __int8 v99; // dl
  unsigned __int8 v100; // dl
  NTSTATUS v101; // edi
  unsigned __int8 v102; // dl
  unsigned __int8 v103; // dl
  KIRQL v104; // r8
  int v105; // ecx
  struct _NDIS_IF_BLOCK *NextInterfaceByNetLuid; // rax
  __int64 v107; // rcx
  __int64 v108; // r10
  unsigned __int8 v109; // r9
  unsigned __int8 v110; // r8
  _BYTE *v111; // rcx
  unsigned __int8 v112; // dl
  unsigned __int8 v113; // dl
  ULONG_PTR v114; // rbx
  unsigned int v115; // edx
  ULONG_PTR v116; // rbx
  unsigned int v117; // edx
  struct _KEVENT *v118; // rcx
  ULONG_PTR v119; // rbx
  unsigned int v120; // edx
  _NDIS_MINIPORT_BLOCK *v121; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  int v123; // eax
  ULONG_PTR v124; // rdi
  unsigned int v125; // edx
  ULONG_PTR v126; // rbx
  unsigned int v127; // edx
  unsigned int ifIndex; // ebx
  _LIST_ENTRY *v129; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v131; // rdx
  _LIST_ENTRY *v132; // rcx
  _LIST_ENTRY *v133; // rdx
  _LIST_ENTRY *v134; // rcx
  __int64 v135; // rcx
  NDIS_REFCOUNT_HANDLE__ *v136; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  ULONG_PTR v140; // rbx
  unsigned int v141; // edx
  unsigned int v142; // ebx
  _LIST_ENTRY *v143; // rdx
  _LIST_ENTRY *v144; // rcx
  _LIST_ENTRY *v145; // rdx
  _LIST_ENTRY *v146; // rcx
  _LIST_ENTRY *v147; // rdx
  _LIST_ENTRY *v148; // rcx
  __int64 v149; // rcx
  NDIS_REFCOUNT_HANDLE__ *v150; // rcx
  _IF_COUNTED_STRING_LH *v151; // rcx
  _NDIS_IF_RCV_ADDRESS *v152; // rcx
  struct _KEVENT *v153; // rcx
  KIRQL v154; // [rsp+30h] [rbp-40h]
  BOOLEAN EffectiveOnly; // [rsp+31h] [rbp-3Fh] BYREF
  BOOLEAN CopyOnOpen[2]; // [rsp+32h] [rbp-3Eh] BYREF
  int v157; // [rsp+34h] [rbp-3Ch]
  struct _NM_REQUEST_GET_PARAMETER *v158; // [rsp+38h] [rbp-38h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+40h] [rbp-30h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-28h] BYREF
  __int64 v161; // [rsp+50h] [rbp-20h] BYREF
  __int128 v162; // [rsp+58h] [rbp-18h]

  v1 = 0LL;
  v158 = a1;
  TopIfBlockFromMiniport = 0LL;
  v3 = a1;
  InterfaceRwInformation = 0;
  v157 = 0;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_q(74LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v3 + 6) != 8 || !*((_DWORD *)v3 + 12) || !*((_QWORD *)v3 + 5) )
  {
    InterfaceRwInformation = -1073741808;
    goto LABEL_98;
  }
  v5 = (union _NET_LUID_LH *)*((_QWORD *)v3 + 2);
  CurrentThread = KeGetCurrentThread();
  v161 = 0LL;
  v162 = 0uLL;
  v7.Value = v5->Value;
  ThreadProperty = (unsigned int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v9 = ThreadProperty;
  if ( ThreadProperty )
  {
    v10 = *ThreadProperty;
    LODWORD(v161) = ThreadProperty[1];
    HIDWORD(v161) = v10;
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    v10 = 0;
    v161 = 0LL;
  }
  if ( !v10 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
    }
    else
    {
      v11 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v12 = v11;
      if ( v11 )
      {
        v101 = SeQueryInformationToken(v11, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v12);
        if ( v101 >= 0 )
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
      v10 = 0;
      v104 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ThreadSessionId < ndisCmSessionCount )
        v10 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v104);
      if ( !v10 )
        v10 = 1;
    }
    else
    {
      v10 = 1;
    }
    v3 = v158;
    HIDWORD(v161) = v10;
  }
  v15 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v16 = 0LL;
  v17 = v15;
  for ( i = ndisIfCompartmentList.Flink; i != &ndisIfCompartmentList; i = i->Flink )
  {
    Flink = (unsigned int)i[1].Flink;
    if ( Flink == v10 )
    {
      v16 = i;
      break;
    }
    if ( Flink > v10 )
      break;
  }
  v162 = *(__int128 *)((char *)&v16[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v17);
  v20 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v21 = *((_DWORD *)v3 + 14);
  v22 = v20;
  v154 = v20;
  if ( v21 )
  {
    v105 = v21 - 1;
    if ( v105 )
    {
      if ( v105 == 1 )
        goto LABEL_217;
      InterfaceRwInformation = -1073741808;
    }
    else
    {
      v7.Value = 0LL;
LABEL_217:
      while ( 1 )
      {
        NextInterfaceByNetLuid = ndisIfFindNextInterfaceByNetLuid(v7);
        v1 = NextInterfaceByNetLuid;
        if ( !NextInterfaceByNetLuid )
          break;
        v7.Value = (ULONG64)NextInterfaceByNetLuid->NetLuid;
        if ( (unsigned __int8)ndisIsCompartmentAccessibleByClient(NextInterfaceByNetLuid->Compartment, &v161, 0LL) )
          goto LABEL_32;
      }
    }
  }
  else
  {
    for ( j = ndisIfList.Flink; j != &ndisIfList; j = j->Flink )
    {
      v24 = j[5].Flink;
      if ( v24 == (_LIST_ENTRY *)v7.Value )
      {
        v1 = (struct _NDIS_IF_BLOCK *)&j[-77];
        break;
      }
      if ( (unsigned __int64)v24 > v7.Value )
        break;
    }
    if ( v1 )
    {
      Compartment = v1->Compartment;
      if ( v10 != Compartment->CompartmentId )
      {
        v107 = v162 - *(_QWORD *)&Compartment->LoopbackInfo.NamespaceGuid.Data1;
        if ( (_QWORD)v162 == *(_QWORD *)&Compartment->LoopbackInfo.NamespaceGuid.Data1 )
          v107 = *((_QWORD *)&v162 + 1) - *(_QWORD *)Compartment->LoopbackInfo.NamespaceGuid.Data4;
        if ( v107 && ((Compartment->LoopbackInfo.Flags & 2) != 0 || v10 != 1) )
          v1 = 0LL;
      }
LABEL_32:
      if ( v1 )
      {
        RefCountTracker = v1->RefCountTracker;
        if ( RefCountTracker )
        {
          if ( *((_BYTE *)RefCountTracker + 1) )
          {
            if ( *((_BYTE *)RefCountTracker + 1) == 1 )
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 18), 1u);
          }
          else
          {
            v27 = 0LL;
            if ( _bittestandset((signed __int32 *)RefCountTracker + 4, 1u) )
            {
              v89 = *((_QWORD *)RefCountTracker + 1);
              if ( v89 && (v90 = *((_BYTE *)RefCountTracker + 3), v91 = 0, v90) )
              {
                do
                {
                  v92 = (_BYTE *)(v89 + 2LL * v91);
                  if ( *v92 == 1 )
                  {
                    if ( v92[1] != 0xFF )
                    {
                      ++v92[1];
                      goto LABEL_36;
                    }
                  }
                  else if ( !v92[1] )
                  {
                    v27 = (_WORD *)(v89 + 2LL * v91);
                  }
                  ++v91;
                }
                while ( v91 < v90 );
                if ( !v27 )
                  goto LABEL_182;
                *v27 = 257;
              }
              else
              {
LABEL_182:
                if ( !*((_BYTE *)RefCountTracker + 1) )
                {
                  v97 = *((_BYTE *)RefCountTracker + 3);
                  if ( v97 == 0xFF )
                  {
                    ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
                    *((_BYTE *)RefCountTracker + 1) = 2;
                  }
                  else
                  {
                    if ( (unsigned int)v97 + 2 > 0xFF )
                      v98 = -1;
                    else
                      v98 = v97 + 2;
                    ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, v98);
                  }
                }
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
              }
            }
          }
        }
LABEL_36:
        ++v1->Ref;
        if ( !v1->bNdisIsProvider || *((_QWORD *)v3 + 1) >= 2uLL )
          goto LABEL_89;
        Miniport = 0LL;
        v29 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
        if ( v1->MiniportAvailable )
        {
          MpRefCountTracker = v1->MpRefCountTracker;
          Miniport = v1->Miniport;
          if ( MpRefCountTracker )
          {
            if ( *((_BYTE *)MpRefCountTracker + 1) )
            {
              if ( *((_BYTE *)MpRefCountTracker + 1) == 1 )
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(MpRefCountTracker + 50), 1u);
            }
            else
            {
              v31 = 0LL;
              if ( _bittestandset((signed __int32 *)MpRefCountTracker + 4, 3u) )
              {
                v108 = *((_QWORD *)MpRefCountTracker + 1);
                if ( !v108 )
                  goto LABEL_365;
                v109 = *((_BYTE *)MpRefCountTracker + 3);
                v110 = 0;
                if ( !v109 )
                  goto LABEL_365;
                do
                {
                  v111 = (_BYTE *)(v108 + 2LL * v110);
                  if ( *v111 == 3 )
                  {
                    if ( v111[1] != 0xFF )
                    {
                      ++v111[1];
                      goto LABEL_42;
                    }
                  }
                  else if ( !v111[1] )
                  {
                    v31 = (_WORD *)(v108 + 2LL * v110);
                  }
                  ++v110;
                }
                while ( v110 < v109 );
                if ( v31 )
                {
                  *v31 = 259;
                }
                else
                {
LABEL_365:
                  if ( !*((_BYTE *)MpRefCountTracker + 1) )
                  {
                    v112 = *((_BYTE *)MpRefCountTracker + 3);
                    if ( v112 == 0xFF )
                    {
                      ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)MpRefCountTracker);
                      *((_BYTE *)MpRefCountTracker + 1) = 2;
                    }
                    else
                    {
                      if ( (unsigned int)v112 + 2 <= 0xFF )
                        v113 = v112 + 2;
                      else
                        v113 = -1;
                      ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)MpRefCountTracker, v113);
                    }
                  }
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MpRefCountTracker);
                }
              }
            }
          }
LABEL_42:
          ++v1->MiniportLinkReference;
        }
        KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v29);
        if ( Miniport )
        {
          v33 = ndisReferenceTopMiniportByNameForNsi((_DWORD)Miniport, 0, v32, 0, 2, 60);
          v34 = v33;
          if ( v33 )
          {
            v35 = (KSPIN_LOCK *)(v33 + 96);
            KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v33 + 96));
            v36 = *(_QWORD *)(v34 + 2056);
            *(_QWORD *)(v34 + 520) = KeGetCurrentThread();
            *(_DWORD *)(v34 + 1856) = 2234961;
            if ( !v36 )
              goto LABEL_181;
            do
            {
              v37 = 1;
              v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v36 + 320));
              if ( !*(_BYTE *)(v36 + 330) )
              {
                v39 = *(_WORD *)(v36 + 328);
                if ( v39 >= 0xFFEBu )
                {
                  ndisRefCountReferenceCountOverflow = 1;
                  v37 = 2;
                }
                else
                {
                  v40 = *(_QWORD *)(v36 + 336);
                  *(_WORD *)(v36 + 328) = v39 + 1;
                  if ( v40 )
                  {
                    if ( *(_BYTE *)(v40 + 1) )
                    {
                      if ( *(_BYTE *)(v40 + 1) == 1 )
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v40 + 712), 1u);
                    }
                    else
                    {
                      v41 = 0LL;
                      if ( _bittestandset((signed __int32 *)(v40 + 16), 0xBu) )
                      {
                        v83 = *(_QWORD *)(v40 + 8);
                        if ( !v83 )
                          goto LABEL_366;
                        v84 = *(_BYTE *)(v40 + 3);
                        v85 = 0;
                        if ( !v84 )
                          goto LABEL_366;
                        do
                        {
                          v86 = (_BYTE *)(v83 + 2LL * v85);
                          if ( *v86 == 11 )
                          {
                            if ( v86[1] != 0xFF )
                            {
                              ++v86[1];
                              goto LABEL_51;
                            }
                          }
                          else if ( !v86[1] )
                          {
                            v41 = (_WORD *)(v83 + 2LL * v85);
                          }
                          ++v85;
                        }
                        while ( v85 < v84 );
                        if ( v41 )
                        {
                          *v41 = 267;
                        }
                        else
                        {
LABEL_366:
                          if ( !*(_BYTE *)(v40 + 1) )
                          {
                            v99 = *(_BYTE *)(v40 + 3);
                            if ( v99 == 0xFF )
                            {
                              ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v40);
                              *(_BYTE *)(v40 + 1) = 2;
                            }
                            else
                            {
                              if ( (unsigned int)v99 + 2 > 0xFF )
                                v100 = -1;
                              else
                                v100 = v99 + 2;
                              ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v40, v100);
                            }
                          }
                          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v40);
                        }
                      }
                    }
                  }
LABEL_51:
                  v37 = 0;
                }
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(v36 + 320), v38);
              if ( !v37 )
                break;
              v36 = *(_QWORD *)(v36 + 112);
            }
            while ( v36 );
            if ( v36 )
              TopIfBlockFromMiniport = *(struct _NDIS_IF_BLOCK **)(v36 + 840);
            else
LABEL_181:
              TopIfBlockFromMiniport = *(struct _NDIS_IF_BLOCK **)(v34 + 4064);
            *(_QWORD *)(v34 + 520) = 0LL;
            *(_DWORD *)(v34 + 1856) = 0;
            KeReleaseSpinLockFromDpcLevel(v35);
            v42 = KeAcquireSpinLockRaiseToDpc(v35);
            v43 = *(_QWORD *)(v34 + 4928);
            *(_QWORD *)(v34 + 520) = KeGetCurrentThread();
            *(_DWORD *)(v34 + 1856) = 72039;
            if ( v43 )
            {
              if ( *(_BYTE *)(v43 + 1) )
              {
                if ( *(_BYTE *)(v43 + 1) == 1 )
                {
                  v114 = v43 + 136;
                  v115 = *(_DWORD *)(v43 + 192);
                  if ( v115 >> 17 < 0x3FFE && (unsigned __int16)v115 >> 1 == (v115 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v43 + 136));
                    *(_DWORD *)(v114 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( (v115 & 0xFFFE) == 0 && (v115 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v43, 2uLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v43 + 136), 0);
                  }
                }
              }
              else
              {
                v44 = *(_QWORD *)(v43 + 8);
                if ( v44 && (v81 = *(_BYTE *)(v43 + 3), v82 = 0, v81) )
                {
                  while ( *(_BYTE *)(v44 + 2LL * v82) != 2 || !*(_BYTE *)(v44 + 2LL * v82 + 1) )
                  {
                    if ( ++v82 >= v81 )
                      goto LABEL_58;
                  }
                  --*(_BYTE *)(v44 + 2LL * v82 + 1);
                }
                else
                {
LABEL_58:
                  if ( !_bittestandreset((signed __int32 *)(v43 + 16), 2u) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v43, 2uLL);
                }
              }
            }
            v45 = (*(_DWORD *)(v34 + 3132))-- == 1;
            if ( v45 )
            {
              v46 = *(struct _KEVENT **)(v34 + 3144);
              if ( v46 )
                KeSetEvent(v46, 0, 0);
            }
            *(_QWORD *)(v34 + 520) = 0LL;
            *(_DWORD *)(v34 + 1856) = 0;
            KeReleaseSpinLock(v35, v42);
            if ( (unsigned __int8)byte_1C009261B >= 4u )
              WPP_SF_q(25LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v34);
            v47 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v34 + 4464));
            v48 = *(_QWORD *)(v34 + 4920);
            v49 = v47;
            if ( v48 )
            {
              v50 = *(unsigned __int8 *)(v48 + 1);
              if ( *(_BYTE *)(v48 + 1) )
              {
                if ( v50 == 1 )
                {
                  v116 = v48 + 3848;
                  v117 = *(_DWORD *)(v48 + 3904);
                  if ( v117 >> 17 < 0x3FFE && (unsigned __int16)v117 >> 1 == (v117 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v48 + 3848));
                    *(_DWORD *)(v116 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( (v117 & 0xFFFE) == 0 && (v117 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, v48, 0x3CuLL);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v48 + 3848), 0);
                  }
                }
              }
              else
              {
                v51 = *(_QWORD *)(v48 + 8);
                if ( v51 && (v52 = *(_BYTE *)(v48 + 3)) != 0 )
                {
                  while ( *(_BYTE *)(v51 + 2LL * (unsigned __int8)v50) != 60
                       || !*(_BYTE *)(v51 + 2LL * (unsigned __int8)v50 + 1) )
                  {
                    LOBYTE(v50) = v50 + 1;
                    if ( (unsigned __int8)v50 >= v52 )
                      goto LABEL_70;
                  }
                  --*(_BYTE *)(v51 + 2LL * (unsigned __int8)v50 + 1);
                }
                else
                {
LABEL_70:
                  if ( !_bittestandreset((signed __int32 *)(v48 + 20), 0x1Cu) )
                    ndisBugCheckEx(0x1EuLL, 0LL, v48, 0x3CuLL);
                }
              }
            }
            v53 = *(_DWORD *)(v34 + 4472) - 1;
            *(_DWORD *)(v34 + 4472) = v53;
            if ( (unsigned __int8)byte_1C009261B >= 4u )
              WPP_SF_qD(14LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, v34, *(unsigned int *)(v34 + 4472));
            KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 4464), v49);
            if ( !v53 )
            {
              v118 = *(struct _KEVENT **)(v34 + 1608);
              if ( v118 )
                KeSetEvent(v118, 0, 0);
            }
            if ( (unsigned __int8)byte_1C009261B >= 4u )
              WPP_SF_q(26LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v34);
            InterfaceRwInformation = v157;
            v22 = v154;
          }
          v54 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
          v55 = (ULONG_PTR)v1->MpRefCountTracker;
          v56 = v54;
          if ( v55 )
          {
            if ( *(_BYTE *)(v55 + 1) )
            {
              if ( *(_BYTE *)(v55 + 1) == 1 )
              {
                v119 = v55 + 200;
                v120 = *(_DWORD *)(v55 + 256);
                if ( v120 >> 17 < 0x3FFE && (unsigned __int16)v120 >> 1 == (v120 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v55 + 200));
                  *(_DWORD *)(v119 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v120 & 0xFFFE) == 0 && (v120 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v55, 3uLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v55 + 200), 0);
                }
              }
            }
            else
            {
              v57 = *(_QWORD *)(v55 + 8);
              if ( v57 && (v87 = *(_BYTE *)(v55 + 3), v88 = 0, v87) )
              {
                while ( *(_BYTE *)(v57 + 2LL * v88) != 3 || !*(_BYTE *)(v57 + 2LL * v88 + 1) )
                {
                  if ( ++v88 >= v87 )
                    goto LABEL_80;
                }
                --*(_BYTE *)(v57 + 2LL * v88 + 1);
              }
              else
              {
LABEL_80:
                if ( !_bittestandreset((signed __int32 *)(v55 + 16), 3u) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v55, 3uLL);
              }
            }
          }
          v45 = v1->MiniportLinkReference-- == 1;
          if ( v45 )
          {
            v121 = v1->Miniport;
            if ( v121 )
            {
              IfBlockPointerRefZeroEvent = v121->IfBlockPointerRefZeroEvent;
              if ( IfBlockPointerRefZeroEvent )
                KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
            }
          }
          KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v56);
        }
        else
        {
          if ( !v1->IsNdisFilter )
          {
LABEL_88:
            v3 = v158;
LABEL_89:
            **((_QWORD **)v3 + 2) = v1->NetLuid.Value;
            goto LABEL_90;
          }
          TopIfBlockFromMiniport = ndisNsiGetTopIfBlockFromMiniport(*(struct _NDIS_MINIPORT_BLOCK **)&v1->Miniport->Reserved4.Length);
        }
        if ( TopIfBlockFromMiniport )
        {
          v58 = TopIfBlockFromMiniport->RefCountTracker;
          if ( v58 )
          {
            if ( *((_BYTE *)v58 + 1) )
            {
              if ( *((_BYTE *)v58 + 1) == 1 )
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v58 + 34), 1u);
            }
            else
            {
              v59 = 0LL;
              if ( _bittestandset((signed __int32 *)v58 + 4, 2u) )
              {
                v93 = *((_QWORD *)v58 + 1);
                if ( v93 && (v94 = *((_BYTE *)v58 + 3), v95 = 0, v94) )
                {
                  do
                  {
                    v96 = (_BYTE *)(v93 + 2LL * v95);
                    if ( *v96 == 2 )
                    {
                      if ( v96[1] != 0xFF )
                      {
                        ++v96[1];
                        goto LABEL_87;
                      }
                    }
                    else if ( !v96[1] )
                    {
                      v59 = (_WORD *)(v93 + 2LL * v95);
                    }
                    ++v95;
                  }
                  while ( v95 < v94 );
                  if ( !v59 )
                    goto LABEL_196;
                  *v59 = 258;
                }
                else
                {
LABEL_196:
                  if ( !*((_BYTE *)v58 + 1) )
                  {
                    v102 = *((_BYTE *)v58 + 3);
                    if ( v102 == 0xFF )
                    {
                      ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v58);
                      *((_BYTE *)v58 + 1) = 2;
                    }
                    else
                    {
                      if ( (unsigned int)v102 + 2 > 0xFF )
                        v103 = -1;
                      else
                        v103 = v102 + 2;
                      ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v58, v103);
                    }
                  }
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v58);
                }
              }
            }
          }
LABEL_87:
          ++TopIfBlockFromMiniport->Ref;
        }
        goto LABEL_88;
      }
    }
  }
LABEL_90:
  KeReleaseSpinLock(&ndisIfListLock, v22);
  if ( InterfaceRwInformation >= 0 )
  {
    if ( v1 )
    {
      v60 = *((_QWORD *)v3 + 1);
      InterfaceRwInformation = -1073741811;
      if ( !v60 || v60 == 12 )
      {
        v61 = *((_DWORD *)v3 + 8);
        if ( v61 )
        {
          if ( v61 == 1 )
          {
            InterfaceRodInformation = ndisNsiGetInterfaceRodInformation(v1, TopIfBlockFromMiniport, v3);
          }
          else
          {
            if ( v61 != 2 )
              goto LABEL_98;
            InterfaceRodInformation = ndisNsiGetInterfaceRosInformation(v1, TopIfBlockFromMiniport, v3);
          }
          goto LABEL_97;
        }
        InterfaceRwInformation = ndisNsiGetInterfaceRwInformation(v1, TopIfBlockFromMiniport, v3);
      }
      else if ( v60 == 1 || v60 == 13 )
      {
        v123 = *((_DWORD *)v3 + 8);
        if ( v123 == 1 )
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRodEnumObject(v1, TopIfBlockFromMiniport, v3);
LABEL_97:
          InterfaceRwInformation = InterfaceRodInformation;
          goto LABEL_98;
        }
        if ( v123 == 2 )
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRosEnumObject(v1, TopIfBlockFromMiniport, v3);
          goto LABEL_97;
        }
      }
    }
    else
    {
      InterfaceRwInformation = *((_DWORD *)v3 + 14) != 0 ? -2147483622 : -1073741772;
    }
  }
LABEL_98:
  v63 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( TopIfBlockFromMiniport )
  {
    if ( TopIfBlockFromMiniport->IsNdisFilter )
    {
      p_SystemArgument1 = (__int64)&TopIfBlockFromMiniport->Miniport->WakeUpDpcTimer.Dpc.SystemArgument1;
      v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_SystemArgument1);
      v66 = *(_QWORD *)(p_SystemArgument1 + 16);
      v67 = v65;
      if ( v66 )
      {
        v68 = *(unsigned __int8 *)(v66 + 1);
        if ( *(_BYTE *)(v66 + 1) )
        {
          if ( v68 == 1 )
          {
            v124 = v66 + 712;
            v125 = *(_DWORD *)(v66 + 768);
            if ( v125 >> 17 < 0x3FFE && (unsigned __int16)v125 >> 1 == (v125 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v66 + 712));
              *(_DWORD *)(v124 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v125 & 0xFFFE) == 0 && (v125 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v66, 0xBuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v66 + 712), 0);
            }
          }
        }
        else
        {
          v69 = *(_QWORD *)(v66 + 8);
          if ( v69 && (v70 = *(_BYTE *)(v66 + 3)) != 0 )
          {
            while ( *(_BYTE *)(v69 + 2LL * (unsigned __int8)v68) != 11
                 || !*(_BYTE *)(v69 + 2LL * (unsigned __int8)v68 + 1) )
            {
              LOBYTE(v68) = v68 + 1;
              if ( (unsigned __int8)v68 >= v70 )
                goto LABEL_107;
            }
            --*(_BYTE *)(v69 + 2LL * (unsigned __int8)v68 + 1);
          }
          else
          {
LABEL_107:
            if ( !_bittestandreset((signed __int32 *)(v66 + 16), 0xBu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v66, 0xBuLL);
          }
        }
      }
      v45 = (*(_WORD *)(p_SystemArgument1 + 8))-- == 1;
      if ( v45 && !*(_BYTE *)(p_SystemArgument1 + 11) )
      {
        NdisFreeRefCount(*(PVOID *)(p_SystemArgument1 + 16));
        *(_QWORD *)(p_SystemArgument1 + 16) = 0LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)p_SystemArgument1, v67);
      v3 = v158;
    }
    v71 = (ULONG_PTR)TopIfBlockFromMiniport->RefCountTracker;
    if ( v71 )
    {
      if ( *(_BYTE *)(v71 + 1) )
      {
        if ( *(_BYTE *)(v71 + 1) == 1 )
        {
          v126 = v71 + 136;
          v127 = *(_DWORD *)(v71 + 192);
          if ( v127 >> 17 < 0x3FFE && (unsigned __int16)v127 >> 1 == (v127 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v71 + 136));
            *(_DWORD *)(v126 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v127 & 0xFFFE) == 0 && (v127 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v71, 2uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v71 + 136), 0);
          }
        }
      }
      else
      {
        v72 = *(_QWORD *)(v71 + 8);
        if ( v72 && (v73 = *(_BYTE *)(v71 + 3), v74 = 0, v73) )
        {
          while ( *(_BYTE *)(v72 + 2LL * v74) != 2 || !*(_BYTE *)(v72 + 2LL * v74 + 1) )
          {
            if ( ++v74 >= v73 )
              goto LABEL_118;
          }
          --*(_BYTE *)(v72 + 2LL * v74 + 1);
        }
        else
        {
LABEL_118:
          if ( !_bittestandreset((signed __int32 *)(v71 + 16), 2u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v71, 2uLL);
        }
      }
    }
    v45 = TopIfBlockFromMiniport->Ref-- == 1;
    if ( v45 )
    {
      ifIndex = TopIfBlockFromMiniport->ifIndex;
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(TopIfBlockFromMiniport);
      TopIfBlockFromMiniport->LowerLayerIfCount = 0;
      TopIfBlockFromMiniport->HigherLayerIfCount = 0;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v129 = TopIfBlockFromMiniport->Link.Flink;
      Blink = TopIfBlockFromMiniport->Link.Blink;
      if ( v129->Blink != &TopIfBlockFromMiniport->Link || Blink->Flink != &TopIfBlockFromMiniport->Link )
        __fastfail(3u);
      Blink->Flink = v129;
      v129->Blink = Blink;
      v131 = TopIfBlockFromMiniport->ProviderLink.Flink;
      v132 = TopIfBlockFromMiniport->ProviderLink.Blink;
      if ( v131->Blink != &TopIfBlockFromMiniport->ProviderLink || v132->Flink != &TopIfBlockFromMiniport->ProviderLink )
        __fastfail(3u);
      v132->Flink = v131;
      v131->Blink = v132;
      v133 = TopIfBlockFromMiniport->NetworkLink.Flink;
      v134 = TopIfBlockFromMiniport->NetworkLink.Blink;
      if ( v133->Blink != &TopIfBlockFromMiniport->NetworkLink || v134->Flink != &TopIfBlockFromMiniport->NetworkLink )
        __fastfail(3u);
      v134->Flink = v133;
      v133->Blink = v134;
      NETWORKBLOCK_DECREMENT_REF(TopIfBlockFromMiniport->Network);
      v135 = (ifIndex - 1) >> 3;
      if ( IfUsedIfIndicesLength >= (int)v135 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + (unsigned int)v135) = *((_BYTE *)IfUsedIfIndicesData + v135) & ~(1 << ((ifIndex - 1) & 7));
      v136 = TopIfBlockFromMiniport->RefCountTracker;
      --ndisInterfaceCount;
      NdisFreeRefCount(v136);
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
        TopIfBlockFromMiniport->ifRcvAddressCount = 0;
        TopIfBlockFromMiniport->ifMaxRcvAddressCount = 0;
      }
      AsyncEvent = TopIfBlockFromMiniport->AsyncEvent;
      if ( AsyncEvent )
        KeSetEvent(AsyncEvent, 0, 0);
      ExFreePoolWithTag(TopIfBlockFromMiniport, 0);
    }
  }
  if ( v1 )
  {
    v75 = (ULONG_PTR)v1->RefCountTracker;
    if ( v75 )
    {
      v76 = *(unsigned __int8 *)(v75 + 1);
      if ( *(_BYTE *)(v75 + 1) )
      {
        if ( v76 == 1 )
        {
          v140 = v75 + 72;
          v141 = *(_DWORD *)(v75 + 128);
          if ( v141 >> 17 < 0x3FFE && (unsigned __int16)v141 >> 1 == (v141 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v75 + 72));
            *(_DWORD *)(v140 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v141 & 0xFFFE) == 0 && (v141 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v75, 1uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v75 + 72), 0);
          }
        }
      }
      else
      {
        v77 = *(_QWORD *)(v75 + 8);
        if ( v77 && (v78 = *(_BYTE *)(v75 + 3), v79 = 0, v78) )
        {
          while ( *(_BYTE *)(v77 + 2LL * v79) != (_BYTE)v76 + 1 || !*(_BYTE *)(v77 + 2LL * v79 + 1) )
          {
            v79 += v76 + 1;
            if ( v79 >= v78 )
              goto LABEL_127;
          }
          --*(_BYTE *)(v77 + 2LL * v79 + 1);
        }
        else
        {
LABEL_127:
          if ( !_bittestandreset((signed __int32 *)(v75 + 16), 1u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v75, (unsigned int)(v76 + 1));
        }
      }
    }
    v45 = v1->Ref-- == 1;
    if ( v45 )
    {
      v142 = v1->ifIndex;
      KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
      ndisIfDeleteStackEntries(v1);
      *(_QWORD *)&v1->LowerLayerIfCount = 0LL;
      KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
      v143 = v1->Link.Flink;
      v144 = v1->Link.Blink;
      if ( v143->Blink != &v1->Link || v144->Flink != &v1->Link )
        __fastfail(3u);
      v144->Flink = v143;
      v143->Blink = v144;
      v145 = v1->ProviderLink.Flink;
      v146 = v1->ProviderLink.Blink;
      if ( v145->Blink != &v1->ProviderLink || v146->Flink != &v1->ProviderLink )
        __fastfail(3u);
      v146->Flink = v145;
      v145->Blink = v146;
      v147 = v1->NetworkLink.Flink;
      v148 = v1->NetworkLink.Blink;
      if ( v147->Blink != &v1->NetworkLink || v148->Flink != &v1->NetworkLink )
        __fastfail(3u);
      v148->Flink = v147;
      v147->Blink = v148;
      NETWORKBLOCK_DECREMENT_REF(v1->Network);
      v149 = (v142 - 1) >> 3;
      if ( IfUsedIfIndicesLength >= (int)v149 + 1 )
        *((_BYTE *)IfUsedIfIndicesData + (unsigned int)v149) = *((_BYTE *)IfUsedIfIndicesData + v149) & ~(1 << ((v142 - 1) & 7));
      v150 = v1->RefCountTracker;
      --ndisInterfaceCount;
      NdisFreeRefCount(v150);
      v151 = v1->ifL2NetworkInfo;
      v1->RefCountTracker = 0LL;
      if ( v151 )
      {
        ExFreePoolWithTag(v151, 0);
        v1->ifL2NetworkInfo = 0LL;
      }
      v152 = v1->ifRcvAddressTable;
      if ( v152 )
      {
        ExFreePoolWithTag(v152, 0);
        v1->ifRcvAddressTable = 0LL;
        *(_QWORD *)&v1->ifRcvAddressCount = 0LL;
      }
      v153 = v1->AsyncEvent;
      if ( v153 )
        KeSetEvent(v153, 0, 0);
      ExFreePoolWithTag(v1, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v63);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qD(75LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, v3, (unsigned int)InterfaceRwInformation);
  return (unsigned int)InterfaceRwInformation;
}
