/*
 * XREFs of VidSchiProcessDpcCompletedPacket @ 0x1C00072F0
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0005B10 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002657C (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00028AC (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000A0C0 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000AA20 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000C020 (VidSchUnwaitFlipQueue.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000DCA4 (VidSchiCompleteRewindPacket.c)
 *     VidSchiDecrementContextReference @ 0x1C0010100 (VidSchiDecrementContextReference.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0010E14 (VidSchiCheckConditionDeviceCommand.c)
 *     VidSchiStartNodeYield @ 0x1C0011BC0 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C0011C88 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     VidSchiCheckYieldExitCondition @ 0x1C0011E18 (VidSchiCheckYieldExitCondition.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C0012048 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     VidSchiMarkDeviceAsError @ 0x1C00127A4 (VidSchiMarkDeviceAsError.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0012EA4 (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C001E4C4 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C001F430 (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 *     Template_ppxx @ 0x1C001FEE0 (Template_ppxx.c)
 *     ?VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z @ 0x1C0022150 (-VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0022890 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C0022E18 (-VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z.c)
 *     Template_pqxq @ 0x1C0025040 (Template_pqxq.c)
 *     Template_px @ 0x1C0025444 (Template_px.c)
 */

void __fastcall VidSchiProcessDpcCompletedPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  signed __int64 v1; // r14
  struct _VIDSCH_DMA_PACKET *v2; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // r13
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
  _QWORD *v31; // r13
  __int64 v32; // rbx
  __int64 v33; // rcx
  _QWORD **v34; // rbx
  _QWORD *v35; // r9
  _QWORD *v36; // r8
  _QWORD *v37; // r12
  __int64 v38; // rax
  char v39; // r12
  int v40; // r9d
  int v41; // ecx
  struct _KEVENT **v42; // r13
  KSPIN_LOCK *v43; // rbx
  struct _KEVENT *v44; // r13
  struct _KEVENT *v45; // r13
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
  _QWORD *v62; // r11
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
  signed __int16 v73; // ax
  _QWORD *v74; // rdx
  _QWORD *v75; // rax
  __int64 v76; // rcx
  _QWORD *v77; // rax
  bool v78; // zf
  _QWORD *v79; // rcx
  struct _KEVENT *v80; // rbx
  __int64 v81; // r12
  __int64 v82; // r13
  LARGE_INTEGER v83; // rcx
  unsigned __int128 v84; // rax
  unsigned __int64 v85; // rbx
  unsigned __int64 *v86; // rcx
  __int64 v87; // rdx
  _QWORD *v88; // r9
  _QWORD *v89; // rax
  __int64 v90; // rdx
  _QWORD *v91; // rcx
  struct VIDMM_ALLOC *v92; // r9
  __int64 v93; // r11
  char v94; // al
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
  _QWORD *v119; // r9
  LARGE_INTEGER *v120; // rax
  int v121; // eax
  int Flink; // ecx
  struct _KEVENT *v123; // rbx
  int v124; // ecx
  int v125; // ecx
  int v126; // ecx
  _QWORD *v127; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER v128; // [rsp+48h] [rbp-B8h]
  _QWORD *v129; // [rsp+48h] [rbp-B8h]
  unsigned int v130; // [rsp+50h] [rbp-B0h]
  _QWORD *v131; // [rsp+58h] [rbp-A8h]
  _QWORD *v132; // [rsp+58h] [rbp-A8h]
  union _LARGE_INTEGER v133; // [rsp+60h] [rbp-A0h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER *v135; // [rsp+70h] [rbp-90h]
  VIDMM_GLOBAL *v136; // [rsp+78h] [rbp-88h]
  __int64 v137; // [rsp+80h] [rbp-80h]
  __int64 v138; // [rsp+88h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE v139; // [rsp+90h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v140; // [rsp+A8h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v142; // [rsp+D8h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE v143; // [rsp+F0h] [rbp-10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v144; // [rsp+108h] [rbp+8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v145; // [rsp+120h] [rbp+20h] BYREF
  KIRQL v147; // [rsp+190h] [rbp+90h]
  KIRQL v148; // [rsp+190h] [rbp+90h]
  KIRQL v149; // [rsp+190h] [rbp+90h]
  __int64 v150; // [rsp+190h] [rbp+90h]
  _QWORD *v151; // [rsp+190h] [rbp+90h]
  char v152; // [rsp+198h] [rbp+98h]
  char v153; // [rsp+1A0h] [rbp+A0h]
  bool v154; // [rsp+1A8h] [rbp+A8h]

  v1 = *((_QWORD *)a1 + 6);
  v2 = a1;
  v152 = 0;
  v154 = 0;
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD **)(v1 + 104);
  v127 = v4;
  v5 = *(_QWORD *)(v3 + 24);
  if ( *((_DWORD *)a1 + 18) == 18 )
  {
    v130 = 9;
    v6 = 15;
    VidSchiAllowToDebugPageFault(a1);
  }
  else
  {
    v130 = 0;
    v6 = 13;
  }
  *((_QWORD *)v2 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v2 + 18) = v6;
  if ( *((_QWORD *)v2 + 7) )
  {
    *(_QWORD *)(*((_QWORD *)v2 + 7) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*((_QWORD *)v2 + 7) + 52LL) = v6;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1880), &LockHandle);
  v135 = (LARGE_INTEGER *)(*(_QWORD *)(v3 + 184) + 112LL * *(unsigned int *)(v3 + 196));
  v7 = v135;
  memset(v135, 0, 0x70uLL);
  *(_DWORD *)(v3 + 196) = (*(_DWORD *)(v3 + 196) + 1) & (*(_DWORD *)(v3 + 192) - 1);
  v7->LowPart = 4;
  v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7[1] = v8;
  v10 = v8;
  v11 = *(unsigned int *)(v3 + 1552);
  v128 = v8;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v11 + 1560), 0LL, v1) )
  {
    v97 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
            (LARGE_INTEGER)v9.QuadPart,
            (LARGE_INTEGER)v8.QuadPart);
    *(_QWORD *)(v97 + 24) = v5;
    *(_QWORD *)(v97 + 32) = v4;
    WdLogEvent5_WdAssertion(v97);
    v10 = v128;
  }
  *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1552) = ((_BYTE)v11 + 1) & 0xF;
  if ( (*((_DWORD *)v2 + 23) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 976));
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 952));
  v12 = (__int64)gulPriorityToYieldPriorityBand;
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 2768));
  v13 = PerformanceFrequency;
  v14 = gulPriorityToYieldPriorityBand[*(unsigned int *)(v1 + 396)];
  if ( (_DWORD)v14 )
  {
    v15 = (unsigned __int64 *)(v3 + 1888 + 8 * v14);
    do
    {
      if ( *(v15 - 8) )
      {
        v16 = v10.QuadPart + *v15 - *(v15 - 4);
        *(v15 - 4) = 0LL;
        *v15 = v16;
        LODWORD(v17) = Microsoft_Windows_DxgKrnlEnableBits;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v98 = v16 * (unsigned __int128)0x989680uLL;
          v137 = *((_QWORD *)&v98 + 1);
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
          Template_pqxq(v17, v99, v100, *(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL), v14, v100, *(_WORD *)(v3 + 4));
          v10 = v128;
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
      v57 = (LARGE_INTEGER *)(v3 + 1856 + 8 * v56);
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
  if ( *(int *)(v3 + 2752) > 0 )
  {
    v19 = *(_QWORD *)(v5 + 400);
    _bittestandset64(&v19, *(unsigned __int16 *)(v3 + 4));
    *(_QWORD *)(v5 + 400) = v19;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 796), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v1 + 176) &= ~2u;
    if ( (*(_DWORD *)(v1 + 176) & 8) != 0 )
    {
      *(_DWORD *)(v1 + 176) &= ~8u;
      v154 = (unsigned int)VidSchiCompleteRewindPacket(v1, 1LL) != 0;
    }
    if ( v127 == *(_QWORD **)(v5 + 208) )
    {
      VidSchiUpdateContextStatus(v1, 0LL, 10168LL);
    }
    else if ( (*(_DWORD *)(v1 + 176) & 2) == 0 )
    {
      v20 = *(struct _VIDSCH_CONTEXT **)(v1 + 504);
      if ( v20 )
      {
        VidSchiDecrementContextReference(v20);
        *(_QWORD *)(v1 + 504) = 0LL;
      }
      *(_QWORD *)(v1 + 504) = 0LL;
    }
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 396) + 1696);
    v21 = *(unsigned int *)(v1 + 396);
    if ( !*(_DWORD *)(v3 + 4 * v21 + 1696) )
      *(_DWORD *)(v3 + 1692) &= ~(1 << v21);
    if ( *(_QWORD *)(v1 + 512) )
    {
      v81 = *(_QWORD *)(v1 + 104);
      v82 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
      v150 = *(_QWORD *)(v81 + 40);
      v83 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(&v133) - *(_QWORD *)(v1 + 512));
      v84 = (unsigned __int64)v83.QuadPart * (unsigned __int128)0x989680uLL;
      v138 = *((_QWORD *)&v84 + 1);
      if ( is_mul_ok(v83.QuadPart, 0x989680uLL) )
        v85 = v84 / (unsigned __int64)v133.QuadPart;
      else
        v85 = 10000000 * (v83.QuadPart / (unsigned __int64)v133.QuadPart)
            + 10000000 * (v83.QuadPart % (unsigned __int64)v133.QuadPart) / v133.QuadPart;
      v12 = 8LL;
      v86 = (unsigned __int64 *)(v82 + 2664);
      v87 = 8LL;
      while ( v85 <= *v86 )
      {
        v12 = (unsigned int)(v12 - 1);
        --v86;
        if ( --v87 < 0 )
          goto LABEL_132;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v150 + 8LL * (int)v12 + 2664));
