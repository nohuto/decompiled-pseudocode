/*
 * XREFs of VidSchiProcessDpcVSyncCookie @ 0x1C000F6B0
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C000F330 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002A5B8 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00103BC (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C00104A4 (-VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_V.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010550 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0010E10 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiUnwaitContext @ 0x1C0011080 (VidSchiUnwaitContext.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C001161C (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013070 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C0015864 (VidSchiCompletePendingFlipOnPlane.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0027284 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0028260 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0028430 (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     McTemplateK0pqXR1qqqXR5 @ 0x1C002911C (McTemplateK0pqXR1qqqXR5.c)
 *     McTemplateK0pqxqqipqx @ 0x1C0029DFC (McTemplateK0pqxqqipqx.c)
 *     McTemplateK0qqqq @ 0x1C002A45C (McTemplateK0qqqq.c)
 */

void __fastcall VidSchiProcessDpcVSyncCookie(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  __int64 v1; // r15
  struct _VIDSCH_VSYNC_COOKIE *v2; // rdi
  __int64 v3; // r12
  __int64 v4; // r14
  char v5; // si
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // r9
  unsigned int v12; // r13d
  __int64 v13; // rbx
  unsigned int v14; // esi
  char v15; // al
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  _QWORD *v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // r13
  unsigned int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // edx
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  void (__fastcall *v32)(_QWORD, _QWORD); // rax
  bool v33; // zf
  unsigned int v34; // edx
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  int v37; // r11d
  __int64 v38; // r10
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned int v41; // eax
  int v42; // eax
  int v43; // edx
  struct VIDSCH_FLIP_QUEUE_ENTRY *v44; // rsi
  int v45; // r9d
  int v46; // edx
  int v47; // eax
  struct VIDSCH_FLIP_QUEUE_ENTRY *v48; // rdi
  __int64 v49; // rcx
  unsigned int v50; // r12d
  __int64 v51; // r14
  __int64 v52; // rbx
  char *v53; // rsi
  _QWORD *v54; // rbx
  _QWORD *v55; // rax
  _QWORD *v56; // rcx
  int v57; // edx
  _QWORD *v58; // rdi
  int v59; // r8d
  int v60; // ecx
  _QWORD **v61; // rbx
  _QWORD *v62; // rax
  struct _KEVENT *v63; // rbx
  __int64 v64; // rbx
  int v65; // r9d
  __int64 v66; // rcx
  unsigned int v67; // esi
  __int64 v68; // rdx
  _DWORD *v69; // rcx
  unsigned int v70; // eax
  int v71; // eax
  int v72; // eax
  unsigned int v73; // ecx
  unsigned int v74; // eax
  int v75; // ecx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rcx
  struct _KEVENT *v78; // rsi
  int v79; // ecx
  _QWORD *v80; // rcx
  int updated; // eax
  unsigned __int8 v82; // al
  struct _KEVENT *v83; // rdi
  int v84; // eax
  _DWORD *v85; // rax
  struct _KEVENT *v86; // r14
  int Flink; // ecx
  struct _KEVENT *v88; // rdi
  int v89; // ecx
  struct _KEVENT *v90; // r14
  int v91; // ecx
  int v92; // ecx
  int v93; // edx
  char v94; // cl
  int v95; // eax
  unsigned int v96; // r12d
  __int64 v97; // r8
  __int64 v98; // rcx
  KSPIN_LOCK *v99; // rax
  KSPIN_LOCK *v100; // rax
  struct _KEVENT *v101; // rdx
  PKSPIN_LOCK v102; // r12
  struct _KEVENT *v103; // rcx
  unsigned int v104; // eax
  unsigned int v105; // eax
  __int64 *v106; // rdx
  __int64 v107; // rax
  int v108; // eax
  char i; // r9
  int v110; // eax
  void *v111; // rdx
  _QWORD *v112; // rax
  char v113; // [rsp+60h] [rbp-A0h]
  KIRQL v114; // [rsp+60h] [rbp-A0h]
  KIRQL v115; // [rsp+60h] [rbp-A0h]
  KIRQL v116; // [rsp+60h] [rbp-A0h]
  KIRQL v117; // [rsp+60h] [rbp-A0h]
  KIRQL v118; // [rsp+60h] [rbp-A0h]
  bool v119; // [rsp+61h] [rbp-9Fh] BYREF
  bool v120; // [rsp+62h] [rbp-9Eh] BYREF
  char v121; // [rsp+63h] [rbp-9Dh]
  int v122; // [rsp+64h] [rbp-9Ch]
  unsigned int v123; // [rsp+68h] [rbp-98h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+70h] [rbp-90h]
  int v125; // [rsp+78h] [rbp-88h]
  __int64 v126; // [rsp+80h] [rbp-80h]
  unsigned int v127; // [rsp+88h] [rbp-78h]
  unsigned int v128; // [rsp+8Ch] [rbp-74h] BYREF
  struct VIDSCH_FLIP_QUEUE_ENTRY *v129; // [rsp+90h] [rbp-70h]
  int v130; // [rsp+98h] [rbp-68h]
  KSPIN_LOCK *v131; // [rsp+A0h] [rbp-60h]
  int v132; // [rsp+A8h] [rbp-58h]
  int v133; // [rsp+ACh] [rbp-54h]
  struct _VIDSCH_VSYNC_COOKIE *v134; // [rsp+B0h] [rbp-50h]
  int v135; // [rsp+B8h] [rbp-48h]
  __int64 v136; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v137; // [rsp+C8h] [rbp-38h]
  __int64 v138; // [rsp+D0h] [rbp-30h]
  __int64 v139; // [rsp+D8h] [rbp-28h]
  __int64 v140; // [rsp+E0h] [rbp-20h]
  _BYTE v141[56]; // [rsp+E8h] [rbp-18h] BYREF
  int v142; // [rsp+120h] [rbp+20h]
  int v143; // [rsp+124h] [rbp+24h]
  int v144; // [rsp+128h] [rbp+28h]
  int v145; // [rsp+12Ch] [rbp+2Ch]
  KSPIN_LOCK **v146; // [rsp+130h] [rbp+30h]
  __int64 v147; // [rsp+138h] [rbp+38h]
  __int64 v148; // [rsp+140h] [rbp+40h]
  struct _KLOCK_QUEUE_HANDLE v149; // [rsp+148h] [rbp+48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v150; // [rsp+160h] [rbp+60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v151; // [rsp+178h] [rbp+78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v152; // [rsp+190h] [rbp+90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v153; // [rsp+1A8h] [rbp+A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v154; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v155; // [rsp+1D8h] [rbp+D8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v157[10]; // [rsp+210h] [rbp+110h] BYREF
  unsigned __int64 v158[10]; // [rsp+260h] [rbp+160h] BYREF
  _QWORD v159[10]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  v2 = a1;
  v134 = a1;
  v138 = v1;
  v123 = 0;
  memset(v158, 0, sizeof(v158));
  v3 = *((unsigned int *)v2 + 22);
  v132 = v3;
  if ( (_DWORD)v3 == -1 || (unsigned int)v3 >= *(_DWORD *)(v1 + 40) )
    return;
  _mm_lfence();
  v4 = *(_QWORD *)(v1 + 8 * v3 + 3032);
  v5 = 0;
  v136 = v4;
  v121 = 0;
  v119 = 0;
  v6 = (unsigned int)v3;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 1904), &LockHandle);
  if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
  {
    v8 = *(_QWORD *)(v4 + 28080);
    if ( !v8 )
    {
      *(_QWORD *)(v4 + 28080) = 1LL;
      *(_QWORD *)(v4 + 28096) = 0LL;
      _InterlockedExchange((volatile __int32 *)(v1 + 2052), 1);
      goto LABEL_12;
    }
    v10 = *((_QWORD *)v2 + 10) - *(_QWORD *)(v4 + 28032);
    v9 = *((_QWORD *)v2 + 7) - *(_QWORD *)(v4 + 28040);
    if ( *((_QWORD *)v2 + 10) != *(_QWORD *)(v4 + 28032) )
    {
      if ( v8 <= 3 )
      {
        v8 += v10;
        v76 = v9 + *(_QWORD *)(v4 + 28096);
        *(_QWORD *)(v4 + 28080) = v8;
        *(_QWORD *)(v4 + 28096) = v76;
        if ( v8 <= 3 )
          goto LABEL_127;
        v77 = v76 / (v8 - 1);
        v7 = v77 / 0xA;
        *(_QWORD *)(v4 + 28104) = v77 / 0xA;
        _m_prefetchw((const void *)(v4 + 28088));
        while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 28088), v77, *(_QWORD *)(v4 + 28088)) != v77 )
          ;
        v8 = *(_QWORD *)(v4 + 28080);
      }
      else
      {
        if ( v10 != 1 )
          v9 /= v10;
        v11 = *(_QWORD *)(v4 + 28104);
        v7 = *(_QWORD *)(v4 + 28088);
        *(_QWORD *)(v4 + 28120) = v9;
        if ( v9 > v7 + v11 || (v7 -= v11, v9 < v7) )
        {
          ++*(_QWORD *)(v4 + 28112);
          *(_QWORD *)(v4 + 28080) = 0LL;
          goto LABEL_127;
        }
      }
    }
    if ( v8 > 3 )
    {
LABEL_12:
      *(_QWORD *)(v4 + 28032) = *((_QWORD *)v2 + 10);
      *(_QWORD *)(v4 + 28040) = *((_QWORD *)v2 + 7);
      *(_QWORD *)(v4 + 28048) = *((_QWORD *)v2 + 8);
      *(_QWORD *)(v4 + 28056) = *((_QWORD *)v2 + 9);
      goto LABEL_13;
    }
