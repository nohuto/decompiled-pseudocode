/*
 * XREFs of ndisIndicateStatusInternal @ 0x1C0017E84
 * Callers:
 *     ndisUpdateOperationalStatus @ 0x1C0017164 (ndisUpdateOperationalStatus.c)
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0017990 (ndisIndicateInitialStateToBinding.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     NdisMIndicateStatus @ 0x1C005E960 (NdisMIndicateStatus.c)
 *     ndisSendSystemPowerStateIndication @ 0x1C00665D0 (ndisSendSystemPowerStateIndication.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB30 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     ndisMRestoreOpenHandlers @ 0x1C000F7E0 (ndisMRestoreOpenHandlers.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C0013610 (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C00136AC (ndisMIndicateNicSwitchCapsChange.c)
 *     ndisDeletePatternEntry @ 0x1C0014950 (ndisDeletePatternEntry.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0016890 (ndisSetMediaDisconnectTimer.c)
 *     ndisInvokeStatus @ 0x1C0016FAC (ndisInvokeStatus.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0018BDC (ndisWriteWmiStatusIndication.c)
 *     ndisIfSetInterfaceState @ 0x1C0018DFC (ndisIfSetInterfaceState.c)
 *     ndisIndicateOffloadChangeInternal @ 0x1C00190C4 (ndisIndicateOffloadChangeInternal.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001A1A0 (ndisScheduleWorkItemInternal.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001AE5C (ndisCancelMediaDisconnectTimer.c)
 *     ndisMSwapOpenHandlers @ 0x1C001CD1C (ndisMSwapOpenHandlers.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024678 (ndisReferenceMiniportNoCheck.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqq @ 0x1C003D190 (McTemplateK0jqxqq.c)
 *     ndisUpdateMiniportPortStates @ 0x1C003E490 (ndisUpdateMiniportPortStates.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qLq @ 0x1C0043C94 (WPP_SF_qLq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ndisMAllocateRequest @ 0x1C00455CC (ndisMAllocateRequest.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C00483A8 (ndisQueueRequestOnTopAsync.c)
 *     ndisOpenIndicatePMCapabilities @ 0x1C004AD64 (ndisOpenIndicatePMCapabilities.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004B788 (ndisUpdateAndIndicatePMCapabilities.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     WPP_SF_qLLL @ 0x1C005F52C (WPP_SF_qLLL.c)
 *     ndisMIndicateQosParametersChange @ 0x1C0060398 (ndisMIndicateQosParametersChange.c)
 *     ndisTopTcpConnectionOffloadStatus @ 0x1C006835C (ndisTopTcpConnectionOffloadStatus.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisMFinishClose @ 0x1C0102F48 (ndisMFinishClose.c)
 */

