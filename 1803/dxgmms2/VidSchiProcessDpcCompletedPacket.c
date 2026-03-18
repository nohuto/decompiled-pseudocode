/*
 * XREFs of VidSchiProcessDpcCompletedPacket @ 0x1C0008A70
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C000F330 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002B520 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00019F0 (VidSchiCheckConditionDeviceCommand.c)
 *     VidSchiStartNodeYield @ 0x1C0003680 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C0003748 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0005290 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009720 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BC60 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUpdateContextStatus @ 0x1C000CE10 (VidSchiUpdateContextStatus.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000D690 (VidSchUnwaitFlipQueue.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000E5FC (VidSchiCompleteRewindPacket.c)
 *     VidSchiDecrementContextReference @ 0x1C0012890 (VidSchiDecrementContextReference.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0012D4C (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     VidSchiCheckYieldExitCondition @ 0x1C0013234 (VidSchiCheckYieldExitCondition.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0022668 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C0023DD8 (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 *     McTemplateK0ppxx @ 0x1C00248F4 (McTemplateK0ppxx.c)
 *     ?VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z @ 0x1C00270F4 (-VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0027850 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C0027E34 (-VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0028430 (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     McTemplateK0pqxq @ 0x1C0029D5C (McTemplateK0pqxq.c)
 *     McTemplateK0px @ 0x1C002A14C (McTemplateK0px.c)
 */

