/*
 * XREFs of VidSchiProcessDpcCompletedPacket @ 0x1C0008120
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00065B0 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002863C (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0001F00 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0003BD0 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008DA0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A200 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000B5B0 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BBA0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000D414 (VidSchiCompleteRewindPacket.c)
 *     VidSchiDecrementContextReference @ 0x1C000E770 (VidSchiDecrementContextReference.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C000EF38 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiMarkDeviceAsError @ 0x1C000F4C8 (VidSchiMarkDeviceAsError.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0011808 (VidSchiCheckConditionDeviceCommand.c)
 *     VidSchiCheckYieldExitCondition @ 0x1C0013194 (VidSchiCheckYieldExitCondition.c)
 *     VidSchiStartNodeYield @ 0x1C00134EC (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C00135B4 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00200AC (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C002148C (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     McTemplateK0p @ 0x1C00215B4 (McTemplateK0p.c)
 *     McTemplateK0ppxx @ 0x1C0021F9C (McTemplateK0ppxx.c)
 *     ?VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z @ 0x1C0024604 (-VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0024D00 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C00252EC (-VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C00258E8 (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     McTemplateK0pqxq @ 0x1C00270AC (McTemplateK0pqxq.c)
 *     McTemplateK0px @ 0x1C002749C (McTemplateK0px.c)
 */