LABEL_127:
    _InterlockedExchange((volatile __int32 *)(v1 + 2052), 1);
    goto LABEL_12;
  }
LABEL_13:
  if ( *(int *)(v4 + 4) >= 4 || *(_BYTE *)(v1 + 136) )
  {
    LODWORD(v8) = 0;
    v12 = 0;
    if ( *(_DWORD *)(v1 + 132) )
    {
      LODWORD(v7) = 4673;
      while ( 1 )
      {
        v120 = 0;
        v13 = *(_QWORD *)(v4 + 8LL * v12 + 24);
        if ( !v13 )
          goto LABEL_27;
        v14 = 0;
        v15 = *(_DWORD *)(v13 + 44) - 1;
        v128 = 0;
        v140 = 0LL;
        v16 = *(_DWORD *)(v13 + 48);
        v127 = v16;
        if ( v16 == (v15 & 0x3F) )
          goto LABEL_21;
        while ( 1 )
        {
          v129 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)(1280LL * v16 + v13 + 56);
          v17 = *((_DWORD *)v129 + 263);
          if ( v17 <= 0xC && _bittest((const int *)&v7, v17) )
            goto LABEL_20;
          if ( v17 != 5 && v17 != 15 )
            goto LABEL_21;
          if ( !*(_BYTE *)(v1 + 136) && !*((_QWORD *)v2 + 14) )
            VidSchiQueueDeferredVisibilityWorkItem((struct _VIDSCH_PRESENT_INFO *)v4, (struct _VIDSCH_GLOBAL *)v1);
          if ( (unsigned int)VidSchiIsExpectedVSyncCookie((struct _VIDSCH_GLOBAL *)v1, v129, v2) )
            break;
          LODWORD(v7) = 4673;
LABEL_20:
          v16 = ((_BYTE)v127 - 1) & 0x3F;
          v18 = ((unsigned __int8)*(_DWORD *)(v13 + 44) - 1) & 0x3F;
          v127 = v16;
          if ( v16 == v18 )
            goto LABEL_21;
        }
        v140 = *((_QWORD *)v129 + 130);
        memset(v141, 0, sizeof(v141));
        v33 = *((_DWORD *)v2 + 4) == 10;
        v34 = v127;
        *(_OWORD *)&v141[32] = *(_OWORD *)(v4 + 28032);
        v35 = *(_QWORD *)(v4 + 28048);
        *(_QWORD *)&v141[8] = v140;
        *(_QWORD *)&v141[48] = v35;
        *(_QWORD *)v141 = v1;
        *(_DWORD *)&v141[16] = v3;
        *(_DWORD *)&v141[20] = v12;
        *(_DWORD *)&v141[24] = v127;
        if ( v33 && (*((_DWORD *)v2 + 4 * v12 + 30) & 1) != 0 )
        {
          v121 = 1;
          *((_DWORD *)v129 + 263) = 14;
          VidSchiProcessVsyncCompletedFlipEntry(
            (struct _VIDSCH_VSYNC_COMPLETED_ENTRY_INFO *)v141,
            v158,
            &v123,
            &v128,
            &v119,
            1);
          memset(v157, 0, sizeof(v157));
          LODWORD(v157[1]) = v12;
          *(_OWORD *)&v157[3] = *(_OWORD *)v141;
          v157[2] = *((_QWORD *)v2 + 2 * v12 + 14);
          v84 = *((_DWORD *)v2 + 24);
          *(_OWORD *)&v157[5] = *(_OWORD *)&v141[16];
          HIDWORD(v157[0]) = v84;
          LODWORD(v157[0]) = *((_DWORD *)v2 + 23);
          *(_OWORD *)&v157[7] = *(_OWORD *)&v141[32];
          v157[9] = *(_QWORD *)&v141[48];
          VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(v157, 6LL);
          goto LABEL_26;
        }
        v36 = 0LL;
        v37 = ((_BYTE)v127 + 1) & 0x3F;
        v137 = 0LL;
        v135 = v37;
        v129 = *(struct VIDSCH_FLIP_QUEUE_ENTRY **)(v1 + 8LL * (unsigned int)v3 + 3032);
        v38 = *((_QWORD *)v129 + v12 + 3);
        v148 = v38;
        v39 = *(unsigned int *)(v38 + 44);
        v133 = v39;
        if ( (_DWORD)v39 == v37 )
          goto LABEL_107;
LABEL_68:
        v40 = 1280 * v39 + v38 + 56;
        v139 = v40;
        v41 = *(_DWORD *)(v40 + 1052);
        if ( v41 > 0xC )
          break;
        v75 = 4673;
        if ( !_bittest(&v75, v41) )
          break;
LABEL_105:
        v39 = ((_BYTE)v133 + 1) & 0x3F;
        v133 = v39;
        if ( (_DWORD)v39 != v37 )
          goto LABEL_68;
        v36 = v137;
        v34 = v127;
LABEL_107:
        v65 = *(_DWORD *)(v38 + 44);
        *(_DWORD *)(v38 + 44) = v37;
        if ( *(_DWORD *)(v38 + 48) == v34 )
          *(_DWORD *)(v38 + 48) = v37;
        v128 = VidSchiCompleteFlipEntry(v1, v3, v12, v65, v34, 0, 0LL);
        v14 = v128;
        if ( v128 )
        {
          v66 = v123++;
          v119 = 1;
          v158[v66] = v36;
        }
LABEL_21:
        if ( *(_DWORD *)(v4 + 2300) && *(_BYTE *)(v4 + 61284) )
          VidSchiExecuteNextFlipQueueEntry((struct _VIDSCH_GLOBAL *)v1, &v120, v3, v12);
        v19 = v140;
        if ( v140 )
        {
          VidSchiCheckPendingDeviceCommand(v140);
          v67 = -v14;
          LODWORD(v9) = v3;
          v68 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 24LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(v19 + 32) + 4LL))
                          + 8LL * (unsigned int)v3
                          + 520);
          _InterlockedExchangeAdd(
            (volatile signed __int32 *)(*(_QWORD *)(v1 + 8LL * (unsigned int)v3 + 6248) + 8LL),
            v67);
          v69 = *(_DWORD **)(v1 + 8LL * (unsigned int)v3 + 6248);
          *v69 += v128;
          _InterlockedExchangeAdd((volatile signed __int32 *)(v68 + 8), v67);
          *(_DWORD *)v68 += v128;
        }
        if ( v120 )
          VidSchiCompletePendingFlipOnPlane(v1, (unsigned int)v3, 9LL, v12);