char __fastcall ndisIndicateStatusInternal(__int64 a1, __int128 *a2, __int64 a3)
{
  unsigned int *v3; // r14
  __int64 v4; // rsi
  void *v5; // rbx
  __int128 *v6; // r13
  unsigned int v7; // r15d
  KIRQL v8; // di
  unsigned int v9; // r12d
  __int64 (__fastcall *v10)(); // rax
  __int64 (__fastcall *v11)(); // rax
  __int64 v12; // rdx
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // r14
  char v20; // si
  char v21; // r12
  KIRQL v22; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rbx
  KIRQL v24; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // r13
  int v26; // r12d
  KIRQL v27; // r14
  ULONG_PTR v28; // r8
  __int64 v29; // r9
  bool v30; // zf
  struct _KEVENT *v31; // rcx
  KIRQL v32; // al
  ULONG_PTR v33; // r8
  KIRQL v34; // r14
  __int64 v35; // r9
  unsigned __int8 v36; // r10
  unsigned __int8 v37; // dl
  int v38; // ebx
  char v39; // bl
  unsigned int v40; // r14d
  unsigned int *v41; // rdi
  bool v42; // cl
  struct _KEVENT *v43; // rcx
  KIRQL v44; // al
  ULONG_PTR v45; // r8
  KIRQL v46; // r14
  __int64 v47; // r9
  unsigned __int8 v48; // r10
  unsigned __int8 v49; // dl
  int v50; // ebx
  int v51; // r15d
  __int64 v52; // rdx
  char v53; // bl
  __int64 v54; // rdi
  __int64 v55; // r15
  __int64 v56; // rdx
  KIRQL v57; // bl
  unsigned int v58; // ebx
  ULONG_PTR v59; // r8
  __int64 v60; // rdx
  int v61; // ebx
  char v62; // di
  KIRQL v63; // r15
  struct _NDIS_REFCOUNT_BLOCK *v64; // rcx
  int v65; // ecx
  unsigned __int8 v66; // r10
  unsigned __int8 v67; // cl
  int v68; // ebx
  bool v69; // bl
  unsigned int v70; // ecx
  bool v71; // cf
  unsigned int v72; // ecx
  __int16 v73; // ax
  char v74; // bl
  unsigned int v75; // ecx
  unsigned int v76; // edx
  __int64 v77; // rcx
  unsigned int v78; // ecx
  unsigned __int8 v79; // r10
  unsigned __int8 v80; // dl
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 (__fastcall *v87)(); // rax
  __int64 v88; // rcx
  __int64 v89; // r9
  __int64 v90; // rax
  void *v91; // r14
  int v92; // ebx
  int v93; // eax
  ULONG_PTR v94; // rbx
  unsigned int v95; // edx
  int v96; // ecx
  char v97; // al
  ULONG_PTR v98; // rbx
  unsigned int v99; // edx
  int v100; // ecx
  char v101; // al
  struct _KEVENT *v102; // rcx
  ULONG_PTR v103; // rbx
  unsigned int v104; // edx
  int v105; // ecx
  char v106; // al
  __int64 v107; // rbx
  void **v108; // rcx
  int v109; // eax
  __int64 v110; // r9
  unsigned int *v111; // r8
  void (__fastcall *v112)(_QWORD); // rax
  ULONG_PTR v113; // rbx
  unsigned int v114; // edx
  int v115; // ecx
  char v116; // al
  int v117; // eax
  char v119; // [rsp+50h] [rbp-B0h]
  bool v120; // [rsp+51h] [rbp-AFh]
  bool v121; // [rsp+52h] [rbp-AEh]
  char v122; // [rsp+53h] [rbp-ADh]
  bool v123; // [rsp+54h] [rbp-ACh]
  char v124; // [rsp+55h] [rbp-ABh]
  bool v125; // [rsp+56h] [rbp-AAh]
  KIRQL v126; // [rsp+56h] [rbp-AAh]
  char v127; // [rsp+57h] [rbp-A9h]
  char v128; // [rsp+58h] [rbp-A8h]
  char v129; // [rsp+59h] [rbp-A7h]
  int v130; // [rsp+5Ch] [rbp-A4h]
  int v131; // [rsp+5Ch] [rbp-A4h]
  unsigned int v132; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall *v133)(); // [rsp+68h] [rbp-98h]
  int v134; // [rsp+70h] [rbp-90h]
  unsigned int *Src; // [rsp+78h] [rbp-88h]
  struct _NDIS_M_DRIVER_BLOCK *v136; // [rsp+88h] [rbp-78h]
  int v137[2]; // [rsp+90h] [rbp-70h]
  __int64 v139; // [rsp+A8h] [rbp-58h]
  void *v141; // [rsp+B8h] [rbp-48h]
  __int128 v142; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v143; // [rsp+D0h] [rbp-30h]
  __int128 v144; // [rsp+E0h] [rbp-20h]
  __int128 v145; // [rsp+F0h] [rbp-10h]
  __int128 v146; // [rsp+100h] [rbp+0h]
  __int128 v147; // [rsp+110h] [rbp+10h]
  __int128 v148; // [rsp+120h] [rbp+20h]
  _QWORD v149[14]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v150; // [rsp+1A0h] [rbp+A0h] BYREF
  int v151; // [rsp+1A8h] [rbp+A8h]
  _QWORD v152[5]; // [rsp+1B0h] [rbp+B0h] BYREF

  v3 = (unsigned int *)*((_QWORD *)a2 + 6);
  v4 = a1;
  v5 = (void *)*((_QWORD *)a2 + 4);
  v6 = a2;
  v7 = *((_DWORD *)a2 + 5);
  v8 = 2;
  v9 = *((_DWORD *)a2 + 14);
  v130 = 0;
  v124 = 0;
  v121 = 0;
  v129 = 0;
  v122 = 0;
  v127 = 0;
  v120 = 0;
  v119 = 0;
  v128 = 0;
  v123 = 0;
  v125 = 0;
  v134 = v7;
  Src = v3;
  v132 = v9;
  v141 = v5;
  if ( (unsigned __int8)byte_1C009961F >= 4u )
    WPP_SF_qLq(56LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, v7, v5);
  v10 = 0LL;
  if ( v5 != &ndisIntReqWmi )
    v10 = (__int64 (__fastcall *)())v5;
  v133 = v10;
  if ( v10 )
  {
    v133 = v10;
    if ( *(_BYTE *)v10 != 18 )
    {
      if ( (unsigned __int8)byte_1C009961F >= 2u )
        WPP_SF_q(57LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v4);
      v133 = 0LL;
    }
  }
  LOBYTE(v11) = v7 - 11;
  v12 = 1LL;
  v13 = v6[1];
  v142 = *v6;
  v143 = v13;
  v14 = v6[3];
  v144 = v6[2];
  v145 = v14;
  v15 = v6[5];
  v146 = v6[4];
  v147 = v15;
  v148 = v6[6];
  if ( v7 - 1073807371 > 1 )
  {
    if ( v7 == 1073807383 )
    {
      v68 = *((_DWORD *)v6 + 6);
      *(_BYTE *)(v4 + 88) |= 7u;
      v69 = (v68 & 8) != 0;
      v121 = v69;
      if ( !v3 )
        goto LABEL_14;
      v121 = v69;
      if ( v9 < 0x28 )
        goto LABEL_14;
      if ( (unsigned __int8)byte_1C009961F >= 4u )
        WPP_SF_qD(58LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v4, v3[1]);
      if ( v9 == -2 )
      {
        v132 = 40;
        *((_DWORD *)v6 + 14) = 40;
      }
      v70 = v3[1];
      if ( v70 == 1 )
      {
        v130 = 1073807371;
        v120 = *(_DWORD *)(v4 + 480) == 1;
        v123 = *(_DWORD *)(v4 + 480) != 1;
      }
      else if ( v70 == 2 )
      {
        v130 = 1073807372;
        v120 = *(_DWORD *)(v4 + 480) != 1;
        v123 = *(_DWORD *)(v4 + 480) == 1;
      }
      else
      {
        v120 = 1;
      }
      v71 = *(_BYTE *)(v4 + 32) < 6u;
      *(_DWORD *)(v4 + 480) = v70;
      *(_DWORD *)(v4 + 488) = v3[2];
      *(_QWORD *)(v4 + 800) = *((_QWORD *)v3 + 3);
      *(_QWORD *)(v4 + 792) = *((_QWORD *)v3 + 2);
      *(_DWORD *)(v4 + 808) = v3[8];
      if ( v71 )
      {
        v81 = *(_QWORD *)(v4 + 2280);
        if ( v81 == 0x40000000 || v81 < *((_QWORD *)v3 + 2) )
          *(_QWORD *)(v4 + 2280) = *((_QWORD *)v3 + 2);
        v82 = *(_QWORD *)(v4 + 2288);
        if ( v82 == 0x40000000 || v82 < *((_QWORD *)v3 + 3) )
          *(_QWORD *)(v4 + 2288) = *((_QWORD *)v3 + 3);
        v83 = *(_QWORD *)(v4 + 3032);
        if ( v83 == 0x40000000 || v83 < *((_QWORD *)v3 + 2) )
          *(_QWORD *)(v4 + 3032) = *((_QWORD *)v3 + 2);
        v84 = *(_QWORD *)(v4 + 3040);
        if ( v84 == 0x40000000 || v84 < *((_QWORD *)v3 + 3) )
          *(_QWORD *)(v4 + 3040) = *((_QWORD *)v3 + 3);
      }
      LOBYTE(a3) = 2;
      *(_DWORD *)(v4 + 468) = v3[9];
      v122 = ndisIfSetInterfaceState(v4, 1LL, a3);
      v121 = v69;
    }
    if ( v7 == 1073807394 )
    {
      LODWORD(v11) = ndisUpdateMiniportPortStates(v4, v6);
      if ( (_DWORD)v11 )
      {
        if ( (unsigned __int8)byte_1C009961F < 4u )
          return (char)v11;
        v87 = v133;
        v88 = 59LL;
        v89 = 1073807394LL;
        goto LABEL_324;
      }
      if ( *((_DWORD *)v6 + 4) )
        goto LABEL_13;
      LOBYTE(v86) = 2;
      LOBYTE(v85) = 1;
      v122 = ndisIfSetInterfaceState(v4, v85, v86);
    }
    if ( v7 == 1073807379 )
    {
      *(_BYTE *)(v4 + 88) |= 2u;
      v90 = ndisMAllocateRequest(&ndisIntReqGeneric, 65799LL, 0LL, 0LL, 4);
      v91 = (void *)v90;
      if ( v90 )
      {
        *(_DWORD *)(v90 + 88) |= 2u;
        *(_QWORD *)(v4 + 520) = 0LL;
        *(_DWORD *)(v4 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), 2u);
        v92 = ndisQueueRequestOnTopAsync(v4, v91);
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
        *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v4 + 1856) = 724986;
        if ( v92 != 259 )
          ExFreePoolWithTag(v91, 0);
      }
      v129 = 1;
    }
    if ( ((v7 - 1073872897) & 0xFFFFFFFD) == 0 )
    {
      LOBYTE(v11) = ndisTopTcpConnectionOffloadStatus(v4, v6);
      if ( !(_BYTE)v11 )
      {
        if ( (unsigned __int8)byte_1C009961F >= 4u )
          LOBYTE(v11) = WPP_SF_d(60LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v7);
        return (char)v11;
      }
    }
    if ( v7 == 1073807384 && (*((_DWORD *)v6 + 6) & 4) != 0 )
    {
      LOBYTE(a3) = v8;
      v123 = 1;
      LOBYTE(v12) = 1;
      v130 = 1073807371;
      *(_DWORD *)(v4 + 480) = 1;
      v122 = ndisIfSetInterfaceState(v4, v12, a3);
      memset(v152, 0, sizeof(v152));
      v93 = *(_DWORD *)(v4 + 348);
      LOBYTE(v12) = 1;
      DWORD2(v143) |= 0x1000u;
      LODWORD(v152[1]) = v93;
      v152[2] = *(_QWORD *)(v4 + 2768);
      v152[3] = *(_QWORD *)(v4 + 2776);
      v152[4] = *(_QWORD *)(v4 + 812);
      *(_QWORD *)&v145 = v152;
      v152[0] = 0x100280180LL;
      DWORD1(v143) = 1073807383;
      DWORD2(v145) = 40;
      goto LABEL_14;
    }
