/*
 * XREFs of VidSchiProcessDpcVSyncCookie @ 0x1C0004B50
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00065B0 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C0027908 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0001F00 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C00046C4 (-VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_V.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0004764 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0004850 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0005730 (VidSchiCompleteFlipEntry.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0005F30 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiUnwaitContext @ 0x1C000D6E4 (VidSchiUnwaitContext.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0011808 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0011840 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C0012A30 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013ACC (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C0015E0C (VidSchiCompletePendingFlip.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00200AC (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0020580 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C002474C (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0025718 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C00258E8 (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     McTemplateK0pqXR1qqqXR5 @ 0x1C00264E8 (McTemplateK0pqXR1qqqXR5.c)
 *     McTemplateK0pqxqqipqx @ 0x1C002714C (McTemplateK0pqxqqipqx.c)
 *     McTemplateK0px @ 0x1C002749C (McTemplateK0px.c)
 *     McTemplateK0qqqq @ 0x1C00277AC (McTemplateK0qqqq.c)
 */

void __fastcall VidSchiProcessDpcVSyncCookie(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  __int64 v1; // r14
  struct _VIDSCH_VSYNC_COOKIE *v2; // rdi
  __int64 v3; // r15
  __int64 v4; // rsi
  char v5; // r13
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned int v10; // r12d
  __int64 v11; // rbx
  unsigned int v12; // r13d
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // r13d
  _QWORD *v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r13
  unsigned int v20; // esi
  __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // edx
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  void (__fastcall *v28)(_QWORD, _QWORD); // rax
  bool v29; // zf
  unsigned __int64 v30; // rbx
  int v31; // r10d
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // r9
  unsigned int v36; // eax
  int v37; // eax
  int v38; // r8d
  unsigned __int16 v39; // cx
  char v40; // r11
  int v41; // r10d
  unsigned __int16 v42; // r8
  int v43; // eax
  unsigned int v44; // r9d
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rcx
  struct VIDSCH_FLIP_QUEUE_ENTRY ***v51; // rbx
  struct VIDSCH_FLIP_QUEUE_ENTRY **v52; // r9
  __int64 v53; // r9
  struct VIDSCH_FLIP_QUEUE_ENTRY *v54; // rbx
  struct VIDSCH_FLIP_QUEUE_ENTRY *v55; // rax
  __int64 v56; // rax
  __int64 v57; // r9
  int v58; // ecx
  __int64 *v59; // rbx
  __int64 *v60; // rdi
  int v61; // edx
  __int64 v62; // rax
  int v63; // ebx
  __int64 v64; // rax
  __int64 v65; // rbx
  int v66; // r9d
  __int64 v67; // rcx
  unsigned int v68; // r13d
  __int64 v69; // rdx
  int v70; // eax
  unsigned int v71; // ecx
  unsigned int v72; // eax
  int v73; // ecx
  unsigned __int64 v74; // rax
  __int64 *v75; // rcx
  __int64 v76; // rdx
  __int64 *v77; // rcx
  unsigned __int8 v78; // al
  int v79; // eax
  _QWORD *v80; // r9
  struct VIDSCH_FLIP_QUEUE_ENTRY *v81; // r11
  __int64 v82; // rcx
  _QWORD *v83; // rax
  struct VIDSCH_FLIP_QUEUE_ENTRY *v84; // r10
  __int64 v85; // r11
  unsigned int v86; // r8d
  unsigned int v87; // ecx
  _QWORD *v88; // rdx
  _QWORD *v89; // rax
  struct VIDSCH_FLIP_QUEUE_ENTRY *v90; // rcx
  struct VIDSCH_FLIP_QUEUE_ENTRY *v91; // r8
  _QWORD *v92; // rdx
  struct VIDSCH_FLIP_QUEUE_ENTRY *v93; // rcx
  __int64 v94; // r8
  _QWORD *v95; // rcx
  _QWORD *v96; // rax
  struct VIDSCH_FLIP_QUEUE_ENTRY **v97; // rdx
  _QWORD *v98; // rcx
  struct VIDSCH_FLIP_QUEUE_ENTRY **v99; // r10
  struct VIDSCH_FLIP_QUEUE_ENTRY **v100; // rax
  struct VIDSCH_FLIP_QUEUE_ENTRY *v101; // rdx
  struct VIDSCH_FLIP_QUEUE_ENTRY **v102; // rcx
  __int64 v103; // r9
  struct VIDMM_ALLOC *v104; // r10
  __int64 v105; // rcx
  _QWORD *v106; // rdx
  _QWORD *v107; // rax
  struct VIDSCH_FLIP_QUEUE_ENTRY *v108; // rcx
  struct VIDSCH_FLIP_QUEUE_ENTRY **v109; // rax
  KSPIN_LOCK *v110; // rbx
  struct _KEVENT *v111; // rcx
  unsigned int v112; // eax
  __int64 *v113; // rdx
  __int64 v114; // rax
  int v115; // eax
  char i; // r9
  int v117; // eax
  void *v118; // rdx
  _QWORD *v119; // rax
  char v120; // [rsp+60h] [rbp-A0h]
  bool v121; // [rsp+61h] [rbp-9Fh] BYREF
  bool v122; // [rsp+62h] [rbp-9Eh] BYREF
  int v123; // [rsp+64h] [rbp-9Ch]
  unsigned int v124; // [rsp+68h] [rbp-98h]
  unsigned int v125; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v126; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v127; // [rsp+78h] [rbp-88h]
  struct VIDSCH_FLIP_QUEUE_ENTRY *v128; // [rsp+80h] [rbp-80h]
  __int64 v129; // [rsp+88h] [rbp-78h]
  int v130; // [rsp+90h] [rbp-70h]
  __int64 v131; // [rsp+98h] [rbp-68h]
  __int64 v132; // [rsp+A0h] [rbp-60h]
  struct VIDSCH_FLIP_QUEUE_ENTRY *v133; // [rsp+A8h] [rbp-58h]
  int v134; // [rsp+B0h] [rbp-50h]
  int v135; // [rsp+B4h] [rbp-4Ch]
  int v136; // [rsp+B8h] [rbp-48h]
  struct VIDSCH_FLIP_QUEUE_ENTRY **v137; // [rsp+C0h] [rbp-40h]
  struct VIDSCH_FLIP_QUEUE_ENTRY *v138; // [rsp+C8h] [rbp-38h]
  _QWORD *v139; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v140; // [rsp+D8h] [rbp-28h]
  __int64 v141; // [rsp+E0h] [rbp-20h]
  __int64 v142; // [rsp+E8h] [rbp-18h]
  __int64 v143; // [rsp+F0h] [rbp-10h]
  _BYTE v144[56]; // [rsp+F8h] [rbp-8h] BYREF
  int v145; // [rsp+130h] [rbp+30h]
  int v146; // [rsp+134h] [rbp+34h]
  VIDMM_GLOBAL *v147; // [rsp+138h] [rbp+38h]
  __int64 *v148; // [rsp+140h] [rbp+40h]
  int v149; // [rsp+148h] [rbp+48h]
  struct _VIDSCH_VSYNC_COOKIE *v150; // [rsp+150h] [rbp+50h]
  __int64 v151; // [rsp+158h] [rbp+58h]
  __int64 v152; // [rsp+160h] [rbp+60h]
  struct _KLOCK_QUEUE_HANDLE v153; // [rsp+168h] [rbp+68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v154; // [rsp+180h] [rbp+80h] BYREF
  struct _KLOCK_QUEUE_HANDLE v155; // [rsp+198h] [rbp+98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v156; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1C8h] [rbp+C8h] BYREF
  _QWORD v158[10]; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int64 v159[10]; // [rsp+230h] [rbp+130h] BYREF
  _QWORD v160[10]; // [rsp+280h] [rbp+180h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  v2 = a1;
  v150 = a1;
  v125 = 0;
  memset(v159, 0, sizeof(v159));
  v3 = *((unsigned int *)v2 + 22);
  if ( (_DWORD)v3 == -1 || (unsigned int)v3 >= *(_DWORD *)(v1 + 40) )
    return;
  _mm_lfence();
  v122 = 0;
  v4 = *(_QWORD *)(v1 + 3008 + 8 * v3);
  v5 = 0;
  v151 = v4;
  v121 = 0;
  v120 = 0;
  v6 = (unsigned int)v3;
  v148 = (__int64 *)(v1 + 3008 + 8 * v3);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 1888), &LockHandle);
  if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
  {
    v7 = *(_QWORD *)(v4 + 23600);
    if ( v7 )
    {
      v9 = *((_QWORD *)v2 + 10) - *(_QWORD *)(v4 + 23552);
      v8 = *((_QWORD *)v2 + 7) - *(_QWORD *)(v4 + 23560);
      if ( *((_QWORD *)v2 + 10) != *(_QWORD *)(v4 + 23552) )
      {
        if ( v7 <= 3 )
        {
          v74 = v8 + *(_QWORD *)(v4 + 23616);
          v8 = v7 + v9;
          *(_QWORD *)(v4 + 23616) = v74;
          *(_QWORD *)(v4 + 23600) = v7 + v9;
          if ( v7 + v9 > 3 )
          {
            v8 = v74 / (v8 - 1);
            v7 = v8 / 0xA;
            *(_QWORD *)(v4 + 23624) = v8 / 0xA;
            _m_prefetchw((const void *)(v4 + 23608));
            while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 23608), v8, *(_QWORD *)(v4 + 23608)) != v8 )
              ;
          }
        }
        else
        {
          if ( v9 != 1 )
            v8 /= v9;
          v9 = *(_QWORD *)(v4 + 23624);
          v7 = *(_QWORD *)(v4 + 23608);
          *(_QWORD *)(v4 + 23640) = v8;
          if ( v8 > v7 + v9 || (v7 -= v9, v8 < v7) )
          {
            ++*(_QWORD *)(v4 + 23632);
            *(_QWORD *)(v4 + 23600) = 0LL;
          }
        }
      }
    }
    else
    {
      *(_QWORD *)(v4 + 23600) = 1LL;
      *(_QWORD *)(v4 + 23616) = 0LL;
    }
    if ( *(_QWORD *)(v4 + 23600) <= 3uLL )
      _InterlockedExchange((volatile __int32 *)(v1 + 2036), 1);
    *(_QWORD *)(v4 + 23552) = *((_QWORD *)v2 + 10);
    *(_QWORD *)(v4 + 23560) = *((_QWORD *)v2 + 7);
    *(_QWORD *)(v4 + 23568) = *((_QWORD *)v2 + 8);
    *(_QWORD *)(v4 + 23576) = *((_QWORD *)v2 + 9);
  }
  if ( *(int *)(v4 + 4) < 4 && !*(_BYTE *)(v1 + 132) )
    goto LABEL_30;
  LODWORD(v7) = 0;
  v10 = 0;
  if ( !*(_DWORD *)(v1 + 128) )
    goto LABEL_30;
  LODWORD(v9) = 4673;
  do
  {
    v11 = *(_QWORD *)(v4 + 8LL * v10 + 24);
    if ( !v11 )
      goto LABEL_28;
    v8 = 0LL;
    v12 = *(_DWORD *)(v11 + 48);
    v13 = ((unsigned __int8)*(_DWORD *)(v11 + 44) - 1) & 0x3F;
    v124 = 0;
    v126 = 0;
    v127 = 0LL;
    if ( v12 == v13 )
    {
      v15 = v124;
      goto LABEL_24;
    }
    while ( 1 )
    {
      v128 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)(1232LL * v12 + v11 + 56);
      v14 = *((_DWORD *)v128 + 263);
      if ( v14 <= 0xC && _bittest((const int *)&v9, v14) )
        goto LABEL_21;
      if ( v14 != 5 && v14 != 15 )
      {
LABEL_22:
        v15 = v124;
        goto LABEL_23;
      }
      if ( !*(_BYTE *)(v1 + 132) && !*((_QWORD *)v2 + 14) )
        VidSchiQueueDeferredVisibilityWorkItem((struct _VIDSCH_PRESENT_INFO *)v4, (struct _VIDSCH_GLOBAL *)v1);
      if ( (unsigned int)VidSchiIsExpectedVSyncCookie((struct _VIDSCH_GLOBAL *)v1, v128, v2) )
        break;
      LODWORD(v9) = 4673;
LABEL_21:
      v12 = ((_BYTE)v12 - 1) & 0x3F;
      if ( v12 == (((unsigned __int8)*(_DWORD *)(v11 + 44) - 1) & 0x3F) )
        goto LABEL_22;
    }
    v127 = *((_QWORD *)v128 + 130);
    memset(v144, 0, sizeof(v144));
    v29 = *((_DWORD *)v2 + 4) == 10;
    *(_OWORD *)&v144[32] = *(_OWORD *)(v4 + 23552);
    *(_QWORD *)&v144[48] = *(_QWORD *)(v4 + 23568);
    *(_QWORD *)v144 = v1;
    *(_QWORD *)&v144[8] = v127;
    *(_DWORD *)&v144[16] = v3;
    *(_DWORD *)&v144[20] = v10;
    *(_DWORD *)&v144[24] = v12;
    if ( v29 && (*((_DWORD *)v2 + 4 * v10 + 30) & 1) != 0 )
    {
      v5 = 1;
      *((_DWORD *)v128 + 263) = 14;
      v120 = 1;
      VidSchiProcessVsyncCompletedFlipEntry(
        (struct _VIDSCH_VSYNC_COMPLETED_ENTRY_INFO *)v144,
        v159,
        &v125,
        &v126,
        &v121,
        1);
      memset(v158, 0, sizeof(v158));
      LODWORD(v158[1]) = v10;
      *(_OWORD *)&v158[3] = *(_OWORD *)v144;
      v158[2] = *((_QWORD *)v2 + 2 * v10 + 14);
      v79 = *((_DWORD *)v2 + 24);
      *(_OWORD *)&v158[5] = *(_OWORD *)&v144[16];
      HIDWORD(v158[0]) = v79;
      LODWORD(v158[0]) = *((_DWORD *)v2 + 23);
      *(_OWORD *)&v158[7] = *(_OWORD *)&v144[32];
      v158[9] = *(_QWORD *)&v144[48];
      VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(v158, 6LL);
      LODWORD(v7) = 0;
      LODWORD(v9) = 4673;
      goto LABEL_29;
    }
    v30 = 0LL;
    v31 = ((_BYTE)v12 + 1) & 0x3F;
    v140 = 0LL;
    v136 = v31;
    v32 = *v148;
    v132 = v32;
    v33 = *(_QWORD *)(v32 + 8LL * v10 + 24);
    v152 = v33;
    v34 = *(unsigned int *)(v33 + 44);
    v130 = v34;
    if ( (_DWORD)v34 == v31 )
      goto LABEL_106;
    while ( 2 )
    {
      v35 = 1232 * v34 + v33 + 56;
      v143 = v35;
      v36 = *(_DWORD *)(v35 + 1052);
      if ( v36 <= 0xC )
      {
        v73 = 4673;
        if ( _bittest(&v73, v36) )
          goto LABEL_104;
      }
      *(_QWORD *)(v35 + 1112) = *(_QWORD *)&v144[32];
      *(_QWORD *)(v35 + 1096) = *(_QWORD *)&v144[40];
      *(_QWORD *)(v35 + 1104) = *(_QWORD *)&v144[48];
      v37 = *(_DWORD *)(v35 + 1120);
      *(_DWORD *)(v35 + 1052) = 11;
      if ( (v37 & 0x10) != 0 )
        v38 = (**(_DWORD **)(v35 + 1160) | (**(_DWORD **)(v35 + 1160) >> 10)) & 0x3FF;
      else
        v38 = (1 << *(_DWORD *)(v1 + 128)) - 1;
      LODWORD(v140) = v38;
      *(_DWORD *)(v32 + 2952) &= ~v38;
      HIDWORD(v140) = *(_DWORD *)(v35 + 1048);
      if ( (*(_DWORD *)(v35 + 1120) & 0x10) != 0 )
        v39 = *(_WORD *)(v32 + 23520) & (**(_WORD **)(v35 + 1160) | (**(_DWORD **)(v35 + 1160) >> 10)) & 0x3FF;
      else
        v39 = *(_WORD *)(v32 + 23520);
      v40 = 0;
      LOWORD(v41) = 0;
      v124 = 0;
      if ( !v39 )
        goto LABEL_103;
      while ( 2 )
      {
        v42 = v39;
        v29 = !_BitScanForward((unsigned int *)&v43, v39);
        v135 = v39;
        v146 = v43;
        if ( v29 )
          LOBYTE(v43) = -1;
        v44 = 0;
        v45 = (char)v43;
        v134 = (char)v43;
        v123 = 0;
        if ( *(_WORD *)(v32 + 23522) )
        {
          v46 = (__int64)(char)v43 << 6;
          v142 = v45 << 6;
          while ( 1 )
          {
            v141 = v44;
            v47 = 32 * (v44 + v46) + v32;
            v48 = *(_QWORD *)(v47 + 3048);
            v129 = v47;
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v48 + 16) + 8LL));
            v131 = *(_QWORD *)(v32 + 16);
            v49 = *(_QWORD *)(v131 + 32);
            v147 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v49 + 8) + 536LL);
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v49 + 1920), &v153);
            v51 = (struct VIDSCH_FLIP_QUEUE_ENTRY ***)(v49 + 1952);
            v52 = *v51;
            if ( *v51 != (struct VIDSCH_FLIP_QUEUE_ENTRY **)v51 )
            {
              do
              {
                v128 = *v52;
                if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v50, v52 - 25) )
                {
                  v82 = *v80;
                  if ( *(_QWORD **)(*v80 + 8LL) != v80 || (v83 = (_QWORD *)v80[1], (_QWORD *)*v83 != v80) )
                    __fastfail(3u);
                  *v83 = v82;
                  *(_QWORD *)(v82 + 8) = v83;
                  VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v80 - 24), (struct VIDMM_ALLOC *)(v80 - 25));
                  v81 = v128;
                }
                v52 = (struct VIDSCH_FLIP_QUEUE_ENTRY **)v81;
              }
              while ( v81 != (struct VIDSCH_FLIP_QUEUE_ENTRY *)v51 );
            }
            KeReleaseInStackQueuedSpinLock(&v153);
            v53 = v131;
            v54 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)(v131 + 1224);
            v55 = *(struct VIDSCH_FLIP_QUEUE_ENTRY **)(v131 + 1224);
            if ( v55 == (struct VIDSCH_FLIP_QUEUE_ENTRY *)(v131 + 1224) )
              goto LABEL_83;
            while ( 1 )
            {
              v84 = v55;
              v128 = v55;
              v55 = *(struct VIDSCH_FLIP_QUEUE_ENTRY **)v55;
              v133 = v55;
              v85 = *((_QWORD *)v84 + 2);
              if ( v85 > *(_QWORD *)(v53 + 1216) )
                break;
LABEL_161:
              v90 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)*((_QWORD *)v84 + 11);
              v91 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)((char *)v84 + 88);
              v137 = (struct VIDSCH_FLIP_QUEUE_ENTRY **)((char *)v84 + 88);
              if ( v90 != (struct VIDSCH_FLIP_QUEUE_ENTRY *)((char *)v84 + 88) )
              {
                do
                {
                  v92 = (_QWORD *)((char *)v90 - 216);
                  v93 = *(struct VIDSCH_FLIP_QUEUE_ENTRY **)v90;
                  v139 = v92;
                  v94 = v92[27];
                  v138 = v93;
                  if ( *(_QWORD **)(v94 + 8) != v92 + 27 || (v95 = (_QWORD *)v92[28], (_QWORD *)*v95 != v92 + 27) )
                    __fastfail(3u);
                  *v95 = v94;
                  *(_QWORD *)(v94 + 8) = v95;
                  VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v92);
                  v96 = v139;
                  v91 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)v137;
                  v139[27] = 0LL;
                  v96[28] = 0LL;
                  v90 = v138;
                }
                while ( v138 != v91 );
                v55 = v133;
                v53 = v131;
                v84 = v128;
              }
              v97 = (struct VIDSCH_FLIP_QUEUE_ENTRY **)*((_QWORD *)v84 + 9);
              v98 = (_QWORD *)((char *)v84 + 72);
              if ( v97 != (struct VIDSCH_FLIP_QUEUE_ENTRY **)((char *)v84 + 72) )
              {
                do
                {
                  v99 = v97 - 25;
                  v100 = v97;
                  v138 = *v97;
                  v101 = *v97;
                  v137 = v99;
                  if ( *((struct VIDSCH_FLIP_QUEUE_ENTRY ***)v101 + 1) != v99 + 25
                    || (v102 = (struct VIDSCH_FLIP_QUEUE_ENTRY **)v100[1],
                        *v102 != (struct VIDSCH_FLIP_QUEUE_ENTRY *)v100) )
                  {
                    __fastfail(3u);
                  }
                  *v102 = v101;
                  *((_QWORD *)v101 + 1) = v102;
                  if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v102, v99) )
                  {
                    VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v147, v104);
                  }
                  else
                  {
                    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v103 + 32) + 1920LL), &v154);
                    v105 = *(_QWORD *)(v131 + 32) + 1952LL;
                    v106 = *(_QWORD **)(*(_QWORD *)(v131 + 32) + 1960LL);
                    if ( *v106 != v105 )
                      __fastfail(3u);
                    v107 = v137 + 25;
                    v137[25] = (struct VIDSCH_FLIP_QUEUE_ENTRY *)v105;
                    v107[1] = v106;
                    *v106 = v107;
                    *(_QWORD *)(v105 + 8) = v107;
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v154);
                  }
                  v84 = v128;
                  v97 = (struct VIDSCH_FLIP_QUEUE_ENTRY **)v138;
                  v53 = v131;
                  v98 = (_QWORD *)((char *)v128 + 72);
                }
                while ( v138 != (struct VIDSCH_FLIP_QUEUE_ENTRY *)((char *)v128 + 72) );
                v55 = v133;
                v91 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)((char *)v128 + 88);
              }
              if ( (_QWORD *)*v98 == v98 && *(struct VIDSCH_FLIP_QUEUE_ENTRY **)v91 == v91 )
              {
                v108 = *(struct VIDSCH_FLIP_QUEUE_ENTRY **)v84;
                if ( *(struct VIDSCH_FLIP_QUEUE_ENTRY **)(*(_QWORD *)v84 + 8LL) != v84
                  || (v109 = (struct VIDSCH_FLIP_QUEUE_ENTRY **)*((_QWORD *)v84 + 1), *v109 != v84) )
                {
                  __fastfail(3u);
                }
                v29 = bTracingEnabled == 0;
                *v109 = v108;
                *((_QWORD *)v108 + 1) = v109;
                if ( !v29 )
                {
                  v97 = *(struct VIDSCH_FLIP_QUEUE_ENTRY ***)(v53 + 8);
                  if ( !v97 )
                    v97 = (struct VIDSCH_FLIP_QUEUE_ENTRY **)v53;
                  if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    McTemplateK0px(v108, v97, v91, v97, *((_QWORD *)v84 + 2));
                    v84 = v128;
                  }
                }
                _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v84, (unsigned int)v97);
                v55 = v133;
                v53 = v131;
              }
              if ( v55 == v54 )
                goto LABEL_83;
            }
            v86 = *((_DWORD *)v84 + 16);
            v87 = 0;
            if ( !v86 )
              break;
            v88 = (_QWORD *)*((_QWORD *)v84 + 3);
            v139 = v88;
            while ( 1 )
            {
              v89 = &v88[2 * v87];
              if ( *v89 )
              {
                if ( *(_QWORD *)(*v89 + 152LL) < v89[1] )
                  break;
              }
              v88 = v139;
              if ( ++v87 >= v86 )
              {
                v55 = v133;
                goto LABEL_160;
              }
            }
