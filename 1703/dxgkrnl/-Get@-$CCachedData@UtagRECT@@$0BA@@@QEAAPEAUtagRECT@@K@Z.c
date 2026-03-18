/*
 * XREFs of ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x1C0020D20
 * Callers:
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5F44 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3D.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void *__fastcall CCachedData<tagRECT,16>::Get(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  void *result; // rax
  unsigned __int64 v5; // rax

  v2 = a2;
  if ( a2 <= 0x10 )
    return (void *)a1;
  if ( a2 <= *(_DWORD *)(a1 + 264) )
    return *(void **)(a1 + 256);
  operator delete[](*(void **)(a1 + 256));
  v5 = 16 * v2;
  if ( !is_mul_ok(v2, 0x10uLL) )
    v5 = -1LL;
  result = operator new(v5, 0x4B677844u, PagedPool);
  *(_QWORD *)(a1 + 256) = result;
  *(_DWORD *)(a1 + 264) = result != 0LL ? v2 : 0;
  return result;
}
