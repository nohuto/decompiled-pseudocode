/*
 * XREFs of VidSchiProcessDpcVSyncCookie @ 0x1C0004480
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0005B10 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C00257C0 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00028AC (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0002E00 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0003040 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0003C90 (-VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_V.c)
 *     VidSchiUnwaitContext @ 0x1C000DA38 (VidSchiUnwaitContext.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C000FCE8 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00106A4 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0010E14 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0010EC0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0012EA4 (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0012EF8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C0013B4C (VidSchiCompletePendingFlip.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C001E4C4 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0022300 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0023240 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     Template_pqXR1qqqXR5 @ 0x1C00244A0 (Template_pqXR1qqqXR5.c)
 *     Template_pqxqqipqx @ 0x1C00250DC (Template_pqxqqipqx.c)
 *     Template_px @ 0x1C0025444 (Template_px.c)
 *     Template_qqqq @ 0x1C0025658 (Template_qqqq.c)
 */

void __fastcall VidSchiProcessDpcVSyncCookie(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  __int64 v1; // r15
  __int64 v2; // rsi
  char v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // rbx
  unsigned int v14; // r13d
  char v15; // al
  struct VIDSCH_FLIP_QUEUE_ENTRY *v16; // rdx
  int v17; // eax
  __int64 v18; // r13
  unsigned int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  void (__fastcall *v27)(_QWORD, _QWORD); // rax
  bool v28; // zf
  int v29; // ecx
  unsigned __int64 v30; // rbx
  int v31; // r8d
  __int64 v32; // r13
  _QWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r9
  int v36; // eax
  int v37; // edx
  int v38; // edx
  char v39; // r10
  int v40; // eax
  unsigned int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int *v44; // rcx
  __int64 v45; // rax
  _QWORD *v46; // rbx
  __int64 v47; // rcx
  struct VIDSCH_FLIP_QUEUE_ENTRY *v48; // rbx
  struct VIDSCH_FLIP_QUEUE_ENTRY *v49; // r9
  _QWORD *v50; // r9
  struct VIDSCH_FLIP_QUEUE_ENTRY *v51; // rbx
  struct VIDSCH_FLIP_QUEUE_ENTRY *v52; // rax
  unsigned int *v53; // rax
  int v54; // r8d
  unsigned int *v55; // r9
  __int64 *v56; // rbx
  int v57; // ecx
  __int64 *v58; // r13
  int v59; // edx
  int v60; // ecx
  _QWORD **v61; // rbx
  _QWORD *v62; // rax
  __int64 v63; // rbx
  unsigned int v64; // r9d
  unsigned int v65; // eax
  __int64 v66; // rbx
  __int64 v67; // rcx
  unsigned int ***v68; // rbx
  unsigned int **v69; // r9
  _QWORD *v70; // rbx
  unsigned int *v71; // rax
  unsigned int *v72; // rcx
  unsigned int v73; // r13d
  int v74; // eax
  unsigned int v75; // ecx
  unsigned int v76; // eax
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rcx
  struct _KEVENT *v79; // r13
  int v80; // ecx
  char v81; // bl
  _QWORD *v82; // rcx
  __int64 v83; // r8
  int v84; // eax
  unsigned int v85; // eax
  __int64 *v86; // rdx
  __int64 v87; // rax
  int v88; // eax
  int v89; // eax
  struct _KEVENT *v90; // r13
  int v91; // ecx
  unsigned __int8 v92; // al
  _QWORD **v93; // rcx
  _QWORD *v94; // rax
  struct _VIDSCH_CONTEXT *v95; // rcx
  int updated; // eax
  int v97; // eax
  char v98; // r9
  int v99; // eax
  _QWORD *v100; // r9
  VIDMM_GLOBAL ***v101; // r10
  struct VIDSCH_FLIP_QUEUE_ENTRY *v102; // r11
  __int64 v103; // rcx
  _QWORD *v104; // rax
  struct VIDSCH_FLIP_QUEUE_ENTRY *v105; // r8
  __int64 v106; // r11
  unsigned int v107; // r10d
  int v108; // ecx
  char *v109; // rdx
  char *v110; // rax
  unsigned int *v111; // rcx
  unsigned int *v112; // r10
  char *v113; // rdx
  unsigned int *v114; // rax
  unsigned int *v115; // r8
  _QWORD *v116; // rcx
  char *v117; // rax
  _QWORD *v118; // rdx
  _QWORD *v119; // rcx
  unsigned int *v120; // r10
  _QWORD *v121; // rax
  __int64 v122; // rdx
  _QWORD *v123; // rcx
  __int64 v124; // r9
  struct VIDMM_ALLOC *v125; // r10
  __int64 v126; // rcx
  _QWORD *v127; // rdx
  _QWORD *v128; // rax
  struct VIDSCH_FLIP_QUEUE_ENTRY *v129; // rcx
  struct VIDSCH_FLIP_QUEUE_ENTRY **v130; // rax
  struct _KEVENT *v131; // r13
  int v132; // ecx
  struct _KEVENT *v133; // r13
  int Flink; // ecx
  struct _KEVENT *v135; // r13
  int v136; // ecx
  KSPIN_LOCK *v137; // rbx
  struct _KEVENT *v138; // rcx
  _QWORD *v139; // r9
  VIDMM_GLOBAL ***v140; // r10
  unsigned int *v141; // r11
  __int64 v142; // rcx
  _QWORD *v143; // rax
  unsigned int *v144; // rdx
  __int64 v145; // r11
  unsigned int v146; // r10d
  unsigned int *v147; // r9
  unsigned int *v148; // rax
  unsigned int *v149; // r8
  unsigned int *v150; // r10
  unsigned int *v151; // rdx
  unsigned int *v152; // rax
  unsigned int *v153; // r8
  unsigned int **v154; // rcx
  unsigned int *v155; // rax
  unsigned int *v156; // r9
  unsigned int *v157; // r10
  unsigned int *v158; // r9
  __int64 v159; // rdx
  unsigned int **v160; // rcx
  struct VIDMM_ALLOC *v161; // r10
  __int64 v162; // rcx
  _QWORD *v163; // rdx
  _QWORD *v164; // rax
  __int64 v165; // rcx
  unsigned int **v166; // rax
  _QWORD *v167; // r9
  void *v168; // rdx
  _QWORD *v169; // rax
  KIRQL v170; // [rsp+60h] [rbp-328h]
  KIRQL v171; // [rsp+60h] [rbp-328h]
  KIRQL v172; // [rsp+60h] [rbp-328h]
  KIRQL v173; // [rsp+60h] [rbp-328h]
  KIRQL v174; // [rsp+60h] [rbp-328h]
  bool v175; // [rsp+61h] [rbp-327h] BYREF
  char v176; // [rsp+62h] [rbp-326h]
  bool v177; // [rsp+63h] [rbp-325h] BYREF
  unsigned int *v178; // [rsp+68h] [rbp-320h]
  int v179; // [rsp+70h] [rbp-318h]
  unsigned int v180; // [rsp+74h] [rbp-314h] BYREF
  int v181; // [rsp+78h] [rbp-310h]
  unsigned int v182[2]; // [rsp+80h] [rbp-308h]
  int v183; // [rsp+88h] [rbp-300h]
  unsigned int v184; // [rsp+8Ch] [rbp-2FCh] BYREF
  unsigned int *v185; // [rsp+90h] [rbp-2F8h]
  unsigned int *v186; // [rsp+98h] [rbp-2F0h]
  struct _KEVENT **v187; // [rsp+A0h] [rbp-2E8h]
  int v188; // [rsp+A8h] [rbp-2E0h]
  _QWORD *v189; // [rsp+B0h] [rbp-2D8h]
  __int64 v190; // [rsp+B8h] [rbp-2D0h]
  int v191; // [rsp+C0h] [rbp-2C8h]
  _QWORD *v192; // [rsp+C8h] [rbp-2C0h]
  unsigned int *v193; // [rsp+D0h] [rbp-2B8h]
  _QWORD *v194; // [rsp+D8h] [rbp-2B0h]
  int v195; // [rsp+E0h] [rbp-2A8h]
  int v196; // [rsp+E4h] [rbp-2A4h]
  unsigned __int64 v197; // [rsp+E8h] [rbp-2A0h]
  unsigned int *v198; // [rsp+F0h] [rbp-298h]
  VIDMM_GLOBAL *v199; // [rsp+F8h] [rbp-290h]
  char *v200; // [rsp+100h] [rbp-288h]
  __int64 v201; // [rsp+108h] [rbp-280h]
  _BYTE v202[56]; // [rsp+110h] [rbp-278h] BYREF
  int v203; // [rsp+148h] [rbp-240h]
  int v204; // [rsp+14Ch] [rbp-23Ch]
  int v205; // [rsp+150h] [rbp-238h]
  __int64 *v206; // [rsp+158h] [rbp-230h]
  struct _KLOCK_QUEUE_HANDLE v207; // [rsp+160h] [rbp-228h] BYREF
  struct _KLOCK_QUEUE_HANDLE v208; // [rsp+178h] [rbp-210h] BYREF
  struct _KLOCK_QUEUE_HANDLE v209; // [rsp+190h] [rbp-1F8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v210; // [rsp+1A8h] [rbp-1E0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v211; // [rsp+1C0h] [rbp-1C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v212; // [rsp+1D8h] [rbp-1B0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v213; // [rsp+1F0h] [rbp-198h] BYREF
  struct _KLOCK_QUEUE_HANDLE v214; // [rsp+208h] [rbp-180h] BYREF
  struct _KLOCK_QUEUE_HANDLE v215; // [rsp+220h] [rbp-168h] BYREF
  struct _KLOCK_QUEUE_HANDLE v216; // [rsp+238h] [rbp-150h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+250h] [rbp-138h] BYREF
  struct _KLOCK_QUEUE_HANDLE v218; // [rsp+268h] [rbp-120h] BYREF
  _QWORD v219[10]; // [rsp+280h] [rbp-108h] BYREF
  unsigned __int64 v220[8]; // [rsp+2D0h] [rbp-B8h] BYREF
  _QWORD v221[8]; // [rsp+310h] [rbp-78h] BYREF

  v1 = *((unsigned int *)a1 + 22);
  v2 = *((_QWORD *)a1 + 6);
  v180 = 0;
  memset(v220, 0, sizeof(v220));
  if ( (_DWORD)v1 == -1 || (unsigned int)v1 >= *(_DWORD *)(v2 + 40) )
    return;
  _mm_lfence();
  v177 = 0;
  v175 = 0;
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 2992 + 8 * v1);
  v206 = (__int64 *)(v2 + 2992 + 8 * v1);
  v6 = (unsigned int)v1;
  v176 = 0;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 1880), &v218);
  LODWORD(v9) = 1;
  if ( (*((_BYTE *)a1 + 104) & 1) == 0 )
  {
    v7 = *(_QWORD *)(v5 + 18848);
    if ( v7 )
    {
      v8 = *((_QWORD *)a1 + 10) - *(_QWORD *)(v5 + 18800);
      v10 = *((_QWORD *)a1 + 7) - *(_QWORD *)(v5 + 18808);
      if ( *((_QWORD *)a1 + 10) != *(_QWORD *)(v5 + 18800) )
      {
        if ( v7 <= 3 )
        {
          v77 = v10 + *(_QWORD *)(v5 + 18864);
          *(_QWORD *)(v5 + 18864) = v77;
          *(_QWORD *)(v5 + 18848) = v7 + v8;
          if ( v7 + v8 > 3 )
          {
            v78 = v77 / (v7 + v8 - 1);
            v7 = v78 / 0xA;
            *(_QWORD *)(v5 + 18872) = v78 / 0xA;
            _m_prefetchw((const void *)(v5 + 18856));
            while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 18856), v78, *(_QWORD *)(v5 + 18856)) != v78 )
              ;
          }
        }
        else
        {
          if ( v8 != 1 )
            v10 /= v8;
          v8 = *(_QWORD *)(v5 + 18872);
          v7 = *(_QWORD *)(v5 + 18856);
          *(_QWORD *)(v5 + 18888) = v10;
          if ( v10 > v7 + v8 || (v7 -= v8, v10 < v7) )
          {
            ++*(_QWORD *)(v5 + 18880);
            *(_QWORD *)(v5 + 18848) = 0LL;
          }
        }
      }
      LODWORD(v9) = 1;
    }
    else
    {
      *(_QWORD *)(v5 + 18864) = 0LL;
      *(_QWORD *)(v5 + 18848) = 1LL;
    }
    if ( *(_QWORD *)(v5 + 18848) <= 3uLL )
      _InterlockedExchange((volatile __int32 *)(v2 + 2020), 1);
    *(_QWORD *)(v5 + 18800) = *((_QWORD *)a1 + 10);
    *(_QWORD *)(v5 + 18808) = *((_QWORD *)a1 + 7);
    *(_QWORD *)(v5 + 18816) = *((_QWORD *)a1 + 8);
    *(_QWORD *)(v5 + 18824) = *((_QWORD *)a1 + 9);
  }
  v11 = *(_DWORD *)(v5 + 4);
  if ( v11 < 4 && (!*(_BYTE *)(v2 + 132) || v11 != 3) )
    goto LABEL_27;
  v12 = 0;
  if ( !*(_DWORD *)(v2 + 128) )
    goto LABEL_26;
  do
  {
    v13 = *(_QWORD *)(v5 + 8LL * v12 + 24);
    if ( !v13 )
      goto LABEL_24;
    LODWORD(v9) = *(_DWORD *)(v13 + 48);
    v14 = 0;
    v184 = 0;
    v7 = 0LL;
    v189 = 0LL;
    v15 = *(_DWORD *)(v13 + 44) - 1;
    v183 = v9;
    if ( (_DWORD)v9 == (v15 & 0x3F) )
      goto LABEL_22;
    do
    {
      v9 = 1224LL * (unsigned int)v9;
      v16 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)(v9 + v13 + 56);
      *(_QWORD *)v182 = v16;
      v17 = *((_DWORD *)v16 + 261);
      if ( v17 != 5 && v17 != 15 )
        break;
      if ( !*(_BYTE *)(v2 + 132) && !*((_QWORD *)a1 + 14) )
      {
        VidSchiQueueDeferredVisibilityWorkItem((struct _VIDSCH_PRESENT_INFO *)v5, (struct _VIDSCH_GLOBAL *)v2);
        v16 = *(struct VIDSCH_FLIP_QUEUE_ENTRY **)v182;
      }
      if ( (unsigned int)VidSchiIsExpectedVSyncCookie((struct _VIDSCH_GLOBAL *)v2, v16, a1) )
      {
        v189 = *(_QWORD **)(**(_QWORD **)v182 + 104LL);
        memset(v202, 0, sizeof(v202));
        v28 = *((_DWORD *)a1 + 4) == 10;
        v29 = v183;
        *(_OWORD *)&v202[32] = *(_OWORD *)(v5 + 18800);
        *(_QWORD *)&v202[48] = *(_QWORD *)(v5 + 18816);
        *(_QWORD *)v202 = v2;
        *(_QWORD *)&v202[8] = v189;
        *(_DWORD *)&v202[16] = v1;
        *(_DWORD *)&v202[20] = v12;
        *(_DWORD *)&v202[24] = v183;
        if ( v28 && (*((_DWORD *)a1 + 4 * v12 + 30) & 1) != 0 )
        {
          v176 = 1;
          *(_DWORD *)(*(_QWORD *)v182 + 1044LL) = 14;
          VidSchiProcessVsyncCompletedFlipEntry(
            (struct _VIDSCH_VSYNC_COMPLETED_ENTRY_INFO *)v202,
            v220,
            &v180,
            &v184,
            &v175,
            1);
          memset(v219, 0, sizeof(v219));
          LODWORD(v219[1]) = v12;
          *(_OWORD *)&v219[3] = *(_OWORD *)v202;
          v219[2] = *((_QWORD *)a1 + 2 * v12 + 14);
          v89 = *((_DWORD *)a1 + 24);
          *(_OWORD *)&v219[5] = *(_OWORD *)&v202[16];
          HIDWORD(v219[0]) = v89;
          LODWORD(v219[0]) = *((_DWORD *)a1 + 23);
          *(_OWORD *)&v219[7] = *(_OWORD *)&v202[32];
          v219[9] = *(_QWORD *)&v202[48];
          VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(v219, 6LL);
          goto LABEL_24;
        }
        v30 = 0LL;
        v31 = ((_BYTE)v183 + 1) & 0x3F;
        v197 = 0LL;
        v196 = v31;
        v32 = *v206;
        v190 = v32;
        v33 = *(_QWORD **)(v32 + 8LL * v12 + 24);
        v194 = v33;
        v34 = *((unsigned int *)v33 + 11);
        v191 = v34;
        if ( (_DWORD)v34 != v31 )
        {
          while ( 2 )
          {
            v35 = (__int64)&v33[153 * v34 + 7];
            v201 = v35;
            *(_QWORD *)(v35 + 1104) = *(_QWORD *)&v202[32];
            *(_QWORD *)(v35 + 1088) = *(_QWORD *)&v202[40];
            *(_QWORD *)(v35 + 1096) = *(_QWORD *)&v202[48];
            v36 = *(_DWORD *)(v35 + 1112);
            *(_DWORD *)(v35 + 1044) = 11;
            if ( (v36 & 0x10) != 0 )
              v37 = (unsigned __int8)**(_DWORD **)(v35 + 1152) | *(unsigned __int8 *)(*(_QWORD *)(v35 + 1152) + 1LL);
            else
              v37 = (1 << *(_DWORD *)(v2 + 128)) - 1;
            LODWORD(v197) = v37;
            *(_DWORD *)(v32 + 2316) &= ~v37;
            HIDWORD(v197) = *(_DWORD *)(v35 + 1040);
            if ( (*(_DWORD *)(v35 + 1112) & 0x10) != 0 )
              LOWORD(v38) = *(_WORD *)(v32 + 18768) & ((unsigned __int8)**(_WORD **)(v35 + 1152) | *(unsigned __int8 *)(*(_QWORD *)(v35 + 1152) + 1LL));
            else
              LOWORD(v38) = *(_WORD *)(v32 + 18768);
            v39 = 0;
            v188 = 0;
            if ( (_WORD)v38 )
            {
              while ( 2 )
              {
                v38 = (unsigned __int16)v38;
                v28 = !_BitScanForward((unsigned int *)&v40, (unsigned __int16)v38);
                v179 = (unsigned __int16)v38;
                v203 = v40;
                if ( v28 )
                  LOBYTE(v40) = -1;
                v41 = 0;
                v42 = (char)v40;
                v195 = (char)v40;
                v181 = 0;
                if ( *(_WORD *)(v32 + 18770) )
                {
                  v43 = (__int64)(char)v40 << 6;
                  v187 = (struct _KEVENT **)(v42 << 6);
                  while ( 1 )
                  {
                    v178 = (unsigned int *)v41;
                    v44 = (unsigned int *)(32 * (v41 + v43) + v32);
                    v45 = *((_QWORD *)v44 + 299);
                    v185 = v44;
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v45 + 16) + 8LL));
                    v192 = *(_QWORD **)(v32 + 16);
                    v46 = (_QWORD *)v192[4];
                    v199 = *(VIDMM_GLOBAL **)(v46[1] + 440LL);
                    KeAcquireInStackQueuedSpinLock(v46 + 239, &v207);
                    v48 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)(v46 + 242);
                    v49 = *(struct VIDSCH_FLIP_QUEUE_ENTRY **)v48;
                    if ( *(struct VIDSCH_FLIP_QUEUE_ENTRY **)v48 != v48 )
                    {
                      do
                      {
                        *(_QWORD *)v182 = *(_QWORD *)v49;
                        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v47, (char *)v49 - 200) )
                        {
                          v103 = *v100;
                          v104 = (_QWORD *)v100[1];
                          if ( *(_QWORD **)(*v100 + 8LL) != v100 || (_QWORD *)*v104 != v100 )
                            __fastfail(3u);
                          *v104 = v103;
                          *(_QWORD *)(v103 + 8) = v104;
                          VIDMM_GLOBAL::AddPendingTermination(*v101[1], (struct VIDMM_ALLOC *)v101);
                          v102 = *(struct VIDSCH_FLIP_QUEUE_ENTRY **)v182;
                        }
                        v49 = v102;
                      }
                      while ( v102 != v48 );
                    }
                    KeReleaseInStackQueuedSpinLock(&v207);
                    v50 = v192;
                    v51 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)(v192 + 153);
                    v52 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)v192[153];
                    if ( v52 == (struct VIDSCH_FLIP_QUEUE_ENTRY *)(v192 + 153) )
                      goto LABEL_68;
                    while ( 1 )
                    {
                      v105 = v52;
                      *(_QWORD *)v182 = v52;
                      v52 = *(struct VIDSCH_FLIP_QUEUE_ENTRY **)v52;
                      v186 = (unsigned int *)v52;
                      v106 = *((_QWORD *)v105 + 2);
                      if ( v106 > v50[152] )
                        break;
LABEL_187:
                      v111 = (unsigned int *)*((_QWORD *)v105 + 11);
                      v112 = (unsigned int *)((char *)v105 + 88);
                      v193 = (unsigned int *)((char *)v105 + 88);
                      if ( v111 != (unsigned int *)((char *)v105 + 88) )
                      {
                        do
                        {
                          v113 = (char *)(v111 - 54);
                          v114 = v111;
                          v198 = *(_QWORD **)v111;
                          v115 = *(_QWORD *)v111;
                          v116 = (_QWORD *)*((_QWORD *)v111 + 1);
                          v200 = v113;
                          if ( *(char **)(v115 + 8) != v113 + 216 || (_QWORD *)*v116 != v114 )
                            __fastfail(3u);
                          *v116 = v115;
                          *(_QWORD *)(v115 + 8) = v116;
                          VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v113);
                          v117 = v200;
                          v111 = (unsigned int *)v198;
                          v112 = v193;
                          *((_QWORD *)v200 + 27) = 0LL;
                          *((_QWORD *)v117 + 28) = 0LL;
                        }
                        while ( v111 != v112 );
                        v50 = v192;
                        v52 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)v186;
                        v105 = *(struct VIDSCH_FLIP_QUEUE_ENTRY **)v182;
                      }
                      v118 = (_QWORD *)*((_QWORD *)v105 + 9);
                      v119 = (_QWORD *)((char *)v105 + 72);
                      if ( v118 != (_QWORD *)((char *)v105 + 72) )
                      {
                        do
                        {
                          v120 = (unsigned int *)(v118 - 25);
                          v121 = v118;
                          v198 = (_QWORD *)*v118;
                          v122 = *v118;
                          v123 = (_QWORD *)*((_QWORD *)v120 + 26);
                          v193 = v120;
                          if ( *(unsigned int **)(v122 + 8) != v120 + 50 || (_QWORD *)*v123 != v121 )
                            __fastfail(3u);
                          *v123 = v122;
                          *(_QWORD *)(v122 + 8) = v123;
                          if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v123, v120) )
                          {
                            VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v199, v125);
                          }
                          else
                          {
                            KeAcquireInStackQueuedSpinLockAtDpcLevel(
                              (PKSPIN_LOCK)(*(_QWORD *)(v124 + 32) + 1912LL),
                              &v208);
                            v126 = v192[4] + 1936LL;
                            v127 = *(_QWORD **)(v192[4] + 1944LL);
                            if ( *v127 != v126 )
                              __fastfail(3u);
                            v128 = v193 + 50;
                            *((_QWORD *)v193 + 25) = v126;
                            v128[1] = v127;
                            *v127 = v128;
                            *(_QWORD *)(v126 + 8) = v128;
                            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v208);
                          }
                          v105 = *(struct VIDSCH_FLIP_QUEUE_ENTRY **)v182;
                          v118 = v198;
                          v50 = v192;
                          v119 = (_QWORD *)(*(_QWORD *)v182 + 72LL);
                        }
                        while ( v198 != (_QWORD *)(*(_QWORD *)v182 + 72LL) );
                        v52 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)v186;
                        v112 = (unsigned int *)(*(_QWORD *)v182 + 88LL);
                      }
                      if ( (_QWORD *)*v119 == v119 && *(unsigned int **)v112 == v112 )
                      {
                        v129 = *(struct VIDSCH_FLIP_QUEUE_ENTRY **)v105;
                        v130 = (struct VIDSCH_FLIP_QUEUE_ENTRY **)*((_QWORD *)v105 + 1);
                        if ( *(struct VIDSCH_FLIP_QUEUE_ENTRY **)(*(_QWORD *)v105 + 8LL) != v105 || *v130 != v105 )
                          __fastfail(3u);
                        v28 = bTracingEnabled == 0;
                        *v130 = v129;
                        *((_QWORD *)v129 + 1) = v130;
                        if ( !v28 )
                        {
                          v118 = (_QWORD *)v50[1];
                          if ( !v118 )
                            v118 = v50;
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          {
                            Template_px(v129, v118, v105, v118, *((_QWORD *)v105 + 2));
                            v105 = *(struct VIDSCH_FLIP_QUEUE_ENTRY **)v182;
                          }
                        }
                        _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v105, (unsigned int)v118);
                        v50 = v192;
                        v52 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)v186;
                      }
                      if ( v52 == v51 )
                        goto LABEL_68;
                    }
                    v107 = *((_DWORD *)v105 + 16);
                    v108 = 0;
                    if ( !v107 )
                      break;
                    v109 = (char *)*((_QWORD *)v105 + 3);
                    v200 = v109;
                    while ( 1 )
                    {
                      v110 = &v109[16 * v108];
                      if ( *(_QWORD *)v110 )
                      {
                        if ( *(_QWORD *)(*(_QWORD *)v110 + 152LL) < *((_QWORD *)v110 + 1) )
                          break;
                      }
                      v109 = v200;
                      if ( ++v108 >= v107 )
                      {
                        v52 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)v186;
                        goto LABEL_186;
                      }
                    }
