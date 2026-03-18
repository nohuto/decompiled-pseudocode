/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00D6658
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00E71E0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000A74C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

char *__fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  char *v4; // rdi
  char *result; // rax
  __int64 v6; // rax
  bool v7; // cf
  SIZE_T v8; // rax
  char *v9; // rax

  v2 = a2;
  if ( a2 <= 0x10 )
  {
    v4 = (char *)(a1 + 8);
LABEL_3:
    *(_QWORD *)a1 = v4;
    result = v4;
    *(_DWORD *)(a1 + 136) = v2;
    return result;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 8 )
  {
    v6 = 8LL * a2;
    if ( !is_mul_ok(a2, 8uLL) )
      v6 = -1LL;
    v7 = __CFADD__(v6, 8LL);
    v8 = v6 + 8;
    if ( v7 )
      v8 = -1LL;
    v9 = (char *)operator new[](v8, 0x4B677844u, PagedPool);
    v4 = 0LL;
    if ( v9 )
    {
      v4 = v9 + 8;
      *(_QWORD *)v9 = v2;
      `vector constructor iterator'(
        v9 + 8,
        8LL,
        v2,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    }
    goto LABEL_3;
  }
  return 0LL;
}
