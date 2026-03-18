/*
 * XREFs of VidSchiCompleteFlipEntry @ 0x1C0003040
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004480 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000C430 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C000FCE8 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C0013B4C (VidSchiCompletePendingFlip.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0023240 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     VidSchiCancelIndependentFlips @ 0x1C0025AB4 (VidSchiCancelIndependentFlips.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0025C30 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C0025F40 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002763C (VidSchiRestartQueuedFlip.c)
 * Callees:
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00028AC (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiUnwaitContext @ 0x1C000DA38 (VidSchiUnwaitContext.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00106A4 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0010E14 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0010EC0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001236C (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0012CEC (VidSchiTryEnterIndependentFlip.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0012EF8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0012F58 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C001E4C4 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     Template_px @ 0x1C0025444 (Template_px.c)
 *     Template_pxqqpqx @ 0x1C00254C0 (Template_pxqqpqx.c)
 */

__int64 __fastcall VidSchiCompleteFlipEntry(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        _BYTE *a7)
{
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // r11
  unsigned int v12; // r9d
  int v13; // r14d
  unsigned int v14; // ebx
  unsigned int v15; // r12d
  int v16; // r10d
  __int64 v17; // rdi
  __int64 v18; // r13
  unsigned int v19; // ecx
  int v20; // r10d
  volatile signed __int32 *v21; // rax
  KSPIN_LOCK *v22; // rax
  volatile signed __int32 *v23; // rcx
  unsigned int v24; // r9d
  int v25; // ecx
  _DWORD *v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // r11d
  unsigned int v29; // edx
  bool v30; // zf
  unsigned int v31; // eax
  int v32; // ebx
  unsigned int v33; // r10d
  __int64 v34; // rbx
  __int64 v35; // rcx
  _QWORD **v36; // rbx
  _QWORD *v37; // r9
  unsigned int *v38; // rax
  unsigned int i; // edx
  __int64 v40; // rax
  __int64 v41; // r8
  int v42; // ecx
  __int64 v43; // r9
  __int64 v44; // rdx
  int v45; // ebx
  __int64 v46; // r13
  _QWORD *v47; // rbx
  int j; // edi
  _QWORD *v49; // rcx
  int v50; // edx
  int v51; // ebx
  __int64 **v52; // r15
  _QWORD *v53; // r15
  __int64 v54; // rbx
  struct _KEVENT *v55; // r12
  struct _KEVENT *v56; // r13
  struct _KEVENT **v57; // r15
  KIRQL v58; // r13
  struct _KEVENT *v59; // r12
  struct _KEVENT *v60; // r15
  KIRQL v61; // r13
  struct _KEVENT *v62; // r12
  struct _KEVENT *v63; // r15
  KIRQL v64; // r13
  struct _KEVENT *v65; // r12
  struct _KEVENT *v66; // r14
  KIRQL v67; // r15
  struct _KEVENT *v68; // rdi
  __int64 v70; // r8
  __int64 v71; // rax
  int v72; // eax
  int v73; // r9d
  int v74; // ecx
  __int64 v75; // rcx
  int v76; // ecx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v77; // rdx
  int v78; // r9d
  __int64 v79; // rdx
  bool v80; // al
  __int64 v81; // r8
  void (__fastcall *v82)(_QWORD, __int64, __int64, __int64); // rax
  CRefCountedBuffer **v83; // rax
  CRefCountedBuffer *v84; // rcx
  __int64 v85; // rcx
  char v86; // cl
  _QWORD *v87; // r9
  _QWORD *v88; // r11
  __int64 v89; // rcx
  _QWORD *v90; // rax
  unsigned int *v91; // rcx
  __int64 v92; // r10
  unsigned int v93; // r9d
  unsigned int v94; // edx
  __int64 v95; // r11
  __int64 v96; // r8
  unsigned int *v97; // rdx
  unsigned int *v98; // r9
  unsigned int *v99; // r8
  unsigned int *v100; // rax
  unsigned int *v101; // rdx
  unsigned int **v102; // rcx
  unsigned int *v103; // r8
  unsigned int *v104; // rdx
  unsigned int *v105; // rdx
  unsigned int **v106; // rcx
  struct VIDMM_ALLOC *v107; // r9
  __int64 v108; // rcx
  _QWORD *v109; // rdx
  __int64 v110; // rdx
  unsigned int **v111; // rax
  __int64 v112; // r9
  __int64 *v113; // rcx
  __int64 v114; // rax
  struct _VIDSCH_CONTEXT *v115; // rcx
  int v116; // ecx
  int v117; // ecx
  int Flink; // ecx
  KSPIN_LOCK *v119; // rbx
  struct _KEVENT *v120; // rcx
  bool v121; // [rsp+50h] [rbp-B0h]
  unsigned int v122; // [rsp+54h] [rbp-ACh]
  int v123; // [rsp+58h] [rbp-A8h]
  int v124; // [rsp+58h] [rbp-A8h]
  unsigned int *v125; // [rsp+58h] [rbp-A8h]
  unsigned int *v126; // [rsp+58h] [rbp-A8h]
  CRefCountedBuffer **P; // [rsp+60h] [rbp-A0h]
  _DWORD *Pa; // [rsp+60h] [rbp-A0h]
  unsigned int *Pb; // [rsp+60h] [rbp-A0h]
  volatile signed __int32 *v130; // [rsp+68h] [rbp-98h]
  unsigned int v131; // [rsp+68h] [rbp-98h]
  unsigned int *v132; // [rsp+68h] [rbp-98h]
  _QWORD *v133; // [rsp+70h] [rbp-90h]
  unsigned int *v134; // [rsp+70h] [rbp-90h]
  unsigned int *v135; // [rsp+70h] [rbp-90h]
  unsigned int v136; // [rsp+78h] [rbp-88h]
  VIDMM_GLOBAL *v137; // [rsp+78h] [rbp-88h]
  unsigned int v138; // [rsp+80h] [rbp-80h]
  unsigned int *v139; // [rsp+80h] [rbp-80h]
  __int64 v140; // [rsp+88h] [rbp-78h]
  __int64 v141; // [rsp+B8h] [rbp-48h]
  unsigned int *v142; // [rsp+C0h] [rbp-40h]
  __int64 v143; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE v144; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v146; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v147; // [rsp+118h] [rbp+18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v148; // [rsp+130h] [rbp+30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v149; // [rsp+148h] [rbp+48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v150; // [rsp+160h] [rbp+60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v151; // [rsp+178h] [rbp+78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v152; // [rsp+190h] [rbp+90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v153; // [rsp+1A8h] [rbp+A8h] BYREF
  char v156; // [rsp+220h] [rbp+120h]
  KIRQL v158; // [rsp+240h] [rbp+140h]

  v156 = a3;
  v7 = a1;
  v8 = a3;
  if ( a7 )
    *a7 = 0;
  if ( !*(_DWORD *)(a1 + 964) )
    return 0LL;
  v9 = a2;
  v140 = a2;
  v10 = *(_QWORD *)(a1 + 8LL * a2 + 2992);
  v141 = v10;
  v11 = *(_QWORD *)(v10 + 8 * v8 + 24);
  v143 = v11;
  if ( !v11 )
    return 0LL;
  v12 = a4;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v122 = 0;
  while ( 2 )
  {
    v16 = 4673;
    v17 = 1224LL * v12 + v11 + 56;
    v18 = 0LL;
    v19 = *(_DWORD *)(v17 + 1044);
    if ( v19 > 0xC || !_bittest(&v16, v19) )
      v18 = *(_QWORD *)(*(_QWORD *)v17 + 104LL);
    v20 = a6;
    v123 = 1;
    if ( a6 )
    {
      if ( a6 == 6 || a6 == 9 )
      {
        v73 = 1;
        if ( v19 <= 0xC )
        {
          v72 = 4673;
          if ( _bittest(&v72, v19) )
            v73 = 0;
        }
        if ( a6 == 9 )
        {
          v80 = v19 == 5 || v19 == 15;
          v123 = v80;
        }
        else if ( v19 == 5 || v19 == 15 || v19 == 13 )
        {
          v73 = 0;
        }
        if ( v19 - 7 <= 1 )
        {
          if ( *(_BYTE *)(v17 + 1057) )
            ++*(_QWORD *)(v18 + 8 * v9 + 336);
          _InterlockedIncrement((volatile signed __int32 *)(v7 + 972));
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 2308));
          if ( *(_DWORD *)(v17 + 1044) == 8 && !*(_BYTE *)(v17 + 1057) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v18 + 4 * v9 + 1060));
            v75 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 40) + 24LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v18 + 32) + 4LL))
                            + 8 * v9
                            + 520);
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 8 * v9 + 5544) + 8LL));
            _InterlockedIncrement((volatile signed __int32 *)(v75 + 8));
            _InterlockedIncrement((volatile signed __int32 *)(v7 + 960));
            _InterlockedIncrement((volatile signed __int32 *)(v18 + 1188));
            _InterlockedIncrement((volatile signed __int32 *)(v18 + 4 * v9 + 1124));
          }
        }
      }
      else
      {
        if ( a6 != 12 )
          goto LABEL_55;
        if ( v19 - 2 > 1 )
        {
          if ( (v19 == 5 || v19 == 15) && (*(_DWORD *)(v17 + 1112) & 0x20) != 0 && a7 )
            *a7 = 1;
          goto LABEL_55;
        }
        v73 = (*(_DWORD *)(v17 + 1112) >> 5) & 1;
        if ( !v73 )
        {
LABEL_108:
          v12 = a4;
          goto LABEL_55;
        }
        *(_DWORD *)(v11 + 40) = ((_BYTE)a4 + 1) & 0x3F;
      }
      if ( !v73 )
        goto LABEL_108;
    }
    else if ( v19 - 10 > 1 )
    {
      goto LABEL_55;
    }
    if ( *(_DWORD *)(v17 + 1044) == 1 )
    {
      --*(_DWORD *)(v7 + 968);
      --*(_DWORD *)(v10 + 2304);
    }
    v21 = *(volatile signed __int32 **)(v17 + 1136);
    *(_DWORD *)(v17 + 1044) = a6;
    v130 = v21;
    if ( v21 )
    {
      v22 = *(KSPIN_LOCK **)(v17 + 1144);
      P = (CRefCountedBuffer **)v22;
      if ( v22 )
      {
        KeAcquireInStackQueuedSpinLock(v22 + 2, &v144);
        v83 = P;
        v84 = P[1];
        if ( v84 )
        {
          CRefCountedBuffer::RefCountedBufferRelease(v84);
          v83 = P;
        }
        v83[1] = (CRefCountedBuffer *)v130;
        _InterlockedIncrement(v130 + 1);
        KeReleaseInStackQueuedSpinLock(&v144);
        v20 = a6;
        *(_QWORD *)(v17 + 1144) = 0LL;
      }
      v23 = *(volatile signed __int32 **)(v17 + 1136);
      if ( _InterlockedExchangeAdd(v23 + 1, 0xFFFFFFFF) == 1 )
      {
        ExFreePoolWithTag((PVOID)v23, 0);
        v20 = a6;
      }
      *(_QWORD *)(v17 + 1136) = 0LL;
    }
    if ( !v20 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1888), &LockHandle);
      if ( (*(_DWORD *)(v17 + 1112) & 0x20) == 0 )
        *(_DWORD *)(*(_QWORD *)(v10 + 16) + 4 * v140 + 468) = *(_DWORD *)(v17 + 1048);
      *(_QWORD *)(*(_QWORD *)(v10 + 16) + 8 * v140 + 536) = *(_QWORD *)(v17 + 1104);
      *(_QWORD *)(*(_QWORD *)(v10 + 16) + 8 * v140 + 664) = *(_QWORD *)(v17 + 1088);
      *(_QWORD *)(*(_QWORD *)(v10 + 16) + 8 * v140 + 792) = *(_QWORD *)(v17 + 1096);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v20 = a6;
    }
    if ( (*(_DWORD *)(v17 + 1112) & 0x20) == 0 )
      goto LABEL_23;
    v77 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v17 + 1128);
    if ( !v77 )
      goto LABEL_23;
    v121 = 1;
    if ( v20 )
    {
      if ( v20 == 9 )
      {
        v121 = v123 != 0;
      }
      else
      {
        if ( v20 != 6 )
        {
          VidSchiPropagatePresentHistoryToken(
            *(PKSPIN_LOCK *)(v17 + 1120),
            *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v17 + 1128),
            0,
            (*(_DWORD *)(v17 + 1112) & 0x40) != 0,
            0,
            0,
            *(_QWORD *)(v17 + 1144),
            *(_QWORD *)(v17 + 1136),
            0LL);
          goto LABEL_133;
        }
        VidSchiPropagatePresentHistoryToken(
          *(PKSPIN_LOCK *)(v17 + 1120),
          v77,
          1,
          (*(_DWORD *)(v17 + 1112) & 0x40) != 0,
          0,
          0,
          *(_QWORD *)(v17 + 1144),
          *(_QWORD *)(v17 + 1136),
          0LL);
      }
    }
    VidSchiPropagatePresentHistoryToken(
      *(PKSPIN_LOCK *)(v17 + 1120),
      *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v17 + 1128),
      v121,
      (*(_DWORD *)(v17 + 1112) & 0x40) != 0,
      0,
      0,
      *(_QWORD *)(v17 + 1144),
      *(_QWORD *)(v17 + 1136),
      0LL);
