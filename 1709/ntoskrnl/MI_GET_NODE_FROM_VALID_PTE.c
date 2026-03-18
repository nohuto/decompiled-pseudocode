/*
 * XREFs of MI_GET_NODE_FROM_VALID_PTE @ 0x14022A120
 * Callers:
 *     MmDeleteKernelStack @ 0x140029590 (MmDeleteKernelStack.c)
 *     MmGrowKernelStackEx @ 0x140151490 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MI_GET_NODE_FROM_VALID_PTE(__int64 *a1)
{
  __int64 PteShadow; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  PteShadow = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v3 = PteShadow;
  return *(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v3) - 0x57FFFFFFFD8LL) >> 58;
}
