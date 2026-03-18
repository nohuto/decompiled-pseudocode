/*
 * XREFs of VidSchiSelectContext @ 0x1C0029BF0
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x1C00B622C (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiUpdatePriorityTables @ 0x1C0009A40 (VidSchiUpdatePriorityTables.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A200 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x1C000B2C0 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001343C (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1C00134EC (VidSchiStartNodeYield.c)
 *     VidSchiUpdateNodeRunningTime @ 0x1C0014034 (VidSchiUpdateNodeRunningTime.c)
 *     ?VidSchiFindPriorityLevelToSchedule@@YAKPEAU_VIDSCH_NODE@@PEA_N@Z @ 0x1C0024C74 (-VidSchiFindPriorityLevelToSchedule@@YAKPEAU_VIDSCH_NODE@@PEA_N@Z.c)
 *     ?VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002593C (-VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
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
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r9
  LARGE_INTEGER v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rbp
  int v22; // r9d
  __int64 v23; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  bool v26; // [rsp+A8h] [rbp+10h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+18h] BYREF
  union _LARGE_INTEGER v28; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock(a1 + 236, &LockHandle);
  if ( (unsigned int)VidSchiUpdatePriorityTables((__int64)a1, 0LL, 1, 0LL) )
  {
    v6 = a1[28];
    if ( v6 && (*(_DWORD *)(v6 + 176) & 1) != 0 )
    {
      v4 = (struct _VIDSCH_CONTEXT *)a1[28];
    }
    else
    {
      v7 = VidSchiSelectReadyNode((struct _VIDSCH_GLOBAL *)a1);
      v8 = (__int64)v7;
      if ( v7 )
      {
        if ( *((_DWORD *)v7 + 427) )
          VidSchiUpdateNodeRunningTime((__int64)v7, 0LL);
        v26 = 0;
        PriorityLevelToSchedule = VidSchiFindPriorityLevelToSchedule((struct _VIDSCH_NODE *)v8, &v26);
        v10 = v26;
        if ( v26 )
        {
          v4 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v8, PriorityLevelToSchedule, 1);
          if ( v4 )
          {
            VidSchiUpdateNodeYieldStatus((struct _VIDSCH_NODE *)v8);
          }
          else
          {
            MostSignificantBit = RtlFindMostSignificantBit(*(unsigned int *)(v8 + 1704));
            v4 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v8, MostSignificantBit, 0);
            if ( !*(_QWORD *)(v8 + 1936) )
            {
              v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
              v14 = *(unsigned int *)(*((_QWORD *)v4 + 13) + 464LL);
              if ( (unsigned int)v14 > *((_DWORD *)a1 + 10) )
                v14 = 0LL;
              v15 = (unsigned int)v14;
              v16 = *(_DWORD *)(a1[v14 + 376] + 60948);
              if ( !v16 )
              {
                v17 = WdLogNewEntry5_WdWarning();
                *(_QWORD *)(v17 + 24) = v15;
                WdLogEvent5_WdWarning(v17);
                v16 = 16;
              }
              VidSchiStartNodeYield(v8, v13.QuadPart, PerformanceFrequency.QuadPart, v16);
            }
            VidSchiProfilePerformanceTick(20LL, (__int64)a1, v8, v12, (__int64)v4, 0LL, 0LL, v10);
          }
        }
        else
        {
          v4 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v8, PriorityLevelToSchedule, 0);
          if ( (a1[271] & 4) != 0 && *(_BYTE *)(v8 + 1960) && !*(_QWORD *)(v8 + 1936) )
          {
            v19 = KeQueryPerformanceCounter(&v28);
            v20 = *(unsigned int *)(*((_QWORD *)v4 + 13) + 464LL);
            if ( (unsigned int)v20 > *((_DWORD *)a1 + 10) )
              v20 = 0LL;
            v21 = (unsigned int)v20;
            v22 = *(_DWORD *)(a1[v20 + 376] + 60948);
            if ( !v22 )
            {
              v23 = WdLogNewEntry5_WdWarning();
              *(_QWORD *)(v23 + 24) = v21;
              WdLogEvent5_WdWarning(v23);
              v22 = 16;
            }
            VidSchiStartNodeYield(v8, v19.QuadPart, v28.QuadPart, v22);
          }
          VidSchiProfilePerformanceTick(20LL, (__int64)a1, v8, v18, (__int64)v4, 0LL, 0LL, 0LL);
        }
      }
    }
  }
  VidSchiProfilePerformanceTick(2LL, (__int64)a1, 0LL, v5, (__int64)v4, 0LL, 0LL, 0LL);
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