LABEL_133:
    if ( a6 && bTracingEnabled )
    {
      if ( v18 )
      {
        v79 = *(_QWORD *)(v18 + 8);
        v78 = *(_DWORD *)(v7 + 2160);
        if ( !v79 )
          LODWORD(v79) = v18;
      }
      else
      {
        LOBYTE(v78) = 0;
        LODWORD(v79) = 0;
      }
      v81 = *(_QWORD *)(v17 + 1152);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v85 = *(_DWORD *)(v81 + 4) * ((8 * *(_DWORD *)(v81 + 8) + 167) & 0xFFFFFFF8);
        Template_pxqqpqx(
          v85,
          v79,
          v81,
          *(_QWORD *)(v7 + 16),
          *(_QWORD *)(v85 + v81 + 40),
          a2,
          *(_DWORD *)(v17 + 1048),
          v79,
          v78,
          v156);
      }
    }
LABEL_23:
    v24 = *(_DWORD *)(v17 + 1060);
    v25 = 0;
    v26 = *(_DWORD **)(v17 + 1152);
    v27 = *(_DWORD *)(v17 + 1064);
    Pa = v26;
    v124 = 0;
    v131 = v27;
    if ( v24 )
    {
      do
      {
        if ( (v24 & 1) != 0 )
        {
          if ( (v27 & 1) != 0 )
          {
            v28 = (unsigned __int8)*v26;
            if ( *(_BYTE *)(v7 + 132) )
              v29 = *((unsigned __int8 *)Pa + 1);
            else
              v29 = 0;
            v30 = !_BitScanForward(&v31, v28);
            v136 = v29;
            v32 = 0;
            if ( v30 )
              LOBYTE(v31) = -1;
            v33 = (char)v31;
            v30 = !_BitScanForward(&v31, v29);
            if ( v30 )
              LOBYTE(v31) = -1;
            v31 = (char)v31;
            v138 = (char)v31;
            while ( v28 || v29 )
            {
              if ( v33 >= v31 )
              {
                v86 = -1;
                v29 &= ~(1 << v31);
                v30 = !_BitScanForward(&v31, v29);
                v136 = v29;
                if ( !v30 )
                  v86 = v31;
                v31 = v86;
                v138 = v86;
              }
              else
              {
                v70 = *(_QWORD *)((char *)&Pa[12 * (v32 + Pa[1] * v124) + 12] + Pa[1] * ((8 * Pa[2] + 167) & 0xFFFFFFF8));
                v71 = *(_QWORD *)(v70 + 96);
                _InterlockedDecrement((volatile signed __int32 *)(v70 + 104));
                v28 &= ~(1 << v33);
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v71 + 16) + 8LL));
                v30 = !_BitScanForward((unsigned int *)&v71, v28);
                if ( v30 )
                  LOBYTE(v71) = -1;
                v29 = v136;
                v33 = (char)v71;
                v31 = v138;
              }
              ++v32;
            }
            v7 = a1;
            v25 = v124;
            v27 = v131;
            v26 = Pa;
          }
          v124 = ++v25;
        }
        v27 >>= 1;
        v24 >>= 1;
        v131 = v27;
      }
      while ( v24 );
      v10 = v141;
      v14 = v122;
    }
    if ( !v18 )
      goto LABEL_43;
    v34 = *(_QWORD *)(v18 + 32);
    v137 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v34 + 8) + 440LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v34 + 1912), &v146);
    v36 = (_QWORD **)(v34 + 1936);
    v37 = *v36;
    if ( *v36 != v36 )
    {
      do
      {
        v133 = (_QWORD *)*v37;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v35, v37 - 25) )
        {
          v89 = *v87;
          v90 = (_QWORD *)v87[1];
          if ( *(_QWORD **)(*v87 + 8LL) != v87 || (_QWORD *)*v90 != v87 )
            __fastfail(3u);
          *v90 = v89;
          *(_QWORD *)(v89 + 8) = v90;
          VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v87 - 24), (struct VIDMM_ALLOC *)(v87 - 25));
          v88 = v133;
        }
        v37 = v88;
      }
      while ( v88 != v36 );
    }
    KeReleaseInStackQueuedSpinLock(&v146);
    v38 = *(unsigned int **)(v18 + 1224);
    if ( v38 == (unsigned int *)(v18 + 1224) )
      goto LABEL_42;
    while ( 1 )
    {
      v91 = v38;
      Pb = v38;
      v38 = *(unsigned int **)v38;
      v132 = v38;
      v92 = *((_QWORD *)v91 + 2);
      if ( v92 > *(_QWORD *)(v18 + 1216) )
        break;
LABEL_187:
      v97 = (unsigned int *)*((_QWORD *)v91 + 11);
      v98 = v91 + 22;
      v139 = v91 + 22;
      if ( v97 != v91 + 22 )
      {
        do
        {
          v99 = v97 - 54;
          v100 = v97;
          v125 = *(unsigned int **)v97;
          v101 = *(unsigned int **)v97;
          v102 = (unsigned int **)*((_QWORD *)v99 + 28);
          v134 = v99;
          if ( *((unsigned int **)v101 + 1) != v99 + 54 || *v102 != v100 )
            __fastfail(3u);
          *v102 = v101;
          *((_QWORD *)v101 + 1) = v102;
          VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v99);
          v97 = v125;
          v98 = v139;
          *((_QWORD *)v134 + 27) = 0LL;
          *((_QWORD *)v134 + 28) = 0LL;
        }
        while ( v125 != v139 );
        v38 = v132;
        v91 = Pb;
      }
      v103 = (unsigned int *)*((_QWORD *)v91 + 9);
      v104 = v91 + 18;
      v126 = v91 + 18;
      if ( v103 != v91 + 18 )
      {
        do
        {
          v135 = v103 - 50;
          v105 = *(unsigned int **)v103;
          v106 = (unsigned int **)*((_QWORD *)v103 + 1);
          v142 = *(unsigned int **)v103;
          if ( *(unsigned int **)(*(_QWORD *)v103 + 8LL) != v103 || *v106 != v103 )
            __fastfail(3u);
          *v106 = v105;
          *((_QWORD *)v105 + 1) = v106;
          if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v106, v103 - 50) )
          {
            VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v137, v107);
          }
          else
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v18 + 32) + 1912LL), &v147);
            v108 = *(_QWORD *)(v18 + 32) + 1936LL;
            v109 = *(_QWORD **)(*(_QWORD *)(v18 + 32) + 1944LL);
            if ( *v109 != v108 )
              __fastfail(3u);
            *((_QWORD *)v135 + 25) = v108;
            *((_QWORD *)v135 + 26) = v109;
            *v109 = v135 + 50;
            *(_QWORD *)(v108 + 8) = v135 + 50;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v147);
          }
          v104 = v126;
          v103 = v142;
        }
        while ( v142 != v126 );
        v38 = v132;
        v91 = Pb;
        v98 = v139;
      }
      if ( *(unsigned int **)v104 == v104 && *(unsigned int **)v98 == v98 )
      {
        v110 = *(_QWORD *)v91;
        v111 = (unsigned int **)*((_QWORD *)v91 + 1);
        if ( *(unsigned int **)(*(_QWORD *)v91 + 8LL) != v91 || *v111 != v91 )
          __fastfail(3u);
        v30 = bTracingEnabled == 0;
        *v111 = (unsigned int *)v110;
        *(_QWORD *)(v110 + 8) = v111;
        if ( !v30 )
        {
          v112 = *(_QWORD *)(v18 + 8);
          if ( !v112 )
            v112 = v18;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            Template_px(v91, v110, v103, v112, *((_QWORD *)v91 + 2));
            v91 = Pb;
          }
        }
        _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v91, v110);
        v38 = v132;
      }
      if ( v38 == (unsigned int *)(v18 + 1224) )
        goto LABEL_42;
    }
    v93 = v91[16];
    v94 = 0;
    if ( !v93 )
    {
LABEL_186:
      *(_QWORD *)(v18 + 1216) = v92;
      goto LABEL_187;
    }
    v95 = *((_QWORD *)v91 + 3);
    while ( 1 )
    {
      v96 = *(_QWORD *)(v95 + 16LL * v94);
      if ( v96 )
      {
        if ( *(_QWORD *)(v96 + 152) < *(_QWORD *)(v95 + 16LL * v94 + 8) )
          break;
      }
      if ( ++v94 >= v93 )
        goto LABEL_186;
    }
