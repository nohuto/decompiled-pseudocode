/*
 * XREFs of VidSchiSetPriorityContext @ 0x1C0010E38
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSubmitCommand @ 0x1C006E3C0 (VidSchSubmitCommand.c)
 *     VidSchSubmitGlobalCommand @ 0x1C0071CA8 (VidSchSubmitGlobalCommand.c)
 *     VidSchSetPriorityContext @ 0x1C0072300 (VidSchSetPriorityContext.c)
 *     VidSchSetAbsolutePriorityContext @ 0x1C00B5210 (VidSchSetAbsolutePriorityContext.c)
 * Callees:
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C00010DC (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000DDEC (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     McTemplateK0pqq @ 0x1C0021B54 (McTemplateK0pqq.c)
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
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 QuadPart; // rbx
  __int64 *v14; // rax
  __int64 **v15; // rdx
  __int64 v16; // rdx
  __int64 **v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  v4 = a2;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1888), &LockHandle);
  if ( *(_DWORD *)(a1 + 392) != (_DWORD)v4 )
  {
    v8 = *(unsigned int *)(a1 + 396);
    v9 = (__int64 *)gulPriorityToPriorityClass[v4];
    *(_DWORD *)(a1 + 396) = gulPublicPriorityToSchedulingPriority[v4];
    *(_DWORD *)(a1 + 392) = v4;
    *(_QWORD *)(a1 + 456) = *(_QWORD *)(v6 + 8LL * (_QWORD)v9 + 2456);
    *(_QWORD *)(a1 + 464) = *(_QWORD *)(v6 + 8LL * (_QWORD)v9 + 2504);
    if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
      *(_QWORD *)(a1 + 432) = *(_QWORD *)(a1 + 456);
    if ( (_DWORD)v8 != *(_DWORD *)(a1 + 396) )
    {
      if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
      {
        v9 = (__int64 *)(a1 + 8);
        v14 = *(__int64 **)(a1 + 8);
        if ( v14[1] != a1 + 8 || (v15 = *(__int64 ***)(a1 + 16), *v15 != v9) )
          __fastfail(3u);
        *v15 = v14;
        v14[1] = (__int64)v15;
        v16 = 16LL * *(unsigned int *)(a1 + 396) + v2 + 1976;
        v17 = *(__int64 ***)(v16 + 8);
        if ( *v17 != (__int64 *)v16 )
          __fastfail(3u);
        *(_QWORD *)(a1 + 16) = v17;
        *v9 = v16;
        *v17 = v9;
        *(_QWORD *)(v16 + 8) = v9;
        LODWORD(v9) = *(_DWORD *)(a1 + 396);
        *(_DWORD *)(v2 + 1704) |= 1 << (char)v9;
        if ( *(_QWORD *)(v2 + 16 * v8 + 1976) == v2 + 16 * v8 + 1976 )
        {
          LODWORD(v9) = v8;
          *(_DWORD *)(v2 + 1704) &= ~(1 << v8);
        }
        v5 = 1;
      }
      if ( (*(_DWORD *)(a1 + 176) & 2) != 0 )
      {
        ++*(_DWORD *)(v2 + 4LL * *(unsigned int *)(a1 + 396) + 1712);
        v11 = *(unsigned int *)(a1 + 396);
        if ( *(_DWORD *)(v2 + 4 * v11 + 1712) == 1 )
        {
          LODWORD(v9) = *(_DWORD *)(a1 + 396);
          *(_DWORD *)(v2 + 1708) |= 1 << v11;
        }
        if ( (*(_DWORD *)(v2 + 4 * v8 + 1712))-- == 1 )
        {
          LODWORD(v9) = v8;
          *(_DWORD *)(v2 + 1708) &= ~(1 << v8);
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
        v10 = *(_QWORD *)(a1 + 56);
        if ( !v10 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
          LODWORD(v10) = a1;
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pqq(
            (_DWORD)v9,
            (unsigned int)&EventChangePriority,
            v7,
            v10,
            *(_DWORD *)(a1 + 392),
            *(_DWORD *)(a1 + 396));
      }
      if ( v5 )
      {
        *(_QWORD *)(v6 + 1384) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v6 + 1352), 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