LABEL_68:
                    v53 = v185;
                    v39 = 1;
                    v41 = ++v181;
                    *((_QWORD *)v185 + 298) = 0LL;
                    *((_QWORD *)v53 + 299) = 0LL;
                    *((_WORD *)v53 + 1204) = 0;
                    *(_QWORD *)(32 * ((__int64)v187 + (_QWORD)v178 + 75) + v32) = 0LL;
                    v43 = (__int64)v187;
                    if ( v41 >= *(unsigned __int16 *)(v32 + 18770) )
                    {
                      v38 = v179;
                      LOBYTE(v42) = v195;
                      goto LABEL_70;
                    }
                  }
LABEL_186:
                  v50[152] = v106;
                  goto LABEL_187;
                }
LABEL_70:
                v38 &= ~(1 << v42);
                v54 = (unsigned __int16)v188 | (1 << v42);
                *(_WORD *)(v32 + 18768) &= ~(1 << v42);
                v188 = v54;
                if ( (_WORD)v38 )
                  continue;
                break;
              }
              if ( v39 )
              {
                v55 = *(unsigned int **)(v32 + 16);
                v185 = v55;
                if ( v55 )
                {
                  v56 = (__int64 *)*((_QWORD *)v55 + 8);
                  v57 = 0;
                  v181 = 0;
                  if ( v56 != (__int64 *)(v55 + 16) )
                  {
                    v58 = (__int64 *)(v55 + 16);
                    do
                    {
                      v59 = 0;
                      if ( (v56[19] & 0x10) != 0 )
                      {
                        *((_DWORD *)v56 + 38) &= ~0x10u;
                        v92 = VidSchiUnwaitContext(v56 - 3, 19606LL);
                        v57 = v181;
                        v59 = v92;
                      }
                      v56 = (__int64 *)*v56;
                      v57 |= v59;
                      v181 = v57;
                    }
                    while ( v56 != v58 );
                    v32 = v190;
                    v55 = v185;
                  }
                  v60 = 0;
                  v61 = (_QWORD **)(*((_QWORD *)v55 + 4) + 3120LL);
                  while ( 1 )
                  {
                    v179 = v60;
                    if ( *v61 == v61 )
                      break;
                    v93 = (_QWORD **)*v61;
                    v94 = (_QWORD *)**v61;
                    if ( (_QWORD **)(*v61)[1] != v61 || (_QWORD **)v94[1] != v93 )
                      __fastfail(3u);
                    *v61 = v94;
                    v95 = (struct _VIDSCH_CONTEXT *)(v93 - 5);
                    v94[1] = v61;
                    *((_QWORD *)v95 + 5) = 0LL;
                    *((_QWORD *)v95 + 6) = 0LL;
                    updated = VidSchiUpdateFlipContextStatus(v95);
                    v60 = updated | v179;
                  }
                  v179 = v181 | v60;
                }
                else
                {
                  v179 = 0;
                }
                v62 = *(_QWORD **)(v32 + 16);
                v185 = (unsigned int *)v62;
                if ( v62 )
                {
                  v63 = v62[4];
                  v187 = (struct _KEVENT **)(v62 + 12);
                  v170 = KfRaiseIrql(2u);
                  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v63 + 1896), &v209);
                  if ( *v187 == (struct _KEVENT *)v187 )
                    goto LABEL_84;
                  v131 = *v187;
                  while ( LODWORD(v131->Header.WaitListHead.Blink) == 4 )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)&v131[1].Header.Lock
                                   + 4LL * LODWORD(v131[1].Header.WaitListHead.Blink)
                                   + 1060) < *(_DWORD *)(*(_QWORD *)&v131[1].Header.Lock + 204LL) )
                      goto LABEL_220;
