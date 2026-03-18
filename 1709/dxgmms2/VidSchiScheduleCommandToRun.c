/*
 * XREFs of VidSchiScheduleCommandToRun @ 0x1C0009D80
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C007D290 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A200 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000ADA0 (VidSchiSwitchContextWithCheck.c)
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x1C000B2C0 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 *     VidSchiUpdateContextStatus @ 0x1C000B5B0 (VidSchiUpdateContextStatus.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0011808 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001343C (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1C00134EC (VidSchiStartNodeYield.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C0015B24 (VidSchiProcessFlipPendingContextList.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00200AC (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C00283FC (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C006EB80 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C006F3D0 (VidSchiCheckHwProgress.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0071AE8 (VidSchiSubmitPreemptionCommand.c)
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
  ULONGLONG v12; // rax
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
  bool v26; // zf
  char *v27; // rdx
  unsigned int v28; // eax
  int v29; // ecx
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int v32; // eax
  int v33; // ecx
  CCHAR MostSignificantBit; // al
  _QWORD *v35; // rsi
  _QWORD *v36; // r9
  __int64 v37; // rcx
  _QWORD *v38; // rax
  CCHAR v39; // al
  int v40; // r9d
  LARGE_INTEGER v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rbp
  __int64 v44; // r9
  __int64 v45; // rax
  LARGE_INTEGER v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rbp
  __int64 v49; // r9
  __int64 v50; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v53; // [rsp+60h] [rbp-88h] BYREF
  __int64 v54[14]; // [rsp+78h] [rbp-70h] BYREF
  char v55; // [rsp+F0h] [rbp+8h] BYREF
  char v56; // [rsp+F8h] [rbp+10h] BYREF
  union _LARGE_INTEGER v57; // [rsp+100h] [rbp+18h] BYREF
  union _LARGE_INTEGER v58; // [rsp+108h] [rbp+20h] BYREF

  *a2 = 0;
  v4 = 0LL;
  v55 = 0;
  while ( 1 )
  {
LABEL_2:
    if ( (unsigned int)(*(_DWORD *)(a1 + 2836) - 2) > 1 && !(unsigned int)VidSchiCheckHwProgress(a1, &v55) )
      goto LABEL_34;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1920), &LockHandle);
    v6 = *(_QWORD **)(a1 + 1952);
    if ( v6 != (_QWORD *)(a1 + 1952) )
    {
      do
      {
        v35 = (_QWORD *)*v6;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v5, v6 - 25) )
        {
          v37 = *v36;
          if ( *(_QWORD **)(*v36 + 8LL) != v36 || (v38 = (_QWORD *)v36[1], (_QWORD *)*v38 != v36) )
            __fastfail(3u);
          *v38 = v37;
          *(_QWORD *)(v37 + 8) = v38;
          VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v36 - 24), (struct VIDMM_ALLOC *)(v36 - 25));
        }
        v6 = v35;
      }
      while ( v35 != (_QWORD *)(a1 + 1952) );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *(_QWORD *)(a1 + 1456) = MEMORY[0xFFFFF78000000320];
    if ( KeReadStateEvent((PRKEVENT)(a1 + 1408)) <= 0 )
      break;
LABEL_39:
    if ( (unsigned int)VidSchiWaitForSchedulerEvents(a1) == 258 )
      goto LABEL_34;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &v53);
  if ( *(_DWORD *)(a1 + 3000) )
  {
    LOBYTE(v7) = 1;
    VidSchiProcessCrossAdapterSignaledSyncObjects(a1, v7);
  }
  if ( *(_BYTE *)(a1 + 51) )
    VidSchiProcessFlipPendingContextList(a1);
  while ( 1 )
  {
    v9 = 0LL;
    if ( !*(_DWORD *)(a1 + 944) )
      goto LABEL_26;
    v10 = *(_QWORD *)(a1 + 224);
    if ( v10 && (*(_DWORD *)(v10 + 176) & 1) != 0 )
    {
      v9 = *(struct _VIDSCH_CONTEXT **)(a1 + 224);
      goto LABEL_26;
    }
    if ( *(_DWORD *)(a1 + 60) == 1 )
    {
      v14 = *(_QWORD *)(a1 + 424);
      if ( !*(_DWORD *)(v14 + 1704) )
        goto LABEL_26;
      goto LABEL_20;
    }
    v11 = *(_QWORD *)(a1 + 400) & *(_QWORD *)(a1 + 408);
    if ( !v11 )
      v11 = *(_QWORD *)(a1 + 400);
    v12 = v11 >> (*(_BYTE *)(a1 + 936) + 1);
    if ( v12 )
      v11 = v12 << (*(_BYTE *)(a1 + 936) + 1);
    if ( v11 )
    {
      LeastSignificantBit = (unsigned int)RtlFindLeastSignificantBit(v11);
      v14 = *(_QWORD *)(a1 + 8 * LeastSignificantBit + 424);
      *(_DWORD *)(a1 + 936) = LeastSignificantBit;
LABEL_20:
      if ( v14 )
      {
        if ( *(_DWORD *)(v14 + 1708) )
        {
          v15 = *(_QWORD *)(v14 + 24);
          v56 = 0;
          v54[0] = v14;
          DpSynchronizeExecution(
            *(_QWORD *)(v15 + 24),
            VidSchiUpdateNodeRunningTimeAtISR,
            v54,
            *(unsigned int *)(v15 + 32),
            &v56);
        }
        v16 = *(_QWORD *)(v14 + 24);
        KeQueryPerformanceCounter(&PerformanceFrequency);
        v17 = *(unsigned int *)(v14 + 1704);
        if ( *(_BYTE *)(v14 + 1960)
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
            v39 = RtlFindMostSignificantBit(*(unsigned int *)(v14 + 1704));
            v9 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v14, v39, 0);
            if ( !*(_QWORD *)(v14 + 1936) )
            {
              v41 = KeQueryPerformanceCounter(&v57);
              v42 = *(unsigned int *)(*((_QWORD *)v9 + 13) + 464LL);
              if ( (unsigned int)v42 > *(_DWORD *)(a1 + 40) )
                v42 = 0LL;
              v43 = (unsigned int)v42;
              v44 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v42 + 3008) + 60948LL);
              if ( !(_DWORD)v44 )
              {
                v45 = WdLogNewEntry5_WdWarning();
                *(_QWORD *)(v45 + 24) = v43;
                WdLogEvent5_WdWarning(v45);
                v44 = 16LL;
              }
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
                v14,
                (LARGE_INTEGER)v41.QuadPart,
                (union _LARGE_INTEGER)v57.QuadPart,
                v44);
            }
            VidSchiProfilePerformanceTick(20, a1, v14, v40, (__int64)v9, 0LL, 0LL, 1LL);
          }
        }
        else
        {
          v18 = RtlFindMostSignificantBit(*(unsigned int *)(v14 + 1704));
          v9 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v14, v18, 0);
          if ( (*(_DWORD *)(a1 + 2168) & 4) != 0 && *(_BYTE *)(v14 + 1960) && !*(_QWORD *)(v14 + 1936) )
          {
            v46 = KeQueryPerformanceCounter(&v58);
            v47 = *(unsigned int *)(*((_QWORD *)v9 + 13) + 464LL);
            if ( (unsigned int)v47 > *(_DWORD *)(a1 + 40) )
              v47 = 0LL;
            v48 = (unsigned int)v47;
            v49 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v47 + 3008) + 60948LL);
            if ( !(_DWORD)v49 )
            {
              v50 = WdLogNewEntry5_WdWarning();
              *(_QWORD *)(v50 + 24) = v48;
              WdLogEvent5_WdWarning(v50);
              v49 = 16LL;
            }
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
              v14,
              (LARGE_INTEGER)v46.QuadPart,
              (union _LARGE_INTEGER)v58.QuadPart,
              v49);
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
      goto LABEL_33;
    }
    v20 = VidSchiSwitchContextWithCheck(v9);
    v21 = v20;
    if ( v20 == 1 )
      break;
    if ( v20 != 3 )
      goto LABEL_33;
  }
  v22 = *((_QWORD *)v9 + 12);
  v4 = *((_QWORD *)v9 + 79);
  v23 = *(_QWORD *)(v22 + 24);
  if ( v4 )
  {
    --*((_DWORD *)v9 + 191);
    --*(_DWORD *)(v22 + 2784);
    --*(_DWORD *)(v23 + 944);
    v24 = *(struct _VIDSCH_CONTEXT **)(v4 + 32);
    if ( v24 == (struct _VIDSCH_CONTEXT *)((char *)v9 + 648) )
    {
      *((_DWORD *)v9 + 157) &= 0xFFFFFFF0;
      *((_QWORD *)v9 + 79) = 0LL;
      VidSchiUpdateContextStatus(v9, v20, 16489LL);
    }
    else
    {
      v26 = v24 == (struct _VIDSCH_CONTEXT *)32;
      v27 = (char *)v24 - 32;
      *((_QWORD *)v9 + 79) = v27;
      if ( v26 )
      {
        *((_DWORD *)v9 + 157) &= 0xFFFFFFF0;
      }
      else
      {
        v28 = ((unsigned int)(*((_DWORD *)v27 + 12) - 4) <= 1) | *((_DWORD *)v9 + 157) & 0xFFFFFFFE;
        v29 = 0;
        *((_DWORD *)v9 + 157) = v28;
        if ( *((_DWORD *)v27 + 12) == 3 )
          v29 = 2;
        v30 = v28 & 0xFFFFFFFD | v29;
        v31 = 0;
        *((_DWORD *)v9 + 157) = v30;
        if ( *((_DWORD *)v27 + 12) == 7 )
          v31 = 4;
        v32 = v30 & 0xFFFFFFFB | v31;
        *((_DWORD *)v9 + 157) = v32;
        if ( *((_DWORD *)v27 + 12) == 6 )
          v33 = 8;
        else
          v33 = 0;
        *((_DWORD *)v9 + 157) = v33 | v32 & 0xFFFFFFF7;
      }
    }
    VidSchiProfilePerformanceTick(5, v23, 0, v8, 0LL, v4, 0LL, 0LL);
  }
  *((_DWORD *)v9 + 44) |= 0x400u;
LABEL_33:
  KeReleaseInStackQueuedSpinLock(&v53);
  if ( v21 != 1 )
  {
    if ( v21 == 4 )
    {
      *(_QWORD *)(*((_QWORD *)v9 + 12) + 232LL) = 0LL;
      VidSchiSubmitPreemptionCommand(*((_QWORD *)v9 + 12));
      goto LABEL_2;
    }
    if ( (v21 & 0xFFFFFFFD) != 0 )
      goto LABEL_2;
    goto LABEL_39;
  }
LABEL_34:
  if ( *(_DWORD *)(a1 + 2836) )
    *a2 = 1;
  return v4;
}
