/*
 * XREFs of VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A4774 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     VidSchSignalPagingFences @ 0x1C00BE1E4 (VidSchSignalPagingFences.c)
 * Callees:
 *     VidSchiSignalSyncObject @ 0x1C0007E70 (VidSchiSignalSyncObject.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0007FE0 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000BA80 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BB10 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiFreeQueuePacket @ 0x1C0011368 (VidSchiFreeQueuePacket.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0012E90 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0012ED4 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0012F08 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030C40 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0033B44 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0076410 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0076AF0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1C0076C30 (VidSchiEnsureVSyncEnabled.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00BEC50 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromGpu(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        unsigned int a5,
        void **a6,
        int a7,
        _QWORD *a8)
{
  int v8; // r12d
  unsigned int v9; // edx
  __int64 v10; // r14
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  __int64 v13; // rcx
  unsigned int v14; // esi
  unsigned __int64 *v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rcx
  int v18; // edx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // r12
  _QWORD **v22; // rdi
  _DWORD *v23; // rax
  unsigned int v24; // esi
  _QWORD **v25; // r14
  unsigned __int64 *v26; // rcx
  __int64 HwQueuePacket; // rax
  __int64 *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r11
  __int64 v32; // r8
  __int64 v33; // rax
  KSPIN_LOCK *v34; // rcx
  _QWORD *v35; // rax
  unsigned int v36; // r12d
  unsigned int v37; // r14d
  unsigned int v38; // r12d
  __int64 v39; // r12
  __int64 v40; // rsi
  struct _VIDSCH_QUEUE_PACKET *v41; // rcx
  __int64 v42; // r14
  __int64 v43; // r13
  _QWORD *v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rbx
  int v47; // r9d
  int v48; // r8d
  struct _KEVENT *v49; // r13
  __int64 v50; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v52; // esi
  __int64 v53; // rax
  VIDMM_DEVICE *v54; // rcx
  unsigned int v56; // r14d
  int v57; // eax
  void **v58; // r12
  _QWORD *v59; // r15
  void *v60; // rdi
  __int64 v61; // r9
  __int64 v62; // rdx
  struct _KLOCK_QUEUE_HANDLE *v63; // rcx
  char v64; // r13
  int v65; // eax
  __int64 v66; // r8
  int v67; // eax
  int v68; // r10d
  unsigned int v69; // eax
  CCHAR MostSignificantBit; // al
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int64 v73; // rcx
  __int64 v74; // rax
  unsigned __int64 v75; // rcx
  __int64 v76; // rax
  _QWORD **PoolWithTag; // rax
  struct VIDSCH_HW_QUEUE *v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rbx
  struct _VIDSCH_QUEUE_PACKET *v81; // rdx
  __int64 v82; // rcx
  unsigned __int64 v84; // [rsp+40h] [rbp-C0h]
  unsigned int v85; // [rsp+40h] [rbp-C0h]
  unsigned int v86; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v87; // [rsp+48h] [rbp-B8h]
  __int64 v88; // [rsp+48h] [rbp-B8h]
  _DWORD *v89; // [rsp+50h] [rbp-B0h]
  _QWORD *v90; // [rsp+50h] [rbp-B0h]
  _QWORD *v91; // [rsp+50h] [rbp-B0h]
  _QWORD **v92; // [rsp+58h] [rbp-A8h]
  __int64 v93; // [rsp+58h] [rbp-A8h]
  int v94; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v95; // [rsp+68h] [rbp-98h]
  struct VIDSCH_HW_QUEUE *v96; // [rsp+70h] [rbp-90h]
  unsigned __int64 v97; // [rsp+78h] [rbp-88h]
  __int64 v98; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE v99; // [rsp+88h] [rbp-78h]
  __int64 v100; // [rsp+A0h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE v101; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v102; // [rsp+C0h] [rbp-40h]
  __int64 v103; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE v104; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v105; // [rsp+E8h] [rbp-18h]
  _QWORD v106[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v107; // [rsp+100h] [rbp+0h] BYREF
  __int16 v108; // [rsp+118h] [rbp+18h]
  PVOID P; // [rsp+120h] [rbp+20h]
  _BYTE v110[16]; // [rsp+128h] [rbp+28h] BYREF
  int v111; // [rsp+138h] [rbp+38h]
  __int64 v112; // [rsp+140h] [rbp+40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+148h] [rbp+48h] BYREF
  __int16 v114; // [rsp+160h] [rbp+60h]
  __int64 v115; // [rsp+168h] [rbp+68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v116; // [rsp+170h] [rbp+70h] BYREF
  __int16 v117; // [rsp+188h] [rbp+88h]
  __int64 v118; // [rsp+190h] [rbp+90h]
  struct _KLOCK_QUEUE_HANDLE v119; // [rsp+198h] [rbp+98h] BYREF
  __int16 v120; // [rsp+1B0h] [rbp+B0h]
  struct _KLOCK_QUEUE_HANDLE v121; // [rsp+1B8h] [rbp+B8h]
  _BYTE v122[56]; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v123; // [rsp+250h] [rbp+150h]
  KPRIORITY Priority; // [rsp+260h] [rbp+160h]
  char Prioritya; // [rsp+260h] [rbp+160h]
  KPRIORITY Priorityb; // [rsp+260h] [rbp+160h]

  v123 = a1;
  v106[0] = 0LL;
  v8 = a3;
  v9 = a1;
  if ( a3 || (_DWORD)a1 )
  {
    v10 = (__int64)a6;
    if ( a6 )
    {
      v11 = a5;
      if ( a5 )
        goto LABEL_4;
    }
LABEL_128:
    v71 = WdLogNewEntry5_WdAssertion(a1, (unsigned int)a1);
    *(_QWORD *)(v71 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v71);
    return 3221225485LL;
  }
  v10 = (__int64)a6;
  if ( !a6 )
    goto LABEL_128;
  v11 = a5;
  if ( !a5 )
    goto LABEL_128;
  v8 = 1;
  v106[0] = *(_QWORD *)(*((_QWORD *)*a6 + 1) + 224LL);
  a4 = v106;
LABEL_4:
  v12 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)v10 + 8LL);
  v95 = v13;
  if ( (a7 & 0x80000004) != 0 )
  {
LABEL_21:
    v21 = v9 + v8;
    P = 0LL;
    v111 = 0;
    v22 = 0LL;
    if ( (unsigned int)v21 > 2 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v21 < 8 )
      {
LABEL_151:
        v12 = -1073741801;
        goto LABEL_89;
      }
      PoolWithTag = (_QWORD **)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v21, 0x6E795356u);
      v9 = v123;
      v22 = PoolWithTag;
      P = PoolWithTag;
    }
    else
    {
      v22 = (_QWORD **)v110;
      P = v110;
    }
    v111 = v21;
    if ( !v22 )
      goto LABEL_151;
    if ( (_DWORD)v21 )
    {
      memset(v22, 0, 8 * v21);
      v9 = v123;
      v22 = (_QWORD **)P;
    }
    if ( !v22 )
      goto LABEL_151;
    Priority = 0;
    v23 = 0LL;
    v89 = 0LL;
    v24 = 0;
    v85 = 0;
    if ( !(_DWORD)v21 )
      goto LABEL_52;
    v25 = v22;
    v26 = (unsigned __int64 *)(v95 + 1904);
    v97 = 0LL;
    v98 = v95 + 1904;
    v92 = v22;
    while ( 1 )
    {
      v88 = 0LL;
      v96 = 0LL;
      if ( v24 < v9 )
      {
        v96 = *(struct VIDSCH_HW_QUEUE **)((char *)v23 + a2);
        AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v122, v26, 1, 0);
        v78 = (struct VIDSCH_HW_QUEUE *)*((_QWORD *)v96 + 12);
        AcquireSpinLock::Release((AcquireSpinLock *)v122);
        if ( v78 == (struct VIDSCH_HW_QUEUE *)((char *)v96 + 96) )
        {
          v24 = v85;
          v25 = v92;
          goto LABEL_50;
        }
        HwQueuePacket = VidSchiAllocateHwQueuePacket(v96, 0LL);
        v24 = v85;
        v25 = v92;
      }
      else
      {
        _mm_lfence();
        v106[1] = v26;
        v99 = v107;
        v108 = 0;
        v88 = a4[v24 - v9];
        KeAcquireInStackQueuedSpinLock(v26, &v107);
        LOBYTE(v108) = 1;
        if ( *(_QWORD *)(v88 + 656) == v88 + 656 )
        {
          if ( HIBYTE(v108) )
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v107);
          else
            KeReleaseInStackQueuedSpinLock(&v107);
          LOBYTE(v108) = 0;
          goto LABEL_50;
        }
        if ( HIBYTE(v108) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v107);
        else
          KeReleaseInStackQueuedSpinLock(&v107);
        LOBYTE(v108) = 0;
        HwQueuePacket = VidSchiAllocateQueuePacket(v88, *(_DWORD *)(v88 + 788) == 0);
      }
      v28 = (__int64 *)&v22[v97 / 8];
      v22[v97 / 8] = (_QWORD *)HwQueuePacket;
      if ( !HwQueuePacket )
      {
        v79 = WdLogNewEntry5_WdWarning();
        *(_QWORD *)(v79 + 24) = -1073741801LL;
        *(_QWORD *)(v79 + 32) = 10033LL;
        WdLogEvent5_WdWarning(v79);
        if ( v24 )
        {
          v80 = v24;
          do
          {
            v81 = (struct _VIDSCH_QUEUE_PACKET *)*v22;
            if ( *v22 )
            {
              if ( *((_QWORD *)v81 + 12) )
                VidSchiFreeQueuePacket(v96, v81);
              else
                VidSchiFreeQueuePacket(v88);
            }
            ++v22;
            --v80;
          }
          while ( v80 );
        }
        v22 = (_QWORD **)P;
        goto LABEL_151;
      }
      Priority = v24;
      *(_DWORD *)*v25 = 1953189969;
      *((_DWORD *)*v25 + 12) = 5;
      (*v25)[7] = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)*v25 + 13) = 2;
      v29 = *v28;
      if ( v96 )
        *(_QWORD *)(v29 + 96) = v96;
      else
        *(_QWORD *)(v29 + 88) = v88;
      (*v25)[13] = KeGetCurrentThread();
      (*v25)[9] = 0LL;
      *((_DWORD *)*v25 + 68) ^= ((unsigned __int8)a7 ^ (unsigned __int8)*((_DWORD *)*v25 + 68)) & 1;
      if ( (a7 & 4) != 0 )
        *((_DWORD *)*v25 + 68) |= 4u;
      v30 = (__int64)a6;
      if ( *((_DWORD *)*a6 + 11) == 2 )
      {
        (*v25)[67] = *a8;
        v30 = (__int64)a6;
      }
      if ( v11 )
      {
        v31 = v11;
        v32 = v30;
        do
        {
          *(_QWORD *)((char *)*v25 + 280 - v30 + v32) = *(_QWORD *)v32;
          if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v32 + 44LL) - 4) <= 1 )
            *(_QWORD *)((char *)*v25 + 536 - v30 + v32) = *(_QWORD *)((char *)a8 + v32 - v30);
          v32 += 8LL;
          --v31;
        }
        while ( v31 );
        v24 = v85;
      }
      *((_DWORD *)*v25 + 69) = v11;
      (*v25)[99] = 0LL;
      v33 = *v28;
      if ( v89 )
      {
        *(_QWORD *)(v33 + 800) = v89;
        *((_QWORD *)v89 + 99) = *v25;
      }
      else
      {
        *(_QWORD *)(v33 + 800) = 0LL;
      }
      v89 = *v25;
LABEL_50:
      ++v24;
      v9 = v123;
      v23 = (_DWORD *)(v97 + 8);
      v26 = (unsigned __int64 *)v98;
      ++v25;
      v85 = v24;
      v97 += 8LL;
      v92 = v25;
      if ( v24 >= (unsigned int)v21 )
      {
        v23 = v89;
LABEL_52:
        v34 = (KSPIN_LOCK *)(v95 + 1904);
        if ( v23 )
        {
          v103 = v95 + 1904;
          v99 = v104;
          v105 = 0;
          KeAcquireInStackQueuedSpinLock(v34, &v104);
          v35 = v22;
          v36 = Priority;
          v37 = 0;
          v90 = v22;
          LOBYTE(v105) = 1;
          v86 = 0;
          do
          {
            if ( *v35 )
            {
              v38 = 0;
              if ( v11 )
              {
                if ( v37 == Priority )
                {
                  do
                    VidSchiSignalSyncObject(v38++, (_DWORD)a6, a7, (_DWORD)a8, 1);
                  while ( v38 < v11 );
                  v37 = v86;
                }
                else
                {
                  do
                    VidSchiSignalSyncObject(v38++, (_DWORD)a6, a7, (_DWORD)a8, 0);
                  while ( v38 < v11 );
                  v12 = 0;
                }
                v35 = v90;
              }
              v36 = Priority;
            }
            ++v37;
            ++v35;
            v86 = v37;
            v90 = v35;
          }
          while ( v37 <= v36 );
          if ( (_BYTE)v105 )
          {
            if ( HIBYTE(v105) )
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v104);
            else
              KeReleaseInStackQueuedSpinLock(&v104);
            LOBYTE(v105) = 0;
          }
          v39 = v36 + 1;
          v93 = (unsigned int)v39;
          while ( 1 )
          {
            v40 = (__int64)*v22;
            if ( *v22 )
            {
              v41 = (struct _VIDSCH_QUEUE_PACKET *)*v22;
              if ( !*(_QWORD *)(v40 + 96) )
              {
                v42 = *(_QWORD *)(v40 + 88);
                v43 = *(_QWORD *)(v42 + 96);
                v44 = *(_QWORD **)(v42 + 104);
                v91 = v44;
                v95 = *(_QWORD *)(v43 + 24);
                v45 = v95;
                VidSchiEnsureVSyncEnabled(v41, v44);
                v102 = 0;
                v99 = v101;
                v100 = v45 + 1904;
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v45 + 1904), &v101);
                LOBYTE(v102) = 1;
                *(_QWORD *)(v40 + 112) = (*(_QWORD *)(v42 + 144))++;
                v46 = MEMORY[0xFFFFF78000000320];
                v91[22] = v46 * KeQueryTimeIncrement();
                if ( !*(_DWORD *)(v40 + 48) )
                {
                  *(_QWORD *)(v42 + 176) = *(_QWORD *)(v40 + 112);
                  ++v91[154];
                }
                v48 = v43;
                v49 = (struct _KEVENT *)v95;
                VidSchiProfilePerformanceTick(4, v95, v48, v47, 0LL, v40, 0LL, 0LL);
                v94 = 0;
                VidSchiInsertCommandToSoftwareQueue(v40, &v94);
                if ( (_BYTE)v102 )
                {
                  if ( HIBYTE(v102) )
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v101);
                  else
                    KeReleaseInStackQueuedSpinLock(&v101);
                  LOBYTE(v102) = 0;
                }
                v50 = *(_QWORD *)(*(_QWORD *)(v42 + 96) + 24LL);
                if ( (*(_DWORD *)(v50 + 2192) & 0x20) == 0 )
                  goto LABEL_80;
                CurrentThread = KeGetCurrentThread();
                if ( CurrentThread == *(struct _KTHREAD **)(v50 + 144)
                  || CurrentThread == *(struct _KTHREAD **)(v50 + 152) )
                {
                  Prioritya = 1;
                  if ( *(_DWORD *)(v42 + 772) )
                    goto LABEL_80;
                  v52 = 16;
                }
                else
                {
                  Prioritya = 0;
                  if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
                  {
                    v52 = 31;
                  }
                  else
                  {
                    v52 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
                    if ( v52 <= 16 )
                    {
LABEL_80:
                      if ( v94 )
                      {
                        v49[58].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
                        KeSetEvent(v49 + 57, 0, 0);
                      }
                      v53 = v91[1];
                      if ( v53 )
                      {
                        v54 = *(VIDMM_DEVICE **)(v53 + 608);
                        if ( v54 )
                          VIDMM_DEVICE::EnsureSchedulable(v54, 1);
                      }
                      if ( (_BYTE)v102 )
                      {
                        if ( HIBYTE(v102) )
                          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v101);
                        else
                          KeReleaseInStackQueuedSpinLock(&v101);
                      }
                      goto LABEL_86;
                    }
                  }
                }
                v117 = 0;
                v121 = v116;
                v115 = v50 + 2120;
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v50 + 2120), &v116);
                v64 = Prioritya;
                LOBYTE(v117) = 1;
                while ( 1 )
                {
                  v65 = *(_DWORD *)(v42 + 772);
                  if ( v64 )
                  {
                    if ( v65 )
                      break;
                  }
                  else if ( !v65 )
                  {
                    break;
                  }
                  v66 = *(_QWORD *)(*(_QWORD *)(v42 + 96) + 24LL);
                  v98 = v66;
                  v67 = *(_DWORD *)(v42 + 392);
                  if ( v67 != v52 )
                  {
                    v68 = 0;
                    if ( v67 > 16 )
                    {
                      v82 = v67 - 17;
                      if ( (*(_DWORD *)(v66 + 4 * v82 + 2132))-- == 1 )
                      {
                        v68 = 1;
                        *(_DWORD *)(v66 + 2128) &= ~(1 << *(_DWORD *)(v42 + 392));
                      }
                    }
                    if ( v52 > 16 && ++*(_DWORD *)(v66 + 4LL * v52 + 2064) == 1 )
                    {
                      v68 = 1;
                      *(_DWORD *)(v66 + 2128) |= 1 << v52;
                    }
                    *(_DWORD *)(v42 + 392) = v52;
                    if ( v68 )
                    {
                      v69 = *(_DWORD *)(v66 + 2128);
                      if ( v69 )
                      {
                        MostSignificantBit = RtlFindMostSignificantBit(v69);
                        v66 = v98;
                        *(_DWORD *)(v98 + 196) = MostSignificantBit;
                      }
                      else
                      {
                        *(_DWORD *)(v66 + 196) = 16;
                      }
                    }
                  }
                  Priorityb = *(_DWORD *)(v66 + 196);
                  if ( Priorityb == KeQueryPriorityThread(*(PKTHREAD *)(v50 + 144)) )
                    break;
                  AcquireSpinLock::Release((AcquireSpinLock *)&v115);
                  KeSetPriorityThread(*(PKTHREAD *)(v50 + 144), Priorityb);
                  AcquireSpinLock::Acquire((AcquireSpinLock *)&v115);
                }
                v39 = v93;
                v49 = (struct _KEVENT *)v95;
                if ( (_BYTE)v117 )
                {
                  if ( HIBYTE(v117) )
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v116);
                  else
                    KeReleaseInStackQueuedSpinLock(&v116);
                }
                goto LABEL_80;
              }
              VidSchiSubmitCommandPacketToHwQueue(v41);
            }
LABEL_86:
            ++v22;
            v93 = --v39;
            if ( !v39 )
            {
              if ( !(_BYTE)v105 )
                goto LABEL_88;
              v63 = &v104;
              if ( HIBYTE(v105) )
              {
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v104);
                goto LABEL_88;
              }
LABEL_102:
              KeReleaseInStackQueuedSpinLock(v63);
              goto LABEL_88;
            }
          }
        }
        v118 = v95 + 1904;
        v99 = v119;
        v120 = 0;
        KeAcquireInStackQueuedSpinLock(v34, &v119);
        LOBYTE(v120) = 1;
        v56 = 0;
        if ( !v11 )
          goto LABEL_101;
        v57 = (int)a8;
        v58 = a6;
        v59 = a8;
        do
        {
          v60 = *v58;
          VidSchiSignalSyncObject(v56, (_DWORD)a6, a7, v57, 1);
          LOBYTE(v61) = 1;
          VidSchiCompleteSignalSyncObject(v60, v62, v59, v61);
          VidSchiReleaseSyncObjectReference(v60);
          v57 = (int)a8;
          ++v58;
          ++v56;
          ++v59;
        }
        while ( v56 < v11 );
        v12 = 0;
        if ( (_BYTE)v120 )
        {
LABEL_101:
          v63 = &v119;
          if ( HIBYTE(v120) )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v119);
            goto LABEL_88;
          }
          goto LABEL_102;
        }
LABEL_88:
        v22 = (_QWORD **)P;
LABEL_89:
        if ( v22 != (_QWORD **)v110 )
        {
          if ( v22 )
            ExFreePoolWithTag(v22, 0);
        }
        return v12;
      }
    }
  }
  v99 = LockHandle;
  v112 = v13 + 1904;
  v114 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 1904), &LockHandle);
  LOBYTE(v114) = 1;
  v14 = 0;
  if ( !v11 )
    goto LABEL_17;
  v15 = a8;
  v16 = v10 - (_QWORD)a8;
  while ( 1 )
  {
    v17 = *(unsigned __int64 *)((char *)v15 + v16);
    v18 = *(_DWORD *)(v17 + 44);
    if ( (unsigned int)(v18 - 4) > 1 || *(_BYTE *)(v17 + 28) )
      goto LABEL_15;
    v19 = *v15;
    v87 = *v15;
    if ( *(_BYTE *)(v17 + 27) )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(v17 + 200) + 40LL);
    }
    else if ( v18 == 2 )
    {
      v20 = *(_QWORD *)(v17 + 56);
    }
    else
    {
      v20 = *(_QWORD *)(v17 + 80);
    }
    v84 = v20;
    if ( *(_BYTE *)(v17 + 29) )
    {
      if ( v19 != v20 )
      {
        if ( v19 < v20 )
        {
          v74 = WdLogNewEntry5_WdWarning();
          *(_QWORD *)(v74 + 24) = v87;
          v75 = v84;
          goto LABEL_133;
        }
        goto LABEL_15;
      }
      v72 = WdLogNewEntry5_WdWarning();
      v73 = v87;
      goto LABEL_112;
    }
    if ( (int)v20 - (int)v19 > 0 )
      break;
    if ( (_DWORD)v20 == (_DWORD)v19 )
    {
      v72 = WdLogNewEntry5_WdWarning();
      v73 = (unsigned int)v87;
LABEL_112:
      *(_QWORD *)(v72 + 24) = v73;
      WdLogEvent5_WdWarning(v72);
    }
LABEL_15:
    ++v14;
    ++v15;
    if ( v14 >= v11 )
    {
      if ( !(_BYTE)v114 )
      {
LABEL_20:
        v9 = v123;
        goto LABEL_21;
      }
LABEL_17:
      if ( HIBYTE(v114) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      LOBYTE(v114) = 0;
      goto LABEL_20;
    }
  }
  v74 = WdLogNewEntry5_WdWarning();
  *(_QWORD *)(v74 + 24) = (unsigned int)v87;
  v75 = (unsigned int)v84;
LABEL_133:
  *(_QWORD *)(v74 + 32) = v75;
  WdLogEvent5_WdWarning(v74);
  v76 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v76 + 24) = a8[v14];
  *(_QWORD *)(v76 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v76);
  AcquireSpinLock::Release((AcquireSpinLock *)&v112);
  return 3221225485LL;
}
