/*
 * XREFs of VidSchiScheduleCommandToRun @ 0x1C000A450
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0081FD0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00019F0 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00035B0 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1C0003680 (VidSchiStartNodeYield.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000B470 (VidSchiSwitchContextWithCheck.c)
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x1C000B980 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 *     VidSchiUpdateContextStatus @ 0x1C000CE10 (VidSchiUpdateContextStatus.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C0014800 (VidSchiProcessFlipPendingContextList.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0022668 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002B2E4 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0055818 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C0076E40 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C0077190 (VidSchiCheckHwProgress.c)
 */

__int64 __fastcall VidSchiScheduleCommandToRun(__int64 a1, _BYTE *a2)
{
  __int64 v4; // r15
  __int64 v5; // rcx
  _QWORD *v6; // r9
  __int64 v7; // rdx
  int v8; // r9d
  struct _VIDSCH_CONTEXT *v9; // rdi
  __int64 v10; // rax
  ULONGLONG v11; // rdx
  int v12; // r8d
  __int64 LeastSignificantBit; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  CCHAR v18; // al
  int v19; // r9d
  unsigned int v20; // eax
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // rbp
  struct _VIDSCH_CONTEXT *v24; // rdx
  bool v25; // zf
  char *v26; // rdx
  int v27; // r8d
  unsigned int v28; // eax
  int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // r8d
  int v32; // eax
  unsigned int v33; // r8d
  CCHAR MostSignificantBit; // al
  _QWORD *v36; // rsi
  _QWORD *v37; // r9
  __int64 v38; // rcx
  _QWORD *v39; // rax
  CCHAR v40; // al
  int v41; // r9d
  LARGE_INTEGER v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbp
  __int64 v46; // rcx
  int v47; // r9d
  __int64 v48; // rax
  LARGE_INTEGER v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbp
  __int64 v53; // rcx
  int v54; // r9d
  __int64 v55; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v58; // [rsp+60h] [rbp-88h] BYREF
  __int64 v59[14]; // [rsp+78h] [rbp-70h] BYREF
  char v60; // [rsp+F0h] [rbp+8h] BYREF
  char v61; // [rsp+F8h] [rbp+10h] BYREF
  union _LARGE_INTEGER v62; // [rsp+100h] [rbp+18h] BYREF
  union _LARGE_INTEGER v63; // [rsp+108h] [rbp+20h] BYREF

  *a2 = 0;
  v4 = 0LL;
  v60 = 0;
  while ( 1 )
  {
LABEL_2:
    if ( (unsigned int)(*(_DWORD *)(a1 + 2860) - 2) > 1 && !(unsigned int)VidSchiCheckHwProgress(a1, &v60) )
      goto LABEL_42;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1936), &LockHandle);
    v6 = *(_QWORD **)(a1 + 1968);
    if ( v6 != (_QWORD *)(a1 + 1968) )
    {
      do
      {
        v36 = (_QWORD *)*v6;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v5, (__int64)(v6 - 25)) )
        {
          v38 = *v37;
          if ( *(_QWORD **)(*v37 + 8LL) != v37 || (v39 = (_QWORD *)v37[1], (_QWORD *)*v39 != v37) )
            __fastfail(3u);
          *v39 = v38;
          *(_QWORD *)(v38 + 8) = v39;
          VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v37 - 24), (struct VIDMM_ALLOC *)(v37 - 25));
        }
        v6 = v36;
      }
      while ( v36 != (_QWORD *)(a1 + 1968) );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *(_QWORD *)(a1 + 1472) = MEMORY[0xFFFFF78000000320];
    if ( KeReadStateEvent((PRKEVENT)(a1 + 1424)) <= 0 )
      break;
