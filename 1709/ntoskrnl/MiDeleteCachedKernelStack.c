/*
 * XREFs of MiDeleteCachedKernelStack @ 0x14011C5D8
 * Callers:
 *     MiEmptyKernelStackCache @ 0x14000F458 (MiEmptyKernelStackCache.c)
 *     MiAdjustCachedStacks @ 0x14008CEDC (MiAdjustCachedStacks.c)
 * Callees:
 *     MiDeleteKernelStack @ 0x1400328D0 (MiDeleteKernelStack.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteCachedKernelStack(__int64 a1)
{
  ULONG_PTR v1; // rcx
  ULONG_PTR v2; // r9

  v1 = a1 - 4080;
  v2 = *(_QWORD *)(v1 + 4064);
  if ( v2 != (v1 ^ qword_140389280) )
    KeBugCheckEx(0x1Au, 0x3472uLL, v1, v2, v1 ^ qword_140389280);
  return MiDeleteKernelStack(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0);
}