LABEL_221:
                    v131 = *(struct _KEVENT **)&v131->Header.Lock;
                    if ( v131 == (struct _KEVENT *)v187 )
                    {
                      v32 = v190;
LABEL_84:
                      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v209);
                      KeLowerIrql(v170);
                      v187 = (struct _KEVENT **)(v185 + 28);
                      v171 = KfRaiseIrql(2u);
                      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v63 + 1896), &v210);
                      if ( *v187 == (struct _KEVENT *)v187 )
                        goto LABEL_85;
                      v133 = *v187;
                      while ( 2 )
                      {
                        if ( LODWORD(v133->Header.WaitListHead.Blink) == 4 )
                        {
                          if ( *(_DWORD *)(*(_QWORD *)&v133[1].Header.Lock
                                         + 4LL * LODWORD(v133[1].Header.WaitListHead.Blink)
                                         + 1060) < *(_DWORD *)(*(_QWORD *)&v133[1].Header.Lock + 204LL) )
                            goto LABEL_229;
                        }
                        else if ( ((__int64)v133[1].Header.WaitListHead.Flink & 4) == 0
                               || (Flink = (int)v133[1].Header.WaitListHead.Blink->Flink,
                                   (HIDWORD(v133[5].Header.WaitListHead.Blink) = Flink) == 0) )
                        {
LABEL_229:
                          ++v133[5].Header.LockNV;
                          KeSetEvent(v133 + 4, 0, 0);
                        }
                        v133 = *(struct _KEVENT **)&v133->Header.Lock;
                        if ( v133 == (struct _KEVENT *)v187 )
                        {
                          v32 = v190;
LABEL_85:
                          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v210);
                          KeLowerIrql(v171);
                          v172 = KfRaiseIrql(2u);
                          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v63 + 1896), &v211);
                          if ( *(_QWORD *)(v63 + 1824) == v63 + 1824 )
                            goto LABEL_86;
                          v90 = *(struct _KEVENT **)(v63 + 1824);
                          while ( 2 )
                          {
                            if ( LODWORD(v90->Header.WaitListHead.Blink) == 4 )
                            {
                              if ( *(_DWORD *)(*(_QWORD *)&v90[1].Header.Lock
                                             + 4LL * LODWORD(v90[1].Header.WaitListHead.Blink)
                                             + 1060) >= *(_DWORD *)(*(_QWORD *)&v90[1].Header.Lock + 204LL) )
                                goto LABEL_148;
                            }
                            else if ( ((__int64)v90[1].Header.WaitListHead.Flink & 4) != 0 )
                            {
                              v91 = (int)v90[1].Header.WaitListHead.Blink->Flink;
                              HIDWORD(v90[5].Header.WaitListHead.Blink) = v91;
                              if ( v91 )
                              {
LABEL_148:
                                v90 = *(struct _KEVENT **)&v90->Header.Lock;
                                if ( v90 == (struct _KEVENT *)(v63 + 1824) )
                                {
                                  v32 = v190;
LABEL_86:
                                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v211);
                                  KeLowerIrql(v172);
                                  v173 = KfRaiseIrql(2u);
                                  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v63 + 1896), &v212);
                                  if ( *(_QWORD *)(v63 + 1808) == v63 + 1808 )
                                    goto LABEL_87;
                                  v79 = *(struct _KEVENT **)(v63 + 1808);
                                  while ( 2 )
                                  {
                                    if ( LODWORD(v79->Header.WaitListHead.Blink) == 4 )
                                    {
                                      if ( *(_DWORD *)(*(_QWORD *)&v79[1].Header.Lock
                                                     + 4LL * LODWORD(v79[1].Header.WaitListHead.Blink)
                                                     + 1060) >= *(_DWORD *)(*(_QWORD *)&v79[1].Header.Lock + 204LL) )
                                        goto LABEL_129;
                                    }
                                    else if ( ((__int64)v79[1].Header.WaitListHead.Flink & 4) != 0 )
                                    {
                                      v80 = (int)v79[1].Header.WaitListHead.Blink->Flink;
                                      HIDWORD(v79[5].Header.WaitListHead.Blink) = v80;
                                      if ( v80 )
                                      {
LABEL_129:
                                        v79 = *(struct _KEVENT **)&v79->Header.Lock;
                                        if ( v79 == (struct _KEVENT *)(v63 + 1808) )
                                        {
                                          v32 = v190;
LABEL_87:
                                          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v212);
                                          KeLowerIrql(v173);
                                          *(_QWORD *)(v63 + 1656) = MEMORY[0xFFFFF78000000320];
                                          KeSetEvent((PRKEVENT)(v63 + 1624), 0, 0);
                                          *(_QWORD *)(v63 + 1768) = MEMORY[0xFFFFF78000000320];
                                          KeSetEvent((PRKEVENT)(v63 + 1736), 0, 0);
                                          if ( v179 )
                                          {
                                            *(_QWORD *)(v63 + 1376) = MEMORY[0xFFFFF78000000320];
                                            KeSetEvent((PRKEVENT)(v63 + 1344), 0, 0);
                                          }
                                          v174 = KfRaiseIrql(2u);
                                          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v63 + 1896), &v213);
                                          if ( *(_QWORD *)(v63 + 1840) == v63 + 1840 )
                                          {
LABEL_90:
                                            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v213);
                                            KeLowerIrql(v174);
                                            if ( *(_WORD *)(v32 + 18772) )
                                            {
                                              v137 = *(KSPIN_LOCK **)(v63 + 1872);
                                              KeAcquireInStackQueuedSpinLock(v137, &v214);
                                              v138 = (struct _KEVENT *)v137[1];
                                              if ( v138 )
                                                KeSetEvent(v138, 0, 0);
                                              KeReleaseInStackQueuedSpinLock(&v214);
                                            }
                                            goto LABEL_91;
                                          }
                                          v135 = *(struct _KEVENT **)(v63 + 1840);
                                          while ( 2 )
                                          {
                                            if ( LODWORD(v135->Header.WaitListHead.Blink) == 4 )
                                            {
                                              if ( *(_DWORD *)(*(_QWORD *)&v135[1].Header.Lock
                                                             + 4LL * LODWORD(v135[1].Header.WaitListHead.Blink)
                                                             + 1060) < *(_DWORD *)(*(_QWORD *)&v135[1].Header.Lock
                                                                                 + 204LL) )
                                                goto LABEL_242;
                                            }
                                            else if ( ((__int64)v135[1].Header.WaitListHead.Flink & 4) == 0
                                                   || (v136 = (int)v135[1].Header.WaitListHead.Blink->Flink,
                                                       (HIDWORD(v135[5].Header.WaitListHead.Blink) = v136) == 0) )
                                            {
LABEL_242:
                                              ++v135[5].Header.LockNV;
                                              KeSetEvent(v135 + 4, 0, 0);
                                            }
                                            v135 = *(struct _KEVENT **)&v135->Header.Lock;
                                            if ( v135 == (struct _KEVENT *)(v63 + 1840) )
                                            {
                                              v32 = v190;
                                              goto LABEL_90;
                                            }
                                            continue;
                                          }
                                        }
                                        continue;
                                      }
                                    }
                                    break;
                                  }
                                  ++v79[5].Header.LockNV;
                                  KeSetEvent(v79 + 4, 0, 0);
                                  goto LABEL_129;
                                }
                                continue;
                              }
                            }
                            break;
                          }
                          ++v90[5].Header.LockNV;
                          KeSetEvent(v90 + 4, 0, 0);
                          goto LABEL_148;
                        }
                        continue;
                      }
                    }
                  }
                  if ( ((__int64)v131[1].Header.WaitListHead.Flink & 4) != 0 )
                  {
                    v132 = (int)v131[1].Header.WaitListHead.Blink->Flink;
                    HIDWORD(v131[5].Header.WaitListHead.Blink) = v132;
                    if ( v132 )
                      goto LABEL_221;
                  }