LABEL_13:
    LOBYTE(v12) = 1;
LABEL_14:
    if ( v122 )
    {
      v77 = *(_QWORD *)(v4 + 4064);
      v151 = 0;
      v127 = v12;
      v150 = 786816LL;
      HIDWORD(v150) = *(_DWORD *)(v77 + 1112);
      v151 = *(_DWORD *)(v77 + 1116);
      memset(v149, 0, sizeof(v149));
      LODWORD(v149[0]) = 7340440;
      v149[6] = &v150;
      v149[1] = v4;
      HIDWORD(v149[2]) = 1073807395;
      LODWORD(v149[7]) = 12;
    }
    *(_QWORD *)(v4 + 520) = 0LL;
    *(_DWORD *)(v4 + 1856) = 0;
    *(_QWORD *)v137 = v4;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v8);
    v17 = ndisReferenceTopMiniportByNameForNsi(v4, 0x200000, v16, *(_DWORD *)(v4 + 1836) == 16, 1u, 0x39u);
    v139 = v17;
    v18 = v17;
    if ( !v17 )
    {
      v26 = -1073741823;
      goto LABEL_56;
    }
    if ( v17 != v4 )
    {
      v26 = -1073741823;
      goto LABEL_28;
    }
    v19 = *(_QWORD *)(v4 + 16);
    v20 = 0;
    v21 = 0;
    v22 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = ndisMiniDriverList;
    v136 = ndisMiniDriverList;
    do
    {
      if ( !NextDriver )
        break;
      KeReleaseSpinLock(&ndisMiniDriverListLock, v22);
      v24 = KeAcquireSpinLockRaiseToDpc(&NextDriver->Ref.SpinLock);
      MiniportQueue = NextDriver->MiniportQueue;
      v126 = v24;
      while ( MiniportQueue )
      {
        if ( MiniportQueue == (_NDIS_MINIPORT_BLOCK *)v19 )
        {
          v20 = 1;
          v62 = 1;
          v63 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 4464));
          if ( !*(_BYTE *)(v19 + 4476) )
          {
            v64 = *(struct _NDIS_REFCOUNT_BLOCK **)(v19 + 4920);
            if ( v64 )
              NdisReferenceWithTag(v64, 0x38u);
            v65 = *(_DWORD *)(v19 + 4472);
            *(_DWORD *)(v19 + 4472) = v65 + 1;
            if ( v65 != -1 )
              goto LABEL_139;
            *(_DWORD *)(v19 + 4472) = -1;
          }
          v62 = 0;
LABEL_139:
          if ( (unsigned __int8)byte_1C009961B >= 4u )
            WPP_SF_qD(12LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v19, *(unsigned int *)(v19 + 4472));
          KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 4464), v63);
          if ( v62 )
          {
            v21 = 1;
          }
          else if ( (*(_DWORD *)(v19 + 120) & 0x80200020) == 0
                 && (*(_DWORD *)(v19 + 124) & 0x1084110) == 0
                 && *(_DWORD *)(v19 + 1520) == 1
                 && *(_DWORD *)(v19 + 3892) == 1
                 && ndisReferenceMiniport(v19) )
          {
            v21 = 1;
          }
        }
        MiniportQueue = MiniportQueue->NextMiniport;
        if ( v20 )
          break;
      }
      KeReleaseSpinLock(&NextDriver->Ref.SpinLock, v126);
      v22 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      NextDriver = v136->NextDriver;
      v136 = NextDriver;
    }
    while ( !v20 );
    KeReleaseSpinLock(&ndisMiniDriverListLock, v22);
    v4 = a1;
    if ( v21 )
      *(_QWORD *)v137 = *(_QWORD *)(a1 + 16);
    v18 = v139;
    v125 = v21 != 0;
    v6 = a2;
    v26 = 0;
