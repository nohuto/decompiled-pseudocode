/*
 * XREFs of ?CompareTo@CCommonRenderingEffect@@UEBA?AW4RenderingEffectComparisonResult@@W4Enum@BlendMode@@AEBVCRenderingEffect@@0@Z @ 0x1800770C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180037980 (-IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommonRenderingEffect::CompareTo(__int64 a1, int a2, CCompositionSurfaceBitmap **a3, int a4)
{
  __int64 v8; // rdx
  int v9; // ebp
  _BYTE *v10; // rdi
  CCompositionSurfaceBitmap **v11; // rbx
  unsigned int v12; // esi
  char *v13; // r12
  __int64 v14; // r14
  CCompositionSurfaceBitmap *v15; // rcx
  bool v16; // zf
  bool (__fastcall *v18)(CCompositionSurfaceBitmap *); // rax
  char IsWhitePixelInTopLeft; // al

  if ( (*((unsigned int (__fastcall **)(CCompositionSurfaceBitmap **))*a3 + 6))(a3) )
    return 0LL;
  LOBYTE(v8) = 0;
  v9 = 0;
  if ( (a2 == 22) == (a4 == 22) )
  {
    v10 = (_BYTE *)(a1 + 33);
    v11 = a3 + 2;
    v12 = 0;
    v13 = (char *)a3 - a1;
    v14 = a1 - (_QWORD)a3;
    while ( 1 )
    {
      v15 = *(CCompositionSurfaceBitmap **)((char *)v11 + v14);
      if ( !v15 )
        break;
      if ( *v11 )
      {
        if ( v15 != *v11 || *(v10 - 1) != v10[(_QWORD)v13 - 1] || *v10 != v10[(_QWORD)v13] )
          return 0LL;
        v16 = v10[1] == v10[(_QWORD)v13 + 1];
        goto LABEL_6;
      }
      v18 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v15 + 136LL);
      if ( v18 == CCompositionSurfaceBitmap::IsWhitePixelInTopLeft )
        IsWhitePixelInTopLeft = CCompositionSurfaceBitmap::IsWhitePixelInTopLeft(v15);
      else
        IsWhitePixelInTopLeft = ((__int64 (__fastcall *)(CCompositionSurfaceBitmap *, __int64))v18)(v15, v8);
      if ( !IsWhitePixelInTopLeft )
        return 0LL;
      LOBYTE(v8) = 1;
LABEL_7:
      ++v12;
      ++v11;
      v10 += 3;
      if ( v12 >= 2 )
      {
        LOBYTE(v9) = (_BYTE)v8 != 0;
        return (unsigned int)(v9 + 1);
      }
    }
    v16 = *v11 == 0LL;
LABEL_6:
    if ( !v16 )
      return 0LL;
    goto LABEL_7;
  }
  return 0LL;
}
