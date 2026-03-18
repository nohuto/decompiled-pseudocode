/*
 * XREFs of VidSchiCompleteFlipEntry @ 0x1C0005730
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C00029E0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004B50 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C0012A30 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     VidSchiCancelIndependentFlips @ 0x1C001514C (VidSchiCancelIndependentFlips.c)
 *     VidSchiCompletePendingFlip @ 0x1C0015E0C (VidSchiCompletePendingFlip.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0025718 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0027CD0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C0028030 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     VidSchiRestartQueuedFlip @ 0x1C00299B0 (VidSchiRestartQueuedFlip.c)
 * Callees:
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0001F00 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0005F30 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiUnwaitContext @ 0x1C000D6E4 (VidSchiUnwaitContext.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0011808 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0011840 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0011D98 (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013ACC (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0015064 (VidSchiTryEnterIndependentFlip.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0015590 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00200AC (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0020580 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     McTemplateK0px @ 0x1C002749C (McTemplateK0px.c)
 *     McTemplateK0pxqqpqx @ 0x1C0027514 (McTemplateK0pxqqpqx.c)
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
  __int64 v7; // rax
  __int64 v8; // r15
  _BYTE *v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // r14d
  int v14; // r10d
  unsigned int v15; // r12d
  __int64 v16; // r13
  __int64 v17; // rdi
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rbx
  volatile signed __int32 *v23; // rcx
  _DWORD *v24; // rcx
  unsigned int v25; // r11d
  unsigned int v26; // eax
  int v27; // edi
  unsigned int v28; // r9d
  unsigned int v29; // ebx
  bool v30; // zf
  __int64 v31; // rax
  int v32; // esi
  unsigned int v33; // r10d
  __int64 v34; // rbx
  __int64 v35; // rcx
  _QWORD **v36; // rbx
  _QWORD *v37; // r9
  unsigned int *v38; // rax
  unsigned int i; // ecx
  __int64 v40; // rdx
  __int64 v41; // r8
  int v42; // ecx
  __int64 v43; // r9
  __int64 v44; // rdx
  unsigned int v45; // eax
  int v46; // ebx
  __int64 v47; // r13
  _QWORD *v48; // rbx
  int j; // edi
  _QWORD *v50; // rcx
  int v51; // edx
  int v52; // ebx
  __int64 v53; // r15
  __int64 v54; // rdi
  __int64 v55; // rbx
  __int64 v57; // r8
  __int64 v58; // rdx
  int v59; // eax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v60; // rdx
  bool v61; // bl
  int v62; // eax
  int v63; // r8d
  __int64 v64; // rcx
  CRefCountedBuffer *v65; // rcx
  __int64 v66; // rdx
  int v67; // r9d
  __int64 v68; // r8
  __int64 v69; // rcx
  char v70; // cl
  _QWORD *v71; // r9
  _QWORD *v72; // r11
  __int64 v73; // rcx
  _QWORD *v74; // rax
  unsigned int *v75; // rcx
  __int64 v76; // r10
  unsigned int v77; // r9d
  unsigned int v78; // edx
  __int64 v79; // r11
  __int64 v80; // r8
  unsigned int *v81; // rdx
  unsigned int *v82; // r9
  char *v83; // r8
  unsigned int *v84; // rax
  unsigned int *v85; // rdx
  unsigned int **v86; // rcx
  unsigned int *v87; // r8
  unsigned int *v88; // rdx
  unsigned int *v89; // r9
  unsigned int *v90; // rdx
  unsigned int **v91; // rcx
  struct VIDMM_ALLOC *v92; // r9
  __int64 v93; // rcx
  _QWORD *v94; // r8
  __int64 v95; // rdx
  unsigned int **v96; // rax
  __int64 v97; // r9
  void (__fastcall *v98)(_QWORD, __int64, __int64, __int64); // rax
  __int64 *v99; // rcx
  __int64 v100; // rax
  __int64 *v101; // rcx
  KSPIN_LOCK *v102; // rbx
  struct _KEVENT *v103; // rcx
  BOOL P; // [rsp+50h] [rbp-B0h]
  unsigned int Pa; // [rsp+50h] [rbp-B0h]
  unsigned int *Pb; // [rsp+50h] [rbp-B0h]
  unsigned int v107; // [rsp+58h] [rbp-A8h]
  unsigned int v108; // [rsp+60h] [rbp-A0h]
  unsigned int *v109; // [rsp+60h] [rbp-A0h]
  __int64 v110; // [rsp+68h] [rbp-98h]
  _DWORD *v111; // [rsp+68h] [rbp-98h]
  unsigned int *v112; // [rsp+68h] [rbp-98h]
  __int64 v113; // [rsp+70h] [rbp-90h]
  _QWORD *v114; // [rsp+70h] [rbp-90h]
  char *v115; // [rsp+70h] [rbp-90h]
  unsigned int *v116; // [rsp+70h] [rbp-90h]
  unsigned int *v117; // [rsp+78h] [rbp-88h]
  unsigned int *v118; // [rsp+78h] [rbp-88h]
  __int64 v119; // [rsp+88h] [rbp-78h]
  __int64 v120; // [rsp+90h] [rbp-70h]
  __int64 v121; // [rsp+B8h] [rbp-48h]
  VIDMM_GLOBAL *v122; // [rsp+C0h] [rbp-40h]
  unsigned int *v123; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE v124; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v126; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v127; // [rsp+118h] [rbp+18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v128; // [rsp+130h] [rbp+30h] BYREF
  char v131; // [rsp+1B0h] [rbp+B0h]
  unsigned int v132; // [rsp+1B8h] [rbp+B8h]

  v132 = a4;
  v131 = a3;
  v7 = a3;
  v8 = a1;
  v9 = a7;
  if ( a7 )
    *a7 = 0;
  if ( !*(_DWORD *)(a1 + 964) )
    return 0LL;
  v10 = a2;
  v119 = a2;
  v11 = *(_QWORD *)(a1 + 8LL * a2 + 3008);
  v121 = v11;
  v12 = *(_QWORD *)(v11 + 8 * v7 + 24);
  v120 = v12;
  if ( !v12 )
    return 0LL;
  v13 = 0;
  v14 = 0;
  v107 = 0;
  v15 = 0;
  while ( 2 )
  {
    v16 = 0LL;
    v17 = 1232LL * a4 + v12 + 56;
    v113 = v17;
    v18 = *(_DWORD *)(v17 + 1052);
    if ( v18 > 0xC || (v19 = 4673, !_bittest(&v19, v18)) )
      v16 = *(_QWORD *)(v17 + 1040);
    v20 = a6;
    P = 1;
    if ( a6 )
    {
      if ( a6 == 6 || a6 == 9 )
      {
        v63 = 1;
        if ( v18 <= 0xC )
        {
          v62 = 4673;
          if ( _bittest(&v62, v18) )
            v63 = 0;
        }
        if ( a6 == 9 )
        {
          P = v18 == 5 || v18 == 15;
        }
        else if ( v18 == 5 || v18 == 15 || v18 == 13 )
        {
          v63 = 0;
        }
        if ( v18 - 7 <= 1 )
        {
          if ( *(_BYTE *)(v17 + 1065) )
            ++*(_QWORD *)(v16 + 8 * v10 + 336);
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 968));
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 2944));
          if ( *(_DWORD *)(v17 + 1052) == 8 && !*(_BYTE *)(v17 + 1065) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 4 * v10 + 1060));
            v64 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 40) + 24LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v16 + 32) + 4LL))
                            + 8 * v10
                            + 520);
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 8 * v10 + 6056) + 8LL));
            _InterlockedIncrement((volatile signed __int32 *)(v64 + 8));
            _InterlockedIncrement((volatile signed __int32 *)(v8 + 960));
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 1188));
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 4 * v10 + 1124));
            v12 = v120;
          }
        }
      }
      else
      {
        if ( a6 != 12 )
          goto LABEL_192;
        if ( v18 - 2 > 1 )
        {
          if ( (v18 == 5 || v18 == 15) && (*(_DWORD *)(v17 + 1120) & 0x20) != 0 )
          {
            v45 = v132;
            if ( v9 )
              *v9 = 1;
            goto LABEL_57;
          }
LABEL_192:
          v45 = v132;
          goto LABEL_57;
        }
        v45 = v132;
        v63 = (*(_DWORD *)(v17 + 1120) >> 5) & 1;
        if ( !v63 )
          goto LABEL_56;
        *(_DWORD *)(v12 + 40) = ((_BYTE)v132 + 1) & 0x3F;
      }
      if ( !v63 )
      {
        v45 = v132;
        goto LABEL_56;
      }
    }
    else if ( v18 - 10 > 1 )
    {
      goto LABEL_192;
    }
    v21 = *(_QWORD *)(v17 + 1144);
    *(_DWORD *)(v17 + 1052) = a6;
    v110 = v21;
    if ( v21 )
    {
      v22 = *(_QWORD *)(v17 + 1152);
      if ( v22 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v22 + 16), &v124);
        v65 = *(CRefCountedBuffer **)(v22 + 8);
        if ( v65 )
          CRefCountedBuffer::RefCountedBufferRelease(v65);
        *(_QWORD *)(v22 + 8) = v110;
        _InterlockedIncrement((volatile signed __int32 *)(v110 + 4));
        KeReleaseInStackQueuedSpinLock(&v124);
        v20 = a6;
        *(_QWORD *)(v17 + 1152) = 0LL;
      }
      v23 = *(volatile signed __int32 **)(v17 + 1144);
      if ( _InterlockedExchangeAdd(v23 + 1, 0xFFFFFFFF) == 1 )
      {
        ExFreePoolWithTag((PVOID)v23, 0);
        v20 = a6;
      }
      v10 = v119;
      *(_QWORD *)(v17 + 1144) = 0LL;
    }
    if ( !v20 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1896), &LockHandle);
      if ( (*(_DWORD *)(v17 + 1120) & 0x20) == 0 )
        *(_DWORD *)(*(_QWORD *)(v11 + 16) + 4 * v10 + 468) = *(_DWORD *)(v17 + 1056);
      *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8 * v10 + 536) = *(_QWORD *)(v17 + 1112);
      *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8 * v10 + 664) = *(_QWORD *)(v17 + 1096);
      *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8 * v10 + 792) = *(_QWORD *)(v17 + 1104);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v20 = a6;
    }
    if ( (*(_DWORD *)(v17 + 1120) & 0x20) != 0 )
    {
      v60 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v17 + 1136);
      if ( v60 )
      {
        v61 = 1;
        if ( v20 )
        {
          if ( v20 == 9 )
          {
            v61 = P;
          }
          else if ( v20 == 6 )
          {
            VidSchiPropagatePresentHistoryToken(
              *(PKSPIN_LOCK *)(v17 + 1128),
              v60,
              1,
              (*(_DWORD *)(v17 + 1120) & 0x40) != 0,
              0,
              0,
              *(_QWORD *)(v17 + 1152),
              *(_QWORD *)(v17 + 1144),
              0LL);
          }
          else
          {
            v61 = 0;
          }
        }
        VidSchiPropagatePresentHistoryToken(
          *(PKSPIN_LOCK *)(v17 + 1128),
          *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v17 + 1136),
          v61,
          (*(_DWORD *)(v17 + 1120) & 0x40) != 0,
          0,
          0,
          *(_QWORD *)(v17 + 1152),
          *(_QWORD *)(v17 + 1144),
          0LL);
        if ( a6 && bTracingEnabled )
        {
          if ( v16 )
          {
            v66 = *(_QWORD *)(v16 + 8);
            v67 = *(_DWORD *)(v8 + 2176);
            if ( !v66 )
              LODWORD(v66) = v16;
          }
          else
          {
            LOBYTE(v67) = 0;
            LODWORD(v66) = 0;
          }
          v68 = *(_QWORD *)(v17 + 1160);
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v69 = *(_DWORD *)(v68 + 4) * ((8 * *(_DWORD *)(v68 + 8) + 175) & 0xFFFFFFF8);
            McTemplateK0pxqqpqx(
              v69,
              v66,
              v68,
              *(_QWORD *)(v8 + 16),
              *(_QWORD *)(v69 + v68 + 40),
              a2,
              *(_DWORD *)(v17 + 1056),
              v66,
              v67,
              v131);
          }
        }
      }
    }
    v24 = *(_DWORD **)(v17 + 1160);
    v111 = v24;
    if ( (*v24 & 0x3FF) == 0 )
      goto LABEL_42;
    v25 = *(_DWORD *)(v17 + 1068);
    v26 = *(_DWORD *)(v17 + 1072);
    v108 = v26;
    if ( v25 )
    {
      v27 = 0;
      do
      {
        if ( (v25 & 1) != 0 )
        {
          if ( (v26 & 1) != 0 )
          {
            v28 = *v24 & 0x3FF;
            if ( *(_BYTE *)(v8 + 132) )
              v29 = (*v24 >> 10) & 0x3FF;
            else
              v29 = 0;
            v30 = !_BitScanForward((unsigned int *)&v31, v28);
            v32 = 0;
            if ( v30 )
              LOBYTE(v31) = -1;
            v33 = (char)v31;
            v30 = !_BitScanForward((unsigned int *)&v31, v29);
            if ( v30 )
              LOBYTE(v31) = -1;
            LODWORD(v31) = (char)v31;
            Pa = (char)v31;
            while ( v28 || v29 )
            {
              if ( v33 >= (unsigned int)v31
                || (v57 = *(_QWORD *)((char *)&v111[12 * (v32 + v27 * v111[1]) + 12]
                                    + v111[1] * ((8 * v111[2] + 175) & 0xFFFFFFF8)),
                    v31 = *(_QWORD *)(v57 + 96),
                    _InterlockedDecrement((volatile signed __int32 *)(v57 + 104)),
                    v58 = *(_QWORD *)(v31 + 16),
                    LOBYTE(v31) = Pa,
                    _InterlockedDecrement((volatile signed __int32 *)(v58 + 8)),
                    v33 >= Pa) )
              {
                v70 = -1;
                v29 &= ~(1 << v31);
                v30 = !_BitScanForward((unsigned int *)&v31, v29);
                if ( !v30 )
                  v70 = v31;
                LODWORD(v31) = v70;
                Pa = v70;
              }
              else
              {
                v28 &= ~(1 << v33);
                v30 = !_BitScanForward((unsigned int *)&v59, v28);
                if ( v30 )
                  LOBYTE(v59) = -1;
                v33 = (char)v59;
                LODWORD(v31) = Pa;
              }
              ++v32;
            }
            v8 = a1;
            v13 = 0;
            v26 = v108;
            v24 = v111;
          }
          ++v27;
        }
        v26 >>= 1;
        v25 >>= 1;
        v108 = v26;
      }
      while ( v25 );
      v17 = v113;
      v11 = v121;
    }
    if ( !v16 )
      goto LABEL_42;
    v34 = *(_QWORD *)(v16 + 32);
    v122 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v34 + 8) + 536LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v34 + 1920), &v126);
    v36 = (_QWORD **)(v34 + 1952);
    v37 = *v36;
    if ( *v36 != v36 )
    {
      do
      {
        v114 = (_QWORD *)*v37;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v35, v37 - 25) )
        {
          v73 = *v71;
          if ( *(_QWORD **)(*v71 + 8LL) != v71 || (v74 = (_QWORD *)v71[1], (_QWORD *)*v74 != v71) )
            __fastfail(3u);
          *v74 = v73;
          *(_QWORD *)(v73 + 8) = v74;
          VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v71 - 24), (struct VIDMM_ALLOC *)(v71 - 25));
          v72 = v114;
        }
        v37 = v72;
      }
      while ( v72 != v36 );
    }
    KeReleaseInStackQueuedSpinLock(&v126);
    v38 = *(unsigned int **)(v16 + 1224);
    if ( v38 == (unsigned int *)(v16 + 1224) )
      goto LABEL_42;
    while ( 1 )
    {
      v75 = v38;
      Pb = v38;
      v38 = *(unsigned int **)v38;
      v109 = v38;
      v76 = *((_QWORD *)v75 + 2);
      if ( v76 > *(_QWORD *)(v16 + 1216) )
        break;
LABEL_163:
      v81 = (unsigned int *)*((_QWORD *)v75 + 11);
      v82 = v75 + 22;
      v112 = v75 + 22;
      if ( v81 != v75 + 22 )
      {
        do
        {
          v83 = (char *)(v81 - 54);
          v84 = v81;
          v117 = *(unsigned int **)v81;
          v85 = *(unsigned int **)v81;
          v115 = v83;
          if ( *((char **)v85 + 1) != v83 + 216 || (v86 = (unsigned int **)*((_QWORD *)v84 + 1), *v86 != v84) )
            __fastfail(3u);
          *v86 = v85;
          *((_QWORD *)v85 + 1) = v86;
          VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v83);
          v81 = v117;
          v82 = v112;
          *((_QWORD *)v115 + 27) = 0LL;
          *((_QWORD *)v115 + 28) = 0LL;
        }
        while ( v117 != v112 );
        v38 = v109;
        v75 = Pb;
      }
      v87 = (unsigned int *)*((_QWORD *)v75 + 9);
      v88 = v75 + 18;
      v116 = v75 + 18;
      if ( v87 != v75 + 18 )
      {
        do
        {
          v89 = v87 - 50;
          v118 = v87 - 50;
          v90 = *(unsigned int **)v87;
          v123 = *(unsigned int **)v87;
          if ( *(unsigned int **)(*(_QWORD *)v87 + 8LL) != v87
            || (v91 = (unsigned int **)*((_QWORD *)v89 + 26), *v91 != v87) )
          {
            __fastfail(3u);
          }
          *v91 = v90;
          *((_QWORD *)v90 + 1) = v91;
          if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v91, v89) )
          {
            VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v122, v92);
          }
          else
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v16 + 32) + 1920LL), &v127);
            v93 = *(_QWORD *)(v16 + 32) + 1952LL;
            v94 = *(_QWORD **)(*(_QWORD *)(v16 + 32) + 1960LL);
            if ( *v94 != v93 )
              __fastfail(3u);
            *((_QWORD *)v118 + 25) = v93;
            *((_QWORD *)v118 + 26) = v94;
            *v94 = v118 + 50;
            *(_QWORD *)(v93 + 8) = v118 + 50;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v127);
          }
          v88 = v116;
          v87 = v123;
        }
        while ( v123 != v116 );
        v38 = v109;
        v75 = Pb;
        v82 = v112;
      }
      if ( *(unsigned int **)v88 == v88 && *(unsigned int **)v82 == v82 )
      {
        v95 = *(_QWORD *)v75;
        if ( *(unsigned int **)(*(_QWORD *)v75 + 8LL) != v75
          || (v96 = (unsigned int **)*((_QWORD *)v75 + 1), *v96 != v75) )
        {
          __fastfail(3u);
        }
        v30 = bTracingEnabled == 0;
        *v96 = (unsigned int *)v95;
        *(_QWORD *)(v95 + 8) = v96;
        if ( !v30 )
        {
          v97 = *(_QWORD *)(v16 + 8);
          if ( !v97 )
            v97 = v16;
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0px(v75, v95, v87, v97, *((_QWORD *)v75 + 2));
            v75 = Pb;
          }
        }
        _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v75, v95);
        v38 = v109;
      }
      if ( v38 == (unsigned int *)(v16 + 1224) )
        goto LABEL_42;
    }
    v77 = v75[16];
    v78 = 0;
    if ( !v77 )
    {
LABEL_162:
      *(_QWORD *)(v16 + 1216) = v76;
      goto LABEL_163;
    }
    v79 = *((_QWORD *)v75 + 3);
    while ( 1 )
    {
      v80 = *(_QWORD *)(v79 + 16LL * v78);
      if ( v80 )
      {
        if ( *(_QWORD *)(v80 + 152) < *(_QWORD *)(v79 + 16LL * v78 + 8) )
          break;
      }
      if ( ++v78 >= v77 )
        goto LABEL_162;
    }
LABEL_42:
    for ( i = 0; i < *(_DWORD *)(v17 + 1080); ++i )
    {
      v40 = *(_QWORD *)(v17 + 8LL * i);
      if ( v40 )
        --*(_DWORD *)(v40 + 776);
    }
    v14 = ++v107;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 1188), 0xFFFFFFFF);
    _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 960), 0xFFFFFFFF);
    v10 = v119;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 4 * v119 + 1124), 0xFFFFFFFF);
    if ( (*(_DWORD *)(v17 + 1120) & 0x10) != 0 )
      v41 = ((unsigned __int16)**(_DWORD **)(v17 + 1160) | (unsigned __int16)(**(_DWORD **)(v17 + 1160) >> 10)) & 0x3FF;
    else
      v41 = (unsigned int)((1 << *(_DWORD *)(v8 + 128)) - 1);
    v30 = !_BitScanForward((unsigned int *)&v42, v41);
    v43 = (unsigned int)v41;
    if ( v30 )
      LOBYTE(v42) = -1;
    if ( (_DWORD)v41 )
    {
      do
      {
        --*(_DWORD *)(280LL * (char)v42 + *(_QWORD *)(v8 + 8 * v119 + 3008) + 188);
        v43 = ~(1 << v42) & (unsigned int)v43;
        v30 = !_BitScanForward((unsigned int *)&v42, v43);
        if ( v30 )
          LOBYTE(v42) = -1;
      }
      while ( (_DWORD)v43 );
    }
    v15 |= v41;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 4 * v119 + 1060), 0xFFFFFFFF);
    --*(_DWORD *)(v16 + 1192);
    v44 = *(unsigned int *)(*(_QWORD *)(v8 + 8 * v119 + 3008) + 23648LL);
    if ( (_DWORD)v44 != -1 )
    {
      v98 = *(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v8 + 2880);
      if ( v98 )
      {
        v98(*(_QWORD *)(v8 + 2928), v44, v41, v43);
        v14 = v107;
      }
    }
    v12 = v120;
    v45 = v132;
    v20 = a6;
    *(_DWORD *)(v120 + 52) = v132;
LABEL_56:
    v9 = a7;
LABEL_57:
    if ( v45 != a5 )
    {
      a4 = ((_BYTE)v132 + 1) & 0x3F;
      v132 = a4;
      continue;
    }
    break;
  }
  if ( v14 )
  {
    v30 = !_BitScanForward((unsigned int *)&v46, v15);
    if ( v30 )
      LOBYTE(v46) = -1;
    if ( v15 )
    {
      do
      {
        if ( *(_DWORD *)(280LL * (char)v46 + v11 + 180) == 1 )
          VidSchiTryEnterIndependentFlip(v8, a2, (unsigned int)(char)v46);
        v15 &= ~(1 << v46);
        v30 = !_BitScanForward((unsigned int *)&v46, v15);
        if ( v30 )
          LOBYTE(v46) = -1;
      }
      while ( v15 );
      v14 = v107;
      v13 = 0;
      v20 = a6;
    }
  }
  *(_DWORD *)(v8 + 964) -= v14;
  *(_DWORD *)(v11 + 2940) -= v14;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 968), -v14);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 2944), -v14);
  if ( !v20
    && _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 56800), 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)(v8 + 2096), 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v8 + 16) + 24LL));
    *(_QWORD *)(v8 + 2056) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v8 + 2064), CriticalWorkQueue);
  }
  v47 = *(_QWORD *)(v11 + 16);
  if ( v47 )
  {
    v48 = *(_QWORD **)(v47 + 64);
    for ( j = 0; v48 != (_QWORD *)(v47 + 64); j |= v51 )
    {
      v50 = v48 - 3;
      v51 = 0;
      if ( (v48[19] & 0x10) != 0 )
      {
        *((_DWORD *)v50 + 44) &= ~0x10u;
        v51 = (unsigned __int8)VidSchiUnwaitContext(v50, 20034LL);
      }
      v48 = (_QWORD *)*v48;
    }
    v52 = 0;
    v53 = *(_QWORD *)(v47 + 32) + 3136LL;
    while ( *(_QWORD *)v53 != v53 )
    {
      v99 = *(__int64 **)v53;
      if ( *(_QWORD *)(*(_QWORD *)v53 + 8LL) != v53 || (v100 = *v99, *(__int64 **)(*v99 + 8) != v99) )
        __fastfail(3u);
      *(_QWORD *)v53 = v100;
      v101 = v99 - 5;
      *(_QWORD *)(v100 + 8) = v53;
      v101[5] = 0LL;
      v101[6] = 0LL;
      v52 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)v101);
    }
    v13 = j | v52;
  }
  v54 = *(_QWORD *)(v11 + 16);
  if ( v54 )
  {
    v55 = *(_QWORD *)(v54 + 32);
    VidSchiSignalRegisteredEvent(v55, v54 + 96);
    VidSchiSignalRegisteredEvent(v55, v54 + 112);
    VidSchiSignalRegisteredEvent(v55, v55 + 1832);
    VidSchiSignalRegisteredEvent(v55, v55 + 1816);
    *(_QWORD *)(v55 + 1664) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v55 + 1632), 0, 0);
    *(_QWORD *)(v55 + 1776) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v55 + 1744), 0, 0);
    if ( v13 )
    {
      *(_QWORD *)(v55 + 1384) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v55 + 1352), 0, 0);
    }
    VidSchiSignalRegisteredEvent(v55, v55 + 1848);
    if ( *(_WORD *)(v11 + 23524) )
    {
      v102 = *(KSPIN_LOCK **)(v55 + 1880);
      KeAcquireInStackQueuedSpinLock(v102, &v128);
      v103 = (struct _KEVENT *)v102[1];
      if ( v103 )
        KeSetEvent(v103, 0, 0);
      KeReleaseInStackQueuedSpinLock(&v128);
    }
  }
  return v107;
}