LABEL_28:
    v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v18 + 96));
    v28 = *(_QWORD *)(v18 + 4928);
    *(_QWORD *)(v18 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v18 + 1856) = 71394;
    if ( v28 - 2 <= 1 )
    {
      v28 = 0LL;
    }
    else if ( v28 < 2 )
    {
      ndisBugCheckEx(0x1EuLL, 3uLL, v28, 0LL);
    }
    if ( v28 )
    {
      if ( *(_BYTE *)(v28 + 2) <= 1u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v28, 1uLL);
      if ( *(_BYTE *)(v28 + 1) )
      {
        if ( *(_BYTE *)(v28 + 1) == 1 )
        {
          v94 = v28 + 72;
          v95 = *(_DWORD *)(v28 + 128);
          v96 = (unsigned __int16)v95 >> 1;
          if ( v95 >> 17 < 0x3FFE && v96 == (v95 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v28 + 72));
            *(_DWORD *)(v94 + 56) &= 0x10001u;
          }
          else
          {
            if ( v96 == 0 && (v95 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v28, 1uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v28 + 72), 0);
          }
        }
      }
      else
      {
        v29 = *(_QWORD *)(v28 + 8);
        if ( v29 && (v79 = *(_BYTE *)(v28 + 3), v80 = 0, v79) )
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(v29 + 2LL * v80) == 1 )
            {
              v97 = *(_BYTE *)(v29 + 2LL * v80 + 1);
              if ( v97 )
                break;
            }
            if ( ++v80 >= v79 )
              goto LABEL_34;
          }
          *(_BYTE *)(v29 + 2LL * v80 + 1) = v97 - 1;
        }
        else
        {
LABEL_34:
          if ( !_bittestandreset((signed __int32 *)(v28 + 16), 1u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v28, 1uLL);
        }
      }
    }
    v30 = (*(_DWORD *)(v18 + 3132))-- == 1;
    if ( v30 )
    {
      v31 = *(struct _KEVENT **)(v18 + 3144);
      if ( v31 )
        KeSetEvent(v31, 0, 0);
    }
    *(_QWORD *)(v18 + 520) = 0LL;
    *(_DWORD *)(v18 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v18 + 96), v27);
    if ( (unsigned __int8)byte_1C009961B >= 4u )
      WPP_SF_q(25LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v18);
    v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v18 + 4464));
    v33 = *(_QWORD *)(v18 + 4920);
    v34 = v32;
    if ( v33 )
    {
      if ( v33 - 2 <= 1 )
      {
        v33 = 0LL;
      }
      else if ( v33 == 1 )
      {
        ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
      }
      if ( v33 )
      {
        if ( *(_BYTE *)(v33 + 2) <= 0x39u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v33, 0x39uLL);
        if ( *(_BYTE *)(v33 + 1) )
        {
          if ( *(_BYTE *)(v33 + 1) == 1 )
          {
            v98 = v33 + 3656;
            v99 = *(_DWORD *)(v33 + 3712);
            v100 = (unsigned __int16)v99 >> 1;
            if ( v99 >> 17 < 0x3FFE && v100 == (v99 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v33 + 3656));
              *(_DWORD *)(v98 + 56) &= 0x10001u;
            }
            else
            {
              if ( v100 == 0 && (v99 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v33, 0x39uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v33 + 3656), 0);
            }
          }
        }
        else
        {
          v35 = *(_QWORD *)(v33 + 8);
          if ( v35 && (v36 = *(_BYTE *)(v33 + 3), v37 = 0, v36) )
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(v35 + 2LL * v37) == 57 )
              {
                v101 = *(_BYTE *)(v35 + 2LL * v37 + 1);
                if ( v101 )
                  break;
              }
              if ( ++v37 >= v36 )
                goto LABEL_50;
            }
            *(_BYTE *)(v35 + 2LL * v37 + 1) = v101 - 1;
          }
          else
          {
LABEL_50:
            if ( !_bittestandreset((signed __int32 *)(v33 + 20), 0x19u) )
              ndisBugCheckEx(0x1EuLL, 0LL, v33, 0x39uLL);
          }
        }
      }
    }
    v38 = *(_DWORD *)(v18 + 4472) - 1;
    *(_DWORD *)(v18 + 4472) = v38;
    if ( (unsigned __int8)byte_1C009961B >= 4u )
      WPP_SF_qD(14LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v18, *(unsigned int *)(v18 + 4472));
    KeReleaseSpinLock((PKSPIN_LOCK)(v18 + 4464), v34);
    if ( !v38 )
    {
      v102 = *(struct _KEVENT **)(v18 + 1608);
      if ( v102 )
        KeSetEvent(v102, 0, 0);
    }
    if ( (unsigned __int8)byte_1C009961B >= 4u )
      WPP_SF_q(26LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v18);