LABEL_47:
    if ( (unsigned int)VidSchiWaitForSchedulerEvents(a1) == 258 )
      goto LABEL_42;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &v58);
  if ( *(_DWORD *)(a1 + 3024) )
  {
    LOBYTE(v7) = 1;
    VidSchiProcessCrossAdapterSignaledSyncObjects(a1, v7);
  }
  if ( *(_BYTE *)(a1 + 51) )
    VidSchiProcessFlipPendingContextList(a1);
  while ( 1 )
  {
    v9 = 0LL;
    if ( !*(_DWORD *)(a1 + 960) )
      goto LABEL_26;
    v10 = *(_QWORD *)(a1 + 224);
    if ( v10 && (*(_DWORD *)(v10 + 184) & 1) != 0 )
    {
      v9 = *(struct _VIDSCH_CONTEXT **)(a1 + 224);
      goto LABEL_26;
    }
    if ( *(_DWORD *)(a1 + 64) == 1 )
    {
      v14 = *(_QWORD *)(a1 + 440);
      if ( !*(_DWORD *)(v14 + 1736) )
        goto LABEL_26;
      goto LABEL_20;
    }
    v11 = *(_QWORD *)(a1 + 416);
    v12 = *(_DWORD *)(a1 + 952);
    if ( (v11 & *(_QWORD *)(a1 + 424)) != 0 )
      v11 &= *(_QWORD *)(a1 + 424);
    if ( v11 >> ((unsigned __int8)v12 + 1) )
      v11 = v11 >> ((unsigned __int8)v12 + 1) << ((unsigned __int8)v12 + 1);
    if ( v11 )
    {
      LeastSignificantBit = (unsigned int)RtlFindLeastSignificantBit(v11);
      v14 = *(_QWORD *)(a1 + 8 * LeastSignificantBit + 440);
      *(_DWORD *)(a1 + 952) = LeastSignificantBit;
LABEL_20:
      if ( v14 )
      {
        if ( *(_DWORD *)(v14 + 1740) )
        {
          v15 = *(_QWORD *)(v14 + 24);
          v61 = 0;
          v59[0] = v14;
          DpSynchronizeExecution(
            *(_QWORD *)(v15 + 24),
            VidSchiUpdateNodeRunningTimeAtISR,
            v59,
            *(unsigned int *)(v15 + 32),
            &v61);
        }
        v16 = *(_QWORD *)(v14 + 24);
        KeQueryPerformanceCounter(&PerformanceFrequency);
        v17 = *(unsigned int *)(v14 + 1736);
        if ( *(_BYTE *)(v14 + 1992)
          && (v17 & 0xC0000000) == 0
          && (v17 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(v16 + 176)))) != 0 )
        {
          MostSignificantBit = RtlFindMostSignificantBit(v17 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(v16 + 176))));
          v9 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v14, MostSignificantBit, 1);
          if ( v9 )
          {
            VidSchiUpdateNodeYieldStatus((struct _VIDSCH_NODE *)v14);
          }
          else
          {
            v40 = RtlFindMostSignificantBit(*(unsigned int *)(v14 + 1736));
            v9 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v14, v40, 0);
            if ( !*(_QWORD *)(v14 + 1968) )
            {
              v42 = KeQueryPerformanceCounter(&v62);
              v43 = *(unsigned int *)(*((_QWORD *)v9 + 13) + 488LL);
              v44 = 0LL;
              if ( (unsigned int)v43 <= *(_DWORD *)(a1 + 40) )
                v44 = (unsigned int)v43;
              v45 = (unsigned int)v44;
              v46 = *(_QWORD *)(a1 + 8 * v44 + 3032);
              v47 = *(_DWORD *)(v46 + 65428);
              if ( !v47 )
              {
                v48 = WdLogNewEntry5_WdWarning(v46, v43);
                *(_QWORD *)(v48 + 24) = v45;
                WdLogEvent5_WdWarning(v48);
                v47 = 16;
              }
              VidSchiStartNodeYield(v14, v42.QuadPart, v62.QuadPart, v47);
            }
            VidSchiProfilePerformanceTick(20, a1, v14, v41, (__int64)v9, 0LL, 0LL, 1LL);
          }
        }
        else
        {
          v18 = RtlFindMostSignificantBit(*(unsigned int *)(v14 + 1736));
          v9 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v14, v18, 0);
          if ( (*(_DWORD *)(a1 + 2192) & 4) != 0 && *(_BYTE *)(v14 + 1992) && !*(_QWORD *)(v14 + 1968) )
          {
            v49 = KeQueryPerformanceCounter(&v63);
            v50 = *(unsigned int *)(*((_QWORD *)v9 + 13) + 488LL);
            v51 = 0LL;
            if ( (unsigned int)v50 <= *(_DWORD *)(a1 + 40) )
              v51 = (unsigned int)v50;
            v52 = (unsigned int)v51;
            v53 = *(_QWORD *)(a1 + 8 * v51 + 3032);
            v54 = *(_DWORD *)(v53 + 65428);
            if ( !v54 )
            {
              v55 = WdLogNewEntry5_WdWarning(v53, v50);
              *(_QWORD *)(v55 + 24) = v52;
              WdLogEvent5_WdWarning(v55);
              v54 = 16;
            }
            VidSchiStartNodeYield(v14, v49.QuadPart, v63.QuadPart, v54);
          }
          VidSchiProfilePerformanceTick(20, a1, v14, v19, (__int64)v9, 0LL, 0LL, 0LL);
        }
      }
    }