LABEL_26:
        LODWORD(v8) = 0;
        LODWORD(v7) = 4673;
LABEL_27:
        if ( ++v12 >= *(_DWORD *)(v1 + 132) )
        {
          v5 = v121;
          v6 = (unsigned int)v3;
          goto LABEL_29;
        }
      }
      *(_QWORD *)(v40 + 1112) = *(_QWORD *)&v141[32];
      *(_QWORD *)(v40 + 1096) = *(_QWORD *)&v141[40];
      *(_QWORD *)(v40 + 1104) = *(_QWORD *)&v141[48];
      v42 = *(_DWORD *)(v40 + 1120);
      *(_DWORD *)(v40 + 1052) = 11;
      if ( (v42 & 0x10) != 0 )
        v43 = (**(_DWORD **)(v40 + 1160) | (**(_DWORD **)(v40 + 1160) >> 10)) & 0x3FF;
      else
        v43 = (1 << *(_DWORD *)(v1 + 132)) - 1;
      v44 = v129;
      LODWORD(v137) = v43;
      *((_DWORD *)v129 + 578) &= ~v43;
      HIDWORD(v137) = *(_DWORD *)(v40 + 1048);
      if ( (*(_DWORD *)(v40 + 1120) & 0x10) != 0 )
      {
        v85 = *(_DWORD **)(v40 + 1160);
        v45 = *v85 >> 10;
        LOWORD(v45) = *((_WORD *)v44 + 14000) & (*v85 | v45) & 0x3FF;
      }
      else
      {
        v45 = *((unsigned __int16 *)v44 + 14000);
      }
      v125 = v45;
      LOWORD(v46) = 0;
      v130 = 0;
      LOWORD(v47) = v45;
      v113 = 0;
      if ( (_WORD)v45 )
      {
        v48 = v44;
        do
        {
          v33 = !_BitScanForward((unsigned int *)&v49, (unsigned __int16)v47);
          v122 = (unsigned __int16)v47;
          v142 = v49;
          if ( v33 )
            LOBYTE(v49) = -1;
          v50 = 0;
          v49 = (char)v49;
          LODWORD(v126) = (char)v49;
          if ( *((_WORD *)v48 + 14001) )
          {
            v113 = 1;
            v51 = v49 << 6;
            do
            {
              v52 = v50;
              v53 = (char *)v48 + 40 * v51 + 40 * v50;
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v53 + 301) + 16LL) + 8LL));
              VidSchiCheckPendingDeviceCommand(*((_QWORD *)v48 + 2));
              *((_QWORD *)v53 + 301) = 0LL;
              *((_WORD *)v53 + 1216) = 0;
              *((_QWORD *)v53 + 303) = 0LL;
              ++v50;
              *((_QWORD *)v48 + 5 * v51 + 5 * v52 + 300) = 0LL;
            }
            while ( v50 < *((unsigned __int16 *)v48 + 14001) );
            LOBYTE(v49) = v126;
            LOWORD(v46) = v130;
          }
          *((_WORD *)v48 + 14000) &= ~(1 << v49);
          v46 = (unsigned __int16)v46 | (1 << v49);
          v47 = v122 & ~(1 << v49);
          v130 = v46;
        }
        while ( (_WORD)v47 );
        v2 = v134;
        v4 = v136;
        v1 = v138;
        LODWORD(v3) = v132;
        v44 = v129;
        if ( v113 )
        {
          v54 = (_QWORD *)*((_QWORD *)v129 + 2);
          if ( v54 )
          {
            v55 = (_QWORD *)v54[9];
            v56 = v54 + 9;
            v57 = 0;
            LODWORD(v126) = 0;
            if ( v55 != v54 + 9 )
            {
              v58 = v55;
              do
              {
                v59 = 0;
                if ( (v58[20] & 0x10) != 0 )
                {
                  *((_DWORD *)v58 + 40) &= ~0x10u;
                  v82 = VidSchiUnwaitContext(v58 - 3, 20071LL);
                  v57 = v126;
                  v56 = v54 + 9;
                  v59 = v82;
                }
                v58 = (_QWORD *)*v58;
                v57 |= v59;
                LODWORD(v126) = v57;
              }
              while ( v58 != v56 );
              v2 = v134;
            }
            v60 = 0;
            v61 = (_QWORD **)(v54[4] + 3328LL);
            while ( 1 )
            {
              v62 = *v61;
              v122 = v60;
              if ( v62 == v61 )
                break;
              if ( (_QWORD **)v62[1] != v61 || (v80 = (_QWORD *)*v62, *(_QWORD **)(*v62 + 8LL) != v62) )
                __fastfail(3u);
              *v61 = v80;
              v80[1] = v61;
              v62[1] = 0LL;
              *v62 = 0LL;
              updated = VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v62 - 5));
              v60 = updated | v122;
            }
            v54 = (_QWORD *)*((_QWORD *)v44 + 2);
            v122 = v126 | v60;
          }
          else
          {
            v122 = 0;
          }
          if ( v54 )
          {
            v126 = v54[4];
            v114 = KfRaiseIrql(2u);
            SpinLock = (PKSPIN_LOCK)(v126 + 1920);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v126 + 1920), &v149);
            if ( (_QWORD *)v54[15] == v54 + 15 )
              goto LABEL_95;
            v86 = (struct _KEVENT *)v54[15];
            while ( 1 )
            {
              if ( LODWORD(v86->Header.WaitListHead.Blink) == 4 )
              {
                if ( *(_DWORD *)(*(_QWORD *)&v86[1].Header.Lock + 4LL * LODWORD(v86[1].Header.WaitListHead.Blink) + 1084) >= *(_DWORD *)(*(_QWORD *)&v86[1].Header.Lock + 228LL) )
                  goto LABEL_171;
              }
              else if ( ((__int64)v86[1].Header.WaitListHead.Flink & 0x10) != 0 )
              {
                Flink = (int)v86[1].Header.WaitListHead.Blink->Flink;
                HIDWORD(v86[5].Header.WaitListHead.Blink) = Flink;
                if ( Flink )
                  goto LABEL_171;
              }
              ++v86[5].Header.LockNV;
              KeSetEvent(v86 + 4, 0, 0);
LABEL_171:
              v86 = *(struct _KEVENT **)&v86->Header.Lock;
              if ( v86 == (struct _KEVENT *)(v54 + 15) )
              {
                v4 = v136;
LABEL_95:
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v149);
                KeLowerIrql(v114);
                v63 = (struct _KEVENT *)(v54 + 17);
                v115 = KfRaiseIrql(2u);
                KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &v150);
                if ( *(struct _KEVENT **)&v63->Header.Lock == v63 )
                  goto LABEL_96;
                v88 = *(struct _KEVENT **)&v63->Header.Lock;