LABEL_56:
    v39 = 0;
    v40 = v132;
    v41 = Src;
    if ( !v26 )
      v39 = v127;
    ndisWriteWmiStatusIndication(v137[0], *(_QWORD *)(*(_QWORD *)v137 + 3880LL), (int)v6, v134, Src, v132);
    v42 = 0;
    if ( !v26 )
      v42 = v123;
    if ( v42 )
      ndisWriteWmiStatusIndication(v137[0], *(_QWORD *)(*(_QWORD *)v137 + 3880LL), (int)v6, v130, 0LL, 0);
    if ( v39 )
      ndisWriteWmiStatusIndication(v137[0], *(_QWORD *)(*(_QWORD *)v137 + 3880LL), (int)v6, 1073807395, &v150, 12);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
    *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v4 + 1856) = 725117;
    if ( v125 )
    {
      if ( (unsigned __int8)byte_1C009961B >= 4u )
        WPP_SF_q(25LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, *(_QWORD *)v137);
      v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)v137 + 4464LL));
      v45 = *(_QWORD *)(*(_QWORD *)v137 + 4920LL);
      v46 = v44;
      if ( v45 )
      {
        if ( v45 - 2 <= 1 )
        {
          v45 = 0LL;
        }
        else if ( v45 == 1 )
        {
          ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
        }
        if ( v45 )
        {
          if ( *(_BYTE *)(v45 + 2) <= 0x38u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v45, 0x38uLL);
          if ( *(_BYTE *)(v45 + 1) )
          {
            if ( *(_BYTE *)(v45 + 1) == 1 )
            {
              v103 = v45 + 3592;
              v104 = *(_DWORD *)(v45 + 3648);
              v105 = (unsigned __int16)v104 >> 1;
              if ( v104 >> 17 < 0x3FFE && v105 == (v104 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v45 + 3592));
                *(_DWORD *)(v103 + 56) &= 0x10001u;
              }
              else
              {
                if ( v105 == 0 && (v104 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v45, 0x38uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v45 + 3592), 0);
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
                if ( *(_BYTE *)(v47 + 2LL * v49) == 56 )
                {
                  v106 = *(_BYTE *)(v47 + 2LL * v49 + 1);
                  if ( v106 )
                    break;
                }
                if ( ++v49 >= v48 )
                  goto LABEL_77;
              }
              *(_BYTE *)(v47 + 2LL * v49 + 1) = v106 - 1;
            }
            else
            {
LABEL_77:
              if ( !_bittestandreset((signed __int32 *)(v45 + 20), 0x18u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v45, 0x38uLL);
            }
          }
        }
      }
      v50 = *(_DWORD *)(*(_QWORD *)v137 + 4472LL) - 1;
      *(_DWORD *)(*(_QWORD *)v137 + 4472LL) = v50;
      if ( (unsigned __int8)byte_1C009961B >= 4u )
        WPP_SF_qD(
          14LL,
          &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids,
          *(_QWORD *)v137,
          *(unsigned int *)(*(_QWORD *)v137 + 4472LL));
      KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)v137 + 4464LL), v46);
      if ( !v50 )
      {
        v43 = *(struct _KEVENT **)(*(_QWORD *)v137 + 1608LL);
        if ( v43 )
          KeSetEvent(v43, 0, 0);
      }
      if ( (unsigned __int8)byte_1C009961B >= 4u )
        WPP_SF_q(26LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, *(_QWORD *)v137);
      v40 = v132;
      v41 = Src;
    }
    v51 = v130;
    v52 = 256LL;
    if ( v134 != 1073807383 )
      v51 = v134;
    v131 = v51;
    if ( v51 == 1073807384 )
    {
      v51 = 1073807384;
      v131 = 1073807384;
      if ( (*((_DWORD *)v6 + 6) & 4) != 0 )
      {
        v51 = 1073807371;
        v131 = 1073807371;
        goto LABEL_87;
      }
      v120 = 1;
      if ( v40 >= 4 && (dword_1C009AF04 & 0x100) != 0 )
        McTemplateK0jqxq(
          (_DWORD)v43,
          (unsigned int)&MiniportStatusIndicationNetworkChange,
          v4 + 4032,
          v4 + 4032,
          *(_DWORD *)(v4 + 4080),
          *(_QWORD *)(v4 + 4048),
          *v41);
    }
    else
    {
LABEL_87:
      if ( v51 == 1073807372 )
      {
        v52 = *(unsigned int *)(v4 + 120);
        v73 = *(_WORD *)(v4 + 1790) + 1;
        *(_WORD *)(v4 + 1790) = v73;
        if ( (v52 & 0x20000000) != 0 || v73 == 1 )
        {
          v74 = 1;
          v124 = 1;
          v75 = v52;
          if ( (unsigned __int8)byte_1C009961F >= 4u )
          {
            WPP_SF_qLLL(
              61LL,
              &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids,
              v4,
              (unsigned int)v52,
              *(_DWORD *)(v4 + 124),
              *(_DWORD *)(v4 + 3892));
            v75 = *(_DWORD *)(v4 + 120);
          }
          v52 = v75;
          if ( (dword_1C009AF04 & 0x80u) != 0 )
          {
            McTemplateK0jqxqqq(
              v75,
              (unsigned int)&MiniportStatusIndicationDisconnect,
              v4 + 4032,
              v4 + 4032,
              *(_DWORD *)(v4 + 4080),
              *(_QWORD *)(v4 + 4048),
              v75,
              *(_DWORD *)(v4 + 124),
              *(_DWORD *)(v4 + 3892));
            v52 = *(unsigned int *)(v4 + 120);
          }
        }
        else
        {
          v74 = 0;
        }
        LODWORD(v52) = v52 & 0xDFFFFFFF;
        *(_DWORD *)(v4 + 480) = 2;
        *(_DWORD *)(v4 + 120) = v52;
        if ( !v121 )
        {
          LODWORD(v52) = v52 | 0x4000000;
          *(_DWORD *)(v4 + 120) = v52;
          if ( v74 )
            ndisSetMediaDisconnectTimer(v4);
        }
      }
      else
      {
        if ( v51 != 1073807371 )
        {
          if ( v51 != 1073872902 )
          {
            if ( v51 == 1073807395 )
            {
              v120 = 1;
              if ( v40 >= 0xC )
              {
                if ( (unsigned __int8)byte_1C009961F >= 4u )
                {
                  WPP_SF_qdD(63LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v4, v41[1], v41[2]);
                  v52 = 256LL;
                }
                v72 = v41[1];
                if ( v72 == 1 )
                {
                  if ( (dword_1C009AF04 & 0x100) != 0 )
                    McTemplateK0jqxqq(
                      1,
                      (unsigned int)&MiniportStatusIndicationOperStatusUp,
                      v4 + 4032,
                      v4 + 4032,
                      *(_DWORD *)(v4 + 4080),
                      *(_QWORD *)(v4 + 4048),
                      1,
                      v41[2]);
                }
                else if ( (dword_1C009AF04 & 0x100) != 0 )
                {
                  McTemplateK0jqxqq(
                    v72,
                    (unsigned int)&MiniportStatusIndicationOperStatusNotUp,
                    v4 + 4032,
                    v4 + 4032,
                    *(_DWORD *)(v4 + 4080),
                    *(_QWORD *)(v4 + 4048),
                    v72,
                    v41[2]);
                }
              }
            }
            else if ( v51 == 1073872912 )
            {
              ndisMIndicateReceiveFilterCapsChange(v4, 1073872912, v41, v40, 1);
            }
            else
            {
              v52 = 1073872960LL;
              if ( v51 == 1073872960 )
              {
                ndisMIndicateNicSwitchCapsChange((_QWORD *)v4, 1073872960, v41, v40, 1);
              }
              else if ( v51 > 1073873055 && v51 <= 1073873057 )
              {
                ndisMIndicateQosParametersChange((struct _NDIS_MINIPORT_BLOCK *)v4);
              }
            }
            goto LABEL_94;
          }
          v119 = 1;
          v53 = 1;
          ndisIndicateOffloadChangeInternal(v4, v41, v40);
LABEL_95:
          v11 = (__int64 (__fastcall *)())&ndisIntReqWmi;
          if ( v141 != &ndisIntReqWmi )
          {
            v54 = *(_QWORD *)(v4 + 56);
            if ( v54 )
            {
              v11 = v133;
              while ( 1 )
              {
                if ( v11 && v11 != (__int64 (__fastcall *)())v54 )
                {
                  v55 = *(_QWORD *)(v54 + 392);
                  goto LABEL_101;
                }
                KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v54 + 232));
                if ( (*(_DWORD *)(v54 + 224) & 0x8000) != 0 )
                  goto LABEL_286;
                if ( v53 && *(_BYTE *)(*(_QWORD *)(v54 + 24) + 56LL) < 6u )
                {
                  if ( !v128 )
                  {
                    v107 = *(_QWORD *)(v54 + 800);
                    if ( v107 )
                    {
                      LOBYTE(v56) = 54;
                      ndisReferenceMiniportNoCheck(v4, v56);
                      *(_QWORD *)(v54 + 800) = 0LL;
                      v128 = 1;
                      ndisScheduleWorkItemInternal(v107);
                    }
                  }
                  goto LABEL_286;
                }
                if ( v51 == 1073938515 )
                  ndisOpenIndicatePMCapabilities(v54, v6);
                if ( v51 == 1073938513 )
                {
                  if ( *((_DWORD *)v6 + 14) < 4u )
                    goto LABEL_286;
                  v108 = (void **)(v54 + 504);
                }
                else
                {
                  if ( v51 != 1073938514 )
                    goto LABEL_109;
                  if ( *((_DWORD *)v6 + 14) < 4u )
                    goto LABEL_286;
                  v108 = (void **)(v54 + 512);
                }
                if ( ndisDeletePatternEntry(v108, **((_DWORD **)v6 + 6)) )
                {
                  --*((_DWORD *)v6 + 24);
LABEL_109:
                  v57 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v54 + 696));
                  NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v54 + 688), 7u);
                  ++*(_DWORD *)(v54 + 228);
                  KeReleaseSpinLock((PKSPIN_LOCK)(v54 + 696), v57);
                  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v54 + 232));
                  if ( *(_QWORD *)(v54 + 208) )
                  {
                    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v54 + 232));
                    *(_DWORD *)(v54 + 224) |= 0x100u;
                    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v54 + 232));
                    *(_QWORD *)(v4 + 520) = 0LL;
                    *(_DWORD *)(v4 + 1856) = 0;
                    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 96));
                    if ( *(_BYTE *)(*(_QWORD *)(v54 + 24) + 56LL) < 6u )
                    {
                      if ( !v120 && !*((_DWORD *)v6 + 4) )
                      {
                        v109 = *((_DWORD *)v6 + 5);
                        if ( v109 == 1073807383 || v109 == 1073807384 && (*((_DWORD *)v6 + 6) & 4) != 0 )
                        {
                          v110 = 0LL;
                          v111 = 0LL;
                        }
                        else
                        {
                          v110 = v132;
                          v111 = Src;
                        }
                        (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, __int64))(v54 + 208))(
                          *(_QWORD *)(v54 + 32),
                          (unsigned int)v51,
                          v111,
                          v110);
                        v112 = *(void (__fastcall **)(_QWORD))(v54 + 216);
                        if ( v112 )
                          v112(*(_QWORD *)(v54 + 32));
                      }
                    }
                    else if ( !v129 )
                    {
                      v58 = *((_DWORD *)v6 + 5);
                      if ( (unsigned __int8)byte_1C009961F >= 4u )
                        WPP_SF_qD(103LL, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, v54, v58);
                      (*(void (__fastcall **)(_QWORD, __int128 *))(v54 + 208))(*(_QWORD *)(v54 + 32), v6);
                      if ( (unsigned __int8)byte_1C009961F >= 4u )
                        WPP_SF_qD(104LL, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, v54, v58);
                      if ( *((_DWORD *)v6 + 5) == 1073807384 && (*((_DWORD *)v6 + 6) & 4) != 0 )
                        ndisInvokeStatus(v54, (__int64)&v142);
                      if ( v122 )
                        ndisInvokeStatus(v54, (__int64)v149);
                    }
                    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 96));
                    *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
                    *(_DWORD *)(v4 + 1856) = 725457;
                    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v54 + 232));
                    *(_DWORD *)(v54 + 224) &= ~0x100u;
                    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v54 + 232));
                  }
                  v55 = *(_QWORD *)(v54 + 392);
                  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v54 + 696));
                  v59 = *(_QWORD *)(v54 + 688);
                  if ( v59 - 2 <= 1 )
                  {
                    v59 = 0LL;
                  }
                  else if ( v59 < 2 )
                  {
                    ndisBugCheckEx(0x1EuLL, 3uLL, v59, 0LL);
                  }
                  if ( v59 )
                  {
                    if ( *(_BYTE *)(v59 + 2) <= 7u )
                      ndisBugCheckEx(0x1EuLL, 2uLL, v59, 7uLL);
                    if ( *(_BYTE *)(v59 + 1) )
                    {
                      if ( *(_BYTE *)(v59 + 1) == 1 )
                      {
                        v113 = v59 + 456;
                        v114 = *(_DWORD *)(v59 + 512);
                        v115 = (unsigned __int16)v114 >> 1;
                        if ( v114 >> 17 < 0x3FFE && v115 == (v114 >> 17) + 1 )
                        {
                          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v59 + 456));
                          *(_DWORD *)(v113 + 56) &= 0x10001u;
                        }
                        else
                        {
                          if ( v115 == 0 && (v114 & 1) == 0 )
                            ndisBugCheckEx(0x1EuLL, 0LL, v59, 7uLL);
                          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v59 + 456), 0);
                        }
                      }
                    }
                    else
                    {
                      v60 = *(_QWORD *)(v59 + 8);
                      if ( v60 && (v66 = *(_BYTE *)(v59 + 3), v67 = 0, v66) )
                      {
                        while ( 1 )
                        {
                          if ( *(_BYTE *)(v60 + 2LL * v67) == 7 )
                          {
                            v116 = *(_BYTE *)(v60 + 2LL * v67 + 1);
                            if ( v116 )
                              break;
                          }
                          if ( ++v67 >= v66 )
                            goto LABEL_126;
                        }
                        *(_BYTE *)(v60 + 2LL * v67 + 1) = v116 - 1;
                      }
                      else
                      {
LABEL_126:
                        if ( !_bittestandreset((signed __int32 *)(v59 + 16), 7u) )
                          ndisBugCheckEx(0x1EuLL, 0LL, v59, 7uLL);
                      }
                    }
                  }
                  v61 = --*(_DWORD *)(v54 + 228);
                  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v54 + 696));
                  if ( !v61 )
                    ndisMFinishClose(v54);
                  goto LABEL_129;
                }