void __fastcall VidSchiProcessDpcCompletedPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  signed __int64 v1; // r14
  struct _VIDSCH_DMA_PACKET *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // r13
  __int64 v5; // r15
  int v6; // edi
  LARGE_INTEGER *v7; // rdi
  LARGE_INTEGER v8; // rax
  LARGE_INTEGER v9; // rcx
  LARGE_INTEGER v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  union _LARGE_INTEGER v13; // r13
  __int64 v14; // r12
  unsigned __int64 *v15; // rdi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct _VIDSCH_CONTEXT *v20; // rcx
  __int64 v21; // rax
  LONGLONG *v22; // rdx
  __int64 v23; // rdi
  _QWORD *v24; // r13
  __int64 v25; // rcx
  __int64 v26; // r12
  unsigned __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r13
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rcx
  _QWORD **v33; // rdi
  _QWORD *v34; // r9
  unsigned __int64 v35; // rdx
  _QWORD *v36; // r12
  __int64 v37; // rax
  char v38; // r13
  __int64 v39; // rdi
  int v40; // r9d
  int v41; // ecx
  struct _KEVENT **v42; // r12
  KSPIN_LOCK *v43; // rdi
  struct _KEVENT *v44; // r12
  struct _KEVENT *v45; // r12
  struct _KEVENT *v46; // rcx
  struct _KEVENT *v47; // rsi
  KIRQL v48; // r14
  struct _KEVENT *v49; // rdi
  struct _VIDSCH_QUEUE_PACKET *v50; // rax
  unsigned int v51; // edi
  __int64 v52; // rax
  __int64 v53; // rcx
  LARGE_INTEGER *v54; // rax
  __int64 v55; // rax
  bool v56; // di
  __int64 v57; // r12
  int v58; // eax
  bool v59; // zf
  int v60; // eax
  __int64 v61; // r12
  unsigned int i; // edi
  __int64 v63; // r12
  __int64 v64; // r11
  _QWORD *v65; // r13
  __int64 v66; // r9
  unsigned int v67; // r8d
  unsigned int v68; // ecx
  __int64 v69; // r10
  __int64 v70; // rdx
  unsigned int v71; // ecx
  _QWORD *v72; // r8
  __int64 v73; // rcx
  _QWORD *v74; // r13
  _QWORD *v75; // rax
  __int64 v76; // rcx
  __int64 *v77; // rcx
  __int64 v78; // rcx
  _QWORD *v79; // rax
  __int64 v80; // r9
  _QWORD *v81; // rcx
  _QWORD *v82; // rcx
  struct _KEVENT *v83; // rdi
  __int64 v84; // r12
  __int64 v85; // r13
  LARGE_INTEGER v86; // rcx
  unsigned __int128 v87; // rax
  unsigned __int64 v88; // rdi
  unsigned __int64 *v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 *v92; // rax
  struct VIDMM_ALLOC *v93; // r9
  __int64 v94; // r11
  char v95; // al
  int refreshed; // eax
  struct _KEVENT *v97; // rdi
  __int64 v98; // rax
  unsigned __int128 v99; // rax
  unsigned __int64 v100; // rdx
  unsigned __int64 v101; // r8
  unsigned __int128 v102; // rtt
  int v103; // eax
  int v104; // ecx
  __int64 v105; // r9
  _QWORD *v106; // rax
  __int64 v107; // rax
  struct VIDMM_ALLOC *v108; // rcx
  __int64 v109; // rdi
  _QWORD *v110; // rax
  __int64 v111; // rax
  unsigned int j; // r12d
  struct _VIDSCH_HISTORY_BUFFER_DATA *v113; // rdx
  _QWORD *v114; // r12
  _QWORD *v115; // r9
  __int64 v116; // rcx
  _QWORD *v117; // rax
  __int64 v118; // r10
  __int64 v119; // r8
  __int64 v120; // rcx
  __int64 **v121; // rdx
  PVOID v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rax
  LARGE_INTEGER *v126; // rax
  int v127; // eax
  int Flink; // ecx
  struct _KEVENT *v129; // rdi
  int v130; // ecx
  int v131; // ecx
  int v132; // ecx
  __int64 v133; // [rsp+40h] [rbp-C0h]
  __int64 QuadPart; // [rsp+48h] [rbp-B8h]
  _QWORD *v135; // [rsp+48h] [rbp-B8h]
  unsigned int v136; // [rsp+50h] [rbp-B0h]
  _QWORD *v137; // [rsp+58h] [rbp-A8h]
  __int64 *v138; // [rsp+58h] [rbp-A8h]
  union _LARGE_INTEGER v139; // [rsp+60h] [rbp-A0h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER *v141; // [rsp+70h] [rbp-90h]
  _QWORD *v142; // [rsp+78h] [rbp-88h]
  _QWORD *v143; // [rsp+80h] [rbp-80h]
  VIDMM_GLOBAL *v144; // [rsp+88h] [rbp-78h]
  __int64 v145; // [rsp+90h] [rbp-70h]
  __int64 v146; // [rsp+98h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v147; // [rsp+A0h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v148; // [rsp+B8h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v150; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v151; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v152; // [rsp+118h] [rbp+18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v153; // [rsp+130h] [rbp+30h] BYREF
  KIRQL v155; // [rsp+1A0h] [rbp+A0h]
  KIRQL v156; // [rsp+1A0h] [rbp+A0h]
  KIRQL v157; // [rsp+1A0h] [rbp+A0h]
  __int64 v158; // [rsp+1A0h] [rbp+A0h]
  __int64 *v159; // [rsp+1A0h] [rbp+A0h]
  char v160; // [rsp+1A8h] [rbp+A8h]
  char v161; // [rsp+1B0h] [rbp+B0h]
  bool v162; // [rsp+1B8h] [rbp+B8h]

  v1 = *((_QWORD *)a1 + 6);
  v2 = a1;
  v160 = 0;
  v162 = 0;
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v133 = v4;
  v5 = *(_QWORD *)(v3 + 24);
  if ( *((_DWORD *)a1 + 18) == 18 )
  {
    v136 = 9;
    v6 = 15;
    VidSchiAllowToDebugPageFault(a1);
  }
  else
  {
    v136 = 0;
    v6 = 13;
  }
  *((_QWORD *)v2 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v2 + 18) = v6;
  if ( *((_QWORD *)v2 + 7) )
  {
    *(_QWORD *)(*((_QWORD *)v2 + 7) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*((_QWORD *)v2 + 7) + 52LL) = v6;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1904), &LockHandle);
  v141 = (LARGE_INTEGER *)(*(_QWORD *)(v3 + 184) + 112LL * *(unsigned int *)(v3 + 196));
  v7 = v141;
  memset(v141, 0, 0x70uLL);
  *(_DWORD *)(v3 + 196) = (*(_DWORD *)(v3 + 196) + 1) & (*(_DWORD *)(v3 + 192) - 1);
  v7->LowPart = 4;
  v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7[1] = v8;
  v10 = v8;
  v11 = *(unsigned int *)(v3 + 1552);
  QuadPart = v8.QuadPart;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v11 + 1560), 0LL, v1) )
  {
    v98 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
            (LARGE_INTEGER)v9.QuadPart,
            (LARGE_INTEGER)v8.QuadPart);
    *(_QWORD *)(v98 + 24) = v5;
    *(_QWORD *)(v98 + 32) = v4;
    WdLogEvent5_WdAssertion(v98);
    v10.QuadPart = QuadPart;
  }
  *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1552) = ((_BYTE)v11 + 1) & 0xF;
  if ( (*((_DWORD *)v2 + 23) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 988));
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 968));
  v12 = (__int64)gulPriorityToYieldPriorityBand;
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 2824));
  v13 = PerformanceFrequency;
  v14 = gulPriorityToYieldPriorityBand[*(unsigned int *)(v1 + 404)];
  if ( (_DWORD)v14 )
  {
    v15 = (unsigned __int64 *)(v3 + 1936 + 8 * v14);
    do
    {
      if ( *(v15 - 8) )
      {
        v16 = v10.QuadPart + *v15 - *(v15 - 4);
        *(v15 - 4) = 0LL;
        *v15 = v16;
        LODWORD(v17) = (_DWORD)Microsoft_Windows_DxgKrnlEnableBits;
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v99 = v16 * (unsigned __int128)0x989680uLL;
          v145 = *((_QWORD *)&v99 + 1);
          if ( is_mul_ok(v16, 0x989680uLL) )
          {
            v102 = v99;
            v100 = v99 % (unsigned __int64)v13.QuadPart;
            v101 = v102 / (unsigned __int64)v13.QuadPart;
          }
          else
          {
            v17 = v16 / v13.QuadPart;
            v100 = 10000000 * (v16 % v13.QuadPart) % v13.QuadPart;
            v101 = 10000000 * (v16 % v13.QuadPart) / v13.QuadPart + 10000000 * (v16 / v13.QuadPart);
          }
          McTemplateK0pqxq(v17, v100, v101, *(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL), v14, v101, *(_WORD *)(v3 + 4));
          v10.QuadPart = QuadPart;
        }
      }
      --v15;
      LODWORD(v14) = v14 - 1;
    }
    while ( (_DWORD)v14 );
    v2 = a1;
    v12 = (__int64)gulPriorityToYieldPriorityBand;
  }
  v18 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1552) + 1560);
  if ( v18 )
  {
    v52 = *(unsigned int *)(v18 + 404);
    v53 = gulPriorityToYieldPriorityBand[v52];
    if ( gulPriorityToYieldPriorityBand[v52] )
    {
      v54 = (LARGE_INTEGER *)(v3 + 1904 + 8 * v53);
      do
      {
        if ( v54[-4].QuadPart )
          *v54 = v10;
        --v54;
        --v53;
      }
      while ( v53 );
    }
  }
  if ( *(int *)(v3 + 2808) > 0 )
  {
    v19 = *(_QWORD *)(v5 + 424);
    _bittestandset64(&v19, *(unsigned __int16 *)(v3 + 4));
    *(_QWORD *)(v5 + 424) = v19;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 780), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v1 + 184) &= ~2u;
    if ( (*(_DWORD *)(v1 + 184) & 8) != 0 )
    {
      *(_DWORD *)(v1 + 184) &= ~8u;
      v162 = (unsigned int)VidSchiCompleteRewindPacket(v1, 1LL) != 0;
    }
    if ( v133 == *(_QWORD *)(v5 + 216) )
    {
      VidSchiUpdateContextStatus(v1, 0LL, 10364LL);
    }
    else if ( (*(_DWORD *)(v1 + 184) & 2) == 0 )
    {
      v20 = *(struct _VIDSCH_CONTEXT **)(v1 + 488);
      if ( v20 )
      {
        VidSchiDecrementContextReference(v20);
        *(_QWORD *)(v1 + 488) = 0LL;
      }
      *(_QWORD *)(v1 + 488) = 0LL;
    }
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 404) + 1744);
    v21 = *(unsigned int *)(v1 + 404);
    if ( !*(_DWORD *)(v3 + 4 * v21 + 1744) )
      *(_DWORD *)(v3 + 1740) &= ~(1 << v21);
    if ( *(_QWORD *)(v1 + 496) )
    {
      v84 = *(_QWORD *)(v1 + 104);
      v85 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
      v158 = *(_QWORD *)(v84 + 40);
      v86 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(&v139) - *(_QWORD *)(v1 + 496));
      v87 = (unsigned __int64)v86.QuadPart * (unsigned __int128)0x989680uLL;
      v146 = *((_QWORD *)&v87 + 1);
      if ( is_mul_ok(v86.QuadPart, 0x989680uLL) )
        v88 = v87 / (unsigned __int64)v139.QuadPart;
      else
        v88 = 10000000 * (v86.QuadPart / (unsigned __int64)v139.QuadPart)
            + 10000000 * (v86.QuadPart % (unsigned __int64)v139.QuadPart) / v139.QuadPart;
      v12 = 8LL;
      v89 = (unsigned __int64 *)(v85 + 2704);
      v90 = 8LL;
      while ( v88 <= *v89 )
      {
        v12 = (unsigned int)(v12 - 1);
        --v89;
        if ( --v90 < 0 )
          goto LABEL_140;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v158 + 8LL * (int)v12 + 2664));