LABEL_174:
                if ( LODWORD(v88->Header.WaitListHead.Blink) == 4 )
                {
                  if ( *(_DWORD *)(*(_QWORD *)&v88[1].Header.Lock
                                 + 4LL * LODWORD(v88[1].Header.WaitListHead.Blink)
                                 + 1084) >= *(_DWORD *)(*(_QWORD *)&v88[1].Header.Lock + 228LL) )
                    goto LABEL_180;
                }
                else if ( ((__int64)v88[1].Header.WaitListHead.Flink & 0x10) != 0 )
                {
                  v89 = (int)v88[1].Header.WaitListHead.Blink->Flink;
                  HIDWORD(v88[5].Header.WaitListHead.Blink) = v89;
                  if ( v89 )
                  {
LABEL_180:
                    v88 = *(struct _KEVENT **)&v88->Header.Lock;
                    if ( v88 == v63 )
                    {
                      v2 = v134;
LABEL_96:
                      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v150);
                      KeLowerIrql(v115);
                      v64 = v126;
                      v116 = KfRaiseIrql(2u);
                      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v64 + 1920), &v151);
                      if ( *(_QWORD *)(v64 + 1848) == v64 + 1848 )
                        goto LABEL_97;
                      v90 = *(struct _KEVENT **)(v64 + 1848);
