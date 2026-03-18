/*
 * XREFs of VidMmDestroyAllocation @ 0x1C0013000
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0064280 (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VidMmDestroyAllocation(VIDMM_GLOBAL **a1, VIDMM_GLOBAL *a2, struct _VIDMM_MULTI_GLOBAL_ALLOC *a3)
{
  struct VIDMM_DEVICE *v4; // rdx
  VIDMM_GLOBAL *v5; // rcx

  if ( a1 )
  {
    v4 = (struct VIDMM_DEVICE *)a1;
    v5 = *a1;
  }
  else
  {
    v4 = 0LL;
    v5 = a2;
  }
  VIDMM_GLOBAL::DestroyAllocation(v5, v4, a3);
}