void __fastcall VidSchiProcessDpcCompletedPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  signed __int64 v1; // r14
  struct _VIDSCH_DMA_PACKET *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // r13
  __int64 v5; // r15
  int v6; // ebx
  LARGE_INTEGER *v7; // rbx
  LARGE_INTEGER v8; // rax
  LARGE_INTEGER v9; // rcx
  LARGE_INTEGER v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r8
  union _LARGE_INTEGER v13; // r13
  __int64 v14; // r12
  unsigned __int64 *v15; // rbx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct _VIDSCH_CONTEXT *v20; // rcx
  __int64 v21; // rax
  LONGLONG *v22; // rdx
  __int64 v23; // rbx
  _QWORD *v24; // r13
  __int64 v25; // rcx
  __int64 v26; // r12
  unsigned __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rcx
  _QWORD **v33; // rbx
  _QWORD *v34; // r9
  _QWORD *v35; // r8
  _QWORD *v36; // r12
  __int64 v37; // rax
  char v38; // r13
  __int64 v39; // rbx
  int v40; // r9d
  int v41; // ecx
  struct _KEVENT **v42; // r12
  KSPIN_LOCK *v43; // rbx
  struct _KEVENT *v44; // r12
  struct _KEVENT *v45; // r12
  struct _KEVENT *v46; // rcx
  struct _KEVENT *v47; // rsi
  KIRQL v48; // r14
  struct _KEVENT *v49; // rbx
  struct _VIDSCH_QUEUE_PACKET *v50; // rax
  unsigned int v51; // ebx
  __int64 v52; // rax
  bool v53; // bl
  __int64 v54; // r12
  __int64 v55; // rax
  __int64 v56; // rcx
  LARGE_INTEGER *v57; // rax
  int v58; // eax
  __int64 v59; // r12
  unsigned int i; // ebx
  __int64 v61; // r12
  __int64 v62; // r11
  _QWORD *v63; // r13
  __int64 v64; // r9
  unsigned int v65; // ecx
  __int64 v66; // r10
  __int64 v67; // rdx
  _QWORD *v68; // rax
  _QWORD *v69; // rcx
  _QWORD *v70; // rdx
  _QWORD *v71; // rcx
  __int64 v72; // rcx
  _QWORD *v73; // rdx
  _QWORD *v74; // rax
  __int64 v75; // rcx
  _QWORD *v76; // rax
  bool v77; // zf
  __int64 v78; // r9
  _QWORD *v79; // rcx
  __int64 v80; // r13
  __int64 v81; // r12
  LARGE_INTEGER v82; // rcx
  unsigned __int128 v83; // rax
  unsigned __int64 v84; // rbx
  unsigned __int64 *v85; // rcx
  __int64 v86; // rdx
  _QWORD *v87; // r9
  _QWORD *v88; // rax
  __int64 v89; // rdx
  _QWORD *v90; // rcx
  struct VIDMM_ALLOC *v91; // r9
  __int64 v92; // r11
  char v93; // al
  struct _KEVENT *v94; // rbx
  unsigned int refreshed; // eax
  struct _KEVENT *v96; // rbx
  __int64 v97; // rax
  unsigned __int128 v98; // rax
  unsigned __int64 v99; // rdx
  unsigned __int64 v100; // r8
  unsigned __int128 v101; // rtt
  int v102; // eax
  int v103; // ecx
  __int64 v104; // r9
  _QWORD *v105; // rax
  __int64 v106; // rax
  struct VIDMM_ALLOC *v107; // rcx
  __int64 v108; // rbx
  _QWORD *v109; // rax
  __int64 v110; // rax
  unsigned int j; // r12d
  struct _VIDSCH_HISTORY_BUFFER_DATA *v112; // rdx
  _QWORD *v113; // r12
  _QWORD *v114; // r9
  __int64 v115; // rcx
  _QWORD *v116; // rax
  __int64 v117; // rdx
  _QWORD *v118; // r8
  LARGE_INTEGER *v119; // rax
  int v120; // eax
  int Flink; // ecx
  struct _KEVENT *v122; // rbx
  int v123; // ecx
  int v124; // ecx
  int v125; // ecx
  __int64 v126; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER v127; // [rsp+48h] [rbp-B8h]
  _QWORD *v128; // [rsp+48h] [rbp-B8h]
  unsigned int v129; // [rsp+50h] [rbp-B0h]
  _QWORD *v130; // [rsp+58h] [rbp-A8h]
  _QWORD *v131; // [rsp+58h] [rbp-A8h]
  union _LARGE_INTEGER v132; // [rsp+60h] [rbp-A0h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER *v134; // [rsp+70h] [rbp-90h]
  VIDMM_GLOBAL *v135; // [rsp+78h] [rbp-88h]
  __int64 v136; // [rsp+80h] [rbp-80h]
  __int64 v137; // [rsp+88h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE v138; // [rsp+90h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v139; // [rsp+A8h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v141; // [rsp+D8h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE v142; // [rsp+F0h] [rbp-10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v143; // [rsp+108h] [rbp+8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v144; // [rsp+120h] [rbp+20h] BYREF
  KIRQL v146; // [rsp+190h] [rbp+90h]
  KIRQL v147; // [rsp+190h] [rbp+90h]
  KIRQL v148; // [rsp+190h] [rbp+90h]
  __int64 v149; // [rsp+190h] [rbp+90h]
  _QWORD *v150; // [rsp+190h] [rbp+90h]
  char v151; // [rsp+198h] [rbp+98h]
  char v152; // [rsp+1A0h] [rbp+A0h]
  bool v153; // [rsp+1A8h] [rbp+A8h]

  v1 = *((_QWORD *)a1 + 6);
  v2 = a1;
  v151 = 0;
  v153 = 0;
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v126 = v4;
  v5 = *(_QWORD *)(v3 + 24);
  if ( *((_DWORD *)a1 + 18) == 18 )
  {
    v129 = 9;
    v6 = 15;
    VidSchiAllowToDebugPageFault(a1);
  }
  else
  {
    v129 = 0;
    v6 = 13;
  }
  *((_QWORD *)v2 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v2 + 18) = v6;
  if ( *((_QWORD *)v2 + 7) )
  {
    *(_QWORD *)(*((_QWORD *)v2 + 7) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*((_QWORD *)v2 + 7) + 52LL) = v6;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1888), &LockHandle);
  v134 = (LARGE_INTEGER *)(*(_QWORD *)(v3 + 184) + 112LL * *(unsigned int *)(v3 + 196));
  v7 = v134;
  memset(v134, 0, 0x70uLL);
  *(_DWORD *)(v3 + 196) = (*(_DWORD *)(v3 + 196) + 1) & (*(_DWORD *)(v3 + 192) - 1);
  v7->LowPart = 4;
  v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7[1] = v8;
  v10 = v8;
  v11 = *(unsigned int *)(v3 + 1552);
  v127 = v8;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v11 + 1560), 0LL, v1) )
  {
    v97 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
            (LARGE_INTEGER)v9.QuadPart,
            (LARGE_INTEGER)v8.QuadPart);
    *(_QWORD *)(v97 + 24) = v5;
    *(_QWORD *)(v97 + 32) = v4;
    WdLogEvent5_WdAssertion(v97);
    v10 = v127;
  }
  *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1552) = ((_BYTE)v11 + 1) & 0xF;
  if ( (*((_DWORD *)v2 + 23) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 972));
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 952));
  v12 = (__int64)gulPriorityToYieldPriorityBand;
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 2792));
  v13 = PerformanceFrequency;
  v14 = gulPriorityToYieldPriorityBand[*(unsigned int *)(v1 + 396)];
  if ( (_DWORD)v14 )
  {
    v15 = (unsigned __int64 *)(v3 + 1904 + 8 * v14);
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
          v98 = v16 * (unsigned __int128)0x989680uLL;
          v136 = *((_QWORD *)&v98 + 1);
          if ( is_mul_ok(v16, 0x989680uLL) )
          {
            v101 = v98;
            v99 = v98 % (unsigned __int64)v13.QuadPart;
            v100 = v101 / (unsigned __int64)v13.QuadPart;
          }
          else
          {
            v17 = v16 / v13.QuadPart;
            v99 = 10000000 * (v16 % v13.QuadPart) % v13.QuadPart;
            v100 = 10000000 * (v16 % v13.QuadPart) / v13.QuadPart + 10000000 * (v16 / v13.QuadPart);
          }
          McTemplateK0pqxq(v17, v99, v100, *(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL), v14, v100, *(_WORD *)(v3 + 4));
          v10 = v127;
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
    v55 = *(unsigned int *)(v18 + 396);
    v56 = gulPriorityToYieldPriorityBand[v55];
    if ( gulPriorityToYieldPriorityBand[v55] )
    {
      v57 = (LARGE_INTEGER *)(v3 + 1872 + 8 * v56);
      do
      {
        if ( v57[-4].QuadPart )
          *v57 = v10;
        --v57;
        --v56;
      }
      while ( v56 );
    }
  }
  if ( *(int *)(v3 + 2776) > 0 )
  {
    v19 = *(_QWORD *)(v5 + 408);
    _bittestandset64(&v19, *(unsigned __int16 *)(v3 + 4));
    *(_QWORD *)(v5 + 408) = v19;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 772), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v1 + 176) &= ~2u;
    if ( (*(_DWORD *)(v1 + 176) & 8) != 0 )
    {
      *(_DWORD *)(v1 + 176) &= ~8u;
      v153 = (unsigned int)VidSchiCompleteRewindPacket(v1, 1LL) != 0;
    }
    if ( v126 == *(_QWORD *)(v5 + 216) )
    {
      VidSchiUpdateContextStatus(v1, 0LL, 10308LL);
    }
    else if ( (*(_DWORD *)(v1 + 176) & 2) == 0 )
    {
      v20 = *(struct _VIDSCH_CONTEXT **)(v1 + 480);
      if ( v20 )
      {
        VidSchiDecrementContextReference(v20);
        *(_QWORD *)(v1 + 480) = 0LL;
      }
      *(_QWORD *)(v1 + 480) = 0LL;
    }
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 396) + 1712);
    v21 = *(unsigned int *)(v1 + 396);
    if ( !*(_DWORD *)(v3 + 4 * v21 + 1712) )
      *(_DWORD *)(v3 + 1708) &= ~(1 << v21);
    if ( *(_QWORD *)(v1 + 488) )
    {
      v149 = *(_QWORD *)(v1 + 104);
      v80 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
      v81 = *(_QWORD *)(v149 + 40);
      v82 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(&v132) - *(_QWORD *)(v1 + 488));
      v83 = (unsigned __int64)v82.QuadPart * (unsigned __int128)0x989680uLL;
      v137 = *((_QWORD *)&v83 + 1);
      if ( is_mul_ok(v82.QuadPart, 0x989680uLL) )
        v84 = v83 / (unsigned __int64)v132.QuadPart;
      else
        v84 = 10000000 * (v82.QuadPart / (unsigned __int64)v132.QuadPart)
            + 10000000 * (v82.QuadPart % (unsigned __int64)v132.QuadPart) / v132.QuadPart;
      v12 = 8LL;
      v85 = (unsigned __int64 *)(v80 + 2680);
      v86 = 8LL;
      while ( v84 <= *v85 )
      {
        v12 = (unsigned int)(v12 - 1);
        --v85;
        if ( --v86 < 0 )
          goto LABEL_136;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v81 + 8LL * (int)v12 + 2664));
