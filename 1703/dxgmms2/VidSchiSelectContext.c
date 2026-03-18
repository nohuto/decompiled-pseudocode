/*
 * XREFs of VidSchiSelectContext @ 0x1C002787C
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x1C00AD81C (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiUpdatePriorityTables @ 0x1C0007EE0 (VidSchiUpdatePriorityTables.c)
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x1C0009DD0 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0011AF4 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1C0011BC0 (VidSchiStartNodeYield.c)
 *     VidSchiUpdateNodeRunningTime @ 0x1C0012220 (VidSchiUpdateNodeRunningTime.c)
 *     ?VidSchiFindPriorityLevelToSchedule@@YAKPEAU_VIDSCH_NODE@@PEA_N@Z @ 0x1C00227A4 (-VidSchiFindPriorityLevelToSchedule@@YAKPEAU_VIDSCH_NODE@@PEA_N@Z.c)
 *     ?VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C00233F4 (-VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiSelectContext(KSPIN_LOCK *a1, int a2)
{
  struct _VIDSCH_CONTEXT *v4; // rsi
  __int64 v5; // r9
  KSPIN_LOCK v6; // rax
  struct _VIDSCH_NODE *v7; // rax
  __int64 v8; // rbx
  unsigned int PriorityLevelToSchedule; // eax
  bool v10; // bp
  CCHAR MostSignificantBit; // al
  __int64 v12; // r9
  LARGE_INTEGER v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r15
  KSPIN_LOCK v16; // rcx
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r9
  LARGE_INTEGER v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rbp
  KSPIN_LOCK v23; // rcx
  int v24; // r9d
  __int64 v25; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  bool v28; // [rsp+A8h] [rbp+10h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+18h] BYREF
  union _LARGE_INTEGER v30; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock(a1 + 235, &LockHandle);
  if ( (unsigned int)VidSchiUpdatePriorityTables((__int64)a1, 0LL, 1, 0LL) )
  {
    v6 = a1[27];
    if ( v6 && (*(_DWORD *)(v6 + 176) & 1) != 0 )
    {
      v4 = (struct _VIDSCH_CONTEXT *)a1[27];
    }
    else
    {
      v7 = VidSchiSelectReadyNode((struct _VIDSCH_GLOBAL *)a1);
      v8 = (__int64)v7;
      if ( v7 )
      {
        if ( *((_DWORD *)v7 + 423) )
          VidSchiUpdateNodeRunningTime((__int64)v7, 0LL);
        v28 = 0;
        PriorityLevelToSchedule = VidSchiFindPriorityLevelToSchedule((struct _VIDSCH_NODE *)v8, &v28);
        v10 = v28;
        if ( v28 )
        {
          v4 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v8, PriorityLevelToSchedule, 1);
          if ( v4 )
          {
            VidSchiUpdateNodeYieldStatus((struct _VIDSCH_NODE *)v8);
          }
          else
          {
            MostSignificantBit = RtlFindMostSignificantBit(*(unsigned int *)(v8 + 1688));
            v4 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v8, MostSignificantBit, 0);
            if ( !*(_QWORD *)(v8 + 1920) )
            {
              v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
              v14 = *(unsigned int *)(*((_QWORD *)v4 + 13) + 464LL);
              if ( (unsigned int)v14 > *((_DWORD *)a1 + 10) )
                v14 = 0LL;
              v15 = (unsigned int)v14;
              v16 = a1[v14 + 374];
              v17 = *(_DWORD *)(v16 + 51060);
              if ( !v17 )
              {
                v18 = WdLogNewEntry5_WdWarning(v16, v14);
                *(_QWORD *)(v18 + 24) = v15;
                WdLogEvent5_WdWarning(v18);
                v17 = 16;
              }
              VidSchiStartNodeYield(v8, v13.QuadPart, PerformanceFrequency.QuadPart, v17);
            }
            VidSchiProfilePerformanceTick(20LL, (__int64)a1, v8, v12, (__int64)v4, 0LL, 0LL, v10);
          }
        }
        else
        {
          v4 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v8, PriorityLevelToSchedule, 0);
          if ( (a1[269] & 4) != 0 && *(_BYTE *)(v8 + 1944) && !*(_QWORD *)(v8 + 1920) )
          {
            v20 = KeQueryPerformanceCounter(&v30);
            v21 = *(unsigned int *)(*((_QWORD *)v4 + 13) + 464LL);
            if ( (unsigned int)v21 > *((_DWORD *)a1 + 10) )
              v21 = 0LL;
            v22 = (unsigned int)v21;
            v23 = a1[v21 + 374];
            v24 = *(_DWORD *)(v23 + 51060);
            if ( !v24 )
            {
              v25 = WdLogNewEntry5_WdWarning(v23, v21);
              *(_QWORD *)(v25 + 24) = v22;
              WdLogEvent5_WdWarning(v25);
              v24 = 16;
            }
            VidSchiStartNodeYield(v8, v20.QuadPart, v30.QuadPart, v24);
          }
          VidSchiProfilePerformanceTick(20LL, (__int64)a1, v8, v19, (__int64)v4, 0LL, 0LL, 0LL);
        }
      }
    }
  }
  VidSchiProfilePerformanceTick(2LL, (__int64)a1, 0LL, v5, (__int64)v4, 0LL, 0LL, 0LL);
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