LABEL_183:
                      if ( LODWORD(v90->Header.WaitListHead.Blink) == 4 )
                      {
                        if ( *(_DWORD *)(*(_QWORD *)&v90[1].Header.Lock
                                       + 4LL * LODWORD(v90[1].Header.WaitListHead.Blink)
                                       + 1084) >= *(_DWORD *)(*(_QWORD *)&v90[1].Header.Lock + 228LL) )
                          goto LABEL_189;
                      }
                      else if ( ((__int64)v90[1].Header.WaitListHead.Flink & 0x10) != 0 )
                      {
                        v91 = (int)v90[1].Header.WaitListHead.Blink->Flink;
                        HIDWORD(v90[5].Header.WaitListHead.Blink) = v91;
                        if ( v91 )
                        {
LABEL_189:
                          v90 = *(struct _KEVENT **)&v90->Header.Lock;
                          if ( v90 == (struct _KEVENT *)(v64 + 1848) )
                          {
                            v4 = v136;
LABEL_97:
                            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v151);
                            KeLowerIrql(v116);
                            v117 = KfRaiseIrql(2u);
                            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v64 + 1920), &v152);
                            if ( *(_QWORD *)(v64 + 1832) == v64 + 1832 )
                              goto LABEL_98;
                            v78 = *(struct _KEVENT **)(v64 + 1832);