LABEL_26:
    VidSchiProfilePerformanceTick(2, a1, 0, v8, (__int64)v9, 0LL, 0LL, 0LL);
    if ( !v9 )
    {
      v21 = 0;
      goto LABEL_41;
    }
    v20 = VidSchiSwitchContextWithCheck(v9);
    v21 = v20;
    if ( v20 == 1 )
      break;
    if ( v20 != 3 )
      goto LABEL_41;
  }
  v22 = *((_QWORD *)v9 + 12);
  v4 = *((_QWORD *)v9 + 80);
  v23 = *(_QWORD *)(v22 + 24);
  if ( v4 )
  {
    --*((_DWORD *)v9 + 193);
    --*(_DWORD *)(v22 + 2816);
    --*(_DWORD *)(v23 + 960);
    v24 = *(struct _VIDSCH_CONTEXT **)(v4 + 32);
    if ( v24 == (struct _VIDSCH_CONTEXT *)((char *)v9 + 656) )
    {
      *((_DWORD *)v9 + 159) &= 0xFFFFFFF0;
      *((_QWORD *)v9 + 80) = 0LL;
      VidSchiUpdateContextStatus(v9, 1LL, 16469LL);
    }
    else
    {
      v25 = v24 == (struct _VIDSCH_CONTEXT *)32;
      v26 = (char *)v24 - 32;
      *((_QWORD *)v9 + 80) = v26;
      if ( v25 )
      {
        *((_DWORD *)v9 + 159) &= 0xFFFFFFF8;
        v33 = *((_DWORD *)v9 + 159) & 0xFFFFFFF7;
      }
      else
      {
        v27 = 0;
        v28 = (*((_DWORD *)v26 + 12) - 4 <= v20) | *((_DWORD *)v9 + 159) & 0xFFFFFFFE;
        v29 = 0;
        *((_DWORD *)v9 + 159) = v28;
        if ( *((_DWORD *)v26 + 12) == 3 )
          v29 = 2;
        v30 = v28 & 0xFFFFFFFD | v29;
        *((_DWORD *)v9 + 159) = v30;
        if ( *((_DWORD *)v26 + 12) == 7 )
          v27 = 4;
        v31 = v30 & 0xFFFFFFFB | v27;
        v32 = 0;
        *((_DWORD *)v9 + 159) = v31;
        if ( *((_DWORD *)v26 + 12) == 6 )
          v32 = 8;
        v33 = v32 | v31 & 0xFFFFFFF7;
      }
      *((_DWORD *)v9 + 159) = v33;
    }
    VidSchiProfilePerformanceTick(5, v23, 0, v8, 0LL, v4, 0LL, 0LL);
  }
  *((_DWORD *)v9 + 46) |= 0x400u;
LABEL_41:
  KeReleaseInStackQueuedSpinLock(&v58);
  if ( v21 != 1 )
  {
    if ( v21 == 4 )
    {
      *(_QWORD *)(*((_QWORD *)v9 + 12) + 232LL) = 0LL;
      VidSchiSubmitPreemptionCommand(*((_QWORD *)v9 + 12));
      goto LABEL_2;
    }
    if ( !v21 || v21 == 2 )
      goto LABEL_47;
    goto LABEL_2;
  }
LABEL_42:
  if ( *(_DWORD *)(a1 + 2860) )
    *a2 = 1;
  return v4;
}
