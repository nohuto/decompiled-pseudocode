/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C01A3B60
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00CBD30 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

PVOID __fastcall PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::AllocateElements(PVOID *a1, unsigned int a2)
{
  PVOID result; // rax
  SIZE_T v5; // rax

  if ( a2 <= 0x10 )
  {
    *a1 = a1 + 1;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    v5 = 8LL * a2;
    if ( !is_mul_ok(a2, 8uLL) )
      v5 = -1LL;
    *a1 = operator new[](v5, 0x4B677844u, PagedPool);
  }
  result = *a1;
  *((_DWORD *)a1 + 34) = a2;
  return result;
}
