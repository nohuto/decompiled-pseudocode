/*
 * XREFs of ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0050998
 * Callers:
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0053510 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00537D0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C00734C4 (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00018AC (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVad(struct VIDMM_VAD *a1)
{
  unsigned int v1; // edi
  volatile signed __int32 **v3; // rsi
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rax

  v1 = 0;
  if ( (*((_DWORD *)a1 + 18) & 0x7F0) != 0 )
  {
    do
    {
      v3 = (volatile signed __int32 **)((char *)a1 + 24 * v1 + 96);
      while ( 1 )
      {
        v4 = *v3;
        if ( *v3 == (volatile signed __int32 *)v3 )
          break;
        if ( *((volatile signed __int32 ***)v4 + 1) != v3
          || (v5 = *(volatile signed __int32 **)v4, *(volatile signed __int32 **)(*(_QWORD *)v4 + 8LL) != v4) )
        {
          __fastfail(3u);
        }
        *v3 = v5;
        *((_QWORD *)v5 + 1) = v3;
        *(_QWORD *)v4 = 0LL;
        *((_QWORD *)v4 + 1) = 0LL;
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v4 - 2);
      }
      ++v1;
    }
    while ( v1 < ((*((_DWORD *)a1 + 18) >> 4) & 0x7Fu) );
  }
  operator delete(a1);
}
