/*
 * XREFs of VidSchiSetPriorityContext @ 0x1C000FE48
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSubmitCommand @ 0x1C006A5F0 (VidSchSubmitCommand.c)
 *     VidSchSetPriorityContext @ 0x1C006BC50 (VidSchSetPriorityContext.c)
 *     VidSchSubmitGlobalCommand @ 0x1C006C8E0 (VidSchSubmitGlobalCommand.c)
 *     VidSchSetAbsolutePriorityContext @ 0x1C00AC830 (VidSchSetAbsolutePriorityContext.c)
 * Callees:
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C00010A0 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000D7A8 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     Template_pqq @ 0x1C001FA90 (Template_pqq.c)
 */

void __fastcall VidSchiSetPriorityContext(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // r15
  char v5; // bl
  __int64 v6; // r14
  int v7; // r8d
  __int64 v8; // rbp
  __int64 *v9; // rcx
  __int64 *v10; // rdx
  __int64 **v11; // rax
  __int64 v12; // rdx
  __int64 **v13; // rax
  __int64 v14; // rax
  __int64 QuadPart; // rbx
  __int64 v17; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  v4 = a2;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1880), &LockHandle);
  if ( *(_DWORD *)(a1 + 392) != (_DWORD)v4 )
  {
    v8 = *(unsigned int *)(a1 + 396);
    v9 = (__int64 *)gulPriorityToPriorityClass[v4];
    *(_DWORD *)(a1 + 396) = gulPublicPriorityToSchedulingPriority[v4];
    *(_DWORD *)(a1 + 392) = v4;
    *(_QWORD *)(a1 + 480) = *(_QWORD *)(v6 + 8LL * (_QWORD)v9 + 2440);
    *(_QWORD *)(a1 + 488) = *(_QWORD *)(v6 + 8LL * (_QWORD)v9 + 2488);
    if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
      *(_QWORD *)(a1 + 456) = *(_QWORD *)(a1 + 480);
    if ( (_DWORD)v8 != *(_DWORD *)(a1 + 396) )
    {
      if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
      {
        v9 = (__int64 *)(a1 + 8);
        v10 = *(__int64 **)(a1 + 8);
        v11 = *(__int64 ***)(a1 + 16);
        if ( v10[1] != a1 + 8 || *v11 != v9 )
          __fastfail(3u);
        *v11 = v10;
        v10[1] = (__int64)v11;
        v12 = 16LL * *(unsigned int *)(a1 + 396) + v2 + 1960;
        v13 = *(__int64 ***)(v12 + 8);
        if ( *v13 != (__int64 *)v12 )
          __fastfail(3u);
        *(_QWORD *)(a1 + 16) = v13;
        *v9 = v12;
        *v13 = v9;
        *(_QWORD *)(v12 + 8) = v9;
        LODWORD(v9) = *(_DWORD *)(a1 + 396);
        *(_DWORD *)(v2 + 1688) |= 1 << (char)v9;
        if ( *(_QWORD *)(v2 + 16 * v8 + 1960) == v2 + 16 * v8 + 1960 )
        {
          LODWORD(v9) = v8;
          *(_DWORD *)(v2 + 1688) &= ~(1 << v8);
        }
        v5 = 1;
      }
      if ( (*(_DWORD *)(a1 + 176) & 2) != 0 )
      {
        ++*(_DWORD *)(v2 + 4LL * *(unsigned int *)(a1 + 396) + 1696);
        v14 = *(unsigned int *)(a1 + 396);
        if ( *(_DWORD *)(v2 + 4 * v14 + 1696) == 1 )
        {
          LODWORD(v9) = *(_DWORD *)(a1 + 396);
          *(_DWORD *)(v2 + 1692) |= 1 << v14;
        }
        if ( (*(_DWORD *)(v2 + 4 * v8 + 1696))-- == 1 )
        {
          LODWORD(v9) = v8;
          *(_DWORD *)(v2 + 1692) &= ~(1 << v8);
        }
        if ( *(_QWORD *)(v2 + 8LL * *(unsigned int *)(v2 + 1552) + 1560) == a1 )
        {
          QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
          VidSchiStopExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v2, v8, QuadPart, PerformanceFrequency.QuadPart);
          VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v2, *(_DWORD *)(a1 + 396), QuadPart);
        }
        v5 = 1;
      }
      if ( bTracingEnabled )
      {
        v17 = *(_QWORD *)(a1 + 56);
        if ( !v17 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
          LODWORD(v17) = a1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_pqq(
            (_DWORD)v9,
            (unsigned int)&EventChangePriority,
            v7,
            v17,
            *(_DWORD *)(a1 + 392),
            *(_DWORD *)(a1 + 396));
      }
      if ( v5 )
      {
        *(_QWORD *)(v6 + 1376) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v6 + 1344), 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