LABEL_42:
    v14 = v122;
LABEL_43:
    for ( i = 0; i < *(_DWORD *)(v17 + 1072); --*(_DWORD *)(*(_QWORD *)(v17 + 8 * v40) + 800LL) )
      v40 = i++;
    v122 = ++v14;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 1188), 0xFFFFFFFF);
    _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 960), 0xFFFFFFFF);
    _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 4 * v140 + 1124), 0xFFFFFFFF);
    if ( (*(_DWORD *)(v17 + 1112) & 0x10) != 0 )
      v41 = (unsigned __int8)**(_DWORD **)(v17 + 1152) | (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v17 + 1152) + 1LL);
    else
      v41 = (unsigned int)((1 << *(_DWORD *)(v7 + 128)) - 1);
    v30 = !_BitScanForward((unsigned int *)&v42, v41);
    v43 = (unsigned int)v41;
    if ( v30 )
      LOBYTE(v42) = -1;
    if ( (_DWORD)v41 )
    {
      do
      {
        --*(_DWORD *)(272LL * (char)v42 + *(_QWORD *)(v7 + 8 * v140 + 2992) + 164);
        v43 = ~(1 << v42) & (unsigned int)v43;
        v30 = !_BitScanForward((unsigned int *)&v42, v43);
        if ( v30 )
          LOBYTE(v42) = -1;
      }
      while ( (_DWORD)v43 );
    }
    v15 |= v41;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 4 * v140 + 1060), 0xFFFFFFFF);
    --*(_DWORD *)(v18 + 1192);
    v44 = *(unsigned int *)(*(_QWORD *)(v7 + 8 * v140 + 2992) + 18896LL);
    if ( (_DWORD)v44 != -1 )
    {
      v82 = *(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v7 + 2864);
      if ( v82 )
        v82(*(_QWORD *)(v7 + 2912), v44, v41, v43);
    }
    v11 = v143;
    v12 = a4;
    *(_DWORD *)(v143 + 52) = a4;
