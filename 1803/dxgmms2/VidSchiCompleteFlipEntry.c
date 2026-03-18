/*
 * XREFs of VidSchiCompleteFlipEntry @ 0x1C0010550
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000D930 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000F6B0 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C001161C (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     VidSchiCancelIndependentFlips @ 0x1C0015490 (VidSchiCancelIndependentFlips.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C0015864 (VidSchiCompletePendingFlipOnPlane.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0028260 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002AB00 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C002AE60 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002C8AC (VidSchiRestartQueuedFlip.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00019F0 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00027D0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0005290 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiUnwaitContext @ 0x1C0011080 (VidSchiUnwaitContext.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0012384 (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013070 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0015360 (VidSchiTryEnterIndependentFlip.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00159C0 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0022668 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0022AA8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     McTemplateK0px @ 0x1C002A14C (McTemplateK0px.c)
 *     McTemplateK0pxqqpqx @ 0x1C002A1C4 (McTemplateK0pxqqpqx.c)
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
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // r11d
  unsigned int v12; // r12d
  int v13; // r13d
  int v14; // r10d
  __int64 v15; // r8
  __int64 v16; // rdi
  unsigned int v17; // ecx
  int v18; // r10d
  volatile signed __int32 *v19; // rbx
  __int64 v20; // r13
  int v21; // ecx
  _DWORD *v22; // rcx
  unsigned int v23; // r11d
  unsigned int v24; // eax
  int v25; // edi
  unsigned int v26; // r9d
  unsigned int v27; // ebx
  bool v28; // zf
  int v29; // eax
  int v30; // esi
  unsigned int v31; // r10d
  unsigned int v32; // r13d
  volatile signed __int32 *v33; // r10
  __int64 v34; // rbx
  __int64 v35; // rcx
  _QWORD **v36; // rbx
  _QWORD *v37; // r9
  __int64 v38; // r8
  char *i; // r13
  unsigned int j; // ecx
  __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // ecx
  __int64 v44; // r9
  __int64 v45; // rdx
  int v46; // eax
  char v47; // bl
  __int64 v48; // rdx
  __int64 v49; // rbx
  _QWORD *v50; // rdi
  int k; // r12d
  _QWORD *v52; // rcx
  int v53; // edx
  __int64 v54; // rdi
  int v55; // ebx
  _QWORD **v56; // rdi
  _QWORD *v57; // rax
  int v58; // r15d
  _QWORD *v59; // rbx
  __int64 v60; // rdi
  struct _KEVENT *v61; // r14
  KSPIN_LOCK *v62; // rsi
  KIRQL v63; // r13
  struct _KEVENT *v64; // r12
  struct _KEVENT **v65; // rbx
  KIRQL v66; // r14
  struct _KEVENT *v67; // r12
  struct _KEVENT *v68; // rbx
  KIRQL v69; // r12
  struct _KEVENT *v70; // r14
  struct _KEVENT *v71; // rbx
  KIRQL v72; // r12
  struct _KEVENT *v73; // r14
  struct _KEVENT **v74; // rdi
  KIRQL v75; // bl
  struct _KEVENT *v76; // rsi
  __int64 v78; // r8
  __int64 v79; // rax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v80; // rdx
  bool v81; // bl
  int v82; // ecx
  int v83; // r9d
  int v84; // eax
  __int64 v85; // rcx
  CRefCountedBuffer *v86; // rcx
  __int64 v87; // rdx
  int v88; // r9d
  __int64 v89; // r8
  __int64 v90; // rcx
  char v91; // cl
  int v92; // eax
  _QWORD *v93; // r13
  _QWORD *v94; // r9
  __int64 v95; // rcx
  _QWORD *v96; // rax
  char *v97; // rcx
  __int64 v98; // rax
  unsigned int v99; // r9d
  unsigned int v100; // edx
  __int64 v101; // r11
  unsigned int v102; // r9d
  unsigned int v103; // edx
  __int64 v104; // r11
  char *v105; // rax
  char *v106; // rdx
  char *v107; // r8
  char *v108; // rcx
  char **v109; // rax
  __int64 *v110; // rdx
  __int64 v111; // rcx
  __int64 *v112; // r8
  struct VIDMM_ALLOC *v113; // r9
  __int64 v114; // r10
  __int64 v115; // rcx
  __int64 **v116; // rdx
  _QWORD *v117; // rdx
  void **v118; // rax
  volatile signed __int32 *v119; // r9
  void (__fastcall *v120)(_QWORD, __int64, __int64, __int64); // rax
  _QWORD *v121; // rcx
  int v122; // ecx
  int v123; // ecx
  int v124; // ecx
  int Flink; // ecx
  unsigned int v126; // [rsp+50h] [rbp-B0h]
  volatile signed __int32 *v127; // [rsp+58h] [rbp-A8h]
  _DWORD *v128; // [rsp+60h] [rbp-A0h]
  char *v129; // [rsp+60h] [rbp-A0h]
  __int64 *v130; // [rsp+60h] [rbp-A0h]
  int v131; // [rsp+68h] [rbp-98h]
  unsigned int v132; // [rsp+68h] [rbp-98h]
  char *v133; // [rsp+68h] [rbp-98h]
  char *P; // [rsp+70h] [rbp-90h]
  __int64 v135; // [rsp+78h] [rbp-88h]
  char *v136; // [rsp+78h] [rbp-88h]
  __int64 *v137; // [rsp+78h] [rbp-88h]
  __int64 v138; // [rsp+80h] [rbp-80h]
  char *v139; // [rsp+88h] [rbp-78h]
  __int64 *v140; // [rsp+88h] [rbp-78h]
  __int64 v141; // [rsp+98h] [rbp-68h]
  __int64 v142; // [rsp+A0h] [rbp-60h]
  VIDMM_GLOBAL *v143; // [rsp+C8h] [rbp-38h]
  _QWORD *v144; // [rsp+D0h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE v145; // [rsp+D8h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F0h] [rbp-10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v147; // [rsp+108h] [rbp+8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v148; // [rsp+120h] [rbp+20h] BYREF
  struct _KLOCK_QUEUE_HANDLE v149; // [rsp+138h] [rbp+38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v150; // [rsp+150h] [rbp+50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v151; // [rsp+168h] [rbp+68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v152; // [rsp+180h] [rbp+80h] BYREF
  struct _KLOCK_QUEUE_HANDLE v153; // [rsp+198h] [rbp+98h] BYREF
  char v156; // [rsp+210h] [rbp+110h]
  unsigned int v157; // [rsp+218h] [rbp+118h]

  v157 = a4;
  v156 = a3;
  v7 = a1;
  if ( a7 )
    *a7 = 0;
  if ( !*(_DWORD *)(a1 + 980) )
    return 0LL;
  v138 = a2;
  v8 = a2;
  v9 = *(_QWORD *)(a1 + 8LL * a2 + 3032);
  v144 = (_QWORD *)(a1 + 3032 + 8LL * a2);
  v142 = v9;
  v10 = *(_QWORD *)(v9 + 8LL * a3 + 24);
  v141 = v10;
  if ( !v10 )
    return 0LL;
  v11 = 0;
  v126 = 0;
  v12 = 0;
  v13 = 1;
  while ( 1 )
  {
    v14 = 4673;
    v127 = 0LL;
    v15 = 0LL;
    v16 = 1280LL * a4 + v10 + 56;
    v135 = v16;
    v17 = *(_DWORD *)(v16 + 1052);
    if ( v17 > 0xC || !_bittest(&v14, v17) )
    {
      v15 = *(_QWORD *)(v16 + 1040);
      v127 = (volatile signed __int32 *)v15;
    }
    v18 = a6;
    v131 = 1;
    if ( !a6 )
    {
      if ( v17 - 10 > 1 )
        goto LABEL_134;
LABEL_11:
      v19 = *(volatile signed __int32 **)(v16 + 1144);
      *(_DWORD *)(v16 + 1052) = a6;
      if ( v19 )
      {
        v20 = *(_QWORD *)(v16 + 1152);
        if ( v20 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v20 + 16), &v145);
          v86 = *(CRefCountedBuffer **)(v20 + 8);
          if ( v86 )
            CRefCountedBuffer::RefCountedBufferRelease(v86);
          *(_QWORD *)(v20 + 8) = v19;
          _InterlockedIncrement(v19 + 1);
          KeReleaseInStackQueuedSpinLock(&v145);
          v18 = a6;
          v19 = *(volatile signed __int32 **)(v16 + 1144);
          *(_QWORD *)(v16 + 1152) = 0LL;
        }
        if ( _InterlockedExchangeAdd(v19 + 1, 0xFFFFFFFF) == 1 )
        {
          ExFreePoolWithTag((PVOID)v19, 0);
          v18 = a6;
        }
        v13 = v131;
        *(_QWORD *)(v16 + 1144) = 0LL;
      }
      if ( !v18 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1912), &LockHandle);
        if ( (*(_DWORD *)(v16 + 1120) & 0x20) == 0 )
          *(_DWORD *)(*(_QWORD *)(v9 + 16) + 4 * v138 + 492) = *(_DWORD *)(v16 + 1056);
        *(_QWORD *)(*(_QWORD *)(v9 + 16) + 8 * v138 + 560) = *(_QWORD *)(v16 + 1112);
        *(_QWORD *)(*(_QWORD *)(v9 + 16) + 8 * v138 + 688) = *(_QWORD *)(v16 + 1096);
        *(_QWORD *)(*(_QWORD *)(v9 + 16) + 8 * v138 + 816) = *(_QWORD *)(v16 + 1104);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v18 = a6;
      }
      v21 = *(_DWORD *)(v16 + 1120);
      if ( (v21 & 0x20) != 0 )
      {
        v80 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v16 + 1136);
        if ( v80 )
        {
          v81 = 1;
          if ( v18 )
          {
            if ( v18 == 9 )
            {
              v81 = v13 != 0;
            }
            else if ( v18 == 6 )
            {
              VidSchiPropagatePresentHistoryToken(
                *(PKSPIN_LOCK *)(v16 + 1128),
                v80,
                1,
                (*(_DWORD *)(v16 + 1120) & 0x40) != 0,
                0,
                0,
                *(_QWORD *)(v16 + 1152),
                *(_QWORD *)(v16 + 1144),
                0LL);
              v21 = *(_DWORD *)(v16 + 1120);
              v80 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v16 + 1136);
            }
            else
            {
              v81 = 0;
            }
          }
          VidSchiPropagatePresentHistoryToken(
            *(PKSPIN_LOCK *)(v16 + 1128),
            v80,
            v81,
            (v21 & 0x40) != 0,
            0,
            0,
            *(_QWORD *)(v16 + 1152),
            *(_QWORD *)(v16 + 1144),
            0LL);
          if ( a6 && bTracingEnabled )
          {
            if ( v127 )
            {
              v87 = *((_QWORD *)v127 + 1);
              v88 = *(_DWORD *)(v7 + 2200);
              if ( !v87 )
                LODWORD(v87) = (_DWORD)v127;
            }
            else
            {
              LOBYTE(v88) = 0;
              LODWORD(v87) = 0;
            }
            v89 = *(_QWORD *)(v16 + 1160);
            if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              v90 = *(_DWORD *)(v89 + 4) * ((8 * *(_DWORD *)(v89 + 8) + 175) & 0xFFFFFFF8);
              McTemplateK0pxqqpqx(
                v90,
                v87,
                v89,
                *(_QWORD *)(v7 + 16),
                *(_QWORD *)(v90 + v89 + 40),
                a2,
                *(_DWORD *)(v16 + 1056),
                v87,
                v88,
                v156);
            }
          }
        }
      }
      v22 = *(_DWORD **)(v16 + 1160);
      v128 = v22;
      if ( (*v22 & 0x3FF) == 0 )
      {
        v33 = v127;
        goto LABEL_42;
      }
      v23 = *(_DWORD *)(v16 + 1068);
      v24 = *(_DWORD *)(v16 + 1072);
      v132 = v24;
      if ( v23 )
      {
        v25 = 0;
        do
        {
          if ( (v23 & 1) != 0 )
          {
            if ( (v24 & 1) != 0 )
            {
              v26 = *v22 & 0x3FF;
              if ( *(_BYTE *)(v7 + 136) )
                v27 = (*v22 >> 10) & 0x3FF;
              else
                v27 = 0;
              v28 = !_BitScanForward((unsigned int *)&v29, v26);
              v30 = 0;
              if ( v28 )
                LOBYTE(v29) = -1;
              v31 = (char)v29;
              v28 = !_BitScanForward((unsigned int *)&v29, v27);
              if ( v28 )
                LOBYTE(v29) = -1;
              v32 = (char)v29;
              while ( v26 || v27 )
              {
                if ( v31 >= v32 )
                {
                  v91 = -1;
                  v27 &= ~(1 << v32);
                  v28 = !_BitScanForward((unsigned int *)&v92, v27);
                  if ( !v28 )
                    v91 = v92;
                  v32 = v91;
                }
                else
                {
                  v78 = *(_QWORD *)((char *)&v128[12 * (v30 + v25 * v128[1]) + 12]
                                  + v128[1] * ((8 * v128[2] + 175) & 0xFFFFFFF8));
                  v79 = *(_QWORD *)(v78 + 96);
                  _InterlockedDecrement((volatile signed __int32 *)(v78 + 104));
                  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v79 + 16) + 8LL));
                  v26 &= ~(1 << v31);
                  v28 = !_BitScanForward((unsigned int *)&v79, v26);
                  if ( v28 )
                    LOBYTE(v79) = -1;
                  v31 = (char)v79;
                }
                ++v30;
              }
              v7 = a1;
              v24 = v132;
              v22 = v128;
            }
            ++v25;
          }
          v24 >>= 1;
          v23 >>= 1;
          v132 = v24;
        }
        while ( v23 );
        v16 = v135;
        v9 = v142;
      }
      v33 = v127;
      if ( v127 )
      {
        v34 = *((_QWORD *)v127 + 4);
        v143 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v34 + 8) + 552LL);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v34 + 1936), &v147);
        v36 = (_QWORD **)(v34 + 1968);
        v37 = *v36;
        if ( *v36 != v36 )
        {
          do
          {
            v93 = (_QWORD *)*v37;
            if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v35, (__int64)(v37 - 25)) )
            {
              v95 = *v94;
              if ( *(_QWORD **)(*v94 + 8LL) != v94 || (v96 = (_QWORD *)v94[1], (_QWORD *)*v96 != v94) )
                __fastfail(3u);
              *v96 = v95;
              *(_QWORD *)(v95 + 8) = v96;
              VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v94 - 24), (struct VIDMM_ALLOC *)(v94 - 25));
            }
            v37 = v93;
          }
          while ( v93 != v36 );
        }
        KeReleaseInStackQueuedSpinLock(&v147);
        v33 = v127;
        for ( i = (char *)*((_QWORD *)v127 + 156); i != (char *)(v127 + 312); v33 = v127 )
        {
          v97 = i;
          i = *(char **)i;
          P = v97;
          v98 = *((_QWORD *)v97 + 2);
          if ( v98 > *((_QWORD *)v33 + 155) )
          {
            v99 = *((_DWORD *)v97 + 16);
            v100 = 0;
            if ( v99 )
            {
              v101 = *((_QWORD *)v97 + 3);
              do
              {
                v38 = *(_QWORD *)(v101 + 16LL * v100);
                if ( v38 )
                {
                  if ( *(_QWORD *)(v38 + 160) < *(_QWORD *)(v101 + 16LL * v100 + 8) )
                    goto LABEL_42;
                }
              }
              while ( ++v100 < v99 );
            }
            v102 = *((_DWORD *)v97 + 28);
            v103 = 0;
            if ( v102 )
            {
              v104 = *((_QWORD *)v97 + 9);
              do
              {
                v38 = *(_QWORD *)(v104 + 16LL * v103);
                if ( v38 )
                {
                  if ( *(_QWORD *)(v38 + 48) < *(_QWORD *)(v104 + 16LL * v103 + 8) )
                    goto LABEL_42;
                }
              }
              while ( ++v103 < v102 );
            }
            *((_QWORD *)v33 + 155) = v98;
          }
          v105 = (char *)*((_QWORD *)v97 + 17);
          v139 = v97 + 136;
          if ( v105 != v97 + 136 )
          {
            do
            {
              v106 = *(char **)v105;
              v107 = v105 - 216;
              v108 = v105;
              v136 = v105;
              v129 = v105 - 216;
              v133 = *(char **)v105;
              if ( *(char **)(*(_QWORD *)v105 + 8LL) != v105 || (v109 = (char **)*((_QWORD *)v105 + 1), *v109 != v108) )
                __fastfail(3u);
              *v109 = v106;
              *((_QWORD *)v106 + 1) = v109;
              VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v107);
              *(_QWORD *)v136 = 0LL;
              *((_QWORD *)v129 + 28) = 0LL;
              v105 = v133;
            }
            while ( v133 != v139 );
            v33 = v127;
            v97 = P;
          }
          v110 = (__int64 *)*((_QWORD *)v97 + 15);
          v130 = (__int64 *)(v97 + 120);
          if ( v110 != (__int64 *)(v97 + 120) )
          {
            do
            {
              v111 = *v110;
              v140 = v110;
              v137 = (__int64 *)*v110;
              if ( *(__int64 **)(*v110 + 8) != v110 || (v112 = (__int64 *)v110[1], (__int64 *)*v112 != v110) )
                __fastfail(3u);
              *v112 = v111;
              *(_QWORD *)(v111 + 8) = v112;
              if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v111, (__int64)(v110 - 25)) )
              {
                VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v143, v113);
              }
              else
              {
                KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v114 + 32) + 1936LL), &v148);
                v115 = *((_QWORD *)v127 + 4) + 1968LL;
                v116 = *(__int64 ***)(*((_QWORD *)v127 + 4) + 1976LL);
                if ( *v116 != (__int64 *)v115 )
                  __fastfail(3u);
                *v140 = v115;
                v140[1] = (__int64)v116;
                *v116 = v140;
                *(_QWORD *)(v115 + 8) = v140;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v148);
              }
              v110 = v137;
              v33 = v127;
            }
            while ( v137 != v130 );
            v97 = P;
          }
          v117 = *(_QWORD **)v97;
          if ( *(char **)(*(_QWORD *)v97 + 8LL) != v97 || (v118 = (void **)*((_QWORD *)v97 + 1), *v118 != v97) )
            __fastfail(3u);
          v28 = bTracingEnabled == 0;
          *v118 = v117;
          v117[1] = v118;
          if ( !v28 )
          {
            v119 = (volatile signed __int32 *)*((_QWORD *)v33 + 1);
            if ( !v119 )
              v119 = v33;
            if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              McTemplateK0px(v97, v117, v38, v119, *((_QWORD *)v97 + 2));
              v97 = P;
            }
          }
          _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v97, (unsigned int)v117);
        }
      }
LABEL_42:
      for ( j = 0; j < *(_DWORD *)(v16 + 1080); ++j )
      {
        v41 = *(_QWORD *)(v16 + 8LL * j);
        if ( v41 )
          --*(_DWORD *)(v41 + 784);
      }
      v11 = ++v126;
      _InterlockedExchangeAdd(v33 + 303, 0xFFFFFFFF);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 976), 0xFFFFFFFF);
      v8 = v138;
      _InterlockedExchangeAdd(&v33[v138 + 287], 0xFFFFFFFF);
      v13 = 1;
      if ( (*(_DWORD *)(v16 + 1120) & 0x10) != 0 )
        v42 = ((unsigned __int16)**(_DWORD **)(v16 + 1160) | (unsigned __int16)(**(_DWORD **)(v16 + 1160) >> 10)) & 0x3FF;
      else
        v42 = (unsigned int)((1 << *(_DWORD *)(v7 + 132)) - 1);
      v28 = !_BitScanForward((unsigned int *)&v43, v42);
      v44 = (unsigned int)v42;
      if ( v28 )
        LOBYTE(v43) = -1;
      if ( (_DWORD)v42 )
      {
        do
        {
          --*(_DWORD *)(216LL * (char)v43 + *(_QWORD *)(v7 + 8 * v138 + 3032) + 148);
          v44 = ~(1 << v43) & (unsigned int)v44;
          v28 = !_BitScanForward((unsigned int *)&v43, v44);
          if ( v28 )
            LOBYTE(v43) = -1;
        }
        while ( (_DWORD)v44 );
      }
      v12 |= v42;
      _InterlockedExchangeAdd(&v33[v138 + 271], 0xFFFFFFFF);
      --*((_DWORD *)v33 + 304);
      v45 = *(unsigned int *)(*(_QWORD *)(v7 + 8 * v138 + 3032) + 28128LL);
      if ( (_DWORD)v45 != -1 )
      {
        v120 = *(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v7 + 2904);
        if ( v120 )
        {
          v120(*(_QWORD *)(v7 + 2952), v45, v42, v44);
          v11 = v126;
        }
      }
      v10 = v141;
      a4 = v157;
      *(_DWORD *)(v141 + 52) = v157;
      goto LABEL_56;
    }
    if ( a6 == 9 || a6 == 6 )
    {
      if ( v17 > 0xC || (v84 = 4673, v83 = 0, !_bittest(&v84, v17)) )
        v83 = 1;
      if ( a6 == 9 )
      {
        if ( v17 == 5 || v17 == 15 )
        {
          v13 = 1;
          v131 = 1;
        }
        else
        {
          v13 = 0;
          v131 = 0;
        }
      }
      else if ( v17 == 5 || v17 == 15 || v17 == 13 )
      {
        v83 = 0;
      }
      if ( v17 - 7 <= 1 )
      {
        if ( *(_BYTE *)(v16 + 1065) )
          ++*(_QWORD *)(v15 + 8 * v8 + 360);
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 984));
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 2304));
        if ( *(_DWORD *)(v16 + 1052) == 8 && !*(_BYTE *)(v16 + 1065) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 4 * v8 + 1084));
          v85 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 40) + 24LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(v15 + 32) + 4LL))
                          + 8 * v8
                          + 520);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 8 * v8 + 6248) + 8LL));
          _InterlockedIncrement((volatile signed __int32 *)(v85 + 8));
          _InterlockedIncrement((volatile signed __int32 *)(v7 + 976));
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 1212));
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 4 * v8 + 1148));
          v10 = v141;
        }
      }
      goto LABEL_132;
    }
    if ( a6 != 12 )
      goto LABEL_134;
    if ( v17 - 2 <= 1 )
    {
      v83 = (*(_DWORD *)(v16 + 1120) >> 5) & 1;
      if ( !v83 )
        goto LABEL_133;
      *(_DWORD *)(v10 + 40) = ((_BYTE)v157 + 1) & 0x3F;
LABEL_132:
      if ( !v83 )
      {
LABEL_133:
        a4 = v157;
LABEL_134:
        v13 = 1;
        goto LABEL_56;
      }
      goto LABEL_11;
    }
    if ( v17 != 5 && v17 != 15 || (*(_DWORD *)(v16 + 1120) & 0x20) == 0 )
      goto LABEL_134;
    v13 = 1;
    if ( a7 )
      *a7 = 1;
LABEL_56:
    if ( a4 == a5 )
      break;
    a4 = ((_BYTE)a4 + 1) & 0x3F;
    v157 = a4;
  }
  if ( v11 )
  {
    v28 = !_BitScanForward((unsigned int *)&v46, v12);
    if ( v28 )
      LOBYTE(v46) = -1;
    if ( v12 )
    {
      do
      {
        v47 = v46;
        v48 = *(int *)(216LL * (unsigned int)(char)v46 + *v144 + 140);
        if ( (int)v48 > -1 && *(_DWORD *)(136 * v48 + *(_QWORD *)(v7 + 3160) + 112) == 1 )
          VidSchiTryEnterIndependentFlip(v7, a2, (unsigned int)(char)v46);
        v12 &= ~(1 << v47);
        v28 = !_BitScanForward((unsigned int *)&v46, v12);
        if ( v28 )
          LOBYTE(v46) = -1;
      }
      while ( v12 );
      v9 = v142;
      v11 = v126;
    }
  }
  *(_DWORD *)(v7 + 980) -= v11;
  *(_DWORD *)(v9 + 2300) -= v11;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 984), -v11);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 2304), -v11);
  if ( !a6
    && _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 61280), 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)(v7 + 2112), 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v7 + 16) + 24LL));
    *(_QWORD *)(v7 + 2072) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v7 + 2080), CriticalWorkQueue);
    v11 = v126;
  }
  v49 = *(_QWORD *)(v9 + 16);
  if ( v49 )
  {
    v50 = *(_QWORD **)(v49 + 72);
    for ( k = 0; v50 != (_QWORD *)(v49 + 72); k |= v53 )
    {
      v52 = v50 - 3;
      v53 = 0;
      if ( (v50[20] & 0x10) != 0 )
      {
        *((_DWORD *)v52 + 46) &= ~0x10u;
        v53 = (unsigned __int8)VidSchiUnwaitContext(v52, 20071LL);
      }
      v50 = (_QWORD *)*v50;
    }
    v54 = *(_QWORD *)(v49 + 32);
    v55 = 0;
    v56 = (_QWORD **)(v54 + 3328);
    while ( 1 )
    {
      v57 = *v56;
      if ( *v56 == v56 )
        break;
      if ( (_QWORD **)v57[1] != v56 || (v121 = (_QWORD *)*v57, *(_QWORD **)(*v57 + 8LL) != v57) )
        __fastfail(3u);
      *v56 = v121;
      v121[1] = v56;
      v57[1] = 0LL;
      *v57 = 0LL;
      v55 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v57 - 5));
    }
    v11 = v126;
    v58 = k | v55;
    v59 = *(_QWORD **)(v9 + 16);
    if ( v59 )
    {
      v60 = v59[4];
      v61 = (struct _KEVENT *)(v59 + 15);
      v62 = (KSPIN_LOCK *)(v60 + 1920);
      v63 = KfRaiseIrql(2u);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v60 + 1920), &v149);
      v64 = (struct _KEVENT *)v59[15];
      if ( *(struct _KEVENT **)&v61->Header.Lock == v61 )
      {
LABEL_77:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v149);
        KeLowerIrql(v63);
        v65 = (struct _KEVENT **)(v59 + 17);
        v66 = KfRaiseIrql(2u);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v60 + 1920), &v150);
        v67 = *v65;
        if ( *v65 == (struct _KEVENT *)v65 )
        {
LABEL_78:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v150);
          KeLowerIrql(v66);
          v68 = (struct _KEVENT *)(v60 + 1848);
          v69 = KfRaiseIrql(2u);
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v60 + 1920), &v151);
          v70 = *(struct _KEVENT **)(v60 + 1848);
          if ( *(struct _KEVENT **)&v68->Header.Lock == v68 )
          {
LABEL_79:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v151);
            KeLowerIrql(v69);
            v71 = (struct _KEVENT *)(v60 + 1832);
            v72 = KfRaiseIrql(2u);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v60 + 1920), &v152);
            v73 = *(struct _KEVENT **)(v60 + 1832);
            if ( *(struct _KEVENT **)&v71->Header.Lock == v71 )
            {
LABEL_80:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v152);
              KeLowerIrql(v72);
              *(_QWORD *)(v60 + 1680) = MEMORY[0xFFFFF78000000320];
              KeSetEvent((PRKEVENT)(v60 + 1648), 0, 0);
              *(_QWORD *)(v60 + 1792) = MEMORY[0xFFFFF78000000320];
              KeSetEvent((PRKEVENT)(v60 + 1760), 0, 0);
              if ( v58 )
              {
                *(_QWORD *)(v60 + 1400) = MEMORY[0xFFFFF78000000320];
                KeSetEvent((PRKEVENT)(v60 + 1368), 0, 0);
              }
              v74 = (struct _KEVENT **)(v60 + 1864);
              v75 = KfRaiseIrql(2u);
              KeAcquireInStackQueuedSpinLockAtDpcLevel(v62, &v153);
              v76 = *v74;
              if ( *v74 == (struct _KEVENT *)v74 )
              {
LABEL_83:
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v153);
                KeLowerIrql(v75);
                return v126;
              }
              while ( 2 )
              {
                if ( LODWORD(v76->Header.WaitListHead.Blink) == 4 )
                {
                  if ( *(_DWORD *)(*(_QWORD *)&v76[1].Header.Lock
                                 + 4LL * LODWORD(v76[1].Header.WaitListHead.Blink)
                                 + 1084) >= *(_DWORD *)(*(_QWORD *)&v76[1].Header.Lock + 228LL) )
                    goto LABEL_244;
                }
                else if ( ((__int64)v76[1].Header.WaitListHead.Flink & 0x10) != 0 )
                {
                  Flink = (int)v76[1].Header.WaitListHead.Blink->Flink;
                  HIDWORD(v76[5].Header.WaitListHead.Blink) = Flink;
                  if ( Flink )
                  {
LABEL_244:
                    v76 = *(struct _KEVENT **)&v76->Header.Lock;
                    if ( v76 == (struct _KEVENT *)v74 )
                      goto LABEL_83;
                    continue;
                  }
                }
                break;
              }
              ++v76[5].Header.LockNV;
              KeSetEvent(v76 + 4, 0, 0);
              goto LABEL_244;
            }
            while ( 2 )
            {
              if ( LODWORD(v73->Header.WaitListHead.Blink) == 4 )
              {
                if ( *(_DWORD *)(*(_QWORD *)&v73[1].Header.Lock + 4LL * LODWORD(v73[1].Header.WaitListHead.Blink) + 1084) >= *(_DWORD *)(*(_QWORD *)&v73[1].Header.Lock + 228LL) )
                  goto LABEL_99;
              }
              else if ( ((__int64)v73[1].Header.WaitListHead.Flink & 0x10) != 0 )
              {
                v82 = (int)v73[1].Header.WaitListHead.Blink->Flink;
                HIDWORD(v73[5].Header.WaitListHead.Blink) = v82;
                if ( v82 )
                {
LABEL_99:
                  v73 = *(struct _KEVENT **)&v73->Header.Lock;
                  if ( v73 == v71 )
                    goto LABEL_80;
                  continue;
                }
              }
              break;
            }
            ++v73[5].Header.LockNV;
            KeSetEvent(v73 + 4, 0, 0);
            goto LABEL_99;
          }
          while ( 2 )
          {
            if ( LODWORD(v70->Header.WaitListHead.Blink) == 4 )
            {
              if ( *(_DWORD *)(*(_QWORD *)&v70[1].Header.Lock + 4LL * LODWORD(v70[1].Header.WaitListHead.Blink) + 1084) >= *(_DWORD *)(*(_QWORD *)&v70[1].Header.Lock + 228LL) )
                goto LABEL_234;
            }
            else if ( ((__int64)v70[1].Header.WaitListHead.Flink & 0x10) != 0 )
            {
              v124 = (int)v70[1].Header.WaitListHead.Blink->Flink;
              HIDWORD(v70[5].Header.WaitListHead.Blink) = v124;
              if ( v124 )
              {
LABEL_234:
                v70 = *(struct _KEVENT **)&v70->Header.Lock;
                if ( v70 == v68 )
                  goto LABEL_79;
                continue;
              }
            }
            break;
          }
          ++v70[5].Header.LockNV;
          KeSetEvent(v70 + 4, 0, 0);
          goto LABEL_234;
        }
        while ( 2 )
        {
          if ( LODWORD(v67->Header.WaitListHead.Blink) == 4 )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v67[1].Header.Lock + 4LL * LODWORD(v67[1].Header.WaitListHead.Blink) + 1084) >= *(_DWORD *)(*(_QWORD *)&v67[1].Header.Lock + 228LL) )
              goto LABEL_226;
          }
          else if ( ((__int64)v67[1].Header.WaitListHead.Flink & 0x10) != 0 )
          {
            v123 = (int)v67[1].Header.WaitListHead.Blink->Flink;
            HIDWORD(v67[5].Header.WaitListHead.Blink) = v123;
            if ( v123 )
            {
LABEL_226:
              v67 = *(struct _KEVENT **)&v67->Header.Lock;
              if ( v67 == (struct _KEVENT *)v65 )
                goto LABEL_78;
              continue;
            }
          }
          break;
        }
        ++v67[5].Header.LockNV;
        KeSetEvent(v67 + 4, 0, 0);
        goto LABEL_226;
      }
      while ( 2 )
      {
        if ( LODWORD(v64->Header.WaitListHead.Blink) == 4 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v64[1].Header.Lock + 4LL * LODWORD(v64[1].Header.WaitListHead.Blink) + 1084) >= *(_DWORD *)(*(_QWORD *)&v64[1].Header.Lock + 228LL) )
            goto LABEL_218;
        }
        else if ( ((__int64)v64[1].Header.WaitListHead.Flink & 0x10) != 0 )
        {
          v122 = (int)v64[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v64[5].Header.WaitListHead.Blink) = v122;
          if ( v122 )
          {
LABEL_218:
            v64 = *(struct _KEVENT **)&v64->Header.Lock;
            if ( v64 == v61 )
              goto LABEL_77;
            continue;
          }
        }
        break;
      }
      ++v64[5].Header.LockNV;
      KeSetEvent(v64 + 4, 0, 0);
      goto LABEL_218;
    }
  }
  return v11;
}