LABEL_220:
                  ++v131[5].Header.LockNV;
                  KeSetEvent(v131 + 4, 0, 0);
                  goto LABEL_221;
                }
LABEL_91:
                *(_WORD *)(v32 + 18772) &= ~(_WORD)v188;
              }
              v35 = v201;
            }
            VidSchiReferenceDisplayingAllocationsForThisEntry(v2, (_WORD *)v32, v35);
            v31 = v196;
            v33 = v194;
            v34 = ((_BYTE)v191 + 1) & 0x3F;
            v191 = v34;
            if ( (_DWORD)v34 != v196 )
              continue;
            break;
          }
          v30 = v197;
          v29 = v183;
        }
        v64 = *((_DWORD *)v33 + 11);
        *((_DWORD *)v33 + 11) = v31;
        if ( *((_DWORD *)v33 + 12) == v29 )
          *((_DWORD *)v33 + 12) = v31;
        v65 = VidSchiCompleteFlipEntry(v2, v1, v12, v64, v29, 0, 0LL);
        v7 = (unsigned __int64)v189;
        v14 = v65;
        v184 = v65;
        if ( v65 )
        {
          v9 = v180++;
          v175 = 1;
          v220[v9] = v30;
        }
        goto LABEL_22;
      }
      LODWORD(v9) = ((_BYTE)v183 - 1) & 0x3F;
      v88 = ((unsigned __int8)*(_DWORD *)(v13 + 44) - 1) & 0x3F;
      v183 = v9;
    }
    while ( (_DWORD)v9 != v88 );
    v7 = 0LL;