LABEL_132:
      if ( v85 >= *(_QWORD *)(v82 + 2592) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v150 + 2656));
        if ( v85 >= *(_QWORD *)(v82 + 2576) && !*(_BYTE *)(*(_QWORD *)(v81 + 40) + 2624LL) )
        {
          v102 = *(_DWORD *)(v81 + 48);
          if ( (v102 & 8) == 0
            && (v102 & 1) == 0
            && !*(_DWORD *)(v82 + 2820)
            && !*(_BYTE *)(v81 + 164)
            && !_InterlockedCompareExchange((volatile signed __int32 *)(v81 + 160), 0, 0)
            && (*(_DWORD *)(v82 + 2152) & 0x2000) != 0 )
          {
            KeSetTimer((PKTIMER)(v1 + 520), (LARGE_INTEGER)-*(_QWORD *)(v82 + 2584), (PKDPC)(v1 + 584));
            VidSchiUpdateContextStatus(v1, 7LL, 24383LL);
            if ( bTracingEnabled )
            {
              v104 = *(_QWORD *)(v1 + 56);
              if ( !v104 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
                LODWORD(v104) = v1;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_ppxx(
                  v103,
                  (unsigned int)&EventDelayContextScheduling,
                  v12,
                  v104,
                  *(_QWORD *)(v150 + 2632),
                  v85,
                  *(_QWORD *)(v82 + 2584));
            }
          }
        }
      }
      *(_QWORD *)(v1 + 512) = 0LL;
    }
  }
  if ( *(_BYTE *)(v3 + 1944) )
  {
    if ( *(_QWORD *)(v3 + 1920) )
    {
      VidSchiCheckYieldExitCondition((struct _VIDSCH_NODE *)v3);
      v94 = v154;
      if ( v153 )
        v94 = 1;
      v154 = v94;
    }
    else if ( (~((1 << (*(_BYTE *)(v5 + 176) + 1)) - 1) & *(_DWORD *)(v3 + 1692)) == 0 )
    {
      refreshed = VidSchiMonitorRefreshPeriodFromNode(v3);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v3,
        (LARGE_INTEGER)v128.QuadPart,
        (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
        refreshed);
      v154 = 1;
    }
  }
  v22 = (LONGLONG *)v135;
  v135[2] = *(LARGE_INTEGER *)((char *)v2 + 104);
  _m_prefetchw((const void *)(v3 + 96));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v3 + 96),
            *((_QWORD *)v2 + 13),
            *(_QWORD *)(v3 + 96)) != *((_QWORD *)v2 + 13) )
    ;
  v23 = *((_QWORD *)v2 + 7);
  if ( v23 )
  {
    v22[3] = *(_QWORD *)(v23 + 104);
    v24 = *(_QWORD **)(v23 + 88);
    v25 = v24[13];
    v26 = *(_QWORD *)(v24[12] + 24LL);
    v27 = v24[19];
    if ( v27 && *(_QWORD *)(v23 + 104) <= v27 )
    {
      if ( !*(_BYTE *)(v25 + 164) )
      {
        v22 = 0LL;
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v25 + 160), 0, 0)
          && (*(_BYTE *)(v26 + 2844) & 1) == 0 )
        {
          v105 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, 0LL, v12);
          v105[3] = 281LL;
          v105[4] = 1792LL;
          v105[5] = *(_QWORD *)(v23 + 104);
          v105[6] = v24[19];
          v105[7] = 0LL;
          WdLogEvent5_WdCriticalError(v105);
          JUMPOUT(0x1C0018733LL);
        }
      }
      v106 = WdLogNewEntry5_WdEvent(v25, v22);
      *(_QWORD *)(v106 + 24) = *(_QWORD *)(v23 + 104);
      WdLogEvent5_WdEvent(v106);
    }
    else
    {
      if ( *(_BYTE *)(v25 + 164)
        || (v22 = 0LL, _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 160), 0, 0))
        || (*(_BYTE *)(v26 + 2844) & 1) != 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v25, v22);
        v28[3] = v23;
        v28[4] = *(_QWORD *)(v23 + 104);
      }
      else
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v25, 0LL);
        v28[3] = v23;
        v28[4] = *(_QWORD *)(v23 + 104);
        v28[5] = v24[19];
      }
      WdLogEvent5_WdEvent(v28);
      *(_QWORD *)(*(_QWORD *)(v23 + 88) + 152LL) = *(_QWORD *)(v23 + 104);
      v22 = *(LONGLONG **)(*(_QWORD *)(v23 + 88) + 104LL);
      if ( *((_DWORD *)v22 + 298) )
        VidSchUnwaitFlipQueue((struct _VIDSCH_GLOBAL *)v26);
    }
    *((_DWORD *)v2 + 23) |= 0x80u;
    v152 = 1;
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
  if ( v30 && *(_QWORD *)(v30 + 256) )
  {
    for ( j = 0; j < *(_DWORD *)(v30 + 608); ++j )
    {
      v112 = (struct _VIDSCH_HISTORY_BUFFER_DATA *)(*(_QWORD *)(v30 + 256) + 16LL * j);
      if ( *(_QWORD *)v112 )
        VidSchiProcessHistoryBuffer(v2, v112);
    }
    VidSchiFreeHistoryBufferStorage((struct _VIDSCH_QUEUE_PACKET *)v30);
  }
  v31 = v127;
  VidSchiUnwaitMonitoredFences(v127[4]);
  v32 = v127[4];
  v136 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v32 + 8) + 440LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v32 + 1912), &v139);
  v34 = (_QWORD **)(v32 + 1936);
  v35 = *v34;
  if ( *v34 != v34 )
  {
    do
    {
      v113 = (_QWORD *)*v35;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v33, v35 - 25) )
      {
        v115 = *v114;
        v116 = (_QWORD *)v114[1];
        if ( *(_QWORD **)(*v114 + 8LL) != v114 || (_QWORD *)*v116 != v114 )
          __fastfail(3u);
        *v116 = v115;
        *(_QWORD *)(v115 + 8) = v116;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v114 - 24), (struct VIDMM_ALLOC *)(v114 - 25));
      }
      v35 = v113;
    }
    while ( v113 != v34 );
  }
  KeReleaseInStackQueuedSpinLock(&v139);
  v37 = (_QWORD *)v127[153];
  if ( v37 == v127 + 153 )
    goto LABEL_48;
  while ( 1 )
  {
    v62 = v127;
    v63 = v37;
    v37 = (_QWORD *)*v37;
    v64 = v63[2];
    if ( v64 > v127[152] )
      break;
LABEL_103:
    v68 = (_QWORD *)v63[11];
    v69 = v63 + 11;
    if ( v68 != v63 + 11 )
    {
      do
      {
        v70 = v68 - 27;
        v131 = (_QWORD *)*v68;
        v36 = (_QWORD *)*v68;
        v71 = (_QWORD *)v68[1];
        v129 = v68 - 27;
        if ( *(_QWORD **)(*v68 + 8LL) != v68 || (_QWORD *)*v71 != v68 )
          __fastfail(3u);
        *v71 = v36;
        v36[1] = v71;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v70[12] + 8LL), 0xFFFFFFFF) == 1 )
        {
          v72 = v70[12];
          v73 = _InterlockedCompareExchange16((volatile signed __int16 *)(v72 + 4), 2, 1);
          if ( bTracingEnabled )
          {
            if ( v73 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              Template_p(v72, &EventCompleteOfferAllocation, v36, v70);
              v70 = v129;
            }
          }
        }
        v69 = v63 + 11;
        v70[27] = 0LL;
        v70[28] = 0LL;
        v68 = v131;
      }
      while ( v131 != v63 + 11 );
      v62 = v127;
    }
    v74 = (_QWORD *)v63[9];
    v75 = v63 + 9;
    if ( v74 != v63 + 9 )
    {
      do
      {
        v88 = v74 - 25;
        v89 = v74;
        v132 = (_QWORD *)*v74;
        v90 = *v74;
        v91 = (_QWORD *)v88[26];
        v151 = v88;
        if ( *(_QWORD **)(v90 + 8) != v88 + 25 || (_QWORD *)*v91 != v89 )
          __fastfail(3u);
        *v91 = v90;
        *(_QWORD *)(v90 + 8) = v91;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v91, v88) )
        {
          VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v136, v92);
        }
        else
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v93 + 32) + 1912LL), &v140);
          v117 = v127[4] + 1936LL;
          v118 = *(_QWORD **)(v127[4] + 1944LL);
          if ( *v118 != v117 )
            __fastfail(3u);
          v151[25] = v117;
          v151[26] = v118;
          *v118 = v151 + 25;
          *(_QWORD *)(v117 + 8) = v151 + 25;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v140);
        }
        v74 = v132;
        v75 = v63 + 9;
        v62 = v127;
      }
      while ( v132 != v63 + 9 );
      v69 = v63 + 11;
    }
    if ( (_QWORD *)*v75 == v75 && (_QWORD *)*v69 == v69 )
    {
      v76 = *v63;
      v77 = (_QWORD *)v63[1];
      if ( *(_QWORD **)(*v63 + 8LL) != v63 || (_QWORD *)*v77 != v63 )
        __fastfail(3u);
      v78 = bTracingEnabled == 0;
      *v77 = v76;
      *(_QWORD *)(v76 + 8) = v77;
      if ( !v78 )
      {
        v119 = (_QWORD *)v62[1];
        if ( !v119 )
          v119 = v62;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_px(v76, v74, v36, v119, v63[2]);
      }
      v79 = (_QWORD *)v63[3];
      if ( v79 != v63 + 4 && v79 )
        ExFreePoolWithTag(v79, 0);
      ExFreePoolWithTag(v63, 0);
    }
    if ( v37 == v127 + 153 )
    {
      v31 = v127;
      goto LABEL_48;
    }
  }
  v36 = (_QWORD *)*((unsigned int *)v63 + 16);
  v65 = 0;
  if ( !(_DWORD)v36 )
  {
LABEL_102:
    v127[152] = v64;
    goto LABEL_103;
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
    if ( ++v65 >= (unsigned int)v36 )
      goto LABEL_102;
  }
  v31 = v127;