LABEL_140:
                            if ( LODWORD(v78->Header.WaitListHead.Blink) == 4 )
                            {
                              if ( *(_DWORD *)(*(_QWORD *)&v78[1].Header.Lock
                                             + 4LL * LODWORD(v78[1].Header.WaitListHead.Blink)
                                             + 1084) >= *(_DWORD *)(*(_QWORD *)&v78[1].Header.Lock + 228LL) )
                                goto LABEL_143;
                            }
                            else if ( ((__int64)v78[1].Header.WaitListHead.Flink & 0x10) != 0 )
                            {
                              v79 = (int)v78[1].Header.WaitListHead.Blink->Flink;
                              HIDWORD(v78[5].Header.WaitListHead.Blink) = v79;
                              if ( v79 )
                              {
LABEL_143:
                                v78 = *(struct _KEVENT **)&v78->Header.Lock;
                                if ( v78 == (struct _KEVENT *)(v64 + 1832) )
                                {
                                  v44 = v129;
LABEL_98:
                                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v152);
                                  KeLowerIrql(v117);
                                  *(_QWORD *)(v64 + 1680) = MEMORY[0xFFFFF78000000320];
                                  KeSetEvent((PRKEVENT)(v64 + 1648), 0, 0);
                                  *(_QWORD *)(v64 + 1792) = MEMORY[0xFFFFF78000000320];
                                  KeSetEvent((PRKEVENT)(v64 + 1760), 0, 0);
                                  if ( v122 )
                                  {
                                    *(_QWORD *)(v64 + 1400) = MEMORY[0xFFFFF78000000320];
                                    KeSetEvent((PRKEVENT)(v64 + 1368), 0, 0);
                                  }
                                  v118 = KfRaiseIrql(2u);
                                  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v64 + 1920), &v153);
                                  if ( *(_QWORD *)(v64 + 1864) == v64 + 1864 )
                                  {
LABEL_101:
                                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v153);
                                    KeLowerIrql(v118);
                                    if ( *((_WORD *)v44 + 14002) )
                                    {
                                      LOWORD(v93) = v125;
                                      do
                                      {
                                        v93 = (unsigned __int16)v93;
                                        v94 = -1;
                                        v33 = !_BitScanForward((unsigned int *)&v95, (unsigned __int16)v93);
                                        LODWORD(v126) = (unsigned __int16)v93;
                                        v96 = 0;
                                        v143 = v95;
                                        if ( !v33 )
                                          v94 = v95;
                                        v125 = 0;
                                        v97 = v94;
                                        v122 = v94;
                                        if ( *((_WORD *)v44 + 14001) )
                                        {
                                          v98 = (__int64)v94 << 6;
                                          v147 = v97 << 6;
                                          do
                                          {
                                            v146 = (KSPIN_LOCK **)((char *)v44 + 40 * v98 + 40 * v96 + 2416);
                                            v99 = *v146;
                                            SpinLock = v99;
                                            if ( v99 )
                                            {
                                              KeAcquireInStackQueuedSpinLock(v99 + 4, &v154);
                                              v100 = (KSPIN_LOCK *)SpinLock[2];
                                              v131 = v100;
                                              if ( v100 != SpinLock + 2 )
                                              {
                                                v101 = (struct _KEVENT *)(v64 + 1368);
                                                v102 = SpinLock + 2;
                                                do
                                                {
                                                  v103 = (struct _KEVENT *)v100[2];
                                                  if ( v103 != v101 )
                                                  {
                                                    KeSetEvent(v103, 0, 0);
                                                    v100 = v131;
                                                    v101 = (struct _KEVENT *)(v64 + 1368);
                                                  }
                                                  v100 = (KSPIN_LOCK *)*v100;
                                                  v131 = v100;
                                                }
                                                while ( v100 != v102 );
                                                v96 = v125;
                                              }
                                              KeReleaseInStackQueuedSpinLock(&v154);
                                              v98 = v147;
                                              *v146 = 0LL;
                                            }
                                            v104 = *((unsigned __int16 *)v44 + 14001);
                                            v125 = ++v96;
                                          }
                                          while ( v96 < v104 );
                                          v93 = v126;
                                          LOBYTE(v97) = v122;
                                        }
                                        v93 &= ~(1 << v97);
                                      }
                                      while ( (_WORD)v93 );
                                      v1 = v138;
                                      LODWORD(v3) = v132;
                                    }
                                    break;
                                  }
                                  v83 = *(struct _KEVENT **)(v64 + 1864);
                                  while ( 2 )
                                  {
                                    if ( LODWORD(v83->Header.WaitListHead.Blink) == 4 )
                                    {
                                      if ( *(_DWORD *)(*(_QWORD *)&v83[1].Header.Lock
                                                     + 4LL * LODWORD(v83[1].Header.WaitListHead.Blink)
                                                     + 1084) < *(_DWORD *)(*(_QWORD *)&v83[1].Header.Lock + 228LL) )
                                        goto LABEL_155;
                                    }
                                    else if ( ((__int64)v83[1].Header.WaitListHead.Flink & 0x10) == 0
                                           || (v92 = (int)v83[1].Header.WaitListHead.Blink->Flink,
                                               (HIDWORD(v83[5].Header.WaitListHead.Blink) = v92) == 0) )
                                    {
LABEL_155:
                                      ++v83[5].Header.LockNV;
                                      KeSetEvent(v83 + 4, 0, 0);
                                    }
                                    v83 = *(struct _KEVENT **)&v83->Header.Lock;
                                    if ( v83 == (struct _KEVENT *)(v64 + 1864) )
                                    {
                                      v2 = v134;
                                      goto LABEL_101;
                                    }
                                    continue;
                                  }
                                }
                                goto LABEL_140;
                              }
                            }
                            ++v78[5].Header.LockNV;
                            KeSetEvent(v78 + 4, 0, 0);
                            goto LABEL_143;
                          }
                          goto LABEL_183;
                        }
                      }
                      ++v90[5].Header.LockNV;
                      KeSetEvent(v90 + 4, 0, 0);
                      goto LABEL_189;
                    }
                    goto LABEL_174;
                  }
                }
                ++v88[5].Header.LockNV;
                KeSetEvent(v88 + 4, 0, 0);
                goto LABEL_180;
              }
            }
          }
          *((_WORD *)v44 + 14002) &= ~(_WORD)v130;
        }
        v40 = v139;
      }
      VidSchiReferenceDisplayingAllocationsForThisEntry(v1, v44, v40);
      v38 = v148;
      v37 = v135;
      goto LABEL_105;
    }
  }