LABEL_55:
    if ( v12 != a5 )
    {
      v9 = v140;
      v12 = ((_BYTE)v12 + 1) & 0x3F;
      a4 = v12;
      continue;
    }
    break;
  }
  if ( v14 )
  {
    v30 = !_BitScanForward((unsigned int *)&v45, v15);
    if ( v30 )
      LOBYTE(v45) = -1;
    while ( v15 )
    {
      if ( *(_DWORD *)(272LL * (char)v45 + v10 + 156) == 1 )
        VidSchiTryEnterIndependentFlip(v7, a2, (unsigned int)(char)v45);
      v15 &= ~(1 << v45);
      v30 = !_BitScanForward((unsigned int *)&v45, v15);
      if ( v30 )
        LOBYTE(v45) = -1;
    }
    v14 = v122;
  }
  *(_DWORD *)(v7 + 964) -= v14;
  *(_DWORD *)(v10 + 2300) -= v14;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 972), -v14);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 2308), -v14);
  if ( !a6
    && _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 46928), 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)(v7 + 2080), 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v7 + 16) + 24LL));
    *(_QWORD *)(v7 + 2040) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v7 + 2048), CriticalWorkQueue);
  }
  v46 = *(_QWORD *)(v10 + 16);
  if ( v46 )
  {
    v47 = *(_QWORD **)(v46 + 64);
    for ( j = 0; v47 != (_QWORD *)(v46 + 64); j |= v50 )
    {
      v49 = v47 - 3;
      v50 = 0;
      if ( (v47[19] & 0x10) != 0 )
      {
        *((_DWORD *)v49 + 44) &= ~0x10u;
        v50 = (unsigned __int8)VidSchiUnwaitContext(v49, 19606LL);
      }
      v47 = (_QWORD *)*v47;
    }
    v51 = 0;
    v52 = (__int64 **)(*(_QWORD *)(v46 + 32) + 3120LL);
    while ( *v52 != (__int64 *)v52 )
    {
      v113 = *v52;
      v114 = **v52;
      if ( (__int64 **)(*v52)[1] != v52 || *(__int64 **)(v114 + 8) != v113 )
        __fastfail(3u);
      *v52 = (__int64 *)v114;
      v115 = (struct _VIDSCH_CONTEXT *)(v113 - 5);
      *(_QWORD *)(v114 + 8) = v52;
      *((_QWORD *)v115 + 5) = 0LL;
      *((_QWORD *)v115 + 6) = 0LL;
      v51 |= VidSchiUpdateFlipContextStatus(v115);
    }
    v13 = j | v51;
    v14 = v122;
  }
  v53 = *(_QWORD **)(v10 + 16);
  if ( v53 )
  {
    v54 = v53[4];
    v55 = (struct _KEVENT *)(v53 + 12);
    v158 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v54 + 1896), &v148);
    v56 = (struct _KEVENT *)v53[12];
    if ( *(struct _KEVENT **)&v55->Header.Lock == v55 )
    {
LABEL_78:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v148);
      KeLowerIrql(v158);
      v57 = (struct _KEVENT **)(v53 + 14);
      v58 = KfRaiseIrql(2u);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v54 + 1896), &v149);
      v59 = *v57;
      if ( *v57 == (struct _KEVENT *)v57 )
      {
LABEL_79:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v149);
        KeLowerIrql(v58);
        v60 = (struct _KEVENT *)(v54 + 1824);
        v61 = KfRaiseIrql(2u);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v54 + 1896), &v150);
        v62 = *(struct _KEVENT **)(v54 + 1824);
        if ( *(struct _KEVENT **)&v60->Header.Lock == v60 )
        {
LABEL_80:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v150);
          KeLowerIrql(v61);
          v63 = (struct _KEVENT *)(v54 + 1808);
          v64 = KfRaiseIrql(2u);
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v54 + 1896), &v151);
          v65 = *(struct _KEVENT **)(v54 + 1808);
          if ( *(struct _KEVENT **)&v63->Header.Lock == v63 )
          {
LABEL_81:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v151);
            KeLowerIrql(v64);
            *(_QWORD *)(v54 + 1656) = MEMORY[0xFFFFF78000000320];
            KeSetEvent((PRKEVENT)(v54 + 1624), 0, 0);
            *(_QWORD *)(v54 + 1768) = MEMORY[0xFFFFF78000000320];
            KeSetEvent((PRKEVENT)(v54 + 1736), 0, 0);
            if ( v13 )
            {
              *(_QWORD *)(v54 + 1376) = MEMORY[0xFFFFF78000000320];
              KeSetEvent((PRKEVENT)(v54 + 1344), 0, 0);
            }
            v66 = (struct _KEVENT *)(v54 + 1840);
            v67 = KfRaiseIrql(2u);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v54 + 1896), &v152);
            v68 = *(struct _KEVENT **)(v54 + 1840);
            if ( *(struct _KEVENT **)&v66->Header.Lock == v66 )
            {
LABEL_84:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v152);
              KeLowerIrql(v67);
              if ( *(_WORD *)(v10 + 18772) )
              {
                v119 = *(KSPIN_LOCK **)(v54 + 1872);
                KeAcquireInStackQueuedSpinLock(v119, &v153);
                v120 = (struct _KEVENT *)v119[1];
                if ( v120 )
                  KeSetEvent(v120, 0, 0);
                KeReleaseInStackQueuedSpinLock(&v153);
              }
              return v122;
            }
            while ( 2 )
            {
              if ( LODWORD(v68->Header.WaitListHead.Blink) == 4 )
              {
                if ( *(_DWORD *)(*(_QWORD *)&v68[1].Header.Lock + 4LL * LODWORD(v68[1].Header.WaitListHead.Blink) + 1060) < *(_DWORD *)(*(_QWORD *)&v68[1].Header.Lock + 204LL) )
                  goto LABEL_243;
              }
              else if ( ((__int64)v68[1].Header.WaitListHead.Flink & 4) == 0
                     || (Flink = (int)v68[1].Header.WaitListHead.Blink->Flink,
                         (HIDWORD(v68[5].Header.WaitListHead.Blink) = Flink) == 0) )
              {
LABEL_243:
                ++v68[5].Header.LockNV;
                KeSetEvent(v68 + 4, 0, 0);
              }
              v68 = *(struct _KEVENT **)&v68->Header.Lock;
              if ( v68 == v66 )
                goto LABEL_84;
              continue;
            }
          }
          while ( 2 )
          {
            if ( LODWORD(v65->Header.WaitListHead.Blink) == 4 )
            {
              if ( *(_DWORD *)(*(_QWORD *)&v65[1].Header.Lock + 4LL * LODWORD(v65[1].Header.WaitListHead.Blink) + 1060) >= *(_DWORD *)(*(_QWORD *)&v65[1].Header.Lock + 204LL) )
                goto LABEL_112;
            }
            else if ( ((__int64)v65[1].Header.WaitListHead.Flink & 4) != 0 )
            {
              v74 = (int)v65[1].Header.WaitListHead.Blink->Flink;
              HIDWORD(v65[5].Header.WaitListHead.Blink) = v74;
              if ( v74 )
              {
LABEL_112:
                v65 = *(struct _KEVENT **)&v65->Header.Lock;
                if ( v65 == v63 )
                  goto LABEL_81;
                continue;
              }
            }
            break;
          }
          ++v65[5].Header.LockNV;
          KeSetEvent(v65 + 4, 0, 0);
          goto LABEL_112;
        }
        while ( 2 )
        {
          if ( LODWORD(v62->Header.WaitListHead.Blink) == 4 )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v62[1].Header.Lock + 4LL * LODWORD(v62[1].Header.WaitListHead.Blink) + 1060) < *(_DWORD *)(*(_QWORD *)&v62[1].Header.Lock + 204LL) )
              goto LABEL_125;
          }
          else if ( ((__int64)v62[1].Header.WaitListHead.Flink & 4) == 0
                 || (v76 = (int)v62[1].Header.WaitListHead.Blink->Flink,
                     (HIDWORD(v62[5].Header.WaitListHead.Blink) = v76) == 0) )
          {
LABEL_125:
            ++v62[5].Header.LockNV;
            KeSetEvent(v62 + 4, 0, 0);
          }
          v62 = *(struct _KEVENT **)&v62->Header.Lock;
          if ( v62 == v60 )
            goto LABEL_80;
          continue;
        }
      }
      while ( 2 )
      {
        if ( LODWORD(v59->Header.WaitListHead.Blink) == 4 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v59[1].Header.Lock + 4LL * LODWORD(v59[1].Header.WaitListHead.Blink) + 1060) < *(_DWORD *)(*(_QWORD *)&v59[1].Header.Lock + 204LL) )
            goto LABEL_231;
        }
        else if ( ((__int64)v59[1].Header.WaitListHead.Flink & 4) == 0
               || (v117 = (int)v59[1].Header.WaitListHead.Blink->Flink,
                   (HIDWORD(v59[5].Header.WaitListHead.Blink) = v117) == 0) )
        {
LABEL_231:
          ++v59[5].Header.LockNV;
          KeSetEvent(v59 + 4, 0, 0);
        }
        v59 = *(struct _KEVENT **)&v59->Header.Lock;
        if ( v59 == (struct _KEVENT *)v57 )
          goto LABEL_79;
        continue;
      }
    }
    while ( 2 )
    {
      if ( LODWORD(v56->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v56[1].Header.Lock + 4LL * LODWORD(v56[1].Header.WaitListHead.Blink) + 1060) < *(_DWORD *)(*(_QWORD *)&v56[1].Header.Lock + 204LL) )
          goto LABEL_94;
      }
      else if ( ((__int64)v56[1].Header.WaitListHead.Flink & 4) == 0
             || (v116 = (int)v56[1].Header.WaitListHead.Blink->Flink,
                 (HIDWORD(v56[5].Header.WaitListHead.Blink) = v116) == 0) )
      {
LABEL_94:
        ++v56[5].Header.LockNV;
        KeSetEvent(v56 + 4, 0, 0);
      }
      v56 = *(struct _KEVENT **)&v56->Header.Lock;
      if ( v56 == v55 )
        goto LABEL_78;
      continue;
    }
  }
  return v14;
}
