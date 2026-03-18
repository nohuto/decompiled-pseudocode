/*
 * XREFs of ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C006D260
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 *     Template_ppp @ 0x1C001FDD0 (Template_ppp.c)
 *     ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C0093850 (-IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C0097F4C (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z @ 0x1C009AE3C (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VidMmProcessAsyncOperation(void *a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // r8
  VIDMM_GLOBAL *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbp
  struct _VIDMM_MULTI_ALLOC *v10; // rdi
  VIDMM_GLOBAL *v11; // rcx
  unsigned int v12; // r8d
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_DWORD *)a1 + 8) - 1;
  if ( v2 )
  {
    v5 = (VIDMM_GLOBAL *)(unsigned int)(v2 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v9 = *((_QWORD *)a1 + 5);
        v10 = *(struct _VIDMM_MULTI_ALLOC **)(*((_QWORD *)a1 + 6) + 24LL);
        while ( 1 )
        {
          v19 = 0;
          if ( !VIDMM_GLOBAL::IsAllocationInPresentQueue(v5, v10, &v19) )
            break;
          if ( v19 > 1 )
            break;
          v13 = VIDMM_GLOBAL::WaitOnAllocationPresentQueue(v11, v10, v12);
          v16 = v13;
          if ( v13 >= 0 )
            break;
          v17 = WdLogNewEntry5_WdWarning(v15, v14);
          *(_QWORD *)(v17 + 24) = v16;
          WdLogEvent5_WdWarning(v17);
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        VidMmCompleteAsyncUnpin((struct VIDMM_GLOBAL *)v9, v10);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v9 + 41152, 0LL);
        *(_QWORD *)(v9 + 41160) = KeGetCurrentThread();
        if ( (*(_DWORD *)(v9 + 41192))-- == 1 )
          KeSetEvent((PRKEVENT)(v9 + 41168), 0, 0);
        *(_QWORD *)(v9 + 41160) = 0LL;
        ExReleasePushLockExclusiveEx(v9 + 41152, 0LL);
        KeLeaveCriticalRegion();
        DxgkUnreferenceDxgResource(*(struct DXGRESOURCE **)(*((_QWORD *)a1 + 6) + 40LL));
        DxgkUnreferenceDxgAllocation(*((struct DXGALLOCATION **)a1 + 6));
      }
    }
    else
    {
      v6 = *((_QWORD *)a1 + 5);
      if ( v6 )
      {
        MmUnmapViewOfSection(v6, *((_QWORD *)a1 + 7));
        ObfDereferenceObject(*((PVOID *)a1 + 5));
      }
      else
      {
        MmUnmapViewInSystemSpace(*((PVOID *)a1 + 7));
      }
      ObfDereferenceObject(*((PVOID *)a1 + 6));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_ppp(v7, &EndVidMmUnmapViewAsync, v8, *((_QWORD *)a1 + 5), *((_QWORD *)a1 + 6), *((_QWORD *)a1 + 7));
    }
  }
  else
  {
    ObfDereferenceObject(*((PVOID *)a1 + 5));
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_p(v3, &EndVidMmDereferenceObjectAsync, v4, *((_QWORD *)a1 + 5));
  }
  operator delete(a1);
  _InterlockedDecrement(&g_VidMmAsyncOpPendingCount);
}
