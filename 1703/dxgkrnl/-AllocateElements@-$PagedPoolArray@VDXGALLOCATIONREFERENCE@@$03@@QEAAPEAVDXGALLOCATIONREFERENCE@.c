/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C019DC64
 * Callers:
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C019DBD4 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002180 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,4>::AllocateElements(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  bool v6; // cf
  SIZE_T v7; // rax
  char *v8; // rax
  char *v9; // rbp

  if ( a2 <= 4 )
  {
    *a1 = (__int64)(a1 + 1);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
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
      *(_QWORD *)v8 = a2;
      `vector constructor iterator'(
        v8 + 8,
        8LL,
        a2,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    }
    *a1 = (__int64)v9;
  }
  result = *a1;
  *((_DWORD *)a1 + 10) = a2;
  return result;
}
