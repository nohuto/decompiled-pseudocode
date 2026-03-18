/*
 * XREFs of ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C0093850
 * Callers:
 *     VidMmIsAllocationInPresentQueue @ 0x1C001ECF0 (VidMmIsAllocationInPresentQueue.c)
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C006D260 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::IsAllocationInPresentQueue(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int *a3)
{
  bool v3; // r9

  v3 = 1;
  if ( *((int *)a2 + 26) <= 0 )
    v3 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 16LL) + 8LL) > 0;
  if ( a3 )
    *a3 = *(_DWORD *)(**(_QWORD **)a2 + 164LL);
  return v3;
}
