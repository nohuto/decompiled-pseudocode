/*
 * XREFs of ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDXGALLOCATION@@PEAPEAU_VIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1C00610B0
 * Callers:
 *     VidMmOpenAllocation @ 0x1C0011F10 (VidMmOpenAllocation.c)
 * Callees:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C005F450 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OpenAllocation(
        DXGADAPTER **this,
        struct VIDMM_PROCESS **a2,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a3,
        __int64 a4,
        void *a5,
        int a6,
        struct DXGALLOCATION *a7,
        struct _VIDMM_MULTI_ALLOC **a8,
        unsigned int *a9,
        unsigned __int8 *a10)
{
  struct _VIDMM_MULTI_ALLOC **v11; // rdi
  __int64 result; // rax
  unsigned __int8 *v13; // [rsp+38h] [rbp-10h]

  v11 = a8;
  v13 = a10;
  *a8 = 0LL;
  result = VIDMM_GLOBAL::OpenOneAllocation(this, a2, a3, (unsigned __int64)a5, a6, a7, (struct VIDMM_ALLOC **)&a8, v13);
  if ( (int)result >= 0 )
  {
    *a9 = *((_DWORD *)a3 + 19) & 0x3F;
    *v11 = (struct _VIDMM_MULTI_ALLOC *)a8;
    return (unsigned int)result;
  }
  return result;
}