LABEL_140:
      if ( v88 >= *(_QWORD *)(v85 + 2632) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v158 + 2656));
        if ( v88 >= *(_QWORD *)(v85 + 2616) && !*(_BYTE *)(*(_QWORD *)(v84 + 40) + 2624LL) )
        {
          v103 = *(_DWORD *)(v84 + 48);
          if ( (v103 & 8) == 0
            && (v103 & 1) == 0
            && !*(_DWORD *)(v85 + 2860)
            && !*(_BYTE *)(v84 + 188)
            && !_InterlockedCompareExchange((volatile signed __int32 *)(v84 + 184), 0, 0)
            && (*(_DWORD *)(v85 + 2192) & 0x200) != 0 )
          {
            KeSetTimer((PKTIMER)(v1 + 504), (LARGE_INTEGER)-*(_QWORD *)(v85 + 2624), (PKDPC)(v1 + 568));
            VidSchiUpdateContextStatus(v1, 7LL, 25082LL);
            if ( bTracingEnabled )
            {
              v105 = *(_QWORD *)(v1 + 56);
              if ( !v105 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
                LODWORD(v105) = v1;
              if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0ppxx(
                  v104,
                  (unsigned int)&EventDelayContextScheduling,
                  v12,
                  v105,
                  *(_QWORD *)(v158 + 2632),
                  v88,
                  *(_QWORD *)(v85 + 2624));
            }
          }
        }
      }
      *(_QWORD *)(v1 + 496) = 0LL;
    }
  }
  if ( *(_BYTE *)(v3 + 1992) )
  {
    if ( *(_QWORD *)(v3 + 1968) )
    {
      VidSchiCheckYieldExitCondition((struct _VIDSCH_NODE *)v3);
      v95 = v162;
      if ( v161 )
        v95 = 1;
      v162 = v95;
    }
    else if ( (~((1 << (*(_BYTE *)(v5 + 176) + 1)) - 1) & *(_DWORD *)(v3 + 1740)) == 0 )
    {
      refreshed = VidSchiMonitorRefreshPeriodFromNode(v3);
      VidSchiStartNodeYield(v3, QuadPart, PerformanceFrequency.QuadPart, refreshed);
      v162 = 1;
    }
  }
  v22 = (LONGLONG *)v141;
  v141[2] = *(LARGE_INTEGER *)((char *)v2 + 104);
  _m_prefetchw((const void *)(v3 + 96));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v3 + 96),
            *((_QWORD *)v2 + 13),
            *(_QWORD *)(v3 + 96)) != *((_QWORD *)v2 + 13) )
    ;
  v23 = *((_QWORD *)v2 + 7);
  if ( v23 )
  {
    v22[3] = *(_QWORD *)(v23 + 112);
    v24 = *(_QWORD **)(v23 + 88);
    v25 = v24[13];
    v26 = *(_QWORD *)(v24[12] + 24LL);
    v27 = v24[20];
    if ( v27 && *(_QWORD *)(v23 + 112) <= v27 )
    {
      if ( !*(_BYTE *)(v25 + 188) )
      {
        v22 = 0LL;
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v25 + 184), 0, 0)
          && (*(_BYTE *)(v26 + 2884) & 1) == 0 )
        {
          v106 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, 0LL, v12);
          v106[3] = 281LL;
          v106[4] = 1792LL;
          v106[5] = *(_QWORD *)(v23 + 112);
          v106[6] = v24[20];
          v106[7] = 0LL;
          WdLogEvent5_WdCriticalError(v106);
          JUMPOUT(0x1C001B877LL);
        }
      }
      v107 = WdLogNewEntry5_WdEvent(v25, v22);
      *(_QWORD *)(v107 + 24) = *(_QWORD *)(v23 + 112);
      WdLogEvent5_WdEvent(v107);
    }
    else
    {
      if ( *(_BYTE *)(v25 + 188)
        || (v22 = 0LL, _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 184), 0, 0))
        || (*(_BYTE *)(v26 + 2884) & 1) != 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v25, v22);
        v28[3] = v23;
        v28[4] = *(_QWORD *)(v23 + 112);
      }
      else
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v25, 0LL);
        v28[3] = v23;
        v28[4] = *(_QWORD *)(v23 + 112);
        v28[5] = v24[20];
      }
      WdLogEvent5_WdEvent(v28);
      *(_QWORD *)(*(_QWORD *)(v23 + 88) + 160LL) = *(_QWORD *)(v23 + 112);
      v22 = *(LONGLONG **)(*(_QWORD *)(v23 + 88) + 104LL);
      if ( *((_DWORD *)v22 + 304) )
        VidSchUnwaitFlipQueue((struct _VIDSCH_GLOBAL *)v26);
    }
    *((_DWORD *)v2 + 23) |= 0x80u;
    v160 = 1;
  }
  v29 = *((_QWORD *)v2 + 8);
  if ( (*((_DWORD *)v2 + 23) & 2) != 0 )
  {
    v61 = *(_QWORD *)(v29 + 104);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(((__int64 (*)(void))WdLogNewEntry5_WdTrace)() + 24) = v29;
    for ( i = 0; i < *(_DWORD *)(v29 + 144); ++i )
    {
      v108 = *(struct VIDMM_ALLOC **)(v61 + 8LL * i);
      if ( v108 )
        VIDMM_GLOBAL::RemoveDMAReferences(v108, 1);
    }
    v63 = *(_QWORD *)(v29 + 64);
    if ( v63 )
    {
      if ( *(int *)(v63 + 156) < 1 )
      {
        v109 = *(int *)(v63 + 156);
        v110 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL, v22, v12);
        v110[7] = 0LL;
        v110[3] = 270LL;
        v110[4] = 41LL;
        v110[5] = v63;
        v110[6] = v109;
        WdLogEvent5_WdCriticalError(v110);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v63 + 156), 0xFFFFFFFF);
    }
    ++*(_DWORD *)(v29 + 20);
  }
  if ( (*((_DWORD *)v2 + 23) & 1) != 0 )
  {
    v55 = *((_QWORD *)v2 + 7);
    v56 = v55 && *(_DWORD *)(v55 + 48) == 8;
    v57 = *(_QWORD *)(v29 + 136);
    if ( g_IsInternalReleaseOrDbg )
    {
      v111 = WdLogNewEntry5_WdTrace(0LL);
      *(_QWORD *)(v111 + 24) = v29;
      *(_QWORD *)(v111 + 32) = *(_QWORD *)(v57 + 16);
    }
    if ( v56 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 32), 0xFFFFFFFF) == 1 )
        *(_BYTE *)(v29 + 24) = 0;
    }
    else
    {
      v58 = *(_DWORD *)(v29 + 32);
      v59 = v58 == 0;
      if ( v58 > 0 )
      {
        v60 = v58 - 1;
        *(_DWORD *)(v29 + 32) = v60;
        v59 = v60 == 0;
      }
      if ( v59 )
        *(_BYTE *)(v29 + 24) = 0;
    }
  }
  v30 = *((_QWORD *)v2 + 7);
  if ( v30 && *(_QWORD *)(v30 + 264) )
  {
    for ( j = 0; j < *(_DWORD *)(v30 + 616); ++j )
    {
      v113 = (struct _VIDSCH_HISTORY_BUFFER_DATA *)(*(_QWORD *)(v30 + 264) + 16LL * j);
      if ( *(_QWORD *)v113 )
        VidSchiProcessHistoryBuffer(v2, v113);
    }
    VidSchiFreeHistoryBufferStorage((struct _VIDSCH_QUEUE_PACKET *)v30);
  }
  VidSchiUnwaitMonitoredFences(*(_QWORD *)(v133 + 32));
  v31 = *(_QWORD *)(v133 + 32);
  v144 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v31 + 8) + 552LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v31 + 1936), &v147);
  v33 = (_QWORD **)(v31 + 1968);
  v34 = *v33;
  if ( *v33 != v33 )
  {
    do
    {
      v114 = (_QWORD *)*v34;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v32, (__int64)(v34 - 25)) )
      {
        v116 = *v115;
        if ( *(_QWORD **)(*v115 + 8LL) != v115 || (v117 = (_QWORD *)v115[1], (_QWORD *)*v117 != v115) )
          __fastfail(3u);
        *v117 = v116;
        *(_QWORD *)(v116 + 8) = v117;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v115 - 24), (struct VIDMM_ALLOC *)(v115 - 25));
      }
      v34 = v114;
    }
    while ( v114 != v33 );
  }
  KeReleaseInStackQueuedSpinLock(&v147);
  v36 = *(_QWORD **)(v133 + 1248);
  if ( v36 == (_QWORD *)(v133 + 1248) )
    goto LABEL_48;
  while ( 1 )
  {
    v64 = v133;
    v65 = v36;
    v137 = v36;
    v36 = (_QWORD *)*v36;
    v66 = v65[2];
    if ( v66 <= *(_QWORD *)(v133 + 1240) )
      goto LABEL_107;
    v67 = *((_DWORD *)v65 + 16);
    v68 = 0;
    if ( v67 )
      break;
LABEL_105:
    v71 = *((_DWORD *)v65 + 28);
    v35 = 0LL;
    if ( v71 )
    {
      v118 = v65[9];
      do
      {
        v119 = *(_QWORD *)(v118 + 16LL * (unsigned int)v35);
        if ( v119 )
        {
          if ( *(_QWORD *)(v119 + 48) < *(_QWORD *)(v118 + 16LL * (unsigned int)v35 + 8) )
            goto LABEL_48;
        }
        v35 = (unsigned int)(v35 + 1);
      }
      while ( (unsigned int)v35 < v71 );
    }
    *(_QWORD *)(v133 + 1240) = v66;
LABEL_107:
    v72 = (_QWORD *)v65[17];
    v143 = v65 + 17;
    if ( v72 != v65 + 17 )
    {
      do
      {
        v73 = *v72;
        v35 = (unsigned __int64)(v72 - 27);
        v74 = v72;
        v135 = v72 - 27;
        v72 = (_QWORD *)v73;
        v142 = (_QWORD *)v73;
        if ( *(_QWORD **)(v73 + 8) != v74 || (v75 = (_QWORD *)v74[1], (_QWORD *)*v75 != v74) )
          __fastfail(3u);
        *v75 = v73;
        *(_QWORD *)(v73 + 8) = v75;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v35 + 96) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v76 = *(_QWORD *)(v35 + 96);
          if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v76 + 4), 2, 1) == 1
            && bTracingEnabled
            && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0p(v76, &EventCompleteOfferAllocation, v72, v35);
            v35 = (unsigned __int64)v135;
            v72 = v142;
          }
        }
        *v74 = 0LL;
        *(_QWORD *)(v35 + 224) = 0LL;
      }
      while ( v72 != v143 );
      v65 = v137;
      v64 = v133;
    }
    v77 = (__int64 *)v65[15];
    if ( v77 != v65 + 15 )
    {
      do
      {
        v91 = *v77;
        v159 = v77;
        v138 = (__int64 *)*v77;
        if ( *(__int64 **)(*v77 + 8) != v77 || (v92 = (__int64 *)v77[1], (__int64 *)*v92 != v77) )
          __fastfail(3u);
        *v92 = v91;
        *(_QWORD *)(v91 + 8) = v92;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand((__int64)v77, (__int64)(v77 - 25)) )
        {
          VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v144, v93);
        }
        else
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v94 + 32) + 1936LL), &v148);
          v120 = *(_QWORD *)(v133 + 32) + 1968LL;
          v121 = *(__int64 ***)(*(_QWORD *)(v133 + 32) + 1976LL);
          if ( *v121 != (__int64 *)v120 )
            __fastfail(3u);
          *v159 = v120;
          v159[1] = (__int64)v121;
          *v121 = v159;
          *(_QWORD *)(v120 + 8) = v159;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v148);
        }
        v77 = v138;
        v64 = v133;
      }
      while ( v138 != v65 + 15 );
    }
    v78 = *v65;
    if ( *(_QWORD **)(*v65 + 8LL) != v65 || (v79 = (_QWORD *)v65[1], (_QWORD *)*v79 != v65) )
      __fastfail(3u);
    v59 = bTracingEnabled == 0;
    *v79 = v78;
    *(_QWORD *)(v78 + 8) = v79;
    if ( !v59 )
    {
      v80 = *(_QWORD *)(v64 + 8);
      if ( !v80 )
        v80 = v64;
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0px(v78, v35, v72, v80, v65[2]);
    }
    v81 = (_QWORD *)v65[9];
    if ( v81 != v65 + 10 && v81 )
      ExFreePoolWithTag(v81, 0);
    v65[9] = 0LL;
    *((_DWORD *)v65 + 28) = 0;
    v82 = (_QWORD *)v65[3];
    if ( v82 != v65 + 4 && v82 )
      ExFreePoolWithTag(v82, 0);
    v65[3] = 0LL;
    *((_DWORD *)v65 + 16) = 0;
    ExFreePoolWithTag(v65, 0);
    if ( v36 == (_QWORD *)(v133 + 1248) )
      goto LABEL_48;
  }
  v69 = v65[3];
  while ( 1 )
  {
    v70 = *(_QWORD *)(v69 + 16LL * v68);
    if ( v70 )
    {
      if ( *(_QWORD *)(v70 + 160) < *(_QWORD *)(v69 + 16LL * v68 + 8) )
        break;
    }
    if ( ++v68 >= v67 )
      goto LABEL_105;
  }
