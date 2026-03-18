/*
 * XREFs of VidSchiSetPriorityContext @ 0x1C0012174
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSubmitCommand @ 0x1C0075380 (VidSchSubmitCommand.c)
 *     VidSchSetPriorityContext @ 0x1C0078650 (VidSchSetPriorityContext.c)
 *     VidSchSubmitGlobalCommand @ 0x1C0079320 (VidSchSubmitGlobalCommand.c)
 *     VidSchSetAbsolutePriorityContext @ 0x1C00BDF20 (VidSchSetAbsolutePriorityContext.c)
 * Callees:
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000E0B4 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     McTemplateK0pqq @ 0x1C00244A0 (McTemplateK0pqq.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C0028508 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     ?VidSchiUpdateReadyBitsInNewPriority@@YAXPEAU_VIDSCH_NODE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0028808 (-VidSchiUpdateReadyBitsInNewPriority@@YAXPEAU_VIDSCH_NODE@@PEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiSetPriorityContext(struct _VIDSCH_CONTEXT *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // r15
  char v5; // bl
  __int64 v6; // r14
  int v7; // r8d
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 **v16; // rcx
  __int64 **v17; // rax
  LARGE_INTEGER v18; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 12);
  v4 = a2;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1904), &LockHandle);
  if ( *((_DWORD *)a1 + 100) != (_DWORD)v4 )
  {
    v8 = *((unsigned int *)a1 + 101);
    v9 = gulPriorityToPriorityClass[v4];
    *((_DWORD *)a1 + 101) = gulPublicPriorityToSchedulingPriority[v4];
    *((_DWORD *)a1 + 100) = v4;
    *((_QWORD *)a1 + 58) = *(_QWORD *)(v6 + 8 * v9 + 2480);
    *((_QWORD *)a1 + 59) = *(_QWORD *)(v6 + 8 * v9 + 2528);
    if ( (*((_DWORD *)a1 + 46) & 2) == 0 )
      *((_QWORD *)a1 + 55) = *((_QWORD *)a1 + 58);
    if ( (_DWORD)v8 != *((_DWORD *)a1 + 101) )
    {
      if ( (*((_DWORD *)a1 + 46) & 1) != 0 )
      {
        v14 = (__int64 *)((char *)a1 + 8);
        v15 = *((_QWORD *)a1 + 1);
        if ( *(struct _VIDSCH_CONTEXT **)(v15 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 8)
          || (v16 = (__int64 **)*((_QWORD *)a1 + 2), *v16 != v14) )
        {
          __fastfail(3u);
        }
        *v16 = (__int64 *)v15;
        *(_QWORD *)(v15 + 8) = v16;
        VidSchiUpdateReadyBitsInNewPriority((struct _VIDSCH_NODE *)v2, a1);
        v9 = 16LL * *((unsigned int *)a1 + 101) + v2 + 2008;
        v17 = *(__int64 ***)(v9 + 8);
        if ( *v17 != (__int64 *)v9 )
          __fastfail(3u);
        *((_QWORD *)a1 + 2) = v17;
        v10 = v8;
        *v14 = v9;
        *v17 = v14;
        *(_QWORD *)(v9 + 8) = v14;
        if ( *(_QWORD *)(v2 + 16 * v8 + 2008) == v2 + 16 * v8 + 2008 )
        {
          LODWORD(v9) = v8;
          *(_DWORD *)(v2 + 1736) &= ~(1 << v8);
        }
        v5 = 1;
      }
      else
      {
        v10 = v8;
      }
      if ( (*((_DWORD *)a1 + 46) & 2) != 0 )
      {
        ++*(_DWORD *)(v2 + 4LL * *((unsigned int *)a1 + 101) + 1744);
        v12 = *((unsigned int *)a1 + 101);
        if ( *(_DWORD *)(v2 + 4 * v12 + 1744) == 1 )
        {
          LODWORD(v9) = *((_DWORD *)a1 + 101);
          *(_DWORD *)(v2 + 1740) |= 1 << v12;
        }
        if ( (*(_DWORD *)(v2 + 4 * v10 + 1744))-- == 1 )
        {
          LODWORD(v9) = v8;
          *(_DWORD *)(v2 + 1740) &= ~(1 << v8);
        }
        if ( *(struct _VIDSCH_CONTEXT **)(v2 + 8LL * *(unsigned int *)(v2 + 1552) + 1560) == a1 )
        {
          v18 = KeQueryPerformanceCounter(&PerformanceFrequency);
          VidSchiStopExecutionTimeAtThisPriority(
            (struct _VIDSCH_NODE *)v2,
            v8,
            v18.QuadPart,
            PerformanceFrequency.QuadPart);
          VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v2, *((_DWORD *)a1 + 101), v18.QuadPart);
        }
        v5 = 1;
      }
      if ( bTracingEnabled )
      {
        v11 = *((_QWORD *)a1 + 7);
        if ( !v11 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
          LODWORD(v11) = (_DWORD)a1;
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pqq(v9, (unsigned int)&EventChangePriority, v7, v11, *((_DWORD *)a1 + 100), *((_DWORD *)a1 + 101));
      }
      if ( v5 )
      {
        *(_QWORD *)(v6 + 1400) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v6 + 1368), 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