LABEL_22:
    if ( *(_DWORD *)(v5 + 2300) && *(_BYTE *)(v5 + 46932) )
    {
      VidSchiExecuteNextFlipQueueEntry((struct _VIDSCH_GLOBAL *)v2, &v177, v1, v12);
      v7 = (unsigned __int64)v189;
    }
    if ( !v7 )
      goto LABEL_24;
    v66 = *(_QWORD *)(v7 + 32);
    v199 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v66 + 8) + 440LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v66 + 1912), &v215);
    v68 = (unsigned int ***)(v66 + 1936);
    v69 = *v68;
    if ( *v68 != (unsigned int **)v68 )
    {
      do
      {
        v178 = *v69;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v67, v69 - 25) )
        {
          v142 = *v139;
          v143 = (_QWORD *)v139[1];
          if ( *(_QWORD **)(*v139 + 8LL) != v139 || (_QWORD *)*v143 != v139 )
            __fastfail(3u);
          *v143 = v142;
          *(_QWORD *)(v142 + 8) = v143;
          VIDMM_GLOBAL::AddPendingTermination(*v140[1], (struct VIDMM_ALLOC *)v140);
          v141 = v178;
        }
        v69 = (unsigned int **)v141;
      }
      while ( v141 != (unsigned int *)v68 );
    }
    KeReleaseInStackQueuedSpinLock(&v215);
    v70 = v189;
    v71 = (unsigned int *)(v189 + 153);
    v72 = (unsigned int *)v189[153];
    if ( v72 == (unsigned int *)(v189 + 153) )
      goto LABEL_101;
    while ( 1 )
    {
      v144 = v72;
      *(_QWORD *)v182 = v72;
      v72 = *(unsigned int **)v72;
      v186 = v72;
      v145 = *((_QWORD *)v144 + 2);
      if ( v145 > v70[152] )
        break;
LABEL_261:
      v149 = (unsigned int *)*((_QWORD *)v144 + 11);
      v150 = v144 + 22;
      v194 = v144 + 22;
      if ( v149 != v144 + 22 )
      {
        do
        {
          v151 = v149 - 54;
          v152 = v149;
          v185 = *(unsigned int **)v149;
          v153 = *(unsigned int **)v149;
          v154 = (unsigned int **)*((_QWORD *)v151 + 28);
          v178 = v151;
          if ( *((unsigned int **)v153 + 1) != v151 + 54 || *v154 != v152 )
            __fastfail(3u);
          *v154 = v153;
          *((_QWORD *)v153 + 1) = v154;
          VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v151);
          v155 = v178;
          v149 = v185;
          v150 = (unsigned int *)v194;
          *((_QWORD *)v178 + 27) = 0LL;
          *((_QWORD *)v155 + 28) = 0LL;
        }
        while ( v149 != v150 );
        v72 = v186;
        v71 = (unsigned int *)(v70 + 153);
        v144 = *(unsigned int **)v182;
      }
      v156 = (unsigned int *)*((_QWORD *)v144 + 9);
      v8 = (unsigned __int64)(v144 + 18);
      v185 = v144 + 18;
      if ( v156 != v144 + 18 )
      {
        do
        {
          v157 = v156 - 50;
          v158 = *(unsigned int **)v156;
          v178 = v157;
          v159 = *((_QWORD *)v157 + 25);
          v160 = (unsigned int **)*((_QWORD *)v157 + 26);
          v193 = v158;
          if ( *(unsigned int **)(v159 + 8) != v157 + 50 || *v160 != v157 + 50 )
            __fastfail(3u);
          *v160 = (unsigned int *)v159;
          *(_QWORD *)(v159 + 8) = v160;
          if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v160, v157) )
          {
            VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v199, v161);
          }
          else
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v70[4] + 1912LL), &v216);
            v162 = v70[4] + 1936LL;
            v163 = *(_QWORD **)(v70[4] + 1944LL);
            if ( *v163 != v162 )
              __fastfail(3u);
            v164 = v178 + 50;
            *((_QWORD *)v178 + 25) = v162;
            v164[1] = v163;
            *v163 = v164;
            *(_QWORD *)(v162 + 8) = v164;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v216);
          }
          v8 = (unsigned __int64)v185;
          v156 = v193;
        }
        while ( v193 != v185 );
        v72 = v186;
        v71 = (unsigned int *)(v70 + 153);
        v144 = *(unsigned int **)v182;
        v150 = (unsigned int *)v194;
      }
      if ( *(_QWORD *)v8 == v8 && *(unsigned int **)v150 == v150 )
      {
        v165 = *(_QWORD *)v144;
        v166 = (unsigned int **)*((_QWORD *)v144 + 1);
        if ( *(unsigned int **)(*(_QWORD *)v144 + 8LL) != v144 || *v166 != v144 )
          __fastfail(3u);
        v28 = bTracingEnabled == 0;
        *v166 = (unsigned int *)v165;
        *(_QWORD *)(v165 + 8) = v166;
        if ( !v28 )
        {
          v167 = (_QWORD *)v70[1];
          if ( !v167 )
            v167 = v70;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            Template_px(v165, v144, v8, v167, *((_QWORD *)v144 + 2));
            v144 = *(unsigned int **)v182;
          }
        }
        _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v144, (unsigned int)v144);
        v72 = v186;
        v71 = (unsigned int *)(v70 + 153);
      }
      if ( v72 == v71 )
        goto LABEL_101;
    }
    v146 = v144[16];
    LODWORD(v8) = 0;
    if ( !v146 )
    {
LABEL_260:
      v70[152] = v145;
      goto LABEL_261;
    }
    v147 = (unsigned int *)*((_QWORD *)v144 + 3);
    v178 = v147;
    while ( 1 )
    {
      v148 = &v147[4 * (unsigned int)v8];
      if ( *(_QWORD *)v148 )
      {
        if ( *(_QWORD *)(*(_QWORD *)v148 + 152LL) < *((_QWORD *)v148 + 1) )
          break;
      }
      v147 = v178;
      LODWORD(v8) = v8 + 1;
      if ( (unsigned int)v8 >= v146 )
      {
        v71 = (unsigned int *)(v70 + 153);
        goto LABEL_260;
      }
    }