LABEL_48:
  v37 = *(_QWORD *)(v5 + 416);
  v38 = v162;
  if ( _bittest64(&v37, *(unsigned __int8 *)(v3 + 4)) )
    v38 = 1;
  if ( bTracingEnabled )
  {
    v39 = *((_QWORD *)v2 + 6);
    if ( *(_DWORD *)(v39 + 968) >= 0x80u )
      VidSchiFlushGpuWorkEntries(*((struct _VIDSCH_CONTEXT **)v2 + 6));
    if ( *(_QWORD *)(v39 + 976)
      || (v122 = operator new[](0x400uLL, 0x68536956u, (POOL_TYPE)512), (*(_QWORD *)(v39 + 976) = v122) != 0LL) )
    {
      *(_QWORD *)(*(_QWORD *)(v39 + 976) + 8LL * (unsigned int)(*(_DWORD *)(v39 + 968))++) = KeQueryPerformanceCounter(0LL).QuadPart | 0x8000000000000000uLL;
    }
    else
    {
      v125 = WdLogNewEntry5_WdAssertion(v124, v123);
      WdLogEvent5_WdAssertion(v125);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v136 )
  {
    v126 = v141;
    LOBYTE(v141[4].LowPart) = 1;
    *(_OWORD *)&v126[5].LowPart = *(_OWORD *)(v133 + 192);
    *(_OWORD *)&v126[7].LowPart = *(_OWORD *)(v133 + 208);
    v127 = *(_DWORD *)(v133 + 208);
    if ( (v127 & 4) != 0 )
    {
      *(_DWORD *)(v3 + 2000) = 1;
    }
    else if ( (v127 & 8) != 0 )
    {
      *(_DWORD *)(v3 + 1996) = 1;
    }
    VidSchiMarkDeviceAsError(v133, v136);
    v41 = 13;
  }
  else
  {
    v41 = 9;
  }
  VidSchiProfilePerformanceTick(v41, v5, v3, v40, 0LL, 0LL, (__int64)v2, 0LL);
  v42 = (struct _KEVENT **)(v1 + 376);
  v43 = (KSPIN_LOCK *)(v5 + 1920);
  v155 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1920), &v150);
  if ( *v42 != (struct _KEVENT *)v42 )
  {
    v83 = *v42;
    while ( 1 )
    {
      if ( LODWORD(v83->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v83[1].Header.Lock + 4LL * LODWORD(v83[1].Header.WaitListHead.Blink) + 1084) >= *(_DWORD *)(*(_QWORD *)&v83[1].Header.Lock + 228LL) )
          goto LABEL_133;
      }
      else if ( ((__int64)v83[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        Flink = (int)v83[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v83[5].Header.WaitListHead.Blink) = Flink;
        if ( Flink )
          goto LABEL_133;
      }
      ++v83[5].Header.LockNV;
      KeSetEvent(v83 + 4, 0, 0);
LABEL_133:
      v83 = *(struct _KEVENT **)&v83->Header.Lock;
      if ( v83 == (struct _KEVENT *)v42 )
      {
        v43 = (KSPIN_LOCK *)(v5 + 1920);
        break;
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v150);
  KeLowerIrql(v155);
  v44 = (struct _KEVENT *)(v3 + 408);
  v156 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v43, &v151);
  if ( *(struct _KEVENT **)&v44->Header.Lock == v44 )
    goto LABEL_59;
  v129 = *(struct _KEVENT **)&v44->Header.Lock;
  while ( 2 )
  {
    if ( LODWORD(v129->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v129[1].Header.Lock + 4LL * LODWORD(v129[1].Header.WaitListHead.Blink) + 1084) >= *(_DWORD *)(*(_QWORD *)&v129[1].Header.Lock + 228LL) )
        goto LABEL_243;
LABEL_242:
      ++v129[5].Header.LockNV;
      KeSetEvent(v129 + 4, 0, 0);
      goto LABEL_243;
    }
    if ( ((__int64)v129[1].Header.WaitListHead.Flink & 0x10) == 0 )
      goto LABEL_242;
    v130 = (int)v129[1].Header.WaitListHead.Blink->Flink;
    HIDWORD(v129[5].Header.WaitListHead.Blink) = v130;
    if ( !v130 )
      goto LABEL_242;
LABEL_243:
    v129 = *(struct _KEVENT **)&v129->Header.Lock;
    if ( v129 != v44 )
      continue;
    break;
  }
  v43 = (KSPIN_LOCK *)(v5 + 1920);
LABEL_59:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v151);
  KeLowerIrql(v156);
  v45 = (struct _KEVENT *)(v5 + 1816);
  v157 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v43, &v152);
  if ( *(struct _KEVENT **)&v45->Header.Lock == v45 )
    goto LABEL_60;
  v97 = *(struct _KEVENT **)&v45->Header.Lock;
  while ( 2 )
  {
    if ( LODWORD(v97->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v97[1].Header.Lock + 4LL * LODWORD(v97[1].Header.WaitListHead.Blink) + 1084) < *(_DWORD *)(*(_QWORD *)&v97[1].Header.Lock + 228LL) )
        goto LABEL_159;
    }
    else if ( ((__int64)v97[1].Header.WaitListHead.Flink & 0x10) == 0
           || (v131 = (int)v97[1].Header.WaitListHead.Blink->Flink,
               (HIDWORD(v97[5].Header.WaitListHead.Blink) = v131) == 0) )
    {
LABEL_159:
      ++v97[5].Header.LockNV;
      KeSetEvent(v97 + 4, 0, 0);
    }
    v97 = *(struct _KEVENT **)&v97->Header.Lock;
    if ( v97 != v45 )
      continue;
    break;
  }
  v43 = (KSPIN_LOCK *)(v5 + 1920);
