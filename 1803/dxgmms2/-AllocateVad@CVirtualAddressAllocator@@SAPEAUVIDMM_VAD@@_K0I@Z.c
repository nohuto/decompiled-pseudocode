/*
 * XREFs of ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C00598B8
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C0059EA0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C005A59C (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004F48 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

struct VIDMM_VAD *__fastcall CVirtualAddressAllocator::AllocateVad(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD *v6; // rax
  _QWORD *v7; // r9
  int v8; // ecx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v4 = a3;
  v6 = operator new((unsigned int)(24 * (a3 + 4)), 0x39346956u, a3, PagedPool);
  v7 = v6;
  if ( v6 )
  {
    v6[3] = a1;
    v8 = (*((_DWORD *)v6 + 18) ^ (16 * v4)) & 0x7F0;
    v6[4] = a2;
    *((_DWORD *)v6 + 18) ^= v8;
    if ( v4 )
    {
      v9 = v6 + 12;
      v10 = v4;
      do
      {
        v9[1] = v9;
        *v9 = v9;
        v9[2] = 0LL;
        v9 += 3;
        --v10;
      }
      while ( v10 );
    }
    v7[11] = v7 + 10;
    v7[10] = v7 + 10;
  }
  return (struct VIDMM_VAD *)v7;
}