LABEL_136:
      if ( v84 >= *(_QWORD *)(v80 + 2608) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v81 + 2656));
        if ( v84 >= *(_QWORD *)(v80 + 2592) && !*(_BYTE *)(*(_QWORD *)(v149 + 40) + 2624LL) )
        {
          v102 = *(_DWORD *)(v149 + 48);
          if ( (v102 & 8) == 0
            && (v102 & 1) == 0
            && !*(_DWORD *)(v80 + 2836)
            && !*(_BYTE *)(v149 + 164)
            && !_InterlockedCompareExchange((volatile signed __int32 *)(v149 + 160), 0, 0)
            && (*(_DWORD *)(v80 + 2168) & 0x800) != 0 )
          {
            KeSetTimer((PKTIMER)(v1 + 496), (LARGE_INTEGER)-*(_QWORD *)(v80 + 2600), (PKDPC)(v1 + 560));
            VidSchiUpdateContextStatus(v1, 7LL, 24945LL);
            if ( bTracingEnabled )
            {
              v104 = *(_QWORD *)(v1 + 56);
              if ( !v104 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
                LODWORD(v104) = v1;
              if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0ppxx(
                  v103,
                  (unsigned int)&EventDelayContextScheduling,
                  v12,
                  v104,
                  *(_QWORD *)(v81 + 2632),
                  v84,
                  *(_QWORD *)(v80 + 2600));
            }
          }
        }
      }
      *(_QWORD *)(v1 + 488) = 0LL;
    }
  }
  if ( *(_BYTE *)(v3 + 1960) )
  {
    if ( *(_QWORD *)(v3 + 1936) )
    {
      VidSchiCheckYieldExitCondition((struct _VIDSCH_NODE *)v3);
      v93 = v153;
      if ( v152 )
        v93 = 1;
      v153 = v93;
    }
    else if ( (~((1 << (*(_BYTE *)(v5 + 176) + 1)) - 1) & *(_DWORD *)(v3 + 1708)) == 0 )
    {
      refreshed = VidSchiMonitorRefreshPeriodFromNode(v3);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v3,
        (LARGE_INTEGER)v127.QuadPart,
        (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
        refreshed);
      v153 = 1;
    }
  }
  v22 = (LONGLONG *)v134;
  v134[2] = *(LARGE_INTEGER *)((char *)v2 + 104);
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
    v27 = v24[19];
    if ( v27 && *(_QWORD *)(v23 + 112) <= v27 )
    {
      if ( !*(_BYTE *)(v25 + 164) )
      {
        v22 = 0LL;
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v25 + 160), 0, 0)
          && (*(_BYTE *)(v26 + 2860) & 1) == 0 )
        {
          v105 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, 0LL, v12);
          v105[3] = 281LL;
          v105[4] = 1792LL;
          v105[5] = *(_QWORD *)(v23 + 112);
          v105[6] = v24[19];
          v105[7] = 0LL;
          WdLogEvent5_WdCriticalError(v105);
          JUMPOUT(0x1C001ADDDLL);
        }
      }
      v106 = WdLogNewEntry5_WdEvent(v25, v22);
      *(_QWORD *)(v106 + 24) = *(_QWORD *)(v23 + 112);
      WdLogEvent5_WdEvent(v106);
    }
    else
    {
      if ( *(_BYTE *)(v25 + 164)
        || (v22 = 0LL, _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 160), 0, 0))
        || (*(_BYTE *)(v26 + 2860) & 1) != 0 )
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
        v28[5] = v24[19];
      }
      WdLogEvent5_WdEvent(v28);
      *(_QWORD *)(*(_QWORD *)(v23 + 88) + 152LL) = *(_QWORD *)(v23 + 112);
      v22 = *(LONGLONG **)(*(_QWORD *)(v23 + 88) + 104LL);
      if ( *((_DWORD *)v22 + 298) )
        VidSchUnwaitFlipQueue((struct _VIDSCH_GLOBAL *)v26);
    }
    *((_DWORD *)v2 + 23) |= 0x80u;
    v151 = 1;
  }
  v29 = *((_QWORD *)v2 + 8);
  if ( (*((_DWORD *)v2 + 23) & 2) != 0 )
  {
    v59 = *(_QWORD *)(v29 + 104);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(((__int64 (*)(void))WdLogNewEntry5_WdTrace)() + 24) = v29;
    for ( i = 0; i < *(_DWORD *)(v29 + 144); ++i )
    {
      v107 = *(struct VIDMM_ALLOC **)(v59 + 8LL * i);
      if ( v107 )
        VIDMM_GLOBAL::RemoveDMAReferences(v107, 1);
    }
    v61 = *(_QWORD *)(v29 + 64);
    if ( v61 )
    {
      if ( *(int *)(v61 + 156) < 1 )
      {
        v108 = *(int *)(v61 + 156);
        v109 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL, v22, v12);
        v109[7] = 0LL;
        v109[3] = 270LL;
        v109[4] = 41LL;
        v109[5] = v61;
        v109[6] = v108;
        WdLogEvent5_WdCriticalError(v109);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v61 + 156), 0xFFFFFFFF);
    }
    ++*(_DWORD *)(v29 + 20);
  }
  if ( (*((_DWORD *)v2 + 23) & 1) != 0 )
  {
    v52 = *((_QWORD *)v2 + 7);
    v53 = v52 && *(_DWORD *)(v52 + 48) == 8;
    v54 = *(_QWORD *)(v29 + 136);
    if ( g_IsInternalReleaseOrDbg )
    {
      v110 = WdLogNewEntry5_WdTrace(0LL);
      *(_QWORD *)(v110 + 24) = v29;
      *(_QWORD *)(v110 + 32) = *(_QWORD *)(v54 + 16);
    }
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 32), 0xFFFFFFFF) == 1 )
        *(_BYTE *)(v29 + 24) = 0;
    }
    else
    {
      v58 = *(_DWORD *)(v29 + 32);
      if ( v58 > 0 )
        *(_DWORD *)(v29 + 32) = v58 - 1;
      if ( !*(_DWORD *)(v29 + 32) )
        *(_BYTE *)(v29 + 24) = 0;
    }
  }
  v30 = *((_QWORD *)v2 + 7);
  if ( v30 && *(_QWORD *)(v30 + 280) )
  {
    for ( j = 0; j < *(_DWORD *)(v30 + 632); ++j )
    {
      v112 = (struct _VIDSCH_HISTORY_BUFFER_DATA *)(*(_QWORD *)(v30 + 280) + 16LL * j);
      if ( *(_QWORD *)v112 )
        VidSchiProcessHistoryBuffer(v2, v112);
    }
    VidSchiFreeHistoryBufferStorage((struct _VIDSCH_QUEUE_PACKET *)v30);
  }
  VidSchiUnwaitMonitoredFences(*(_QWORD *)(v126 + 32));
  v31 = *(_QWORD *)(v126 + 32);
  v135 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v31 + 8) + 536LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v31 + 1920), &v138);
  v33 = (_QWORD **)(v31 + 1952);
  v34 = *v33;
  if ( *v33 != v33 )
  {
    do
    {
      v113 = (_QWORD *)*v34;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v32, v34 - 25) )
      {
        v115 = *v114;
        if ( *(_QWORD **)(*v114 + 8LL) != v114 || (v116 = (_QWORD *)v114[1], (_QWORD *)*v116 != v114) )
          __fastfail(3u);
        *v116 = v115;
        *(_QWORD *)(v115 + 8) = v116;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v114 - 24), (struct VIDMM_ALLOC *)(v114 - 25));
      }
      v34 = v113;
    }
    while ( v113 != v33 );
  }
  KeReleaseInStackQueuedSpinLock(&v138);
  v36 = *(_QWORD **)(v126 + 1224);
  if ( v36 == (_QWORD *)(v126 + 1224) )
    goto LABEL_48;
  while ( 1 )
  {
    v62 = v126;
    v63 = v36;
    v36 = (_QWORD *)*v36;
    v64 = v63[2];
    if ( v64 > *(_QWORD *)(v126 + 1216) )
      break;
LABEL_107:
    v68 = (_QWORD *)v63[11];
    v69 = v63 + 11;
    if ( v68 != v63 + 11 )
    {
      do
      {
        v70 = v68 - 27;
        v130 = (_QWORD *)*v68;
        v35 = (_QWORD *)*v68;
        v128 = v68 - 27;
        if ( *(_QWORD **)(*v68 + 8LL) != v68 || (v71 = (_QWORD *)v68[1], (_QWORD *)*v71 != v68) )
          __fastfail(3u);
        *v71 = v35;
        v35[1] = v71;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v70[12] + 8LL), 0xFFFFFFFF) == 1 )
        {
          v72 = v70[12];
          if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v72 + 4), 2, 1) == 1
            && bTracingEnabled
            && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0p(v72, &EventCompleteOfferAllocation, v35, v70);
            v70 = v128;
          }
        }
        v69 = v63 + 11;
        v70[27] = 0LL;
        v70[28] = 0LL;
        v68 = v130;
      }
      while ( v130 != v63 + 11 );
      v62 = v126;
    }
    v73 = (_QWORD *)v63[9];
    v74 = v63 + 9;
    if ( v73 != v63 + 9 )
    {
      do
      {
        v87 = v73 - 25;
        v88 = v73;
        v131 = (_QWORD *)*v73;
        v89 = *v73;
        v150 = v87;
        if ( *(_QWORD **)(v89 + 8) != v87 + 25 || (v90 = (_QWORD *)v88[1], (_QWORD *)*v90 != v88) )
          __fastfail(3u);
        *v90 = v89;
        *(_QWORD *)(v89 + 8) = v90;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v90, v87) )
        {
          VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v135, v91);
        }
        else
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v92 + 32) + 1920LL), &v139);
          v117 = *(_QWORD *)(v126 + 32) + 1952LL;
          v118 = *(_QWORD **)(*(_QWORD *)(v126 + 32) + 1960LL);
          if ( *v118 != v117 )
            __fastfail(3u);
          v150[25] = v117;
          v150[26] = v118;
          *v118 = v150 + 25;
          *(_QWORD *)(v117 + 8) = v150 + 25;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v139);
        }
        v73 = v131;
        v74 = v63 + 9;
        v62 = v126;
      }
      while ( v131 != v63 + 9 );
      v69 = v63 + 11;
    }
    if ( (_QWORD *)*v74 == v74 && (_QWORD *)*v69 == v69 )
    {
      v75 = *v63;
      if ( *(_QWORD **)(*v63 + 8LL) != v63 || (v76 = (_QWORD *)v63[1], (_QWORD *)*v76 != v63) )
        __fastfail(3u);
      v77 = bTracingEnabled == 0;
      *v76 = v75;
      *(_QWORD *)(v75 + 8) = v76;
      if ( !v77 )
      {
        v78 = *(_QWORD *)(v62 + 8);
        if ( !v78 )
          v78 = v62;
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0px(v75, v73, v35, v78, v63[2]);
      }
      v79 = (_QWORD *)v63[3];
      if ( v79 != v63 + 4 && v79 )
        ExFreePoolWithTag(v79, 0);
      v63[3] = 0LL;
      *((_DWORD *)v63 + 16) = 0;
      ExFreePoolWithTag(v63, 0);
    }
    if ( v36 == (_QWORD *)(v126 + 1224) )
      goto LABEL_48;
  }
  v35 = (_QWORD *)*((unsigned int *)v63 + 16);
  v65 = 0;
  if ( !(_DWORD)v35 )
  {
LABEL_106:
    *(_QWORD *)(v126 + 1216) = v64;
    goto LABEL_107;
  }
  v66 = v63[3];
  while ( 1 )
  {
    v67 = *(_QWORD *)(v66 + 16LL * v65);
    if ( v67 )
    {
      if ( *(_QWORD *)(v67 + 152) < *(_QWORD *)(v66 + 16LL * v65 + 8) )
        break;
    }
    if ( ++v65 >= (unsigned int)v35 )
      goto LABEL_106;
  }