LABEL_29:
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
        v158[0]);
    memset(v159, 0, sizeof(v159));
    v22 = *((_DWORD *)v2 + 4);
    switch ( v22 )
    {
      case 10:
        v105 = *(_DWORD *)(v1 + 132);
        if ( v105 )
        {
          v20 = v159;
          v21 = v105;
          v106 = (__int64 *)((char *)v2 + 112);
          do
          {
            v107 = *v106;
            v106 += 2;
            *v20++ = v107;
            --v21;
          }
          while ( v21 );
        }
        break;
      case 3:
        v159[0] = *((_QWORD *)v2 + 14);
        break;
      case 7:
        LODWORD(v20) = -1;
        LODWORD(v21) = *((_DWORD *)v2 + 25) & 0x3FF;
        v33 = !_BitScanForward((unsigned int *)&v108, v21);
        v145 = v108;
        if ( !v33 )
          LODWORD(v20) = (unsigned __int8)v108;
        for ( i = 0; (_DWORD)v21; ++i )
        {
          v159[(char)v20] = *((_QWORD *)v2 + 5 * i + 14);
          v110 = 1 << (char)v20;
          LODWORD(v20) = -1;
          LODWORD(v21) = ~v110 & v21;
          v33 = !_BitScanForward((unsigned int *)&v110, v21);
          v144 = v110;
          if ( !v33 )
            LODWORD(v20) = (unsigned __int8)v110;
        }
        break;
    }
    if ( (*((_BYTE *)v2 + 104) & 1) != 0 )
    {
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_38;
      v111 = &EventHSyncDPCMultiPlane;
    }
    else
    {
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_38;
      v111 = &EventVSyncDPCMultiPlane;
    }
    McTemplateK0pqXR1qqqXR5(
      (_DWORD)v20,
      (_DWORD)v111,
      v21,
      *(_QWORD *)(v1 + 16),
      *(_DWORD *)(v1 + 132),
      (__int64)v159,
      *((_DWORD *)v2 + 22),
      *((_DWORD *)v2 + 20),
      v123,
      (__int64)v158);
  }