LABEL_101:
    v73 = -v14;
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v70[5] + 24LL) + 8LL * *(unsigned int *)(v70[4] + 4LL)) + 8 * v1 + 520);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8 * v1 + 5544) + 8LL), v73);
    v9 = *(_QWORD *)(v2 + 8 * v1 + 5544);
    *(_DWORD *)v9 += v184;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), v73);
    *(_DWORD *)v7 += v184;
LABEL_24:
    ++v12;
  }
  while ( v12 < *(_DWORD *)(v2 + 128) );
  v4 = v176;
LABEL_26:
  v6 = v1;
LABEL_27:
  if ( bTracingEnabled )
  {
    v81 = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (*((_BYTE *)a1 + 104) & 1) == 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      Template_pqxqqipqx(
        v9,
        v7,
        v8,
        *(_QWORD *)(v2 + 16),
        *((_DWORD *)a1 + 23),
        *((_QWORD *)a1 + 14),
        *((_DWORD *)a1 + 22),
        *((_DWORD *)a1 + 20),
        *((_QWORD *)a1 + 7),
        0,
        0,
        v220[0]);
      v81 = Microsoft_Windows_DxgKrnlEnableBits;
    }
    memset(v221, 0, sizeof(v221));
    v84 = *((_DWORD *)a1 + 4);
    switch ( v84 )
    {
      case 10:
        v85 = *(_DWORD *)(v2 + 128);
        if ( v85 )
        {
          v82 = v221;
          v83 = v85;
          v86 = (__int64 *)((char *)a1 + 112);
          do
          {
            v87 = *v86;
            v86 += 2;
            *v82++ = v87;
            --v83;
          }
          while ( v83 );
        }
        break;
      case 3:
        v221[0] = *((_QWORD *)a1 + 14);
        break;
      case 7:
        LODWORD(v82) = -1;
        LODWORD(v83) = (unsigned __int8)*((_DWORD *)a1 + 25);
        v28 = !_BitScanForward((unsigned int *)&v97, v83);
        v204 = v97;
        if ( !v28 )
          LODWORD(v82) = (unsigned __int8)v97;
        v98 = 0;
        if ( (_DWORD)v83 )
        {
          do
          {
            v221[(char)v82] = *((_QWORD *)a1 + 5 * v98 + 14);
            v99 = 1 << (char)v82;
            LODWORD(v82) = -1;
            LODWORD(v83) = ~v99 & v83;
            v28 = !_BitScanForward((unsigned int *)&v99, v83);
            v205 = v99;
            if ( !v28 )
              LODWORD(v82) = (unsigned __int8)v99;
            ++v98;
          }
          while ( (_DWORD)v83 );
          v6 = v1;
        }
        break;
    }
    if ( (*((_BYTE *)a1 + 104) & 1) != 0 )
    {
      if ( (v81 & 0x40) == 0 )
        goto LABEL_28;
      v168 = &EventHSyncDPCMultiPlane;
    }
    else
    {
      if ( (v81 & 0x40) == 0 )
        goto LABEL_28;
      v168 = &EventVSyncDPCMultiPlane;
    }
    Template_pqXR1qqqXR5(
      (_DWORD)v82,
      (_DWORD)v168,
      v83,
      *(_QWORD *)(v2 + 16),
      *(_DWORD *)(v2 + 128),
      (__int64)v221,
      *((_DWORD *)a1 + 22),
      *((_DWORD *)a1 + 20),
      v180,
      (__int64)v220);
  }