LABEL_48:
  v37 = *(_QWORD *)(v5 + 400);
  v38 = v153;
  if ( _bittest64(&v37, *(unsigned __int8 *)(v3 + 4)) )
    v38 = 1;
  if ( bTracingEnabled )
  {
    v39 = *((_QWORD *)v2 + 6);
    if ( *(_DWORD *)(v39 + 960) >= 0x80u )
      VidSchiFlushGpuWorkEntries(*((struct _VIDSCH_CONTEXT **)v2 + 6));
    if ( !*(_QWORD *)(v39 + 968) )
      *(_QWORD *)(v39 + 968) = operator new[](0x400uLL, 0x68536956u, (POOL_TYPE)512);
    *(_QWORD *)(*(_QWORD *)(v39 + 968) + 8LL * (unsigned int)(*(_DWORD *)(v39 + 960))++) = KeQueryPerformanceCounter(0LL).QuadPart | 0x8000000000000000uLL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v129 )
  {
    v119 = v134;
    LOBYTE(v134[4].LowPart) = 1;
    *(_OWORD *)&v119[5].LowPart = *(_OWORD *)(v126 + 168);
    *(_OWORD *)&v119[7].LowPart = *(_OWORD *)(v126 + 184);
    v120 = *(_DWORD *)(v126 + 184);
    if ( (v120 & 4) != 0 )
    {
      *(_DWORD *)(v3 + 1968) = 1;
    }
    else if ( (v120 & 8) != 0 )
    {
      *(_DWORD *)(v3 + 1964) = 1;
    }
    VidSchiMarkDeviceAsError(v126, v129);
    v41 = 13;
  }
  else
  {
    v41 = 9;
  }
  VidSchiProfilePerformanceTick(v41, v5, v3, v40, 0LL, 0LL, (__int64)v2, 0LL);
  v42 = (struct _KEVENT **)(v1 + 368);
  v43 = (KSPIN_LOCK *)(v5 + 1904);
  v146 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1904), &v141);
  if ( *v42 != (struct _KEVENT *)v42 )
  {
    v96 = *v42;
    while ( 1 )
    {
      if ( LODWORD(v96->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v96[1].Header.Lock + 4LL * LODWORD(v96[1].Header.WaitListHead.Blink) + 1060) >= *(_DWORD *)(*(_QWORD *)&v96[1].Header.Lock + 204LL) )
          goto LABEL_169;
      }
      else if ( ((__int64)v96[1].Header.WaitListHead.Flink & 4) != 0 )
      {
        Flink = (int)v96[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v96[5].Header.WaitListHead.Blink) = Flink;
        if ( Flink )
          goto LABEL_169;
      }
      ++v96[5].Header.LockNV;
      KeSetEvent(v96 + 4, 0, 0);
LABEL_169:
      v96 = *(struct _KEVENT **)&v96->Header.Lock;
      if ( v96 == (struct _KEVENT *)v42 )
      {
        v43 = (KSPIN_LOCK *)(v5 + 1904);
        break;
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v141);
  KeLowerIrql(v146);
  v44 = (struct _KEVENT *)(v3 + 408);
  v147 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v43, &v142);
  if ( *(struct _KEVENT **)&v44->Header.Lock == v44 )
    goto LABEL_60;
  v122 = *(struct _KEVENT **)&v44->Header.Lock;
  while ( 2 )
  {
    if ( LODWORD(v122->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v122[1].Header.Lock + 4LL * LODWORD(v122[1].Header.WaitListHead.Blink) + 1060) < *(_DWORD *)(*(_QWORD *)&v122[1].Header.Lock + 204LL) )
        goto LABEL_235;
    }
    else if ( ((__int64)v122[1].Header.WaitListHead.Flink & 4) == 0
           || (v123 = (int)v122[1].Header.WaitListHead.Blink->Flink,
               (HIDWORD(v122[5].Header.WaitListHead.Blink) = v123) == 0) )
    {
LABEL_235:
      ++v122[5].Header.LockNV;
      KeSetEvent(v122 + 4, 0, 0);
    }
    v122 = *(struct _KEVENT **)&v122->Header.Lock;
    if ( v122 != v44 )
      continue;
    break;
  }
  v43 = (KSPIN_LOCK *)(v5 + 1904);