LABEL_60:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v152);
  KeLowerIrql(v157);
  *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1624) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1592), 0, 0);
  if ( v38 )
  {
    *(_QWORD *)(v5 + 1400) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1368), 0, 0);
  }
  v46 = (struct _KEVENT *)*((_QWORD *)v2 + 25);
  if ( v46 )
    KeSetEvent(v46, 0, 0);
  v47 = (struct _KEVENT *)(v5 + 1864);
  v48 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v43, &v153);
  v49 = *(struct _KEVENT **)(v5 + 1864);
  if ( *(struct _KEVENT **)&v47->Header.Lock != v47 )
  {
    do
    {
      if ( LODWORD(v49->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v49[1].Header.Lock + 4LL * LODWORD(v49[1].Header.WaitListHead.Blink) + 1084) >= *(_DWORD *)(*(_QWORD *)&v49[1].Header.Lock + 228LL) )
          goto LABEL_165;
      }
      else if ( ((__int64)v49[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v132 = (int)v49[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v49[5].Header.WaitListHead.Blink) = v132;
        if ( v132 )
          goto LABEL_165;
      }
      ++v49[5].Header.LockNV;
      KeSetEvent(v49 + 4, 0, 0);
LABEL_165:
      v49 = *(struct _KEVENT **)&v49->Header.Lock;
    }
    while ( v49 != v47 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v153);
  KeLowerIrql(v48);
  v50 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)v2 + 7);
  v51 = -1;
  if ( v50 )
    v51 = *((_DWORD *)v50 + 40);
  if ( v160 )
  {
    do
      v50 = VidSchiProcessCompletedQueuePacketInternal(v50);
    while ( v50 );
  }
  *((_QWORD *)v2 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v2 + 18) = 16;
  if ( v51 != -1 && (*((_DWORD *)v2 + 23) & 0x10) != 0 )
    VidSchiQueueDeferredVisibilityWorkItem(
      *(struct _VIDSCH_PRESENT_INFO **)(v5 + 8LL * v51 + 3032),
      (struct _VIDSCH_GLOBAL *)v5);
}