LABEL_48:
  v38 = *(_QWORD *)(v5 + 392);
  v39 = v154;
  if ( _bittest64(&v38, *(unsigned __int8 *)(v3 + 4)) )
    v39 = 1;
  if ( bTracingEnabled )
    VidSchiAddGpuWorkEntry(*((struct _VIDSCH_CONTEXT **)v2 + 6), 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v130 )
  {
    v120 = v135;
    LOBYTE(v135[4].LowPart) = 1;
    *(_OWORD *)&v120[5].LowPart = *(_OWORD *)(v31 + 21);
    *(_OWORD *)&v120[7].LowPart = *(_OWORD *)(v31 + 23);
    v121 = *((_DWORD *)v31 + 46);
    if ( (v121 & 4) != 0 )
    {
      *(_DWORD *)(v3 + 1952) = 1;
    }
    else if ( (v121 & 8) != 0 )
    {
      *(_DWORD *)(v3 + 1948) = 1;
    }
    VidSchiMarkDeviceAsError(v31, v130);
    v41 = 13;
  }
  else
  {
    v41 = 9;
  }
  VidSchiProfilePerformanceTick(v41, v5, v3, v40, 0LL, 0LL, (__int64)v2, 0LL);
  v42 = (struct _KEVENT **)(v1 + 368);
  v43 = (KSPIN_LOCK *)(v5 + 1896);
  v147 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1896), &v142);
  if ( *v42 != (struct _KEVENT *)v42 )
  {
    v80 = *v42;
    while ( 1 )
    {
      if ( LODWORD(v80->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v80[1].Header.Lock + 4LL * LODWORD(v80[1].Header.WaitListHead.Blink) + 1060) >= *(_DWORD *)(*(_QWORD *)&v80[1].Header.Lock + 204LL) )
          goto LABEL_124;
      }
      else if ( ((__int64)v80[1].Header.WaitListHead.Flink & 4) != 0 )
      {
        Flink = (int)v80[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v80[5].Header.WaitListHead.Blink) = Flink;
        if ( Flink )
          goto LABEL_124;
      }
      ++v80[5].Header.LockNV;
      KeSetEvent(v80 + 4, 0, 0);
LABEL_124:
      v80 = *(struct _KEVENT **)&v80->Header.Lock;
      if ( v80 == (struct _KEVENT *)v42 )
      {
        v43 = (KSPIN_LOCK *)(v5 + 1896);
        break;
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v142);
  KeLowerIrql(v147);
  v44 = (struct _KEVENT *)(v3 + 408);
  v148 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v43, &v143);
  if ( *(struct _KEVENT **)&v44->Header.Lock == v44 )
    goto LABEL_56;
  v123 = *(struct _KEVENT **)&v44->Header.Lock;
  while ( 2 )
  {
    if ( LODWORD(v123->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v123[1].Header.Lock + 4LL * LODWORD(v123[1].Header.WaitListHead.Blink) + 1060) < *(_DWORD *)(*(_QWORD *)&v123[1].Header.Lock + 204LL) )
        goto LABEL_228;
    }
    else if ( ((__int64)v123[1].Header.WaitListHead.Flink & 4) == 0
           || (v124 = (int)v123[1].Header.WaitListHead.Blink->Flink,
               (HIDWORD(v123[5].Header.WaitListHead.Blink) = v124) == 0) )
    {
LABEL_228:
      ++v123[5].Header.LockNV;
      KeSetEvent(v123 + 4, 0, 0);
    }
    v123 = *(struct _KEVENT **)&v123->Header.Lock;
    if ( v123 != v44 )
      continue;
    break;
  }
  v43 = (KSPIN_LOCK *)(v5 + 1896);