LABEL_286:
                v55 = *(_QWORD *)(v54 + 392);
                KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v54 + 232));
LABEL_129:
                v11 = v133;
LABEL_101:
                v54 = v55;
                v30 = v55 == 0;
                v51 = v131;
                if ( v30 )
                  break;
                v53 = v119;
              }
            }
            if ( v51 == 1073938516 )
              LOBYTE(v11) = ndisUpdateAndIndicatePMCapabilities(v4);
            if ( v124 )
            {
              LODWORD(v11) = *((_DWORD *)v6 + 6);
              if ( ((unsigned __int8)v11 & 2) == 0 )
              {
                v117 = *(_DWORD *)(v4 + 124);
                LOBYTE(v52) = 2;
                if ( v51 == 1073807371 )
                {
                  *(_DWORD *)(v4 + 124) = v117 & 0xEFFFFFFF;
                  ndisMRestoreOpenHandlers(v4, v52);
                  *(_QWORD *)(v4 + 432) = *(_QWORD *)(v4 + 1896);
                  LOBYTE(v11) = *(_BYTE *)(v4 + 2684);
                  *(_BYTE *)(v4 + 2672) = (_BYTE)v11;
                }
                else
                {
                  *(_DWORD *)(v4 + 124) = v117 | 0x10000000;
                  ndisMSwapOpenHandlers(v4, v52);
                  v11 = ndisMDummyIndicatePacket;
                  *(_BYTE *)(v4 + 2672) = 0;
                  *(_QWORD *)(v4 + 432) = ndisMDummyIndicatePacket;
                }
              }
            }
          }
          if ( (unsigned __int8)byte_1C009961F < 4u )
            return (char)v11;
          v87 = (__int64 (__fastcall *)())*((_QWORD *)v6 + 4);
          v88 = 64LL;
          v89 = (unsigned int)v51;
