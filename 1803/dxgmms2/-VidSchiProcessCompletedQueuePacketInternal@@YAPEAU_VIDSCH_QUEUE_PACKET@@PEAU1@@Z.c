/*
 * XREFs of ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009720
 * Callers:
 *     VidSchiSubmitSignalCommand @ 0x1C0001A20 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C00024F0 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0002C0C (VidSchiProcessCompletedQueuePacket.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0004130 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008A70 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSubmitWaitCommand @ 0x1C00111BC (VidSchiSubmitWaitCommand.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00019F0 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00027D0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0005290 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007300 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000BA80 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BB10 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000C050 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiUpdateContextStatus @ 0x1C000CE10 (VidSchiUpdateContextStatus.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000F294 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0013330 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0015360 (VidSchiTryEnterIndependentFlip.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIH@Z @ 0x1C00156A0 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0022668 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0022AA8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0026E84 (-VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     McTemplateK0pp @ 0x1C0028C6C (McTemplateK0pp.c)
 *     McTemplateK0px @ 0x1C002A14C (McTemplateK0px.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacketInternal(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  int v4; // r14d
  unsigned int v5; // edi
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
  __int64 v20; // rcx
  int v21; // eax
  unsigned int i; // edi
  __int64 v23; // rdi
  VIDMM_GLOBAL *v24; // r15
  __int64 v25; // rcx
  _QWORD **v26; // rdi
  _QWORD *v27; // r9
  __int64 v28; // r8
  unsigned int *v29; // r14
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // r15
  volatile signed __int32 *v33; // rcx
  volatile signed __int32 *v34; // rcx
  __int64 v35; // rcx
  unsigned int j; // ecx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // ecx
  __int64 v41; // rdi
  VIDMM_GLOBAL *v42; // r15
  __int64 v43; // rcx
  _QWORD **v44; // rdi
  _QWORD *v45; // r9
  __int64 v46; // rdx
  _QWORD *v47; // r11
  unsigned int *v48; // r14
  struct _KEVENT **v49; // rdi
  KIRQL v50; // r12
  struct _KEVENT *k; // r15
  struct _KEVENT *v52; // rdi
  KIRQL v53; // r15
  struct _KEVENT *v54; // r14
  __int64 v55; // rdx
  struct _KEVENT *v56; // rcx
  __int64 v57; // r8
  int v58; // eax
  __int64 v59; // r12
  __int64 v60; // rax
  KSPIN_LOCK *v61; // r12
  char *v62; // rdi
  __int64 v63; // rcx
  char **v64; // rax
  char **v65; // rax
  _QWORD **v66; // rbx
  _QWORD *v67; // rdi
  _QWORD *v68; // rax
  __int64 v70; // rcx
  struct _KEVENT *v71; // rdi
  KIRQL v72; // r14
  struct _KEVENT *v73; // r15
  struct _KEVENT **v74; // r14
  KIRQL v75; // r15
  struct _KEVENT *v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // r10
  int v80; // edx
  bool v81; // zf
  int v82; // ecx
  unsigned int v83; // edi
  int v84; // eax
  __int64 v85; // rdx
  char v86; // r14
  __int64 v87; // r8
  int v88; // ecx
  unsigned int *v89; // r12
  __int64 v90; // r8
  unsigned int v91; // r9d
  unsigned int v92; // r10d
  __int64 v93; // rcx
  unsigned int *v94; // rcx
  __int64 v95; // r11
  unsigned int v96; // r10d
  __int64 v97; // rdx
  _QWORD *v98; // rax
  struct _KEVENT *v99; // rcx
  __int64 v100; // rcx
  void (__fastcall *v101)(_QWORD); // rax
  _QWORD *v102; // r14
  _QWORD *v103; // r9
  __int64 v104; // rcx
  _QWORD *v105; // rax
  unsigned int v106; // edx
  __int64 v107; // r10
  unsigned int *v108; // rax
  unsigned int *v109; // rdx
  unsigned int *v110; // r8
  unsigned int *v111; // rcx
  unsigned int **v112; // rax
  __int64 *v113; // rdx
  __int64 v114; // r8
  __int64 *v115; // rcx
  struct VIDMM_ALLOC *v116; // r9
  __int64 v117; // rcx
  __int64 **v118; // rdx
  __int64 v119; // rdx
  unsigned int **v120; // rax
  _QWORD *v121; // r9
  int Flink; // ecx
  _QWORD *v123; // r14
  _QWORD *v124; // r9
  __int64 v125; // rcx
  _QWORD *v126; // rax
  unsigned int v127; // r9d
  unsigned int v128; // ecx
  __int64 v129; // r10
  unsigned int *v130; // rax
  unsigned int *v131; // rdx
  unsigned int *v132; // r8
  unsigned int *v133; // rcx
  unsigned int **v134; // rax
  unsigned int *v135; // rcx
  unsigned int *v136; // r8
  __int64 v137; // r9
  unsigned int *v138; // rax
  unsigned int **v139; // rcx
  struct VIDMM_ALLOC *v140; // r9
  __int64 v141; // r11
  __int64 v142; // rcx
  __int64 **v143; // rdx
  __int64 v144; // rcx
  unsigned int **v145; // rax
  _QWORD *v146; // r9
  int v147; // ecx
  int v148; // ecx
  _QWORD *v149; // rax
  _QWORD *v150; // rax
  __int64 v151; // [rsp+40h] [rbp-C0h]
  __int64 v152; // [rsp+48h] [rbp-B8h]
  unsigned int *v153; // [rsp+50h] [rbp-B0h]
  __int64 *v154; // [rsp+50h] [rbp-B0h]
  unsigned int *v155; // [rsp+50h] [rbp-B0h]
  unsigned int *v156; // [rsp+50h] [rbp-B0h]
  unsigned int *v157; // [rsp+58h] [rbp-A8h]
  __int64 *v158; // [rsp+58h] [rbp-A8h]
  unsigned int *v159; // [rsp+58h] [rbp-A8h]
  unsigned int *P; // [rsp+60h] [rbp-A0h]
  unsigned int *v161; // [rsp+68h] [rbp-98h]
  __int64 *v162; // [rsp+68h] [rbp-98h]
  __int64 v163; // [rsp+70h] [rbp-90h]
  unsigned int *v164; // [rsp+88h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE v165; // [rsp+98h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v166; // [rsp+B0h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v167; // [rsp+C8h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v168; // [rsp+E0h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE v169; // [rsp+F8h] [rbp-8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v170; // [rsp+110h] [rbp+10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v171; // [rsp+128h] [rbp+28h] BYREF
  struct _KLOCK_QUEUE_HANDLE v172; // [rsp+140h] [rbp+40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v173; // [rsp+158h] [rbp+58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v174; // [rsp+170h] [rbp+70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v175; // [rsp+188h] [rbp+88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v176; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1B8h] [rbp+B8h] BYREF
  KIRQL v178; // [rsp+220h] [rbp+120h]
  int v179; // [rsp+228h] [rbp+128h]
  int v180; // [rsp+230h] [rbp+130h]
  int v181; // [rsp+238h] [rbp+138h]
  unsigned int *v182; // [rsp+238h] [rbp+138h]
  __int64 *v183; // [rsp+238h] [rbp+138h]

  v3 = *((_QWORD *)a1 + 11);
  v4 = 0;
  v5 = 0;
  v180 = 0;
  v179 = 0;
  v7 = *(_QWORD *)(v3 + 96);
  v151 = *(_QWORD *)(v3 + 104);
  v152 = v7;
  v8 = *(_QWORD *)(v7 + 24);
  v181 = 0;
  v163 = 0LL;
  if ( bTracingEnabled && (*((_DWORD *)a1 + 16) & 0x20) != 0 )
  {
    v100 = *(_QWORD *)(v3 + 56);
    if ( !v100 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
      v100 = v3;
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pp(v100, &AbortQueuePacket, a3, a1, v100);
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v33 = (volatile signed __int32 *)*((_QWORD *)a1 + 37);
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v33, 0);
      *((_QWORD *)a1 + 37) = 0LL;
    }
    v34 = (volatile signed __int32 *)*((_QWORD *)a1 + 36);
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v34, 0);
      *((_QWORD *)a1 + 36) = 0LL;
    }
  }
  v178 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1904), &LockHandle);
  v13 = *((_DWORD *)a1 + 20);
  if ( (v13 & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 20) = v13 & 0xFFFFFFEF;
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL);
    v9 = *(unsigned int *)(v10 + 6256);
    if ( (_DWORD)v9 != -1 )
    {
      v101 = *(void (__fastcall **)(_QWORD))(v8 + 2920);
      if ( v101 )
        v101(*(_QWORD *)(v8 + 2952));
    }
  }
  if ( *((_DWORD *)a1 + 13) == 16 || !*((_DWORD *)a1 + 13) )
  {
    v150 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11);
    v150[3] = 281LL;
    v150[4] = 512LL;
    v150[5] = v8;
    v150[6] = v3;
    v150[7] = a1;
    WdLogEvent5_WdCriticalError(v150);
    JUMPOUT(0x1C001C511LL);
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
  v16 = *(_QWORD *)(v3 + 656);
  if ( v16 == v3 + 656 )
  {
    if ( (*(_DWORD *)(v3 + 184) & 0x200) != 0 )
    {
      v38 = 10LL;
      v39 = 11928LL;
      goto LABEL_57;
    }
    if ( (*(_DWORD *)(v3 + 184) & 0x10) == 0
      && (*(_DWORD *)(v3 + 184) & 0x40) == 0
      && (*(_DWORD *)(v3 + 184) & 0x100) == 0 )
    {
      v38 = 0LL;
      v39 = 11961LL;
LABEL_57:
      VidSchiUpdateContextStatus(v3, v38, v39);
    }
  }
  else
  {
    v17 = *(_DWORD *)(v16 + 48);
    v16 -= 32LL;
    if ( (v17 & 3) == 1 )
    {
      v163 = v16;
      *(_DWORD *)(v16 + 80) = v17 | 2;
    }
    if ( (*(_DWORD *)(v3 + 184) & 0x200) != 0
      && (((unsigned __int8)(*(_DWORD *)(v3 + 184) >> 9) | *(_BYTE *)(v3 + 184)) & 2) == 0 )
    {
      v38 = 10LL;
      v39 = 11909LL;
      goto LABEL_57;
    }
  }
  if ( *((_DWORD *)a1 + 12) != 5 || (*((_DWORD *)a1 + 20) & 4) != 0 )
    goto LABEL_28;
  v18 = *((_QWORD *)a1 + 99);
  v19 = *(_QWORD **)(*((_QWORD *)a1 + 11) + 104LL);
  if ( v18 )
  {
    *(_QWORD *)(v18 + 800) = *((_QWORD *)a1 + 100);
    v20 = *((_QWORD *)a1 + 100);
    if ( !v20 )
      goto LABEL_165;
    goto LABEL_164;
  }
  v20 = *((_QWORD *)a1 + 100);
  if ( v20 )
  {
LABEL_164:
    *(_QWORD *)(v20 + 792) = *((_QWORD *)a1 + 99);
LABEL_165:
    *((_QWORD *)a1 + 99) = 0LL;
    *((_QWORD *)a1 + 100) = 0LL;
    goto LABEL_22;
  }
  v21 = *((_DWORD *)a1 + 68);
  if ( (v21 & 2) != 0 )
  {
    v99 = (struct _KEVENT *)*((_QWORD *)a1 + 67);
    if ( (v21 & 8) != 0 )
    {
      ((void (__fastcall *)(struct _KEVENT *, __int64))DxgCoreInterface[62])(v99, v16);
    }
    else
    {
      KeSetEvent(v99, 0, 0);
      ObfDereferenceObject(*((PVOID *)a1 + 67));
    }
    *((_QWORD *)a1 + 67) = 0LL;
  }
  else if ( *((_DWORD *)a1 + 69) )
  {
    do
    {
      LOBYTE(v12) = 1;
      VidSchiCompleteSignalSyncObject(*((_QWORD *)a1 + v5 + 35), v16, (char *)a1 + 8 * v5 + 536, v12);
      ++v5;
    }
    while ( v5 < *((_DWORD *)a1 + 69) );
  }
LABEL_22:
  *((_DWORD *)a1 + 20) |= 4u;
  if ( (*((_DWORD *)a1 + 68) & 2) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 69); ++i )
      VidSchiReleaseSyncObjectReference(*((PVOID *)a1 + i + 35));
  }
  v23 = v19[4];
  v24 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v23 + 8) + 552LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v23 + 1936), &v165);
  v26 = (_QWORD **)(v23 + 1968);
  v27 = *v26;
  if ( *v26 != v26 )
  {
    do
    {
      v102 = (_QWORD *)*v27;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v25, (__int64)(v27 - 25)) )
      {
        v104 = *v103;
        if ( *(_QWORD **)(*v103 + 8LL) != v103 || (v105 = (_QWORD *)v103[1], (_QWORD *)*v105 != v103) )
          __fastfail(3u);
        *v105 = v104;
        *(_QWORD *)(v104 + 8) = v105;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v103 - 24), (struct VIDMM_ALLOC *)(v103 - 25));
      }
      v27 = v102;
    }
    while ( v102 != v26 );
  }
  KeReleaseInStackQueuedSpinLock(&v165);
  v29 = (unsigned int *)v19[156];
  if ( v29 == (unsigned int *)(v19 + 156) )
    goto LABEL_27;
  while ( 1 )
  {
    v94 = v29;
    v29 = *(unsigned int **)v29;
    P = v94;
    v95 = *((_QWORD *)v94 + 2);
    if ( v95 <= v19[155] )
      goto LABEL_213;
    v96 = v94[16];
    LODWORD(v12) = 0;
    if ( v96 )
      break;
LABEL_207:
    LODWORD(v12) = v94[28];
    v106 = 0;
    if ( (_DWORD)v12 )
    {
      v107 = *((_QWORD *)v94 + 9);
      do
      {
        v28 = *(_QWORD *)(v107 + 16LL * v106);
        if ( v28 )
        {
          if ( *(_QWORD *)(v28 + 48) < *(_QWORD *)(v107 + 16LL * v106 + 8) )
            goto LABEL_27;
        }
      }
      while ( ++v106 < (unsigned int)v12 );
    }
    v19[155] = v95;
LABEL_213:
    v108 = (unsigned int *)*((_QWORD *)v94 + 17);
    v153 = v94 + 34;
    if ( v108 != v94 + 34 )
    {
      do
      {
        v109 = *(unsigned int **)v108;
        v110 = v108 - 54;
        v111 = v108;
        v164 = v108;
        v161 = v108 - 54;
        v157 = *(unsigned int **)v108;
        if ( *(unsigned int **)(*(_QWORD *)v108 + 8LL) != v108
          || (v112 = (unsigned int **)*((_QWORD *)v108 + 1), *v112 != v111) )
        {
          __fastfail(3u);
        }
        *v112 = v109;
        *((_QWORD *)v109 + 1) = v112;
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v110);
        *(_QWORD *)v164 = 0LL;
        *((_QWORD *)v161 + 28) = 0LL;
        v108 = v157;
      }
      while ( v157 != v153 );
      v94 = P;
    }
    v113 = (__int64 *)*((_QWORD *)v94 + 15);
    v162 = (__int64 *)(v94 + 30);
    if ( v113 != (__int64 *)(v94 + 30) )
    {
      do
      {
        v114 = *v113;
        v154 = v113;
        v158 = (__int64 *)*v113;
        if ( *(__int64 **)(*v113 + 8) != v113 || (v115 = (__int64 *)v113[1], (__int64 *)*v115 != v113) )
          __fastfail(3u);
        *v115 = v114;
        *(_QWORD *)(v114 + 8) = v115;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand((__int64)v115, (__int64)(v113 - 25)) )
        {
          VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v24, v116);
        }
        else
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v19[4] + 1936LL), &v166);
          v117 = v19[4] + 1968LL;
          v118 = *(__int64 ***)(v19[4] + 1976LL);
          if ( *v118 != (__int64 *)v117 )
            __fastfail(3u);
          *v154 = v117;
          v154[1] = (__int64)v118;
          *v118 = v154;
          *(_QWORD *)(v117 + 8) = v154;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v166);
        }
        v113 = v158;
      }
      while ( v158 != v162 );
      v94 = P;
    }
    v119 = *(_QWORD *)v94;
    if ( *(unsigned int **)(*(_QWORD *)v94 + 8LL) != v94 || (v120 = (unsigned int **)*((_QWORD *)v94 + 1), *v120 != v94) )
      __fastfail(3u);
    v81 = bTracingEnabled == 0;
    *v120 = (unsigned int *)v119;
    *(_QWORD *)(v119 + 8) = v120;
    if ( !v81 )
    {
      v121 = (_QWORD *)v19[1];
      if ( !v121 )
        v121 = v19;
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0px(v94, v119, v28, v121, *((_QWORD *)v94 + 2));
        v94 = P;
      }
    }
    _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v94, v119);
    if ( v29 == (unsigned int *)(v19 + 156) )
      goto LABEL_27;
  }
  v28 = *((_QWORD *)v94 + 3);
  while ( 1 )
  {
    v97 = *(_QWORD *)(v28 + 16LL * (unsigned int)v12);
    if ( v97 )
    {
      if ( *(_QWORD *)(v97 + 160) < *(_QWORD *)(v28 + 16LL * (unsigned int)v12 + 8) )
        break;
    }
    LODWORD(v12) = v12 + 1;
    if ( (unsigned int)v12 >= v96 )
      goto LABEL_207;
  }
LABEL_27:
  v5 = 0;
  v4 = 0;
  v7 = v152;
LABEL_28:
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 1156));
  if ( !*((_DWORD *)a1 + 12) )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 2808));
      v35 = *(_QWORD *)(v8 + 424);
      _bittestandset64(&v35, *(unsigned __int16 *)(v7 + 4));
      *(_QWORD *)(v8 + 424) = v35;
    }
    for ( j = 0; j < *((_DWORD *)a1 + 116); ++j )
    {
      if ( j >= 0x10 )
        break;
      v37 = *((_QWORD *)a1 + j + 59);
      *((_QWORD *)a1 + j + 59) = 0LL;
      if ( v37 )
        _InterlockedDecrement((volatile signed __int32 *)(v37 + 104));
    }
  }
  v30 = *((unsigned int *)a1 + 18);
  v31 = *((_DWORD *)a1 + 18) & 0x4000;
  if ( (*((_DWORD *)a1 + 18) & 0x40020) != 0x40000 && !v31 )
  {
LABEL_59:
    if ( !*((_DWORD *)a1 + 12) )
      VidSchiUpdateLastCompletedPresentTimestamp(v3, 0LL, 0LL);
    goto LABEL_61;
  }
  if ( (v30 & 0x400) == 0 || (v30 & 0x800) != 0 )
    v4 = 1;
  v32 = *((unsigned int *)a1 + 40);
  if ( (v30 & 0x40000) != 0 )
  {
    v5 = v4;
    if ( !v31 )
      v5 = 0;
LABEL_101:
    v179 = v5;
    if ( v5 )
      goto LABEL_102;
    goto LABEL_110;
  }
  if ( (v30 & 4) == 0 )
  {
LABEL_151:
    v5 = v4;
    goto LABEL_101;
  }
  if ( *((_DWORD *)a1 + 98) == 1 )
  {
    v180 = v4;
    goto LABEL_151;
  }
  if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
    goto LABEL_110;
  if ( !v4 )
    goto LABEL_245;
  v5 = 1;
  v180 = 1;
  v179 = 1;
  v181 = 1;
LABEL_102:
  LOBYTE(v30) = 1;
  VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 11), v30, 0LL);
  if ( v181 )
  {
LABEL_245:
    if ( (*((_DWORD *)a1 + 192) & 0x3FF) != 0 )
      VidSchiUnreferencePrimaryAllocations(
        (struct _VIDSCH_GLOBAL *)v8,
        (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 768),
        *((_DWORD *)a1 + 102),
        1 << *(_BYTE *)(*(_QWORD *)(v8 + 8LL * *(unsigned int *)(v3 + 88) + 440) + 6LL),
        0);
  }
  if ( v5 && (_DWORD)v32 != -1 && (*((_DWORD *)a1 + 18) & 0x40000) == 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v151 + 4 * v32 + 1084));
    v70 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v151 + 40) + 24LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(v151 + 32) + 4LL))
                    + 8 * v32
                    + 520);
    if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 8 * v32 + 6248) + 8LL));
      ++**(_DWORD **)(v8 + 8 * v32 + 6248);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v70 + 8));
    ++*(_DWORD *)v70;
    if ( (*((_DWORD *)a1 + 18) & 0x20000) != 0 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1912), &v167);
      *(_DWORD *)(v151 + 4 * v32 + 492) = *((_DWORD *)a1 + 96);
      *(_QWORD *)(v151 + 8 * v32 + 560) = *((unsigned int *)a1 + 33);
      *(_QWORD *)(v151 + 8 * v32 + 688) = *((_QWORD *)a1 + 17);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v167);
    }
  }
LABEL_110:
  if ( (*((_DWORD *)a1 + 18) & 0x40080) != 0 && *((_QWORD *)a1 + 18) && *((_QWORD *)a1 + 19) && v4 )
    VidSchiSubmitPresentHistoryToken(a1, 0LL, 0LL, 0LL);
  if ( v180 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 976));
    _InterlockedDecrement((volatile signed __int32 *)(v151 + 1212));
    _InterlockedDecrement((volatile signed __int32 *)(v151 + 4 * v32 + 1148));
  }
  v71 = (struct _KEVENT *)(v8 + 1864);
  v72 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1920), &v168);
  v73 = *(struct _KEVENT **)(v8 + 1864);
  if ( *(struct _KEVENT **)&v71->Header.Lock != v71 )
  {
    do
    {
      if ( LODWORD(v73->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v73[1].Header.Lock + 4LL * LODWORD(v73[1].Header.WaitListHead.Blink) + 1084) >= *(_DWORD *)(*(_QWORD *)&v73[1].Header.Lock + 228LL) )
          goto LABEL_253;
      }
      else if ( ((__int64)v73[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        Flink = (int)v73[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v73[5].Header.WaitListHead.Blink) = Flink;
        if ( Flink )
          goto LABEL_253;
      }
      ++v73[5].Header.LockNV;
      KeSetEvent(v73 + 4, 0, 0);
LABEL_253:
      v73 = *(struct _KEVENT **)&v73->Header.Lock;
    }
    while ( v73 != v71 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v168);
  KeLowerIrql(v72);
  if ( !v179 )
    goto LABEL_59;
LABEL_61:
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 40) != -1 )
  {
    v77 = *((_QWORD *)a1 + 11);
    if ( v77 )
      v78 = *(_QWORD *)(v77 + 104);
    else
      v78 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL) + 8LL);
    v79 = *(_QWORD *)(v78 + 32);
    v80 = *((_DWORD *)a1 + 18);
    if ( (v80 & 0x800000) != 0 )
      LODWORD(v12) = ((unsigned __int16)*((_DWORD *)a1 + 192) | (unsigned __int16)(*((_DWORD *)a1 + 192) >> 10)) & 0x3FF;
    else
      LODWORD(v12) = (1 << *(_DWORD *)(v79 + 132)) - 1;
    v81 = !_BitScanForward((unsigned int *)&v82, v12);
    if ( v81 )
      LOBYTE(v82) = -1;
    if ( (_DWORD)v12 )
    {
      do
      {
        _InterlockedExchangeAdd(
          (volatile signed __int32 *)(*(_QWORD *)(v79 + 8LL * *((unsigned int *)a1 + 40) + 3032)
                                    + 216LL * (char)v82
                                    + 144),
          0xFFFFFFFF);
        LODWORD(v12) = ~(1 << v82) & v12;
        v81 = !_BitScanForward((unsigned int *)&v82, v12);
        if ( v81 )
          LOBYTE(v82) = -1;
      }
      while ( (_DWORD)v12 );
      v80 = *((_DWORD *)a1 + 18);
    }
    if ( (v80 & 0x800000) != 0 )
      v83 = ((unsigned __int16)*((_DWORD *)a1 + 192) | (unsigned __int16)(*((_DWORD *)a1 + 192) >> 10)) & 0x3FF;
    else
      v83 = (1 << *(_DWORD *)(v8 + 132)) - 1;
    v81 = !_BitScanForward((unsigned int *)&v84, v83);
    if ( v81 )
      LOBYTE(v84) = -1;
    while ( v83 )
    {
      v85 = *((unsigned int *)a1 + 40);
      v86 = v84;
      v87 = *(int *)(*(_QWORD *)(v8 + 8 * v85 + 3032) + 216LL * (unsigned int)(char)v84 + 140);
      if ( (int)v87 > -1 && *(_DWORD *)(136 * v87 + *(_QWORD *)(v8 + 3160) + 112) == 1 )
        VidSchiTryEnterIndependentFlip(v8, v85, (unsigned int)(char)v84);
      v83 &= ~(1 << v86);
      v81 = !_BitScanForward((unsigned int *)&v84, v83);
      if ( v81 )
        LOBYTE(v84) = -1;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(v8 + 964));
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 2820));
  _InterlockedDecrement((volatile signed __int32 *)(v151 + 1220));
  v40 = *((_DWORD *)a1 + 12);
  if ( (unsigned int)(v40 - 4) > 1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v151 + 1224));
    v40 = *((_DWORD *)a1 + 12);
  }
  if ( !v40 && (*((_DWORD *)a1 + 18) & 4) != 0 )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(v8 + 8LL * *((unsigned int *)a1 + 40) + 3032) + 2308LL),
      0xFFFFFFFF);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 776));
  VidSchiProfilePerformanceTick(9, v8, v7, v12, 0LL, (__int64)a1, 0LL, 0LL);
  v41 = *(_QWORD *)(v151 + 32);
  v42 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v41 + 8) + 552LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v41 + 1936), &v169);
  v44 = (_QWORD **)(v41 + 1968);
  v45 = *v44;
  if ( *v44 != v44 )
  {
    do
    {
      v123 = (_QWORD *)*v45;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v43, (__int64)(v45 - 25)) )
      {
        v125 = *v124;
        if ( *(_QWORD **)(*v124 + 8LL) != v124 || (v126 = (_QWORD *)v124[1], (_QWORD *)*v126 != v124) )
          __fastfail(3u);
        *v126 = v125;
        *(_QWORD *)(v125 + 8) = v126;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v124 - 24), (struct VIDMM_ALLOC *)(v124 - 25));
      }
      v45 = v123;
    }
    while ( v123 != v44 );
  }
  KeReleaseInStackQueuedSpinLock(&v169);
  v47 = (_QWORD *)v151;
  v48 = *(unsigned int **)(v151 + 1248);
  if ( v48 == (unsigned int *)(v151 + 1248) )
    goto LABEL_67;
  while ( 2 )
  {
    v89 = v48;
    v48 = *(unsigned int **)v48;
    v90 = *((_QWORD *)v89 + 2);
    if ( v90 <= v47[155] )
    {
LABEL_271:
      v130 = (unsigned int *)*((_QWORD *)v89 + 17);
      if ( v130 != v89 + 34 )
      {
        do
        {
          v131 = *(unsigned int **)v130;
          v132 = v130 - 54;
          v133 = v130;
          v182 = v130;
          v155 = v130 - 54;
          v159 = *(unsigned int **)v130;
          if ( *(unsigned int **)(*(_QWORD *)v130 + 8LL) != v130
            || (v134 = (unsigned int **)*((_QWORD *)v130 + 1), *v134 != v133) )
          {
            __fastfail(3u);
          }
          *v134 = v131;
          *((_QWORD *)v131 + 1) = v134;
          VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v132);
          *(_QWORD *)v182 = 0LL;
          *((_QWORD *)v155 + 28) = 0LL;
          v130 = v159;
        }
        while ( v159 != v89 + 34 );
        v47 = (_QWORD *)v151;
      }
      v135 = (unsigned int *)*((_QWORD *)v89 + 15);
      if ( v135 != v89 + 30 )
      {
        do
        {
          v136 = *(unsigned int **)v135;
          v137 = (__int64)(v135 - 50);
          v138 = v135;
          v183 = (__int64 *)v135;
          v156 = *(unsigned int **)v135;
          if ( *(unsigned int **)(*(_QWORD *)v135 + 8LL) != v135
            || (v139 = (unsigned int **)*((_QWORD *)v135 + 1), *v139 != v138) )
          {
            __fastfail(3u);
          }
          *v139 = v136;
          *((_QWORD *)v136 + 1) = v139;
          if ( (unsigned int)VidSchiCheckConditionDeviceCommand((__int64)v139, v137) )
          {
            VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v42, v140);
          }
          else
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v141 + 32) + 1936LL), &v170);
            v142 = *(_QWORD *)(v151 + 32) + 1968LL;
            v143 = *(__int64 ***)(*(_QWORD *)(v151 + 32) + 1976LL);
            if ( *v143 != (__int64 *)v142 )
              __fastfail(3u);
            *v183 = v142;
            v183[1] = (__int64)v143;
            *v143 = v183;
            *(_QWORD *)(v142 + 8) = v183;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v170);
          }
          v135 = v156;
          v47 = (_QWORD *)v151;
        }
        while ( v156 != v89 + 30 );
      }
      v144 = *(_QWORD *)v89;
      if ( *(unsigned int **)(*(_QWORD *)v89 + 8LL) != v89
        || (v145 = (unsigned int **)*((_QWORD *)v89 + 1), *v145 != v89) )
      {
        __fastfail(3u);
      }
      v81 = bTracingEnabled == 0;
      *v145 = (unsigned int *)v144;
      *(_QWORD *)(v144 + 8) = v145;
      if ( !v81 )
      {
        v146 = (_QWORD *)v47[1];
        if ( !v146 )
          v146 = v47;
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0px(v144, v46, v90, v146, *((_QWORD *)v89 + 2));
      }
      _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v89, v46);
      v47 = (_QWORD *)v151;
      if ( v48 == (unsigned int *)(v151 + 1248) )
        goto LABEL_162;
      continue;
    }
    break;
  }
  v91 = v89[16];
  v92 = 0;
  if ( !v91 )
  {
LABEL_265:
    v127 = v89[28];
    v128 = 0;
    if ( v127 )
    {
      v129 = *((_QWORD *)v89 + 9);
      do
      {
        v46 = *(_QWORD *)(v129 + 16LL * v128);
        if ( v46 )
        {
          if ( *(_QWORD *)(v46 + 48) < *(_QWORD *)(v129 + 16LL * v128 + 8) )
            goto LABEL_162;
        }
      }
      while ( ++v128 < v127 );
    }
    v47[155] = v90;
    goto LABEL_271;
  }
  v46 = *((_QWORD *)v89 + 3);
  while ( 1 )
  {
    v93 = *(_QWORD *)(v46 + 16LL * v92);
    if ( v93 )
    {
      if ( *(_QWORD *)(v93 + 160) < *(_QWORD *)(v46 + 16LL * v92 + 8) )
        break;
    }
    if ( ++v92 >= v91 )
      goto LABEL_265;
  }
LABEL_162:
  v7 = v152;
LABEL_67:
  if ( v179 )
  {
    v74 = (struct _KEVENT **)(v47 + 15);
    v75 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1920), &v171);
    v76 = *v74;
    if ( *v74 == (struct _KEVENT *)v74 )
    {
LABEL_125:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v171);
      KeLowerIrql(v75);
      v47 = (_QWORD *)v151;
      goto LABEL_68;
    }
    while ( LODWORD(v76->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v76[1].Header.Lock + 4LL * LODWORD(v76[1].Header.WaitListHead.Blink) + 1084) < *(_DWORD *)(*(_QWORD *)&v76[1].Header.Lock + 228LL) )
        goto LABEL_123;
LABEL_124:
      v76 = *(struct _KEVENT **)&v76->Header.Lock;
      if ( v76 == (struct _KEVENT *)v74 )
        goto LABEL_125;
    }
    if ( ((__int64)v76[1].Header.WaitListHead.Flink & 0x10) != 0 )
    {
      v147 = (int)v76[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v76[5].Header.WaitListHead.Blink) = v147;
      if ( v147 )
        goto LABEL_124;
    }
LABEL_123:
    ++v76[5].Header.LockNV;
    KeSetEvent(v76 + 4, 0, 0);
    goto LABEL_124;
  }
LABEL_68:
  if ( v180 )
  {
    VidSchiSignalRegisteredEvent(v8, v47 + 17);
    VidSchiSignalRegisteredEvent(v8, v8 + 1848);
    *(_QWORD *)(v8 + 1792) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v8 + 1760), 0, 0);
  }
  v49 = (struct _KEVENT **)(v7 + 424);
  v50 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1920), &v172);
  for ( k = *v49; k != (struct _KEVENT *)v49; k = *(struct _KEVENT **)&k->Header.Lock )
  {
    if ( LODWORD(k->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&k[1].Header.Lock + 4LL * LODWORD(k[1].Header.WaitListHead.Blink) + 1084) >= *(_DWORD *)(*(_QWORD *)&k[1].Header.Lock + 228LL) )
        continue;
    }
    else if ( ((__int64)k[1].Header.WaitListHead.Flink & 0x10) != 0 )
    {
      v148 = (int)k[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(k[5].Header.WaitListHead.Blink) = v148;
      if ( v148 )
        continue;
    }
    ++k[5].Header.LockNV;
    KeSetEvent(k + 4, 0, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v172);
  KeLowerIrql(v50);
  v52 = (struct _KEVENT *)(v8 + 1832);
  v53 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1920), &v173);
  v54 = *(struct _KEVENT **)(v8 + 1832);
  if ( *(struct _KEVENT **)&v52->Header.Lock != v52 )
  {
    do
    {
      if ( LODWORD(v54->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v54[1].Header.Lock + 4LL * LODWORD(v54[1].Header.WaitListHead.Blink) + 1084) >= *(_DWORD *)(*(_QWORD *)&v54[1].Header.Lock + 228LL) )
          goto LABEL_155;
      }
      else if ( ((__int64)v54[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v88 = (int)v54[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v54[5].Header.WaitListHead.Blink) = v88;
        if ( v88 )
          goto LABEL_155;
      }
      ++v54[5].Header.LockNV;
      KeSetEvent(v54 + 4, 0, 0);
LABEL_155:
      v54 = *(struct _KEVENT **)&v54->Header.Lock;
    }
    while ( v54 != v52 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v173);
  KeLowerIrql(v53);
  *(_QWORD *)(v152 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v152 + 296), 0, 0);
  *(_QWORD *)(v8 + 1680) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v8 + 1648), 0, 0);
  if ( (*((_DWORD *)a1 + 16) & 1) == 0 )
  {
    v58 = *((_DWORD *)a1 + 12);
    if ( !v58 || v58 == 7 )
    {
      v56 = (struct _KEVENT *)*((_QWORD *)a1 + 45);
      if ( v56 )
      {
        KeSetEvent(v56, 0, 0);
        ObfDereferenceObject(*((PVOID *)a1 + 45));
      }
    }
    else if ( v58 == 6 )
    {
      v56 = (struct _KEVENT *)*((_QWORD *)a1 + 38);
      if ( v56 )
        KeSetEvent(v56, 0, 0);
    }
  }
  v59 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 24LL);
  if ( !*((_DWORD *)a1 + 12) && (*((_QWORD *)a1 + 76) || *((_QWORD *)a1 + 33)) )
  {
    v149 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v56, v55, v57);
    v149[3] = 281LL;
    v149[4] = 2560LL;
    v149[5] = a1;
    v149[6] = *((_QWORD *)a1 + 76);
    v149[7] = *((_QWORD *)a1 + 33);
    WdLogEvent5_WdCriticalError(v149);
    JUMPOUT(0x1C001C4ADLL);
  }
  v60 = WdLogNewEntry5_WdEvent(v56, v55);
  *(_QWORD *)(v60 + 24) = a1;
  *(_QWORD *)(v60 + 32) = v3;
  WdLogEvent5_WdEvent(v60);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  v61 = (KSPIN_LOCK *)(v59 + 1912);
  v62 = (char *)a1 + 8;
  *((_DWORD *)a1 + 13) = 0;
  KeAcquireInStackQueuedSpinLock(v61, &v174);
  v63 = *((_QWORD *)a1 + 1);
  if ( *(char **)(*(_QWORD *)v62 + 8LL) != v62 || (v64 = (char **)*((_QWORD *)a1 + 2), *v64 != v62) )
    __fastfail(3u);
  *v64 = (char *)v63;
  *(_QWORD *)(v63 + 8) = v64;
  if ( v3 != -768 )
    --*(_DWORD *)(v3 + 768);
  KeReleaseInStackQueuedSpinLock(&v174);
  if ( (*((_DWORD *)a1 + 16) & 0x40) != 0 )
  {
    VidSchiInterlockedInsertTailList(v61, v3 + 728, (_QWORD *)a1 + 1, (_DWORD *)(v3 + 744));
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v61, &v175);
    v65 = *(char ***)(v3 + 712);
    if ( *v65 != (char *)(v3 + 704) )
      __fastfail(3u);
    *(_QWORD *)v62 = v3 + 704;
    *((_QWORD *)a1 + 2) = v65;
    *v65 = v62;
    *(_QWORD *)(v3 + 712) = v62;
    if ( v3 != -720 )
      ++*(_DWORD *)(v3 + 720);
    KeReleaseInStackQueuedSpinLock(&v175);
  }
  if ( (*((_DWORD *)a1 + 16) & 0x40) == 0 )
  {
    v66 = (_QWORD **)(v3 + 704);
    while ( 1 )
    {
      v67 = 0LL;
      KeAcquireInStackQueuedSpinLock(v61, &v176);
      v68 = *v66;
      if ( *v66 != v66 && *(_DWORD *)(v3 + 720) > 0x10u )
      {
        v67 = *v66;
        if ( (_QWORD **)v68[1] != v66 || (v98 = (_QWORD *)*v68, (_QWORD *)v98[1] != v67) )
          __fastfail(3u);
        *v66 = v98;
        v98[1] = v66;
        --*(_DWORD *)(v3 + 720);
      }
      KeReleaseInStackQueuedSpinLock(&v176);
      if ( !v67 )
        break;
      ExFreePoolWithTag(v67 - 1, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v178);
  return (struct _VIDSCH_QUEUE_PACKET *)v163;
}