LABEL_28:
  if ( (*((_BYTE *)a1 + 104) & 1) == 0 )
  {
    if ( v175 || v4 )
    {
      *(_DWORD *)(v2 + 2028) = -1;
      *(_DWORD *)(v2 + 2024) = 0;
    }
    else if ( *(_BYTE *)(v2 + 45) == 1 && *(_DWORD *)(v2 + 2032) )
    {
      if ( _InterlockedExchange((volatile __int32 *)(v2 + 2020), 0)
        || *(_DWORD *)(*(_QWORD *)(v2 + 16) + 2312LL)
        || *(_DWORD *)(v2 + 960)
        || *(_DWORD *)(v2 + 976)
        || *(_DWORD *)(v2 + 1972) )
      {
        *(_DWORD *)(v2 + 2028) = -1;
        *(_DWORD *)(v2 + 2024) = 0;
      }
      else
      {
        if ( *(_DWORD *)(v2 + 2028) == -1 )
          *(_DWORD *)(v2 + 2028) = v1;
        if ( *(_DWORD *)(v2 + 2028) == (_DWORD)v1 )
        {
          v74 = *(_DWORD *)(v2 + 2024);
          if ( v74 != -1 )
          {
            v75 = *(_DWORD *)(v2 + 2032);
            v76 = v74 + 1;
            *(_DWORD *)(v2 + 2024) = v76;
            if ( v76 == v75 )
            {
              if ( !_InterlockedExchange((volatile __int32 *)(v2 + 2016), 1) )
                ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 1984), CriticalWorkQueue);
            }
            else if ( v76 > v75 )
            {
              *(_DWORD *)(v2 + 2024) = v75 + 1;
            }
          }
        }
      }
    }
    v18 = *(_QWORD *)(v2 + 16);
    v19 = *(_DWORD *)(v5 + 18800);
    v20 = *(_QWORD *)(v18 + 2280);
    if ( (unsigned int)v1 < *(_DWORD *)(v20 + 80) )
    {
      v21 = *(_QWORD *)(v20 + 112) + 3208 * v6;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v21 + 920), &LockHandle);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_qqqq(
          *(unsigned __int8 *)(v21 + 912),
          v22,
          v23,
          *(_DWORD *)(v21 + 904),
          v19,
          *(_BYTE *)(v21 + 912),
          *(_DWORD *)(v18 + 2312));
      KePulseEvent((PRKEVENT)(v21 + 872), 0, 0);
      if ( *(_QWORD *)(v21 + 896) )
      {
        *(_DWORD *)(v21 + 908) = v19;
        if ( *(_DWORD *)(v21 + 904) <= v19 )
        {
          if ( *(_BYTE *)(v21 + 912) )
          {
            *(_BYTE *)(v21 + 912) = 0;
            if ( *(_QWORD *)(v18 + 2288) )
            {
              if ( _InterlockedDecrement((volatile signed __int32 *)(v18 + 2312)) < 0 )
              {
                v169 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v26);
                v169[3] = 275LL;
                v169[4] = 28LL;
                v169[5] = v18;
                v169[6] = *(unsigned int *)(v18 + 2312);
                v169[7] = 0LL;
                WdLogEvent5_WdCriticalError(v169);
              }
            }
          }
          KeSetEvent(*(PRKEVENT *)(v21 + 896), 0, 0);
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  if ( v177 )
    VidSchiCompletePendingFlip(v2, (unsigned int)v1, 9LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v218);
  if ( (*((_BYTE *)a1 + 104) & 1) == 0 )
  {
    v27 = *(void (__fastcall **)(_QWORD, _QWORD))(v2 + 2896);
    if ( v27 )
      v27(*(_QWORD *)(v2 + 2912), (unsigned int)v1);
  }
}