LABEL_56:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v143);
  KeLowerIrql(v148);
  v45 = (struct _KEVENT *)(v5 + 1792);
  v149 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v43, &v144);
  if ( *(struct _KEVENT **)&v45->Header.Lock == v45 )
    goto LABEL_57;
  v96 = *(struct _KEVENT **)&v45->Header.Lock;
  while ( 2 )
  {
    if ( LODWORD(v96->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v96[1].Header.Lock + 4LL * LODWORD(v96[1].Header.WaitListHead.Blink) + 1060) < *(_DWORD *)(*(_QWORD *)&v96[1].Header.Lock + 204LL) )
        goto LABEL_153;
    }
    else if ( ((__int64)v96[1].Header.WaitListHead.Flink & 4) == 0
           || (v125 = (int)v96[1].Header.WaitListHead.Blink->Flink,
               (HIDWORD(v96[5].Header.WaitListHead.Blink) = v125) == 0) )
    {
LABEL_153:
      ++v96[5].Header.LockNV;
      KeSetEvent(v96 + 4, 0, 0);
    }
    v96 = *(struct _KEVENT **)&v96->Header.Lock;
    if ( v96 != v45 )
      continue;
    break;
  }
  v43 = (KSPIN_LOCK *)(v5 + 1896);
LABEL_57:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v144);
  KeLowerIrql(v149);
  *(_QWORD *)(v1 + 344) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 312), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1600) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1568), 0, 0);
  if ( v39 )
  {
    *(_QWORD *)(v5 + 1376) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1344), 0, 0);
  }
  v46 = (struct _KEVENT *)*((_QWORD *)v2 + 25);
  if ( v46 )
    KeSetEvent(v46, 0, 0);
  v47 = (struct _KEVENT *)(v5 + 1840);
  v48 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v43, &v145);
  v49 = *(struct _KEVENT **)(v5 + 1840);
  if ( *(struct _KEVENT **)&v47->Header.Lock != v47 )
  {
    while ( LODWORD(v49->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v49[1].Header.Lock + 4LL * LODWORD(v49[1].Header.WaitListHead.Blink) + 1060) < *(_DWORD *)(*(_QWORD *)&v49[1].Header.Lock + 204LL) )
        goto LABEL_240;
LABEL_241:
      v49 = *(struct _KEVENT **)&v49->Header.Lock;
      if ( v49 == v47 )
        goto LABEL_62;
    }
    if ( ((__int64)v49[1].Header.WaitListHead.Flink & 4) != 0 )
    {
      v126 = (int)v49[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v49[5].Header.WaitListHead.Blink) = v126;
      if ( v126 )
        goto LABEL_241;
    }
LABEL_240:
    ++v49[5].Header.LockNV;
    KeSetEvent(v49 + 4, 0, 0);
    goto LABEL_241;
  }
LABEL_62:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v145);
  KeLowerIrql(v48);
  v50 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)v2 + 7);
  v51 = -1;
  if ( v50 )
    v51 = *((_DWORD *)v50 + 38);
  if ( v152 )
  {
    do
      v50 = VidSchiProcessCompletedQueuePacketInternal(v50);
    while ( v50 );
  }
  *((_QWORD *)v2 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v2 + 18) = 16;
  if ( v51 != -1 && (*((_DWORD *)v2 + 23) & 0x10) != 0 )
    VidSchiQueueDeferredVisibilityWorkItem(
      *(struct _VIDSCH_PRESENT_INFO **)(v5 + 8LL * v51 + 2992),
      (struct _VIDSCH_GLOBAL *)v5);
}