LABEL_324:
          LOBYTE(v11) = WPP_SF_qLq(v88, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v4, v89, v87);
          return (char)v11;
        }
        v76 = *(_DWORD *)(v4 + 120);
        ++*(_WORD *)(v4 + 1788);
        if ( (v76 & 0x20000000) == 0 )
        {
          v124 = 1;
          v78 = v76;
          if ( (unsigned __int8)byte_1C009961F >= 4u )
          {
            WPP_SF_qLLL(
              62LL,
              &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids,
              v4,
              v76,
              *(_DWORD *)(v4 + 124),
              *(_DWORD *)(v4 + 3892));
            v78 = *(_DWORD *)(v4 + 120);
          }
          v76 = v78;
          if ( (dword_1C009AF04 & 0x80u) != 0 )
          {
            McTemplateK0jqxqqq(
              v78,
              (unsigned int)&MiniportStatusIndicationConnect,
              v4 + 4032,
              v4 + 4032,
              *(_DWORD *)(v4 + 4080),
              *(_QWORD *)(v4 + 4048),
              v78,
              *(_DWORD *)(v4 + 124),
              *(_DWORD *)(v4 + 3892));
            v76 = *(_DWORD *)(v4 + 120);
          }
        }
        v52 = v76 | 0x20000000;
        *(_DWORD *)(v4 + 480) = 1;
        *(_DWORD *)(v4 + 120) = v52;
        if ( !v121 )
        {
          *(_DWORD *)(v4 + 120) = v52 | 0x4000000;
          ndisCancelMediaDisconnectTimer(v4);
        }
      }
    }
LABEL_94:
    v53 = 0;
    goto LABEL_95;
  }
  return (char)v11;
}