LABEL_60:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v142);
  KeLowerIrql(v147);
  v45 = (struct _KEVENT *)(v5 + 1800);
  v148 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v43, &v143);
  if ( *(struct _KEVENT **)&v45->Header.Lock == v45 )
    goto LABEL_61;
  v94 = *(struct _KEVENT **)&v45->Header.Lock;
  while ( 2 )
  {
    if ( LODWORD(v94->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v94[1].Header.Lock + 4LL * LODWORD(v94[1].Header.WaitListHead.Blink) + 1060) < *(_DWORD *)(*(_QWORD *)&v94[1].Header.Lock + 204LL) )
        goto LABEL_153;
    }
    else if ( ((__int64)v94[1].Header.WaitListHead.Flink & 4) == 0
           || (v124 = (int)v94[1].Header.WaitListHead.Blink->Flink,
               (HIDWORD(v94[5].Header.WaitListHead.Blink) = v124) == 0) )
    {
LABEL_153:
      ++v94[5].Header.LockNV;
      KeSetEvent(v94 + 4, 0, 0);
    }
    v94 = *(struct _KEVENT **)&v94->Header.Lock;
    if ( v94 != v45 )
      continue;
    break;
  }
  v43 = (KSPIN_LOCK *)(v5 + 1904);
LABEL_61:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v143);
  KeLowerIrql(v148);
  *(_QWORD *)(v1 + 344) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 312), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1608) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1576), 0, 0);
  if ( v38 )
  {
    *(_QWORD *)(v5 + 1384) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1352), 0, 0);
  }
  v46 = (struct _KEVENT *)*((_QWORD *)v2 + 25);
  if ( v46 )
    KeSetEvent(v46, 0, 0);
  v47 = (struct _KEVENT *)(v5 + 1848);
  v48 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v43, &v144);
  v49 = *(struct _KEVENT **)(v5 + 1848);
  if ( *(struct _KEVENT **)&v47->Header.Lock != v47 )
  {
    do
    {
      if ( LODWORD(v49->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v49[1].Header.Lock + 4LL * LODWORD(v49[1].Header.WaitListHead.Blink) + 1060) >= *(_DWORD *)(*(_QWORD *)&v49[1].Header.Lock + 204LL) )
          goto LABEL_161;
      }
      else if ( ((__int64)v49[1].Header.WaitListHead.Flink & 4) != 0 )
      {
        v125 = (int)v49[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v49[5].Header.WaitListHead.Blink) = v125;
        if ( v125 )
          goto LABEL_161;
      }
      ++v49[5].Header.LockNV;
      KeSetEvent(v49 + 4, 0, 0);
LABEL_161:
      v49 = *(struct _KEVENT **)&v49->Header.Lock;
    }
    while ( v49 != v47 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v144);
  KeLowerIrql(v48);
  v50 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)v2 + 7);
  v51 = -1;
  if ( v50 )
    v51 = *((_DWORD *)v50 + 44);
  if ( v151 )
  {
    do
      v50 = VidSchiProcessCompletedQueuePacketInternal(v50);
    while ( v50 );
  }
  *((_QWORD *)v2 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v2 + 18) = 16;
  if ( v51 != -1 && (*((_DWORD *)v2 + 23) & 0x10) != 0 )
    VidSchiQueueDeferredVisibilityWorkItem(
      *(struct _VIDSCH_PRESENT_INFO **)(v5 + 8LL * v51 + 3008),
      (struct _VIDSCH_GLOBAL *)v5);
}