LABEL_38:
  if ( v119 || v5 )
  {
    *(_DWORD *)(v1 + 2060) = -1;
    v70 = 0;
LABEL_112:
    *(_DWORD *)(v1 + 2056) = v70;
    goto LABEL_44;
  }
  if ( *(_BYTE *)(v1 + 45) != 1 || !*(_DWORD *)(v1 + 2064) )
  {
LABEL_44:
    if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
    {
      v23 = *(_QWORD *)(v1 + 16);
      v24 = *(_DWORD *)(v4 + 28032);
      v25 = *(_QWORD *)(v23 + 2456);
      if ( (unsigned int)v3 < *(_DWORD *)(v25 + 80) )
      {
        v26 = *(_QWORD *)(v25 + 112) + 3760 * v6;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v26 + 960), &v155);
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qqqq(
            *(unsigned __int8 *)(v26 + 952),
            v27,
            v28,
            *(_DWORD *)(v26 + 944),
            v24,
            *(_BYTE *)(v26 + 952),
            *(_DWORD *)(v23 + 2488));
        KePulseEvent((PRKEVENT)(v26 + 912), 0, 0);
        if ( *(_QWORD *)(v26 + 936) )
        {
          *(_DWORD *)(v26 + 948) = v24;
          if ( *(_DWORD *)(v26 + 944) <= v24 )
          {
            if ( *(_BYTE *)(v26 + 952) )
            {
              *(_BYTE *)(v26 + 952) = 0;
              if ( *(_QWORD *)(v23 + 2464) )
              {
                if ( _InterlockedDecrement((volatile signed __int32 *)(v23 + 2488)) < 0 )
                {
                  v112 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
                  v112[3] = 275LL;
                  v112[4] = 37LL;
                  v112[5] = v23;
                  v112[6] = *(unsigned int *)(v23 + 2488);
                  v112[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v112);
                }
              }
            }
            KeSetEvent(*(PRKEVENT *)(v26 + 936), 0, 0);
          }
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v155);
      }
    }
    goto LABEL_57;
  }
  if ( _InterlockedExchange((volatile __int32 *)(v1 + 2052), 0)
    || *(_DWORD *)(*(_QWORD *)(v1 + 16) + 2488LL)
    || *(_DWORD *)(v1 + 976)
    || *(_DWORD *)(v1 + 988)
    || *(_DWORD *)(v1 + 2004) )
  {
    *(_DWORD *)(v1 + 2060) = -1;
    *(_DWORD *)(v1 + 2056) = 0;
    goto LABEL_44;
  }
  if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
  {
    v71 = *(_DWORD *)(v1 + 2060);
    if ( v71 == -1 )
    {
      *(_DWORD *)(v1 + 2060) = v3;
    }
    else if ( v71 != (_DWORD)v3 )
    {
      goto LABEL_44;
    }
    v72 = *(_DWORD *)(v1 + 2056);
    if ( v72 != -1 )
    {
      v73 = *(_DWORD *)(v1 + 2064);
      v74 = v72 + 1;
      *(_DWORD *)(v1 + 2056) = v74;
      if ( v74 == v73 )
      {
        if ( !_InterlockedExchange((volatile __int32 *)(v1 + 2048), 1) )
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 2016), CriticalWorkQueue);
        goto LABEL_44;
      }
      if ( v74 > v73 )
      {
        v70 = v73 + 1;
        goto LABEL_112;
      }
    }
    goto LABEL_44;
  }
LABEL_57:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
  {
    v32 = *(void (__fastcall **)(_QWORD, _QWORD))(v1 + 2936);
    if ( v32 )
      v32(*(_QWORD *)(v1 + 2952), (unsigned int)v3);
  }
}