LABEL_83:
            v32 = v132;
            v40 = 1;
            v44 = ++v123;
            *(_QWORD *)(32 * (v141 + v142 + 95) + v132) = 0LL;
            v56 = v129;
            *(_QWORD *)(v129 + 3048) = 0LL;
            *(_WORD *)(v56 + 3064) = 0;
            *(_QWORD *)(v56 + 3056) = 0LL;
            v46 = v142;
            if ( v44 >= *(unsigned __int16 *)(v32 + 23522) )
            {
              LOBYTE(v45) = v134;
              v42 = v135;
              LOWORD(v41) = v124;
              goto LABEL_85;
            }
          }
LABEL_160:
          *(_QWORD *)(v53 + 1216) = v85;
          goto LABEL_161;
        }
LABEL_85:
        v41 = (unsigned __int16)v41 | (1 << v45);
        *(_WORD *)(v32 + 23520) &= ~(1 << v45);
        v124 = v41;
        v39 = v42 & ~(1 << v45);
        if ( v39 )
          continue;
        break;
      }
      if ( v40 )
      {
        v57 = *(_QWORD *)(v32 + 16);
        v141 = v57;
        v123 = 0;
        if ( v57 )
        {
          v58 = 0;
          v59 = *(__int64 **)(v57 + 64);
          if ( v59 != (__int64 *)(v57 + 64) )
          {
            v60 = (__int64 *)(v57 + 64);
            do
            {
              v61 = 0;
              if ( (v59[19] & 0x10) != 0 )
              {
                *((_DWORD *)v59 + 38) &= ~0x10u;
                v78 = VidSchiUnwaitContext(v59 - 3, 20034LL);
                v58 = v123;
                v61 = v78;
              }
              v59 = (__int64 *)*v59;
              v58 |= v61;
              v123 = v58;
            }
            while ( v59 != v60 );
            v2 = v150;
            v4 = v151;
            v57 = v141;
          }
          v62 = *(_QWORD *)(v57 + 32) + 3136LL;
          v63 = 0;
          v129 = v62;
          while ( *(_QWORD *)v62 != v62 )
          {
            v75 = *(__int64 **)v62;
            if ( *(_QWORD *)(*(_QWORD *)v62 + 8LL) != v62 || (v76 = *v75, *(__int64 **)(*v75 + 8) != v75) )
              __fastfail(3u);
            *(_QWORD *)v62 = v76;
            v77 = v75 - 5;
            *(_QWORD *)(v76 + 8) = v62;
            v77[5] = 0LL;
            v77[6] = 0LL;
            v63 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)v77);
            v62 = v129;
          }
          v123 |= v63;
          v32 = v132;
        }
        v64 = *(_QWORD *)(v32 + 16);
        v129 = v64;
        if ( v64 )
        {
          v65 = *(_QWORD *)(v64 + 32);
          VidSchiSignalRegisteredEvent(v65, v64 + 96);
          VidSchiSignalRegisteredEvent(v65, v129 + 112);
          VidSchiSignalRegisteredEvent(v65, v65 + 1832);
          VidSchiSignalRegisteredEvent(v65, v65 + 1816);
          *(_QWORD *)(v65 + 1664) = MEMORY[0xFFFFF78000000320];
          KeSetEvent((PRKEVENT)(v65 + 1632), 0, 0);
          *(_QWORD *)(v65 + 1776) = MEMORY[0xFFFFF78000000320];
          KeSetEvent((PRKEVENT)(v65 + 1744), 0, 0);
          if ( v123 )
          {
            *(_QWORD *)(v65 + 1384) = MEMORY[0xFFFFF78000000320];
            KeSetEvent((PRKEVENT)(v65 + 1352), 0, 0);
          }
          VidSchiSignalRegisteredEvent(v65, v65 + 1848);
          v32 = v132;
          if ( *(_WORD *)(v132 + 23524) )
          {
            v110 = *(KSPIN_LOCK **)(v65 + 1880);
            KeAcquireInStackQueuedSpinLock(v110, &v155);
            v111 = (struct _KEVENT *)v110[1];
            if ( v111 )
              KeSetEvent(v111, 0, 0);
            KeReleaseInStackQueuedSpinLock(&v155);
            v32 = v132;
          }
        }
        *(_WORD *)(v32 + 23524) &= ~(_WORD)v124;
      }
      v35 = v143;
