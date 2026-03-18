/*
 * XREFs of ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008DA0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008120 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000D814 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C000E040 (VidSchiSubmitSignalCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C000F018 (VidSchiProcessCompletedQueuePacket.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F6B0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C001256C (VidSchiSubmitSoftwareCommand.c)
 * Callees:
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0001F00 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0005F30 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0006A70 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C00071A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A200 (VidSchiProfilePerformanceTick.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B3C0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000B450 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUpdateContextStatus @ 0x1C000B5B0 (VidSchiUpdateContextStatus.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0011808 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0011840 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0011898 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0015064 (VidSchiTryEnterIndependentFlip.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIH@Z @ 0x1C001525C (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00200AC (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0020580 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00243A4 (-VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     McTemplateK0pp @ 0x1C0026038 (McTemplateK0pp.c)
 *     McTemplateK0px @ 0x1C002749C (McTemplateK0px.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacketInternal(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  struct _VIDSCH_QUEUE_PACKET **v14; // rdx
  struct _VIDSCH_QUEUE_PACKET **v15; // rcx
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rcx
  _QWORD *v19; // r12
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rcx
  _QWORD **v23; // rdi
  _QWORD *v24; // r9
  _QWORD *v25; // r14
  int v26; // ecx
  int v27; // r14d
  __int64 v28; // rdi
  struct _KEVENT *v29; // rdi
  KIRQL v30; // r14
  struct _KEVENT *v31; // r12
  __int64 v32; // rdi
  VIDMM_GLOBAL *v33; // r12
  __int64 v34; // rcx
  _QWORD **v35; // rdi
  _QWORD *v36; // r9
  _QWORD *v37; // r10
  _QWORD *v38; // r14
  struct _KEVENT *v39; // rdi
  KIRQL v40; // r12
  struct _KEVENT *v41; // r15
  struct _KEVENT *v42; // rdi
  KIRQL v43; // r15
  struct _KEVENT *v44; // r14
  __int64 v45; // rdx
  struct _KEVENT *v46; // rcx
  __int64 v47; // r8
  int v48; // eax
  __int64 v49; // r12
  __int64 v50; // rax
  KSPIN_LOCK *v51; // r12
  char *v52; // rdi
  __int64 v53; // rcx
  char **v54; // rax
  char **v55; // rax
  _QWORD **v56; // rbx
  _QWORD *v57; // rdi
  _QWORD *v58; // rax
  volatile signed __int32 *v60; // rcx
  volatile signed __int32 *v61; // rcx
  __int64 v62; // rcx
  unsigned int i; // ecx
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rcx
  struct _KEVENT **v68; // r14
  KIRQL v69; // r12
  struct _KEVENT *v70; // rdi
  __int64 v71; // r10
  bool v72; // zf
  int v73; // ecx
  unsigned int v74; // edi
  int v75; // r14d
  __int64 v76; // rcx
  _QWORD *v77; // rax
  _QWORD *v78; // rcx
  __int64 v79; // r9
  unsigned int v80; // r10d
  unsigned int v81; // r11d
  __int64 v82; // r8
  __int64 v83; // rdx
  _QWORD *v84; // rcx
  __int64 v85; // r11
  unsigned int v86; // r10d
  __int64 v87; // r8
  __int64 v88; // rdx
  int v89; // ecx
  __int64 v90; // rcx
  struct _KEVENT *v91; // rcx
  __int64 v92; // rcx
  void (__fastcall *v93)(_QWORD); // rax
  _QWORD *v94; // r14
  _QWORD *v95; // r9
  __int64 v96; // rcx
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // r8
  _QWORD *v100; // r8
  _QWORD *v101; // rcx
  _QWORD *v102; // rax
  _QWORD *v103; // rdx
  _QWORD *v104; // rdx
  _QWORD *v105; // rcx
  struct VIDMM_ALLOC *v106; // r9
  __int64 v107; // rcx
  _QWORD *v108; // r8
  __int64 v109; // rdx
  _QWORD *v110; // rax
  _QWORD *v111; // r9
  int Flink; // ecx
  _QWORD *v113; // r14
  _QWORD *v114; // r9
  __int64 v115; // rcx
  _QWORD *v116; // rax
  VIDMM_GLOBAL **v117; // rax
  VIDMM_GLOBAL *v118; // r8
  VIDMM_GLOBAL *v119; // r8
  VIDMM_GLOBAL **v120; // rcx
  VIDMM_GLOBAL **v121; // rax
  VIDMM_GLOBAL *v122; // rdx
  VIDMM_GLOBAL *v123; // rdx
  VIDMM_GLOBAL **v124; // rcx
  struct VIDMM_ALLOC *v125; // r9
  __int64 v126; // r10
  __int64 v127; // rcx
  VIDMM_GLOBAL *v128; // r8
  __int64 v129; // rdx
  _QWORD *v130; // rax
  _QWORD *v131; // r9
  int v132; // ecx
  int v133; // ecx
  _QWORD *v134; // rax
  _QWORD *v135; // rax
  __int64 v136; // [rsp+40h] [rbp-C0h]
  _QWORD *P; // [rsp+48h] [rbp-B8h]
  _QWORD *v138; // [rsp+50h] [rbp-B0h]
  VIDMM_GLOBAL *v139; // [rsp+50h] [rbp-B0h]
  _QWORD *v140; // [rsp+58h] [rbp-A8h]
  _QWORD *v141; // [rsp+58h] [rbp-A8h]
  VIDMM_GLOBAL *v142; // [rsp+58h] [rbp-A8h]
  VIDMM_GLOBAL *v143; // [rsp+60h] [rbp-A0h]
  VIDMM_GLOBAL *v144; // [rsp+60h] [rbp-A0h]
  VIDMM_GLOBAL *v145; // [rsp+60h] [rbp-A0h]
  _QWORD *v146; // [rsp+68h] [rbp-98h]
  VIDMM_GLOBAL **v147; // [rsp+68h] [rbp-98h]
  VIDMM_GLOBAL **v148; // [rsp+68h] [rbp-98h]
  _QWORD *v149; // [rsp+70h] [rbp-90h]
  _QWORD *v150; // [rsp+70h] [rbp-90h]
  __int64 v151; // [rsp+78h] [rbp-88h]
  __int64 v152; // [rsp+90h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE v153; // [rsp+A0h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v154; // [rsp+B8h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v155; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v156; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v157; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v158; // [rsp+118h] [rbp+18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v159; // [rsp+130h] [rbp+30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v160; // [rsp+148h] [rbp+48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v161; // [rsp+160h] [rbp+60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v162; // [rsp+178h] [rbp+78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v163; // [rsp+190h] [rbp+90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v164; // [rsp+1A8h] [rbp+A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1C0h] [rbp+C0h] BYREF
  KIRQL v166; // [rsp+230h] [rbp+130h]
  int v167; // [rsp+238h] [rbp+138h]
  int v168; // [rsp+240h] [rbp+140h]
  int v169; // [rsp+248h] [rbp+148h]
  _QWORD *v170; // [rsp+248h] [rbp+148h]

  v3 = *((_QWORD *)a1 + 11);
  v4 = 0;
  v168 = 0;
  v167 = 0;
  v6 = *(_QWORD *)(v3 + 96);
  v7 = *(_QWORD *)(v3 + 104);
  v136 = v7;
  v152 = v6;
  v8 = *(_QWORD *)(v6 + 24);
  v169 = 0;
  v151 = 0LL;
  if ( bTracingEnabled && (*((_DWORD *)a1 + 16) & 0x20) != 0 )
  {
    v92 = *(_QWORD *)(v3 + 56);
    if ( !v92 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
      v92 = v3;
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pp(v92, &AbortQueuePacket, a3, a1, v92);
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v60 = (volatile signed __int32 *)*((_QWORD *)a1 + 39);
    if ( v60 )
    {
      if ( _InterlockedExchangeAdd(v60 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v60, 0);
      *((_QWORD *)a1 + 39) = 0LL;
    }
    v61 = (volatile signed __int32 *)*((_QWORD *)a1 + 38);
    if ( v61 )
    {
      if ( _InterlockedExchangeAdd(v61 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v61, 0);
      *((_QWORD *)a1 + 38) = 0LL;
    }
  }
  v166 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1888), &LockHandle);
  v13 = *((_DWORD *)a1 + 20);
  if ( (v13 & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 20) = v13 & 0xFFFFFFEF;
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL);
    v9 = *(unsigned int *)(v10 + 5904);
    if ( (_DWORD)v9 != -1 )
    {
      v93 = *(void (__fastcall **)(_QWORD))(v8 + 2896);
      if ( v93 )
        v93(*(_QWORD *)(v8 + 2928));
    }
  }
  if ( *((_DWORD *)a1 + 13) == 16 || !*((_DWORD *)a1 + 13) )
  {
    v135 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11);
    v135[3] = 281LL;
    v135[4] = 512LL;
    v135[5] = v8;
    v135[6] = v3;
    v135[7] = a1;
    WdLogEvent5_WdCriticalError(v135);
    JUMPOUT(0x1C001BA26LL);
  }
  if ( (*((_DWORD *)a1 + 20) & 0x20) != 0 )
    VidSchiAdvanceContextSubmissionId(a1);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 16;
  v14 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 4);
  if ( v14[1] != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32)
    || (v15 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 5),
        *v15 != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32)) )
  {
    __fastfail(3u);
  }
  *v15 = (struct _VIDSCH_QUEUE_PACKET *)v14;
  v14[1] = (struct _VIDSCH_QUEUE_PACKET *)v15;
  v16 = *(_QWORD *)(v3 + 648);
  if ( v16 == v3 + 648 )
  {
    if ( (*(_DWORD *)(v3 + 176) & 0x200) != 0 )
    {
      v65 = 10LL;
      v66 = 11854LL;
      goto LABEL_108;
    }
    if ( (*(_DWORD *)(v3 + 176) & 0x10) == 0
      && (*(_DWORD *)(v3 + 176) & 0x40) == 0
      && (*(_DWORD *)(v3 + 176) & 0x100) == 0 )
    {
      v65 = 0LL;
      v66 = 11887LL;
LABEL_108:
      VidSchiUpdateContextStatus(v3, v65, v66);
    }
  }
  else
  {
    v17 = *(_DWORD *)(v16 + 48);
    v16 -= 32LL;
    if ( (v17 & 3) == 1 )
    {
      v151 = v16;
      *(_DWORD *)(v16 + 80) = v17 | 2;
    }
    if ( (*(_DWORD *)(v3 + 176) & 0x200) != 0
      && (((unsigned __int8)(*(_DWORD *)(v3 + 176) >> 9) | *(_BYTE *)(v3 + 176)) & 2) == 0 )
    {
      v65 = 10LL;
      v66 = 11835LL;
      goto LABEL_108;
    }
  }
  if ( *((_DWORD *)a1 + 12) != 5 || (*((_DWORD *)a1 + 20) & 4) != 0 )
    goto LABEL_29;
  v18 = *((_QWORD *)a1 + 101);
  v19 = *(_QWORD **)(*((_QWORD *)a1 + 11) + 104LL);
  if ( v18 )
  {
    *(_QWORD *)(v18 + 816) = *((_QWORD *)a1 + 102);
  }
  else if ( !*((_QWORD *)a1 + 102) )
  {
    v20 = *((_DWORD *)a1 + 72);
    if ( (v20 & 2) != 0 )
    {
      v91 = (struct _KEVENT *)*((_QWORD *)a1 + 69);
      if ( (v20 & 8) != 0 )
      {
        ((void (__fastcall *)(struct _KEVENT *, __int64))DxgCoreInterface[51])(v91, v16);
      }
      else
      {
        KeSetEvent(v91, 0, 0);
        ObfDereferenceObject(*((PVOID *)a1 + 69));
      }
      *((_QWORD *)a1 + 69) = 0LL;
    }
    else if ( *((_DWORD *)a1 + 73) )
    {
      do
      {
        LOBYTE(v12) = 1;
        VidSchiCompleteSignalSyncObject(*((_QWORD *)a1 + v4 + 37), v16, (char *)a1 + 8 * v4 + 552, v12);
        ++v4;
      }
      while ( v4 < *((_DWORD *)a1 + 73) );
      v4 = 0;
    }
    goto LABEL_23;
  }
  v90 = *((_QWORD *)a1 + 102);
  if ( v90 )
    *(_QWORD *)(v90 + 808) = *((_QWORD *)a1 + 101);
  *((_QWORD *)a1 + 101) = 0LL;
  *((_QWORD *)a1 + 102) = 0LL;
LABEL_23:
  *((_DWORD *)a1 + 20) |= 4u;
  if ( (*((_DWORD *)a1 + 72) & 2) == 0 && *((_DWORD *)a1 + 73) )
  {
    do
      VidSchiReleaseSyncObjectReference(*((PVOID *)a1 + v4++ + 37));
    while ( v4 < *((_DWORD *)a1 + 73) );
  }
  v21 = v19[4];
  v143 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v21 + 8) + 536LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v21 + 1920), &v153);
  v23 = (_QWORD **)(v21 + 1952);
  v24 = *v23;
  if ( *v23 != v23 )
  {
    do
    {
      v94 = (_QWORD *)*v24;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v22, v24 - 25) )
      {
        v96 = *v95;
        if ( *(_QWORD **)(*v95 + 8LL) != v95 || (v97 = (_QWORD *)v95[1], (_QWORD *)*v97 != v95) )
          __fastfail(3u);
        *v97 = v96;
        *(_QWORD *)(v96 + 8) = v97;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v95 - 24), (struct VIDMM_ALLOC *)(v95 - 25));
      }
      v24 = v94;
    }
    while ( v94 != v23 );
  }
  KeReleaseInStackQueuedSpinLock(&v153);
  v25 = (_QWORD *)v19[153];
  if ( v25 == v19 + 153 )
    goto LABEL_28;
  while ( 1 )
  {
    v84 = v25;
    v25 = (_QWORD *)*v25;
    P = v84;
    v85 = v84[2];
    if ( v85 > v19[152] )
      break;
LABEL_200:
    v98 = (_QWORD *)v84[11];
    v99 = v84 + 11;
    v138 = v84 + 11;
    if ( v98 != v84 + 11 )
    {
      do
      {
        v140 = (_QWORD *)*v98;
        v100 = (_QWORD *)*v98;
        v149 = v98 - 27;
        if ( *(_QWORD **)(*v98 + 8LL) != v98 || (v101 = (_QWORD *)v98[1], (_QWORD *)*v101 != v98) )
          __fastfail(3u);
        *v101 = v100;
        v100[1] = v101;
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v98 - 27);
        v99 = v138;
        v149[27] = 0LL;
        v149[28] = 0LL;
        v98 = v140;
      }
      while ( v140 != v138 );
      v84 = P;
    }
    v102 = (_QWORD *)v84[9];
    v103 = v84 + 9;
    v150 = v84 + 9;
    if ( v102 != v84 + 9 )
    {
      do
      {
        v146 = (_QWORD *)*v102;
        v104 = (_QWORD *)*v102;
        v141 = v102 - 25;
        if ( *(_QWORD **)(*v102 + 8LL) != v102 || (v105 = (_QWORD *)v102[1], (_QWORD *)*v105 != v102) )
          __fastfail(3u);
        *v105 = v104;
        v104[1] = v105;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v105, v102 - 25) )
        {
          VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v143, v106);
        }
        else
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v19[4] + 1920LL), &v154);
          v107 = v19[4] + 1952LL;
          v108 = *(_QWORD **)(v19[4] + 1960LL);
          if ( *v108 != v107 )
            __fastfail(3u);
          v141[25] = v107;
          v141[26] = v108;
          *v108 = v141 + 25;
          *(_QWORD *)(v107 + 8) = v141 + 25;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v154);
        }
        v103 = v150;
        v102 = v146;
      }
      while ( v146 != v150 );
      v84 = P;
      v99 = v138;
    }
    if ( (_QWORD *)*v103 == v103 && (_QWORD *)*v99 == v99 )
    {
      v109 = *v84;
      if ( *(_QWORD **)(*v84 + 8LL) != v84 || (v110 = (_QWORD *)v84[1], (_QWORD *)*v110 != v84) )
        __fastfail(3u);
      v72 = bTracingEnabled == 0;
      *v110 = v109;
      *(_QWORD *)(v109 + 8) = v110;
      if ( !v72 )
      {
        v111 = (_QWORD *)v19[1];
        if ( !v111 )
          v111 = v19;
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0px(v84, v109, v99, v111, v84[2]);
          v84 = P;
        }
      }
      _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v84, v109);
    }
    if ( v25 == v19 + 153 )
      goto LABEL_28;
  }
  v86 = *((_DWORD *)v84 + 16);
  LODWORD(v12) = 0;
  if ( !v86 )
  {
LABEL_199:
    v19[152] = v85;
    goto LABEL_200;
  }
  v87 = v84[3];
  while ( 1 )
  {
    v88 = *(_QWORD *)(v87 + 16LL * (unsigned int)v12);
    if ( v88 )
    {
      if ( *(_QWORD *)(v88 + 152) < *(_QWORD *)(v87 + 16LL * (unsigned int)v12 + 8) )
        break;
    }
    LODWORD(v12) = v12 + 1;
    if ( (unsigned int)v12 >= v86 )
      goto LABEL_199;
  }
LABEL_28:
  v7 = v136;
LABEL_29:
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 1032));
  if ( !*((_DWORD *)a1 + 12) )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 2776));
      v62 = *(_QWORD *)(v8 + 408);
      _bittestandset64(&v62, *(unsigned __int16 *)(v6 + 4));
      *(_QWORD *)(v8 + 408) = v62;
    }
    for ( i = 0; i < *((_DWORD *)a1 + 120); ++i )
    {
      if ( i >= 0x10 )
        break;
      v64 = *((_QWORD *)a1 + i + 61);
      *((_QWORD *)a1 + i + 61) = 0LL;
      if ( v64 )
        _InterlockedDecrement((volatile signed __int32 *)(v64 + 104));
    }
  }
  v26 = *((_DWORD *)a1 + 18);
  if ( (v26 & 0x40020) != 0x40000 && (v26 & 0x4000) == 0 )
  {
LABEL_50:
    if ( !*((_DWORD *)a1 + 12) )
      VidSchiUpdateLastCompletedPresentTimestamp(v3, 0, 0);
    goto LABEL_52;
  }
  if ( (v26 & 0x400) == 0 || (v27 = 0, (v26 & 0x800) != 0) )
    v27 = 1;
  v28 = *((unsigned int *)a1 + 44);
  if ( (v26 & 0x40000) != 0 )
  {
    if ( (v26 & 0x4000) == 0 )
      goto LABEL_39;
  }
  else if ( (v26 & 4) != 0 )
  {
    if ( *((_DWORD *)a1 + 102) != 1 )
    {
      if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
        goto LABEL_39;
      if ( v27 )
      {
        v168 = 1;
        v167 = 1;
        v169 = 1;
        goto LABEL_111;
      }
      goto LABEL_235;
    }
    v168 = v27;
  }
  v167 = v27;
  if ( !v27 )
    goto LABEL_39;
LABEL_111:
  VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 11), 1, 0);
  if ( v169 )
  {
LABEL_235:
    if ( (*((_DWORD *)a1 + 182) & 0x3FF) != 0 )
      VidSchiUnreferencePrimaryAllocations(
        (struct _VIDSCH_GLOBAL *)v8,
        (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 728),
        *((_DWORD *)a1 + 106),
        1 << *(_BYTE *)(*(_QWORD *)(v8 + 8LL * *(unsigned int *)(v3 + 88) + 424) + 6LL),
        0);
  }
  if ( (_DWORD)v28 != -1 && v167 && (*((_DWORD *)a1 + 18) & 0x40000) == 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 4 * v28 + 1060));
    v67 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 24LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(v7 + 32) + 4LL))
                    + 8 * v28
                    + 520);
    if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 8 * v28 + 6056) + 8LL));
      ++**(_DWORD **)(v8 + 8 * v28 + 6056);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v67 + 8));
    ++*(_DWORD *)v67;
    if ( (*((_DWORD *)a1 + 18) & 0x20000) != 0 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1896), &v155);
      *(_DWORD *)(v7 + 4 * v28 + 468) = *((_DWORD *)a1 + 100);
      *(_QWORD *)(v7 + 8 * v28 + 536) = *((unsigned int *)a1 + 36);
      *(_QWORD *)(v7 + 8 * v28 + 664) = *((_QWORD *)a1 + 19);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v155);
    }
  }
LABEL_39:
  if ( (*((_DWORD *)a1 + 18) & 0x40080) != 0 && *((_QWORD *)a1 + 20) && *((_QWORD *)a1 + 21) && v27 )
    VidSchiSubmitPresentHistoryToken(a1, 0LL, 0LL, 0LL);
  if ( v168 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 960));
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 1188));
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 4 * v28 + 1124));
  }
  v29 = (struct _KEVENT *)(v8 + 1848);
  v30 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1904), &v156);
  v31 = *(struct _KEVENT **)(v8 + 1848);
  if ( *(struct _KEVENT **)&v29->Header.Lock != v29 )
  {
    while ( LODWORD(v31->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v31[1].Header.Lock + 4LL * LODWORD(v31[1].Header.WaitListHead.Blink) + 1060) < *(_DWORD *)(*(_QWORD *)&v31[1].Header.Lock + 204LL) )
        goto LABEL_242;
LABEL_243:
      v31 = *(struct _KEVENT **)&v31->Header.Lock;
      if ( v31 == v29 )
        goto LABEL_47;
    }
    if ( ((__int64)v31[1].Header.WaitListHead.Flink & 4) != 0 )
    {
      Flink = (int)v31[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v31[5].Header.WaitListHead.Blink) = Flink;
      if ( Flink )
        goto LABEL_243;
    }
LABEL_242:
    ++v31[5].Header.LockNV;
    KeSetEvent(v31 + 4, 0, 0);
    goto LABEL_243;
  }
LABEL_47:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v156);
  KeLowerIrql(v30);
  if ( !v167 )
    goto LABEL_50;
LABEL_52:
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 44) != -1 )
  {
    v71 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 32LL);
    if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
      LODWORD(v12) = ((unsigned __int16)*((_DWORD *)a1 + 182) | (unsigned __int16)(*((_DWORD *)a1 + 182) >> 10)) & 0x3FF;
    else
      LODWORD(v12) = (1 << *(_DWORD *)(v71 + 128)) - 1;
    v72 = !_BitScanForward((unsigned int *)&v73, v12);
    if ( v72 )
      LOBYTE(v73) = -1;
    while ( (_DWORD)v12 )
    {
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(*(_QWORD *)(v71 + 8LL * *((unsigned int *)a1 + 44) + 3008) + 280LL * (char)v73 + 184),
        0xFFFFFFFF);
      LODWORD(v12) = ~(1 << v73) & v12;
      v72 = !_BitScanForward((unsigned int *)&v73, v12);
      if ( v72 )
        LOBYTE(v73) = -1;
    }
    if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
      v74 = ((unsigned __int16)*((_DWORD *)a1 + 182) | (unsigned __int16)(*((_DWORD *)a1 + 182) >> 10)) & 0x3FF;
    else
      v74 = (1 << *(_DWORD *)(v8 + 128)) - 1;
    v72 = !_BitScanForward((unsigned int *)&v75, v74);
    if ( v72 )
      LOBYTE(v75) = -1;
    while ( v74 )
    {
      v76 = *((unsigned int *)a1 + 44);
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 8 * v76 + 3008) + 280LL * (char)v75 + 180) == 1 )
        VidSchiTryEnterIndependentFlip(v8, (unsigned int)v76, (unsigned int)(char)v75);
      v74 &= ~(1 << v75);
      v72 = !_BitScanForward((unsigned int *)&v75, v74);
      if ( v72 )
        LOBYTE(v75) = -1;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(v8 + 948));
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 2788));
  _InterlockedDecrement((volatile signed __int32 *)(v136 + 1196));
  if ( (unsigned int)(*((_DWORD *)a1 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v136 + 1200));
  if ( !*((_DWORD *)a1 + 12) && (*((_DWORD *)a1 + 18) & 4) != 0 )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 32LL)
                                            + 8LL * *((unsigned int *)a1 + 44)
                                            + 3008)
                                + 2948LL),
      0xFFFFFFFF);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 768));
  VidSchiProfilePerformanceTick(9, v8, v6, v12, 0LL, (__int64)a1, 0LL, 0LL);
  v32 = *(_QWORD *)(v136 + 32);
  v33 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v32 + 8) + 536LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v32 + 1920), &v157);
  v35 = (_QWORD **)(v32 + 1952);
  v36 = *v35;
  if ( *v35 != v35 )
  {
    do
    {
      v113 = (_QWORD *)*v36;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v34, v36 - 25) )
      {
        v115 = *v114;
        if ( *(_QWORD **)(*v114 + 8LL) != v114 || (v116 = (_QWORD *)v114[1], (_QWORD *)*v116 != v114) )
          __fastfail(3u);
        *v116 = v115;
        *(_QWORD *)(v115 + 8) = v116;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v114 - 24), (struct VIDMM_ALLOC *)(v114 - 25));
      }
      v36 = v113;
    }
    while ( v113 != v35 );
  }
  KeReleaseInStackQueuedSpinLock(&v157);
  v37 = (_QWORD *)v136;
  v38 = *(_QWORD **)(v136 + 1224);
  if ( v38 == (_QWORD *)(v136 + 1224) )
    goto LABEL_58;
  while ( 2 )
  {
    v78 = v38;
    v38 = (_QWORD *)*v38;
    v170 = v78;
    v79 = v78[2];
    if ( v79 <= v37[152] )
    {
LABEL_256:
      v117 = (VIDMM_GLOBAL **)v78[11];
      v118 = (VIDMM_GLOBAL *)(v78 + 11);
      v139 = (VIDMM_GLOBAL *)(v78 + 11);
      if ( v117 != v78 + 11 )
      {
        do
        {
          v144 = *v117;
          v119 = *v117;
          v147 = v117 - 27;
          if ( *((VIDMM_GLOBAL ***)*v117 + 1) != v117
            || (v120 = (VIDMM_GLOBAL **)v117[1], *v120 != (VIDMM_GLOBAL *)v117) )
          {
            __fastfail(3u);
          }
          *v120 = v119;
          *((_QWORD *)v119 + 1) = v120;
          VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v117 - 27);
          v118 = v139;
          v147[27] = 0LL;
          v147[28] = 0LL;
          v117 = (VIDMM_GLOBAL **)v144;
        }
        while ( v144 != v139 );
        v78 = v170;
        v37 = (_QWORD *)v136;
      }
      v121 = (VIDMM_GLOBAL **)v78[9];
      v122 = (VIDMM_GLOBAL *)(v78 + 9);
      v145 = (VIDMM_GLOBAL *)(v78 + 9);
      if ( v121 != v78 + 9 )
      {
        do
        {
          v142 = *v121;
          v123 = *v121;
          v148 = v121 - 25;
          if ( *((VIDMM_GLOBAL ***)*v121 + 1) != v121
            || (v124 = (VIDMM_GLOBAL **)v121[1], *v124 != (VIDMM_GLOBAL *)v121) )
          {
            __fastfail(3u);
          }
          *v124 = v123;
          *((_QWORD *)v123 + 1) = v124;
          if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v124, v121 - 25) )
          {
            VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v33, v125);
          }
          else
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v126 + 32) + 1920LL), &v158);
            v127 = *(_QWORD *)(v136 + 32) + 1952LL;
            v128 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v136 + 32) + 1960LL);
            if ( *(_QWORD *)v128 != v127 )
              __fastfail(3u);
            v148[25] = (VIDMM_GLOBAL *)v127;
            v148[26] = v128;
            *(_QWORD *)v128 = v148 + 25;
            *(_QWORD *)(v127 + 8) = v148 + 25;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v158);
          }
          v122 = v145;
          v121 = (VIDMM_GLOBAL **)v142;
          v37 = (_QWORD *)v136;
        }
        while ( v142 != v145 );
        v78 = v170;
        v118 = v139;
      }
      if ( *(VIDMM_GLOBAL **)v122 == v122 && *(VIDMM_GLOBAL **)v118 == v118 )
      {
        v129 = *v78;
        if ( *(_QWORD **)(*v78 + 8LL) != v78 || (v130 = (_QWORD *)v78[1], (_QWORD *)*v130 != v78) )
          __fastfail(3u);
        v72 = bTracingEnabled == 0;
        *v130 = v129;
        *(_QWORD *)(v129 + 8) = v130;
        if ( !v72 )
        {
          v131 = (_QWORD *)v37[1];
          if ( !v131 )
            v131 = v37;
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0px(v78, v129, v118, v131, v78[2]);
            v78 = v170;
          }
        }
        _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v78, v129);
        v37 = (_QWORD *)v136;
      }
      if ( v38 == (_QWORD *)(v136 + 1224) )
        goto LABEL_58;
      continue;
    }
    break;
  }
  v80 = *((_DWORD *)v78 + 16);
  v81 = 0;
  if ( !v80 )
  {
LABEL_255:
    v37 = (_QWORD *)v136;
    *(_QWORD *)(v136 + 1216) = v79;
    goto LABEL_256;
  }
  v82 = v78[3];
  while ( 1 )
  {
    v83 = *(_QWORD *)(v82 + 16LL * v81);
    if ( v83 )
    {
      if ( *(_QWORD *)(v83 + 152) < *(_QWORD *)(v82 + 16LL * v81 + 8) )
        break;
    }
    if ( ++v81 >= v80 )
      goto LABEL_255;
  }
  v37 = (_QWORD *)v136;
LABEL_58:
  if ( v167 )
  {
    v68 = (struct _KEVENT **)(v37 + 12);
    v69 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1904), &v159);
    v70 = *v68;
    if ( *v68 == (struct _KEVENT *)v68 )
    {
LABEL_124:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v159);
      KeLowerIrql(v69);
      goto LABEL_59;
    }
    while ( LODWORD(v70->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v70[1].Header.Lock + 4LL * LODWORD(v70[1].Header.WaitListHead.Blink) + 1060) < *(_DWORD *)(*(_QWORD *)&v70[1].Header.Lock + 204LL) )
        goto LABEL_122;
LABEL_123:
      v70 = *(struct _KEVENT **)&v70->Header.Lock;
      if ( v70 == (struct _KEVENT *)v68 )
        goto LABEL_124;
    }
    if ( ((__int64)v70[1].Header.WaitListHead.Flink & 4) != 0 )
    {
      v132 = (int)v70[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v70[5].Header.WaitListHead.Blink) = v132;
      if ( v132 )
        goto LABEL_123;
    }
LABEL_122:
    ++v70[5].Header.LockNV;
    KeSetEvent(v70 + 4, 0, 0);
    goto LABEL_123;
  }
LABEL_59:
  if ( v168 )
  {
    VidSchiSignalRegisteredEvent(v8, (struct _KEVENT **)(v136 + 112));
    VidSchiSignalRegisteredEvent(v8, (struct _KEVENT **)(v8 + 1832));
    *(_QWORD *)(v8 + 1776) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v8 + 1744), 0, 0);
  }
  v39 = (struct _KEVENT *)(v6 + 424);
  v40 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1904), &v160);
  v41 = *(struct _KEVENT **)(v6 + 424);
  if ( *(struct _KEVENT **)&v39->Header.Lock != v39 )
  {
    while ( LODWORD(v41->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v41[1].Header.Lock + 4LL * LODWORD(v41[1].Header.WaitListHead.Blink) + 1060) < *(_DWORD *)(*(_QWORD *)&v41[1].Header.Lock + 204LL) )
        goto LABEL_294;
LABEL_295:
      v41 = *(struct _KEVENT **)&v41->Header.Lock;
      if ( v41 == v39 )
        goto LABEL_62;
    }
    if ( ((__int64)v41[1].Header.WaitListHead.Flink & 4) != 0 )
    {
      v133 = (int)v41[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v41[5].Header.WaitListHead.Blink) = v133;
      if ( v133 )
        goto LABEL_295;
    }
LABEL_294:
    ++v41[5].Header.LockNV;
    KeSetEvent(v41 + 4, 0, 0);
    goto LABEL_295;
  }
LABEL_62:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v160);
  KeLowerIrql(v40);
  v42 = (struct _KEVENT *)(v8 + 1816);
  v43 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1904), &v161);
  v44 = *(struct _KEVENT **)(v8 + 1816);
  if ( *(struct _KEVENT **)&v42->Header.Lock != v42 )
  {
    do
    {
      if ( LODWORD(v44->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v44[1].Header.Lock + 4LL * LODWORD(v44[1].Header.WaitListHead.Blink) + 1060) >= *(_DWORD *)(*(_QWORD *)&v44[1].Header.Lock + 204LL) )
          goto LABEL_167;
      }
      else if ( ((__int64)v44[1].Header.WaitListHead.Flink & 4) != 0 )
      {
        v89 = (int)v44[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v44[5].Header.WaitListHead.Blink) = v89;
        if ( v89 )
          goto LABEL_167;
      }
      ++v44[5].Header.LockNV;
      KeSetEvent(v44 + 4, 0, 0);
LABEL_167:
      v44 = *(struct _KEVENT **)&v44->Header.Lock;
    }
    while ( v44 != v42 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v161);
  KeLowerIrql(v43);
  *(_QWORD *)(v152 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v152 + 296), 0, 0);
  *(_QWORD *)(v8 + 1664) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v8 + 1632), 0, 0);
  if ( (*((_DWORD *)a1 + 16) & 1) == 0 )
  {
    v48 = *((_DWORD *)a1 + 12);
    if ( !v48 || v48 == 7 )
    {
      v46 = (struct _KEVENT *)*((_QWORD *)a1 + 47);
      if ( v46 )
      {
        KeSetEvent(v46, 0, 0);
        ObfDereferenceObject(*((PVOID *)a1 + 47));
      }
    }
    else if ( v48 == 6 )
    {
      v46 = (struct _KEVENT *)*((_QWORD *)a1 + 40);
      if ( v46 )
        KeSetEvent(v46, 0, 0);
    }
  }
  v49 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 24LL);
  if ( !*((_DWORD *)a1 + 12) && (*((_QWORD *)a1 + 78) || *((_QWORD *)a1 + 35)) )
  {
    v134 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v45, v47);
    v134[3] = 281LL;
    v134[4] = 2560LL;
    v134[5] = a1;
    v134[6] = *((_QWORD *)a1 + 78);
    v134[7] = *((_QWORD *)a1 + 35);
    WdLogEvent5_WdCriticalError(v134);
    JUMPOUT(0x1C001B9C2LL);
  }
  v50 = WdLogNewEntry5_WdEvent(v46, v45);
  *(_QWORD *)(v50 + 24) = a1;
  *(_QWORD *)(v50 + 32) = v3;
  WdLogEvent5_WdEvent(v50);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  v51 = (KSPIN_LOCK *)(v49 + 1896);
  *((_DWORD *)a1 + 13) = 0;
  v52 = (char *)a1 + 8;
  KeAcquireInStackQueuedSpinLock(v51, &v162);
  v53 = *((_QWORD *)a1 + 1);
  if ( *(char **)(*(_QWORD *)v52 + 8LL) != v52 || (v54 = (char **)*((_QWORD *)a1 + 2), *v54 != v52) )
    __fastfail(3u);
  *v54 = (char *)v53;
  *(_QWORD *)(v53 + 8) = v54;
  if ( v3 != -760 )
    --*(_DWORD *)(v3 + 760);
  KeReleaseInStackQueuedSpinLock(&v162);
  if ( (*((_DWORD *)a1 + 16) & 0x40) != 0 )
  {
    VidSchiInterlockedInsertTailList(v51, v3 + 720, (_QWORD *)a1 + 1, (_DWORD *)(v3 + 736));
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v51, &v163);
    v55 = *(char ***)(v3 + 704);
    if ( *v55 != (char *)(v3 + 696) )
      __fastfail(3u);
    *(_QWORD *)v52 = v3 + 696;
    *((_QWORD *)a1 + 2) = v55;
    *v55 = v52;
    *(_QWORD *)(v3 + 704) = v52;
    if ( v3 != -712 )
      ++*(_DWORD *)(v3 + 712);
    KeReleaseInStackQueuedSpinLock(&v163);
  }
  if ( (*((_DWORD *)a1 + 16) & 0x40) == 0 )
  {
    v56 = (_QWORD **)(v3 + 696);
    while ( 1 )
    {
      v57 = 0LL;
      KeAcquireInStackQueuedSpinLock(v51, &v164);
      v58 = *v56;
      if ( *v56 != v56 && *(_DWORD *)(v3 + 712) > 0x10u )
      {
        v57 = *v56;
        if ( (_QWORD **)v58[1] != v56 || (v77 = (_QWORD *)*v58, (_QWORD *)v77[1] != v57) )
          __fastfail(3u);
        *v56 = v77;
        v77[1] = v56;
        --*(_DWORD *)(v3 + 712);
      }
      KeReleaseInStackQueuedSpinLock(&v164);
      if ( !v57 )
        break;
      ExFreePoolWithTag(v57 - 1, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v166);
  return (struct _VIDSCH_QUEUE_PACKET *)v151;
}
