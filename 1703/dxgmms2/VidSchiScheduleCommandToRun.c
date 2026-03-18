/*
 * XREFs of VidSchiScheduleCommandToRun @ 0x1C0008F20
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00766C0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C00098D0 (VidSchiSwitchContextWithCheck.c)
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x1C0009DD0 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 *     VidSchiUpdateContextStatus @ 0x1C000A0C0 (VidSchiUpdateContextStatus.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0010E14 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0011AF4 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1C0011BC0 (VidSchiStartNodeYield.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C00138D0 (VidSchiProcessFlipPendingContextList.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C001E4C4 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C0026340 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C006AE70 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C006B650 (VidSchiCheckHwProgress.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C006CE6C (VidSchiSubmitPreemptionCommand.c)
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
  bool v25; // zf
  char *v26; // rdx
  unsigned int v27; // eax
  int v28; // ecx
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // eax
  int v32; // ecx
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
  union _LARGE_INTEGER v51; // [rsp+40h] [rbp-A8h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v54; // [rsp+68h] [rbp-80h] BYREF
  __int64 v55[13]; // [rsp+80h] [rbp-68h] BYREF
  char v56; // [rsp+F0h] [rbp+8h] BYREF
  char v57; // [rsp+F8h] [rbp+10h] BYREF
  int v58; // [rsp+100h] [rbp+18h]
  union _LARGE_INTEGER v59; // [rsp+108h] [rbp+20h] BYREF

  *a2 = 0;
  v4 = 0LL;
  v56 = 0;
  while ( 1 )
  {
LABEL_2:
    if ( (unsigned int)(*(_DWORD *)(a1 + 2820) - 2) > 1 && !(unsigned int)VidSchiCheckHwProgress(a1, &v56) )
      goto LABEL_42;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1912), &LockHandle);
    v6 = *(_QWORD **)(a1 + 1936);
    if ( v6 != (_QWORD *)(a1 + 1936) )
    {
      do
      {
        v35 = (_QWORD *)*v6;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v5, v6 - 25) )
        {
          v37 = *v36;
          v38 = (_QWORD *)v36[1];
          if ( *(_QWORD **)(*v36 + 8LL) != v36 || (_QWORD *)*v38 != v36 )
            __fastfail(3u);
          *v38 = v37;
          *(_QWORD *)(v37 + 8) = v38;
          VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v36 - 24), (struct VIDMM_ALLOC *)(v36 - 25));
        }
        v6 = v35;
      }
      while ( v35 != (_QWORD *)(a1 + 1936) );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *(_QWORD *)(a1 + 1448) = MEMORY[0xFFFFF78000000320];
    if ( KeReadStateEvent((PRKEVENT)(a1 + 1400)) <= 0 )
      break;
LABEL_47:
    if ( (unsigned int)VidSchiWaitForSchedulerEvents(a1) == 258 )
      goto LABEL_42;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &v54);
  if ( *(_DWORD *)(a1 + 2984) )
  {
    LOBYTE(v7) = 1;
    VidSchiProcessCrossAdapterSignaledSyncObjects(a1, v7);
  }
  if ( *(_BYTE *)(a1 + 51) )
    VidSchiProcessFlipPendingContextList(a1);
  v58 = 0;
  while ( 1 )
  {
    v9 = 0LL;
    if ( !*(_DWORD *)(a1 + 944) )
      goto LABEL_27;
    v10 = *(_QWORD *)(a1 + 216);
    if ( v10 && (*(_DWORD *)(v10 + 176) & 1) != 0 )
    {
      v9 = *(struct _VIDSCH_CONTEXT **)(a1 + 216);
      goto LABEL_27;
    }
    if ( *(_DWORD *)(a1 + 60) == 1 )
    {
      v14 = *(_QWORD *)(a1 + 416);
      if ( !*(_DWORD *)(v14 + 1688) )
        goto LABEL_27;
      goto LABEL_21;
    }
    v11 = *(_QWORD *)(a1 + 392) & *(_QWORD *)(a1 + 400);
    if ( !v11 )
      v11 = *(_QWORD *)(a1 + 392);
    v12 = v11 >> (*(_BYTE *)(a1 + 928) + 1);
    if ( v12 )
      v11 = v12 << (*(_BYTE *)(a1 + 928) + 1);
    if ( v11 )
    {
      LeastSignificantBit = (unsigned int)RtlFindLeastSignificantBit(v11);
      v14 = *(_QWORD *)(a1 + 8 * LeastSignificantBit + 416);
      *(_DWORD *)(a1 + 928) = LeastSignificantBit;
LABEL_21:
      if ( v14 )
      {
        if ( *(_DWORD *)(v14 + 1692) )
        {
          v15 = *(_QWORD *)(v14 + 24);
          v57 = 0;
          v55[0] = v14;
          DpSynchronizeExecution(
            *(_QWORD *)(v15 + 24),
            VidSchiUpdateNodeRunningTimeAtISR,
            v55,
            *(unsigned int *)(v15 + 32),
            &v57);
        }
        v16 = *(_QWORD *)(v14 + 24);
        KeQueryPerformanceCounter(&PerformanceFrequency);
        v17 = *(unsigned int *)(v14 + 1688);
        if ( *(_BYTE *)(v14 + 1944)
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
            v39 = RtlFindMostSignificantBit(*(unsigned int *)(v14 + 1688));
            v9 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v14, v39, 0);
            if ( !*(_QWORD *)(v14 + 1920) )
            {
              v41 = KeQueryPerformanceCounter(&v59);
              v42 = *(unsigned int *)(*((_QWORD *)v9 + 13) + 464LL);
              if ( (unsigned int)v42 > *(_DWORD *)(a1 + 40) )
                v42 = 0LL;
              v43 = (unsigned int)v42;
              v44 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v42 + 2992) + 51060LL);
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
                (union _LARGE_INTEGER)v59.QuadPart,
                v44);
            }
            VidSchiProfilePerformanceTick(20, a1, v14, v40, (__int64)v9, 0LL, 0LL, 1LL);
          }
        }
        else
        {
          v18 = RtlFindMostSignificantBit(*(unsigned int *)(v14 + 1688));
          v9 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v14, v18, 0);
          if ( (*(_DWORD *)(a1 + 2152) & 4) != 0 && *(_BYTE *)(v14 + 1944) && !*(_QWORD *)(v14 + 1920) )
          {
            v46 = KeQueryPerformanceCounter(&v51);
            v47 = *(unsigned int *)(*((_QWORD *)v9 + 13) + 464LL);
            if ( (unsigned int)v47 > *(_DWORD *)(a1 + 40) )
              v47 = 0LL;
            v48 = (unsigned int)v47;
            v49 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v47 + 2992) + 51060LL);
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
              (union _LARGE_INTEGER)v51.QuadPart,
              v49);
          }
          VidSchiProfilePerformanceTick(20, a1, v14, v19, (__int64)v9, 0LL, 0LL, 0LL);
        }
      }
    }
LABEL_27:
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
  v4 = *((_QWORD *)v9 + 82);
  v23 = *(_QWORD *)(v22 + 24);
  if ( v4 )
  {
    --*((_DWORD *)v9 + 197);
    --*(_DWORD *)(v22 + 2760);
    --*(_DWORD *)(v23 + 944);
    v24 = *(struct _VIDSCH_CONTEXT **)(v4 + 32);
    if ( v24 == (struct _VIDSCH_CONTEXT *)((char *)v9 + 672) )
    {
      *((_DWORD *)v9 + 163) &= 0xFFFFFFF0;
      *((_QWORD *)v9 + 82) = 0LL;
      VidSchiUpdateContextStatus(v9, 1LL, 16216LL);
    }
    else
    {
      v25 = v24 == (struct _VIDSCH_CONTEXT *)32;
      v26 = (char *)v24 - 32;
      *((_QWORD *)v9 + 82) = v26;
      if ( v25 )
      {
        *((_DWORD *)v9 + 163) &= 0xFFFFFFF0;
      }
      else
      {
        v27 = (*((_DWORD *)v26 + 12) - 4 <= v20) | *((_DWORD *)v9 + 163) & 0xFFFFFFFE;
        v28 = 0;
        *((_DWORD *)v9 + 163) = v27;
        if ( *((_DWORD *)v26 + 12) == 3 )
          v28 = 2;
        v29 = v27 & 0xFFFFFFFD | v28;
        v30 = 0;
        *((_DWORD *)v9 + 163) = v29;
        if ( *((_DWORD *)v26 + 12) == 7 )
          v30 = 4;
        v31 = v29 & 0xFFFFFFFB | v30;
        *((_DWORD *)v9 + 163) = v31;
        if ( *((_DWORD *)v26 + 12) == 6 )
          v32 = 8;
        else
          v32 = 0;
        *((_DWORD *)v9 + 163) = v32 | v31 & 0xFFFFFFF7;
      }
    }
    VidSchiProfilePerformanceTick(5, v23, 0, v8, 0LL, v4, 0LL, 0LL);
  }
  *((_DWORD *)v9 + 44) |= 0x400u;
LABEL_41:
  KeReleaseInStackQueuedSpinLock(&v54);
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
    goto LABEL_47;
  }
LABEL_42:
  if ( *(_DWORD *)(a1 + 2820) )
    *a2 = 1;
  return v4;
}