LABEL_103:
      VidSchiReferenceDisplayingAllocationsForThisEntry(v1, (_WORD *)v32, v35);
      v32 = v132;
      v33 = v152;
      v31 = v136;
LABEL_104:
      v34 = ((_BYTE)v130 + 1) & 0x3F;
      v130 = v34;
      if ( (_DWORD)v34 != v31 )
        continue;
      break;
    }
    v30 = v140;
LABEL_106:
    v66 = *(_DWORD *)(v33 + 44);
    *(_DWORD *)(v33 + 44) = v31;
    if ( *(_DWORD *)(v33 + 48) == v12 )
      *(_DWORD *)(v33 + 48) = v31;
    v126 = VidSchiCompleteFlipEntry(v1, v3, v10, v66, v12, 0, 0LL);
    v15 = v126;
    if ( v126 )
    {
      v67 = v125++;
      v121 = 1;
      v159[v67] = v30;
    }
LABEL_23:
    v8 = v127;
LABEL_24:
    if ( *(_DWORD *)(v4 + 2940) && *(_BYTE *)(v4 + 56804) )
    {
      VidSchiExecuteNextFlipQueueEntry((struct _VIDSCH_GLOBAL *)v1, &v122, v3, v10);
      v8 = v127;
    }
    if ( v8 )
    {
      VidSchiCheckPendingDeviceCommand((_QWORD *)v8);
      v68 = -v15;
      v69 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v127 + 40) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(v127 + 32) + 4LL))
                      + 8 * v3
                      + 520);
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 8 * v3 + 6056) + 8LL), v68);
      v8 = *(_QWORD *)(v1 + 8 * v3 + 6056);
      *(_DWORD *)v8 += v126;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v69 + 8), v68);
      *(_DWORD *)v69 += v126;
    }
    LODWORD(v9) = 4673;
    LODWORD(v7) = 0;
