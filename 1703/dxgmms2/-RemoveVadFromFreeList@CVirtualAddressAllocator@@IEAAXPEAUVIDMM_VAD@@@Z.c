/*
 * XREFs of ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005210C
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C0051C60 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     Template_pqxx @ 0x1C0021118 (Template_pqxx.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVadFromFreeList(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  int v5; // [rsp+20h] [rbp-28h]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
  {
    v5 = *((_DWORD *)a2 + 18);
    Template_pqxx((__int64)this, &DestroyGpuVirtualAddressRange, a3, this, v5, *((_QWORD *)a2 + 3), *((_QWORD *)a2 + 4));
  }
  RtlAvlRemoveNode((char *)this + 40, a2);
  *((_DWORD *)a2 + 18) &= 0xFFFFFFF0;
}
