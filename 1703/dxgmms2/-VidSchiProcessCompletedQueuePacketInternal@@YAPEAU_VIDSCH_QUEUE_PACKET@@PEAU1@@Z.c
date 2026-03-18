/*
 * XREFs of ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00072F0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000DB74 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C000EAE0 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F360 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C00114D4 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C00118B0 (VidSchiProcessCompletedQueuePacket.c)
 * Callees:
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00028AC (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C00063A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0009ED0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0009F60 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUpdateContextStatus @ 0x1C000A0C0 (VidSchiUpdateContextStatus.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000A670 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C000BEA0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000E814 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0010E14 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0010EC0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0012CEC (VidSchiTryEnterIndependentFlip.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0012D18 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIH@Z @ 0x1C0012D78 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0012EF8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C001E4C4 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0021EF0 (-VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C002220C (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0022CDC (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_I.c)
 *     Template_pp @ 0x1C0023FB8 (Template_pp.c)
 *     Template_px @ 0x1C0025444 (Template_px.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacketInternal(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  volatile signed __int32 *v14; // rdx
  struct _VIDSCH_QUEUE_PACKET **v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rcx
  struct _VIDSCH_CONTEXT ***v22; // rbx
  struct _VIDSCH_CONTEXT **v23; // r9
  _QWORD *v24; // rbx
  _QWORD *v25; // r12
  int v26; // ecx
  __int64 v27; // r12
  unsigned int v28; // r8d
  BOOL v29; // ebx
  volatile signed __int32 *v30; // rcx
  volatile signed __int32 *v31; // rcx
  __int64 v32; // rcx
  unsigned int i; // ecx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  union _ULARGE_INTEGER v37; // rbx
  VIDMM_GLOBAL *v38; // r11
  bool v39; // al
  bool v40; // r9
  struct _KEVENT **v41; // rbx
  KIRQL v42; // r12
  __int64 v43; // rbx
  __int64 v44; // rcx
  _QWORD **v45; // rbx
  _QWORD *v46; // r9
  _QWORD *v47; // r12
  struct _KEVENT *v48; // rbx
  struct _KEVENT *v49; // r13
  struct _KEVENT *v50; // rbx
  KIRQL v51; // r13
  struct _KEVENT *v52; // r12
  __int64 v53; // rdx
  struct _KEVENT *v54; // rcx
  __int64 v55; // r8
  int v56; // eax
  __int64 v57; // r12
  KSPIN_LOCK *v58; // r12
  char *v59; // rbx
  __int64 v60; // rcx
  char **v61; // rax
  char **v62; // rax
  __int64 **v63; // rbx
  __int64 *v64; // rdi
  struct _KEVENT *v66; // r12
  struct _KEVENT *v67; // rbx
  __int64 v68; // r10
  bool v69; // zf
  int v70; // ecx
  unsigned int v71; // ebx
  int v72; // r12d
  __int64 v73; // rcx
  __int64 v74; // rax
  unsigned int v75; // r9d
  __int64 v76; // r10
  __int64 v77; // rcx
  __int64 v78; // rax
  _QWORD *v79; // rcx
  __int64 v80; // r9
  unsigned int v81; // r10d
  unsigned int v82; // r11d
  __int64 v83; // r8
  __int64 v84; // rdx
  _QWORD *v85; // rcx
  __int64 v86; // rax
  unsigned int v87; // r11d
  unsigned int v88; // r10d
  __int64 v89; // r8
  int v90; // ecx
  __int64 v91; // rcx
  __int64 v92; // rcx
  void (__fastcall *v93)(_QWORD); // rax
  _QWORD *v94; // r9
  struct _VIDSCH_CONTEXT *v95; // r11
  __int64 v96; // rcx
  _QWORD *v97; // rax
  VIDMM_GLOBAL **v98; // rax
  struct _VIDSCH_CONTEXT *v99; // r8
  VIDMM_GLOBAL *v100; // r8
  VIDMM_GLOBAL **v101; // rcx
  volatile signed __int32 **v102; // rax
  volatile signed __int32 *v103; // rdx
  volatile signed __int32 **v104; // rcx
  __int64 v105; // r9
  struct VIDMM_ALLOC *v106; // r10
  __int64 v107; // rcx
  _QWORD *v108; // r8
  __int64 v109; // rdx
  _QWORD *v110; // rax
  char v111; // r9
  int v112; // eax
  __int64 v113; // rcx
  int v114; // eax
  struct _KEVENT *v115; // r12
  int Flink; // ecx
  _QWORD *v117; // r12
  _QWORD *v118; // r9
  __int64 v119; // rcx
  _QWORD *v120; // rax
  VIDMM_GLOBAL **v121; // rax
  struct _VIDSCH_CONTEXT *v122; // r8
  VIDMM_GLOBAL *v123; // r8
  VIDMM_GLOBAL **v124; // rcx
  VIDMM_GLOBAL **v125; // rax
  VIDMM_GLOBAL *v126; // rdx
  VIDMM_GLOBAL *v127; // rdx
  VIDMM_GLOBAL **v128; // rcx
  struct VIDMM_ALLOC *v129; // r9
  __int64 v130; // rcx
  VIDMM_GLOBAL *v131; // r8
  __int64 v132; // rdx
  _QWORD *v133; // rax
  __int64 v134; // r9
  int v135; // ecx
  int v136; // ecx
  _QWORD *v137; // rax
  _QWORD *v138; // rax
  struct _VIDSCH_CONTEXT *v139; // [rsp+40h] [rbp-C0h]
  struct _VIDSCH_CONTEXT *v140; // [rsp+40h] [rbp-C0h]
  struct _VIDSCH_CONTEXT *v141; // [rsp+40h] [rbp-C0h]
  struct _VIDSCH_CONTEXT *v142; // [rsp+40h] [rbp-C0h]
  volatile signed __int32 *v143; // [rsp+48h] [rbp-B8h]
  __int64 v144; // [rsp+48h] [rbp-B8h]
  VIDMM_GLOBAL **v145; // [rsp+48h] [rbp-B8h]
  VIDMM_GLOBAL **v146; // [rsp+48h] [rbp-B8h]
  __int64 v147; // [rsp+50h] [rbp-B0h]
  unsigned int v148; // [rsp+50h] [rbp-B0h]
  VIDMM_GLOBAL *v149; // [rsp+58h] [rbp-A8h]
  VIDMM_GLOBAL *v150; // [rsp+58h] [rbp-A8h]
  VIDMM_GLOBAL *v151; // [rsp+58h] [rbp-A8h]
  VIDMM_GLOBAL *v152; // [rsp+58h] [rbp-A8h]
  _QWORD *P; // [rsp+60h] [rbp-A0h]
  unsigned int Pa; // [rsp+60h] [rbp-A0h]
  VIDMM_GLOBAL **v155; // [rsp+68h] [rbp-98h]
  volatile signed __int32 *v156; // [rsp+68h] [rbp-98h]
  VIDMM_GLOBAL *v157; // [rsp+68h] [rbp-98h]
  VIDMM_GLOBAL *v158; // [rsp+70h] [rbp-90h]
  VIDMM_GLOBAL *v159; // [rsp+70h] [rbp-90h]
  VIDMM_GLOBAL *v160; // [rsp+70h] [rbp-90h]
  volatile signed __int32 *v161; // [rsp+78h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE v162; // [rsp+98h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v163; // [rsp+B0h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v164; // [rsp+C8h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v165; // [rsp+E0h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE v166; // [rsp+F8h] [rbp-8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v167; // [rsp+110h] [rbp+10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v168; // [rsp+128h] [rbp+28h] BYREF
  struct _KLOCK_QUEUE_HANDLE v169; // [rsp+140h] [rbp+40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v170; // [rsp+158h] [rbp+58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v171; // [rsp+170h] [rbp+70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v172; // [rsp+188h] [rbp+88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v173; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1B8h] [rbp+B8h] BYREF
  int v175; // [rsp+220h] [rbp+120h]
  KIRQL v176; // [rsp+220h] [rbp+120h]
  KIRQL v177; // [rsp+220h] [rbp+120h]
  KIRQL v178; // [rsp+220h] [rbp+120h]
  _QWORD *v179; // [rsp+220h] [rbp+120h]
  unsigned int v180; // [rsp+220h] [rbp+120h]
  KIRQL v181; // [rsp+228h] [rbp+128h]
  BOOL v182; // [rsp+230h] [rbp+130h]
  BOOL v183; // [rsp+238h] [rbp+138h]

  v3 = *((_QWORD *)a1 + 11);
  v4 = 0;
  v183 = 0;
  v182 = 0;
  v6 = *(_QWORD *)(v3 + 96);
  v7 = *(_QWORD *)(v3 + 104);
  v175 = 0;
  v161 = 0LL;
  v8 = *(_QWORD *)(v6 + 24);
  if ( bTracingEnabled && (*((_DWORD *)a1 + 16) & 0x20) != 0 )
  {
    v92 = *(_QWORD *)(v3 + 56);
    if ( !v92 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
      v92 = v3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pp(v92, &AbortQueuePacket, a3, a1, v92);
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v30 = (volatile signed __int32 *)*((_QWORD *)a1 + 36);
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v30, 0);
      *((_QWORD *)a1 + 36) = 0LL;
    }
    v31 = (volatile signed __int32 *)*((_QWORD *)a1 + 35);
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd(v31 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v31, 0);
      *((_QWORD *)a1 + 35) = 0LL;
    }
  }
  v181 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1880), &LockHandle);
  v13 = *((_DWORD *)a1 + 20);
  if ( (v13 & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 20) = v13 & 0xFFFFFFEF;
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL);
    v9 = *(unsigned int *)(v10 + 2792);
    if ( (_DWORD)v9 != -1 )
    {
      v93 = *(void (__fastcall **)(_QWORD))(v8 + 2880);
      if ( v93 )
        v93(*(_QWORD *)(v8 + 2912));
    }
  }
  if ( *((_DWORD *)a1 + 13) == 16 || !*((_DWORD *)a1 + 13) )
  {
    v138 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11);
    v138[3] = 281LL;
    v138[4] = 512LL;
    v138[5] = v8;
    v138[6] = v3;
    v138[7] = a1;
    WdLogEvent5_WdCriticalError(v138);
    JUMPOUT(0x1C001957CLL);
  }
  if ( (*((_DWORD *)a1 + 20) & 0x20) != 0 )
    VidSchiAdvanceContextSubmissionId(a1);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 16;
  v14 = (volatile signed __int32 *)*((_QWORD *)a1 + 4);
  v15 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 5);
  if ( *((struct _VIDSCH_QUEUE_PACKET **)v14 + 1) != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32)
    || *v15 != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
  {
    __fastfail(3u);
  }
  *v15 = (struct _VIDSCH_QUEUE_PACKET *)v14;
  *((_QWORD *)v14 + 1) = v15;
  v16 = *(_QWORD *)(v3 + 672);
  if ( v16 == v3 + 672 )
  {
    if ( (*(_DWORD *)(v3 + 176) & 0x200) != 0 )
    {
      v34 = 10LL;
      v35 = 11524LL;
      goto LABEL_54;
    }
    if ( (*(_DWORD *)(v3 + 176) & 0x10) == 0
      && (*(_DWORD *)(v3 + 176) & 0x40) == 0
      && (*(_DWORD *)(v3 + 176) & 0x100) == 0 )
    {
      v34 = 0LL;
      v35 = 11557LL;
LABEL_54:
      VidSchiUpdateContextStatus(v3, v34, v35);
    }
  }
  else
  {
    v14 = (volatile signed __int32 *)(v16 - 32);
    v17 = *(_DWORD *)(v16 + 48);
    if ( (v17 & 3) == 1 )
    {
      v161 = v14;
      *((_DWORD *)v14 + 20) = v17 | 2;
    }
    if ( (*(_DWORD *)(v3 + 176) & 0x200) != 0
      && (((unsigned __int8)(*(_DWORD *)(v3 + 176) >> 9) | *(_BYTE *)(v3 + 176)) & 2) == 0 )
    {
      v34 = 10LL;
      v35 = 11505LL;
      goto LABEL_54;
    }
  }
  if ( *((_DWORD *)a1 + 12) != 5 || (*((_DWORD *)a1 + 20) & 4) != 0 )
    goto LABEL_27;
  v18 = *((_QWORD *)a1 + 98);
  v19 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL);
  v147 = v19;
  if ( v18 )
  {
    *(_QWORD *)(v18 + 792) = *((_QWORD *)a1 + 99);
    goto LABEL_180;
  }
  if ( *((_QWORD *)a1 + 99) )
  {
LABEL_180:
    v91 = *((_QWORD *)a1 + 99);
    if ( v91 )
      *(_QWORD *)(v91 + 784) = *((_QWORD *)a1 + 98);
    *((_QWORD *)a1 + 98) = 0LL;
    *((_QWORD *)a1 + 99) = 0LL;
    goto LABEL_22;
  }
  if ( (*((_DWORD *)a1 + 66) & 2) != 0 )
  {
    KeSetEvent(*((PRKEVENT *)a1 + 66), 0, 0);
    ObfDereferenceObject(*((PVOID *)a1 + 66));
    *((_QWORD *)a1 + 66) = 0LL;
  }
  else if ( *((_DWORD *)a1 + 67) )
  {
    do
    {
      LOBYTE(v12) = 1;
      VidSchiCompleteSignalSyncObject(*((_QWORD *)a1 + v4 + 34), v14, (char *)a1 + 8 * v4 + 528, v12);
      ++v4;
    }
    while ( v4 < *((_DWORD *)a1 + 67) );
    v4 = 0;
  }
LABEL_22:
  *((_DWORD *)a1 + 20) |= 4u;
  if ( (*((_DWORD *)a1 + 66) & 2) == 0 && *((_DWORD *)a1 + 67) )
  {
    do
      VidSchiReleaseSyncObjectReference(*((PVOID *)a1 + v4++ + 34));
    while ( v4 < *((_DWORD *)a1 + 67) );
  }
  v20 = *(_QWORD *)(v19 + 32);
  v149 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v20 + 8) + 440LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v20 + 1912), &v162);
  v22 = (struct _VIDSCH_CONTEXT ***)(v20 + 1936);
  v23 = *v22;
  if ( *v22 != (struct _VIDSCH_CONTEXT **)v22 )
  {
    do
    {
      v140 = *v23;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v21, v23 - 25) )
      {
        v96 = *v94;
        v97 = (_QWORD *)v94[1];
        if ( *(_QWORD **)(*v94 + 8LL) != v94 || (_QWORD *)*v97 != v94 )
          __fastfail(3u);
        *v97 = v96;
        *(_QWORD *)(v96 + 8) = v97;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v94 - 24), (struct VIDMM_ALLOC *)(v94 - 25));
        v95 = v140;
      }
      v23 = (struct _VIDSCH_CONTEXT **)v95;
    }
    while ( v95 != (struct _VIDSCH_CONTEXT *)v22 );
  }
  KeReleaseInStackQueuedSpinLock(&v162);
  v24 = (_QWORD *)(v19 + 1224);
  v25 = *(_QWORD **)(v19 + 1224);
  if ( v25 == v24 )
    goto LABEL_27;
  v12 = v147;
  while ( 1 )
  {
    v85 = v25;
    v25 = (_QWORD *)*v25;
    P = v85;
    v86 = v85[2];
    if ( v86 > *(_QWORD *)(v12 + 1216) )
      break;
LABEL_208:
    v98 = (VIDMM_GLOBAL **)v85[11];
    v99 = (struct _VIDSCH_CONTEXT *)(v85 + 11);
    v141 = (struct _VIDSCH_CONTEXT *)(v85 + 11);
    if ( v98 != v85 + 11 )
    {
      do
      {
        v159 = *v98;
        v100 = *v98;
        v101 = (VIDMM_GLOBAL **)v98[1];
        v155 = v98 - 27;
        if ( *((VIDMM_GLOBAL ***)*v98 + 1) != v98 || *v101 != (VIDMM_GLOBAL *)v98 )
          __fastfail(3u);
        *v101 = v100;
        *((_QWORD *)v100 + 1) = v101;
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v98 - 27);
        v99 = v141;
        v155[27] = 0LL;
        v155[28] = 0LL;
        v98 = (VIDMM_GLOBAL **)v159;
      }
      while ( v159 != v141 );
      v12 = v147;
      v85 = P;
    }
    v102 = (volatile signed __int32 **)v85[9];
    v14 = (volatile signed __int32 *)(v85 + 9);
    v156 = (volatile signed __int32 *)(v85 + 9);
    if ( v102 != v85 + 9 )
    {
      do
      {
        v143 = *v102;
        v103 = *v102;
        v104 = (volatile signed __int32 **)v102[1];
        v160 = (VIDMM_GLOBAL *)(v102 - 25);
        if ( *((volatile signed __int32 ***)*v102 + 1) != v102 || *v104 != (volatile signed __int32 *)v102 )
          __fastfail(3u);
        *v104 = v103;
        *((_QWORD *)v103 + 1) = v104;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v104, v102 - 25) )
        {
          VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v149, v106);
        }
        else
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v105 + 32) + 1912LL), &v163);
          v107 = *(_QWORD *)(v147 + 32) + 1936LL;
          v108 = *(_QWORD **)(*(_QWORD *)(v147 + 32) + 1944LL);
          if ( *v108 != v107 )
            __fastfail(3u);
          *((_QWORD *)v160 + 25) = v107;
          *((_QWORD *)v160 + 26) = v108;
          *v108 = (char *)v160 + 200;
          *(_QWORD *)(v107 + 8) = (char *)v160 + 200;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v163);
        }
        v14 = v156;
        v102 = (volatile signed __int32 **)v143;
        v12 = v147;
      }
      while ( v143 != v156 );
      v85 = P;
      v99 = v141;
    }
    if ( *(volatile signed __int32 **)v14 == v14 && *(struct _VIDSCH_CONTEXT **)v99 == v99 )
    {
      v109 = *v85;
      v110 = (_QWORD *)v85[1];
      if ( *(_QWORD **)(*v85 + 8LL) != v85 || (_QWORD *)*v110 != v85 )
        __fastfail(3u);
      v69 = bTracingEnabled == 0;
      *v110 = v109;
      *(_QWORD *)(v109 + 8) = v110;
      if ( !v69 )
      {
        v109 = *(_QWORD *)(v12 + 8);
        if ( !v109 )
          v109 = v12;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          Template_px(v85, v109, v99, v109, v85[2]);
          v85 = P;
        }
      }
      _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v85, v109);
      v12 = v147;
    }
    if ( v25 == v24 )
      goto LABEL_27;
  }
  v87 = *((_DWORD *)v85 + 16);
  v88 = 0;
  if ( !v87 )
  {
LABEL_207:
    *(_QWORD *)(v12 + 1216) = v86;
    goto LABEL_208;
  }
  v89 = v85[3];
  while ( 1 )
  {
    v14 = *(volatile signed __int32 **)(v89 + 16LL * v88);
    if ( v14 )
    {
      if ( *((_QWORD *)v14 + 19) < *(_QWORD *)(v89 + 16LL * v88 + 8) )
        break;
    }
    if ( ++v88 >= v87 )
      goto LABEL_207;
  }
LABEL_27:
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 1024));
  if ( !*((_DWORD *)a1 + 12) )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 2752));
      v32 = *(_QWORD *)(v8 + 400);
      _bittestandset64(&v32, *(unsigned __int16 *)(v6 + 4));
      *(_QWORD *)(v8 + 400) = v32;
    }
    for ( i = 0; i < *((_DWORD *)a1 + 114); ++i )
    {
      if ( i >= 0x10 )
        break;
      v14 = (volatile signed __int32 *)*((_QWORD *)a1 + i + 58);
      *((_QWORD *)a1 + i + 58) = 0LL;
      if ( v14 )
        _InterlockedDecrement(v14 + 26);
    }
  }
  v26 = *((_DWORD *)a1 + 18);
  if ( (v26 & 0x40020) != 0x40000 && (v26 & 0x4000) == 0 )
  {
LABEL_80:
    if ( !*((_DWORD *)a1 + 12) )
      VidSchiUpdateLastCompletedPresentTimestamp(v3, 0LL);
    goto LABEL_82;
  }
  v27 = *((unsigned int *)a1 + 38);
  v148 = *((_DWORD *)a1 + 38);
  v28 = 0;
  v29 = (v26 & 0xC00) != 1024;
  if ( (v26 & 0x40000) != 0 )
  {
    if ( (v26 & 0x4000) == 0 )
      goto LABEL_65;
    goto LABEL_55;
  }
  if ( (v26 & 4) == 0 )
  {
LABEL_55:
    v182 = (v26 & 0xC00) != 1024;
    if ( (v26 & 0xC00) != 0x400 )
      goto LABEL_56;
    goto LABEL_65;
  }
  if ( *((_DWORD *)a1 + 96) == 1 )
  {
    v183 = (v26 & 0xC00) != 1024;
    goto LABEL_55;
  }
  if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
    goto LABEL_65;
  if ( (v26 & 0xC00) == 0x400 )
    goto LABEL_337;
  v183 = 1;
  v182 = 1;
  v175 = 1;
LABEL_56:
  LOBYTE(v14) = 1;
  VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 11), v14);
  if ( v175 )
  {
LABEL_337:
    if ( (unsigned __int8)*((_DWORD *)a1 + 174) )
      VidSchiUnreferencePrimaryAllocations(
        (struct _VIDSCH_GLOBAL *)v8,
        (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 696),
        *((_DWORD *)a1 + 100),
        1 << *(_BYTE *)(*(_QWORD *)(v8 + 8LL * *(unsigned int *)(v3 + 88) + 416) + 6LL),
        0);
  }
  if ( (_DWORD)v27 != -1 && v182 && (*((_DWORD *)a1 + 18) & 0x40000) == 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 4 * v27 + 1060));
    v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 24LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(v7 + 32) + 4LL))
                    + 8 * v27
                    + 520);
    if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 8 * v27 + 5544) + 8LL));
      ++**(_DWORD **)(v8 + 8 * v27 + 5544);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v36 + 8));
    ++*(_DWORD *)v36;
    if ( (*((_DWORD *)a1 + 18) & 0x20000) != 0 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1888), &v164);
      *(_DWORD *)(v7 + 4 * v27 + 468) = *((_DWORD *)a1 + 94);
      *(_QWORD *)(v7 + 8 * v27 + 536) = *((unsigned int *)a1 + 31);
      *(_QWORD *)(v7 + 8 * v27 + 664) = *((_QWORD *)a1 + 16);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v164);
    }
  }
  v28 = 0;
LABEL_65:
  if ( (*((_DWORD *)a1 + 18) & 0x40080) == 0 || !*((_QWORD *)a1 + 17) || !*((_QWORD *)a1 + 18) || !v29 )
    goto LABEL_74;
  v37 = *(union _ULARGE_INTEGER *)((char *)a1 + 104);
  v139 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 11);
  v38 = *(VIDMM_GLOBAL **)(*((_QWORD *)v139 + 13) + 32LL);
  v150 = v38;
  if ( (*((_DWORD *)a1 + 66) & 0x1000000) != 0 )
  {
    v111 = -1;
    Pa = *((_DWORD *)a1 + 95);
    v69 = !_BitScanForward((unsigned int *)&v112, (unsigned __int8)*((_DWORD *)a1 + 174));
    if ( !v69 )
      v111 = v112;
    if ( v111 != -1 )
      LOBYTE(v28) = v111;
    v180 = (char)v28;
    v113 = 272LL * (unsigned int)(char)v28 + *((_QWORD *)v38 + Pa + 374) + 88LL;
    v144 = v113;
    if ( *(_QWORD *)(v113 + 88) != v113 + 88 )
      goto LABEL_248;
    v114 = *(_DWORD *)(v113 + 68);
    if ( v114 == 3 )
    {
      if ( *((_DWORD *)a1 + 104) == *(_DWORD *)(v113 + 40)
        && *((_DWORD *)a1 + 105) == *(_DWORD *)(v113 + 44)
        && *((_QWORD *)a1 + 53) == *(_QWORD *)(v113 + 48) )
      {
        goto LABEL_253;
      }
      goto LABEL_71;
    }
    if ( v114 == 1 && VidSchiCheckTokenIndependentFlipCondition(v38, (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 264)) )
    {
      if ( !*(_BYTE *)(v144 + 65) )
      {
        *(_BYTE *)(v144 + 65) = 1;
        v40 = 1;
        v39 = 0;
        goto LABEL_73;
      }
      if ( !VidSchiCheckPlaneIndependentFlipCondition(v150, Pa, v180) )
      {
LABEL_248:
        VidSchiPostponePresentHistoryToken(v139, (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 264), v37);
        goto LABEL_74;
      }
    }
LABEL_71:
    v39 = 0;
    goto LABEL_72;
  }
  if ( !*((_QWORD *)a1 + 52) )
    goto LABEL_71;
  v74 = *((unsigned int *)a1 + 95);
  if ( (_DWORD)v74 == -1 )
    goto LABEL_71;
  v75 = *((_DWORD *)v38 + 32);
  v76 = *((_QWORD *)v38 + v74 + 374);
  if ( !v75 )
    goto LABEL_71;
  while ( 1 )
  {
    v77 = 272LL * v28;
    if ( *((_DWORD *)a1 + 104) == *(_DWORD *)(v77 + v76 + 128)
      && *((_DWORD *)a1 + 105) == *(_DWORD *)(v77 + v76 + 132)
      && *((_QWORD *)a1 + 53) == *(_QWORD *)(v77 + v76 + 136)
      && *(_DWORD *)(v77 + v76 + 156) == 3 )
    {
      break;
    }
    if ( ++v28 >= v75 )
      goto LABEL_71;
  }
LABEL_253:
  v39 = 1;
LABEL_72:
  v40 = 0;
LABEL_73:
  VidSchiProcessPresentHistoryToken(v139, (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 264), v37, v40, v39);
LABEL_74:
  if ( v183 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 960));
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 1188));
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 4LL * v148 + 1124));
  }
  v41 = (struct _KEVENT **)(v8 + 1840);
  v176 = KfRaiseIrql(2u);
  v42 = v176;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1896), &v165);
  if ( *v41 != (struct _KEVENT *)v41 )
  {
    v115 = *v41;
    while ( LODWORD(v115->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v115[1].Header.Lock + 4LL * LODWORD(v115[1].Header.WaitListHead.Blink) + 1060) < *(_DWORD *)(*(_QWORD *)&v115[1].Header.Lock + 204LL) )
        goto LABEL_270;
LABEL_271:
      v115 = *(struct _KEVENT **)&v115->Header.Lock;
      if ( v115 == (struct _KEVENT *)v41 )
      {
        v42 = v176;
        goto LABEL_77;
      }
    }
    if ( ((__int64)v115[1].Header.WaitListHead.Flink & 4) != 0 )
    {
      Flink = (int)v115[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v115[5].Header.WaitListHead.Blink) = Flink;
      if ( Flink )
        goto LABEL_271;
    }
LABEL_270:
    ++v115[5].Header.LockNV;
    KeSetEvent(v115 + 4, 0, 0);
    goto LABEL_271;
  }
LABEL_77:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v165);
  KeLowerIrql(v42);
  if ( !v182 )
    goto LABEL_80;
LABEL_82:
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 38) != -1 )
  {
    v68 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 32LL);
    if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
      LODWORD(v12) = (unsigned __int8)*((_DWORD *)a1 + 174) | *((unsigned __int8 *)a1 + 697);
    else
      LODWORD(v12) = (1 << *(_DWORD *)(v68 + 128)) - 1;
    v69 = !_BitScanForward((unsigned int *)&v70, v12);
    if ( v69 )
      LOBYTE(v70) = -1;
    while ( (_DWORD)v12 )
    {
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(*(_QWORD *)(v68 + 8LL * *((unsigned int *)a1 + 38) + 2992) + 272LL * (char)v70 + 160),
        0xFFFFFFFF);
      LODWORD(v12) = ~(1 << v70) & v12;
      v69 = !_BitScanForward((unsigned int *)&v70, v12);
      if ( v69 )
        LOBYTE(v70) = -1;
    }
    if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
      v71 = (unsigned __int8)*((_DWORD *)a1 + 174) | *((unsigned __int8 *)a1 + 697);
    else
      v71 = (1 << *(_DWORD *)(v8 + 128)) - 1;
    v69 = !_BitScanForward((unsigned int *)&v72, v71);
    if ( v69 )
      LOBYTE(v72) = -1;
    while ( v71 )
    {
      v73 = *((unsigned int *)a1 + 38);
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 8 * v73 + 2992) + 272LL * (char)v72 + 156) == 1 )
        VidSchiTryEnterIndependentFlip(v8, (unsigned int)v73, (unsigned int)(char)v72);
      v71 &= ~(1 << v72);
      v69 = !_BitScanForward((unsigned int *)&v72, v71);
      if ( v69 )
        LOBYTE(v72) = -1;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(v8 + 948));
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 2764));
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 1196));
  if ( (unsigned int)(*((_DWORD *)a1 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 1200));
  if ( !*((_DWORD *)a1 + 12) && (*((_DWORD *)a1 + 18) & 4) != 0 )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 32LL)
                                            + 8LL * *((unsigned int *)a1 + 38)
                                            + 2992)
                                + 2312LL),
      0xFFFFFFFF);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 792));
  VidSchiProfilePerformanceTick(9, v8, v6, v12, 0LL, (__int64)a1, 0LL, 0LL);
  v43 = *(_QWORD *)(v7 + 32);
  v158 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v43 + 8) + 440LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v43 + 1912), &v166);
  v45 = (_QWORD **)(v43 + 1936);
  v46 = *v45;
  if ( *v45 != v45 )
  {
    do
    {
      v117 = (_QWORD *)*v46;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v44, v46 - 25) )
      {
        v119 = *v118;
        v120 = (_QWORD *)v118[1];
        if ( *(_QWORD **)(*v118 + 8LL) != v118 || (_QWORD *)*v120 != v118 )
          __fastfail(3u);
        *v120 = v119;
        *(_QWORD *)(v119 + 8) = v120;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v118 - 24), (struct VIDMM_ALLOC *)(v118 - 25));
      }
      v46 = v117;
    }
    while ( v117 != v45 );
  }
  KeReleaseInStackQueuedSpinLock(&v166);
  v47 = *(_QWORD **)(v7 + 1224);
  if ( v47 == (_QWORD *)(v7 + 1224) )
    goto LABEL_88;
  while ( 2 )
  {
    v79 = v47;
    v47 = (_QWORD *)*v47;
    v179 = v79;
    v80 = v79[2];
    if ( v80 <= *(_QWORD *)(v7 + 1216) )
    {
LABEL_283:
      v121 = (VIDMM_GLOBAL **)v79[11];
      v122 = (struct _VIDSCH_CONTEXT *)(v79 + 11);
      v142 = (struct _VIDSCH_CONTEXT *)(v79 + 11);
      if ( v121 != v79 + 11 )
      {
        do
        {
          v151 = *v121;
          v123 = *v121;
          v124 = (VIDMM_GLOBAL **)v121[1];
          v145 = v121 - 27;
          if ( *((VIDMM_GLOBAL ***)*v121 + 1) != v121 || *v124 != (VIDMM_GLOBAL *)v121 )
            __fastfail(3u);
          *v124 = v123;
          *((_QWORD *)v123 + 1) = v124;
          VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v121 - 27);
          v122 = v142;
          v145[27] = 0LL;
          v145[28] = 0LL;
          v121 = (VIDMM_GLOBAL **)v151;
        }
        while ( v151 != v142 );
        v79 = v179;
      }
      v125 = (VIDMM_GLOBAL **)v79[9];
      v126 = (VIDMM_GLOBAL *)(v79 + 9);
      v152 = (VIDMM_GLOBAL *)(v79 + 9);
      if ( v125 != v79 + 9 )
      {
        do
        {
          v157 = *v125;
          v127 = *v125;
          v128 = (VIDMM_GLOBAL **)v125[1];
          v146 = v125 - 25;
          if ( *((VIDMM_GLOBAL ***)*v125 + 1) != v125 || *v128 != (VIDMM_GLOBAL *)v125 )
            __fastfail(3u);
          *v128 = v127;
          *((_QWORD *)v127 + 1) = v128;
          if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v128, v125 - 25) )
          {
            VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v158, v129);
          }
          else
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v7 + 32) + 1912LL), &v167);
            v130 = *(_QWORD *)(v7 + 32) + 1936LL;
            v131 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v7 + 32) + 1944LL);
            if ( *(_QWORD *)v131 != v130 )
              __fastfail(3u);
            v146[25] = (VIDMM_GLOBAL *)v130;
            v146[26] = v131;
            *(_QWORD *)v131 = v146 + 25;
            *(_QWORD *)(v130 + 8) = v146 + 25;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v167);
          }
          v126 = v152;
          v125 = (VIDMM_GLOBAL **)v157;
        }
        while ( v157 != v152 );
        v79 = v179;
        v122 = v142;
      }
      if ( *(VIDMM_GLOBAL **)v126 == v126 && *(struct _VIDSCH_CONTEXT **)v122 == v122 )
      {
        v132 = *v79;
        v133 = (_QWORD *)v79[1];
        if ( *(_QWORD **)(*v79 + 8LL) != v79 || (_QWORD *)*v133 != v79 )
          __fastfail(3u);
        v69 = bTracingEnabled == 0;
        *v133 = v132;
        *(_QWORD *)(v132 + 8) = v133;
        if ( !v69 )
        {
          v134 = *(_QWORD *)(v7 + 8);
          if ( !v134 )
            v134 = v7;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            Template_px(v79, v132, v122, v134, v79[2]);
            v79 = v179;
          }
        }
        _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v79, v132);
      }
      if ( v47 == (_QWORD *)(v7 + 1224) )
        goto LABEL_88;
      continue;
    }
    break;
  }
  v81 = *((_DWORD *)v79 + 16);
  v82 = 0;
  if ( !v81 )
  {
LABEL_282:
    *(_QWORD *)(v7 + 1216) = v80;
    goto LABEL_283;
  }
  v83 = v79[3];
  while ( 1 )
  {
    v84 = *(_QWORD *)(v83 + 16LL * v82);
    if ( v84 )
    {
      if ( *(_QWORD *)(v84 + 152) < *(_QWORD *)(v83 + 16LL * v82 + 8) )
        break;
    }
    if ( ++v82 >= v81 )
      goto LABEL_282;
  }
LABEL_88:
  if ( v182 )
  {
    v66 = (struct _KEVENT *)(v7 + 96);
    v178 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1896), &v168);
    v67 = *(struct _KEVENT **)(v7 + 96);
    if ( *(struct _KEVENT **)&v66->Header.Lock == v66 )
    {
LABEL_127:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v168);
      KeLowerIrql(v178);
      goto LABEL_89;
    }
    while ( LODWORD(v67->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v67[1].Header.Lock + 4LL * LODWORD(v67[1].Header.WaitListHead.Blink) + 1060) < *(_DWORD *)(*(_QWORD *)&v67[1].Header.Lock + 204LL) )
        goto LABEL_125;
LABEL_126:
      v67 = *(struct _KEVENT **)&v67->Header.Lock;
      if ( v67 == v66 )
        goto LABEL_127;
    }
    if ( ((__int64)v67[1].Header.WaitListHead.Flink & 4) != 0 )
    {
      v135 = (int)v67[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v67[5].Header.WaitListHead.Blink) = v135;
      if ( v135 )
        goto LABEL_126;
    }
LABEL_125:
    ++v67[5].Header.LockNV;
    KeSetEvent(v67 + 4, 0, 0);
    goto LABEL_126;
  }
LABEL_89:
  if ( v183 )
  {
    VidSchiSignalRegisteredEvent(v8, v7 + 112);
    VidSchiSignalRegisteredEvent(v8, v8 + 1824);
    *(_QWORD *)(v8 + 1768) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v8 + 1736), 0, 0);
  }
  v48 = (struct _KEVENT *)(v6 + 424);
  v177 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1896), &v169);
  v49 = *(struct _KEVENT **)(v6 + 424);
  if ( *(struct _KEVENT **)&v48->Header.Lock != v48 )
  {
    while ( LODWORD(v49->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v49[1].Header.Lock + 4LL * LODWORD(v49[1].Header.WaitListHead.Blink) + 1060) < *(_DWORD *)(*(_QWORD *)&v49[1].Header.Lock + 204LL) )
        goto LABEL_321;
LABEL_322:
      v49 = *(struct _KEVENT **)&v49->Header.Lock;
      if ( v49 == v48 )
        goto LABEL_92;
    }
    if ( ((__int64)v49[1].Header.WaitListHead.Flink & 4) != 0 )
    {
      v136 = (int)v49[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v49[5].Header.WaitListHead.Blink) = v136;
      if ( v136 )
        goto LABEL_322;
    }
LABEL_321:
    ++v49[5].Header.LockNV;
    KeSetEvent(v49 + 4, 0, 0);
    goto LABEL_322;
  }
LABEL_92:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v169);
  KeLowerIrql(v177);
  v50 = (struct _KEVENT *)(v8 + 1808);
  v51 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1896), &v170);
  v52 = *(struct _KEVENT **)(v8 + 1808);
  if ( *(struct _KEVENT **)&v50->Header.Lock != v50 )
  {
    do
    {
      if ( LODWORD(v52->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v52[1].Header.Lock + 4LL * LODWORD(v52[1].Header.WaitListHead.Blink) + 1060) >= *(_DWORD *)(*(_QWORD *)&v52[1].Header.Lock + 204LL) )
          goto LABEL_178;
      }
      else if ( ((__int64)v52[1].Header.WaitListHead.Flink & 4) != 0 )
      {
        v90 = (int)v52[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v52[5].Header.WaitListHead.Blink) = v90;
        if ( v90 )
          goto LABEL_178;
      }
      ++v52[5].Header.LockNV;
      KeSetEvent(v52 + 4, 0, 0);
LABEL_178:
      v52 = *(struct _KEVENT **)&v52->Header.Lock;
    }
    while ( v52 != v50 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v170);
  KeLowerIrql(v51);
  *(_QWORD *)(v6 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v6 + 296), 0, 0);
  *(_QWORD *)(v8 + 1656) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v8 + 1624), 0, 0);
  if ( (*((_DWORD *)a1 + 16) & 1) == 0 )
  {
    v56 = *((_DWORD *)a1 + 12);
    if ( !v56 || v56 == 7 )
    {
      v54 = (struct _KEVENT *)*((_QWORD *)a1 + 44);
      if ( v54 )
      {
        KeSetEvent(v54, 0, 0);
        ObfDereferenceObject(*((PVOID *)a1 + 44));
      }
    }
    else if ( v56 == 6 )
    {
      v54 = (struct _KEVENT *)*((_QWORD *)a1 + 37);
      if ( v54 )
        KeSetEvent(v54, 0, 0);
    }
  }
  v57 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 24LL);
  if ( !*((_DWORD *)a1 + 12) && (*((_QWORD *)a1 + 75) || *((_QWORD *)a1 + 32)) )
  {
    v137 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v54, v53, v55);
    v137[3] = 281LL;
    v137[4] = 2560LL;
    v137[5] = a1;
    v137[6] = *((_QWORD *)a1 + 75);
    v137[7] = *((_QWORD *)a1 + 32);
    WdLogEvent5_WdCriticalError(v137);
    JUMPOUT(0x1C0019518LL);
  }
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  v58 = (KSPIN_LOCK *)(v57 + 1888);
  v59 = (char *)a1 + 8;
  *((_DWORD *)a1 + 13) = 0;
  KeAcquireInStackQueuedSpinLock(v58, &v171);
  v60 = *((_QWORD *)a1 + 1);
  v61 = (char **)*((_QWORD *)a1 + 2);
  if ( *(char **)(*(_QWORD *)v59 + 8LL) != v59 || *v61 != v59 )
    __fastfail(3u);
  *v61 = (char *)v60;
  *(_QWORD *)(v60 + 8) = v61;
  if ( v3 != -784 )
    --*(_DWORD *)(v3 + 784);
  KeReleaseInStackQueuedSpinLock(&v171);
  if ( (*((_DWORD *)a1 + 16) & 0x40) != 0 )
  {
    VidSchiInterlockedInsertTailList(v58, v3 + 744, (_QWORD *)a1 + 1, (_DWORD *)(v3 + 760));
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v58, &v172);
    v62 = *(char ***)(v3 + 728);
    if ( *v62 != (char *)(v3 + 720) )
      __fastfail(3u);
    *(_QWORD *)v59 = v3 + 720;
    *((_QWORD *)a1 + 2) = v62;
    *v62 = v59;
    *(_QWORD *)(v3 + 728) = v59;
    if ( v3 != -736 )
      ++*(_DWORD *)(v3 + 736);
    KeReleaseInStackQueuedSpinLock(&v172);
  }
  if ( (*((_DWORD *)a1 + 16) & 0x40) == 0 )
  {
    v63 = (__int64 **)(v3 + 720);
    while ( 1 )
    {
      v64 = 0LL;
      KeAcquireInStackQueuedSpinLock(v58, &v173);
      if ( *v63 != (__int64 *)v63 && *(_DWORD *)(v3 + 736) > 0x10u )
      {
        v64 = *v63;
        v78 = **v63;
        if ( (__int64 **)(*v63)[1] != v63 || *(__int64 **)(v78 + 8) != v64 )
          __fastfail(3u);
        *v63 = (__int64 *)v78;
        *(_QWORD *)(v78 + 8) = v63;
        --*(_DWORD *)(v3 + 736);
      }
      KeReleaseInStackQueuedSpinLock(&v173);
      if ( !v64 )
        break;
      ExFreePoolWithTag(v64 - 1, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v181);
  return (struct _VIDSCH_QUEUE_PACKET *)v161;
}