LABEL_28:
    v5 = v120;
LABEL_29:
    ++v10;
    v6 = v3;
  }
  while ( v10 < *(_DWORD *)(v1 + 128) );
LABEL_30:
  if ( bTracingEnabled )
  {
    if ( (*((_BYTE *)v2 + 104) & 1) == 0 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqxqqipqx(
        v8,
        v7,
        v9,
        *(_QWORD *)(v1 + 16),
        *((_DWORD *)v2 + 23),
        *((_QWORD *)v2 + 14),
        *((_DWORD *)v2 + 22),
        *((_DWORD *)v2 + 20),
        *((_QWORD *)v2 + 7),
        0,
        0,
        v159[0]);
    memset(v160, 0, sizeof(v160));
    v18 = *((_DWORD *)v2 + 4);
    switch ( v18 )
    {
      case 10:
        v112 = *(_DWORD *)(v1 + 128);
        if ( v112 )
        {
          v16 = v160;
          v17 = v112;
          v113 = (__int64 *)((char *)v2 + 112);
          do
          {
            v114 = *v113;
            v113 += 2;
            *v16++ = v114;
            --v17;
          }
          while ( v17 );
        }
        break;
      case 3:
        v160[0] = *((_QWORD *)v2 + 14);
        break;
      case 7:
        LODWORD(v16) = -1;
        LODWORD(v17) = *((_DWORD *)v2 + 25) & 0x3FF;
        v29 = !_BitScanForward((unsigned int *)&v115, v17);
        v145 = v115;
        if ( !v29 )
          LODWORD(v16) = (unsigned __int8)v115;
        for ( i = 0; (_DWORD)v17; ++i )
        {
          v160[(char)v16] = *((_QWORD *)v2 + 5 * i + 14);
          v117 = 1 << (char)v16;
          LODWORD(v16) = -1;
          LODWORD(v17) = ~v117 & v17;
          v29 = !_BitScanForward((unsigned int *)&v117, v17);
          v149 = v117;
          if ( !v29 )
            LODWORD(v16) = (unsigned __int8)v117;
        }
        break;
    }
    if ( (*((_BYTE *)v2 + 104) & 1) != 0 )
    {
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_39;
      v118 = &EventHSyncDPCMultiPlane;
    }
    else
    {
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_39;
      v118 = &EventVSyncDPCMultiPlane;
    }
    McTemplateK0pqXR1qqqXR5(
      (_DWORD)v16,
      (_DWORD)v118,
      v17,
      *(_QWORD *)(v1 + 16),
      *(_DWORD *)(v1 + 128),
      (__int64)v160,
      *((_DWORD *)v2 + 22),
      *((_DWORD *)v2 + 20),
      v125,
      (__int64)v159);
  }
LABEL_39:
  if ( v121 || v5 )
  {
    *(_DWORD *)(v1 + 2044) = -1;
    *(_DWORD *)(v1 + 2040) = 0;
  }
  else if ( *(_BYTE *)(v1 + 45) == 1 && *(_DWORD *)(v1 + 2048) )
  {
    if ( _InterlockedExchange((volatile __int32 *)(v1 + 2036), 0)
      || *(_DWORD *)(*(_QWORD *)(v1 + 16) + 2336LL)
      || *(_DWORD *)(v1 + 960)
      || *(_DWORD *)(v1 + 972)
      || *(_DWORD *)(v1 + 1988) )
    {
      *(_DWORD *)(v1 + 2044) = -1;
      *(_DWORD *)(v1 + 2040) = 0;
    }
    else if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
    {
      if ( *(_DWORD *)(v1 + 2044) == -1 )
        *(_DWORD *)(v1 + 2044) = v3;
      if ( *(_DWORD *)(v1 + 2044) == (_DWORD)v3 )
      {
        v70 = *(_DWORD *)(v1 + 2040);
        if ( v70 != -1 )
        {
          v71 = *(_DWORD *)(v1 + 2048);
          v72 = v70 + 1;
          *(_DWORD *)(v1 + 2040) = v72;
          if ( v72 == v71 )
          {
            if ( !_InterlockedExchange((volatile __int32 *)(v1 + 2032), 1) )
              ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 2000), CriticalWorkQueue);
          }
          else if ( v72 > v71 )
          {
            *(_DWORD *)(v1 + 2040) = v71 + 1;
          }
        }
      }
    }
  }
  if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
  {
    v19 = *(_QWORD *)(v1 + 16);
    v20 = *(_DWORD *)(v4 + 23552);
    v21 = *(_QWORD *)(v19 + 2304);
    if ( (unsigned int)v3 < *(_DWORD *)(v21 + 80) )
    {
      v22 = *(_QWORD *)(v21 + 112) + 3760 * v6;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v22 + 960), &v156);
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqq(
          *(unsigned __int8 *)(v22 + 952),
          v23,
          v24,
          *(_DWORD *)(v22 + 944),
          v20,
          *(_BYTE *)(v22 + 952),
          *(_DWORD *)(v19 + 2336));
      KePulseEvent((PRKEVENT)(v22 + 912), 0, 0);
      if ( *(_QWORD *)(v22 + 936) )
      {
        *(_DWORD *)(v22 + 948) = v20;
        if ( *(_DWORD *)(v22 + 944) <= v20 )
        {
          if ( *(_BYTE *)(v22 + 952) )
          {
            *(_BYTE *)(v22 + 952) = 0;
            if ( *(_QWORD *)(v19 + 2312) )
            {
              if ( _InterlockedDecrement((volatile signed __int32 *)(v19 + 2336)) < 0 )
              {
                v119 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25, v27);
                v119[3] = 275LL;
                v119[4] = 28LL;
                v119[5] = v19;
                v119[6] = *(unsigned int *)(v19 + 2336);
                v119[7] = 0LL;
                WdLogEvent5_WdCriticalError(v119);
              }
            }
          }
          KeSetEvent(*(PRKEVENT *)(v22 + 936), 0, 0);
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v156);
    }
  }
  if ( v122 )
    VidSchiCompletePendingFlip(v1, (unsigned int)v3, 9LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
  {
    v28 = *(void (__fastcall **)(_QWORD, _QWORD))(v1 + 2912);
    if ( v28 )
      v28(*(_QWORD *)(v1 + 2928), (unsigned int)v3);
  }
}
