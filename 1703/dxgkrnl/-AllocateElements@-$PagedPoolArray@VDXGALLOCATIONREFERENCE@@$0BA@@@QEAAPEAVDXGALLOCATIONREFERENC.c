/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C009E7C8
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00CBD30 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002180 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v5; // rax
  bool v6; // cf
  unsigned __int64 v7; // rax
  char *v8; // rax
  char *v9; // rbp

  v2 = a2;
  if ( a2 <= 0x10 )
  {
    *a1 = (__int64)(a1 + 1);
LABEL_3:
    result = *a1;
    *((_DWORD *)a1 + 34) = v2;
    return result;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 8 )
  {
    v5 = 8LL * a2;
    if ( !is_mul_ok(a2, 8uLL) )
      v5 = -1LL;
    v6 = __CFADD__(v5, 8LL);
    v7 = v5 + 8;
    if ( v6 )
      v7 = -1LL;
    v8 = (char *)operator new[](v7, 0x4B677844u, PagedPool);
    v9 = 0LL;
    if ( v8 )
    {
      v9 = v8 + 8;
      *(_QWORD *)v8 = v2;
      `vector constructor iterator'(
        v8 + 8,
        8LL,
        v2,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    }
    *a1 = (__int64)v9;
    goto LABEL_3;
  }
  return 0LL;
}
