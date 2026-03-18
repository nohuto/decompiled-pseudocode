/*
 * XREFs of ?IsDirectFlipCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000ABC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDirectFlipCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18000B430 (-IsDirectFlipCompatible@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsDirectFlipCompatible(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // bl
  CDxHandleBitmapRealization *v4; // rcx
  __int64 (*v5)(void); // rax
  char IsDirectFlipCompatible; // al

  v1 = *((_QWORD *)this + 52);
  v2 = 0;
  if ( v1 )
  {
    v4 = (CDxHandleBitmapRealization *)(v1 + 104);
    v5 = *(__int64 (**)(void))(*(_QWORD *)(v1 + 104) + 96LL);
    if ( (char *)v5 == (char *)CDxHandleBitmapRealization::IsDirectFlipCompatible )
      IsDirectFlipCompatible = CDxHandleBitmapRealization::IsDirectFlipCompatible(v4);
    else
      IsDirectFlipCompatible = v5();
    if ( IsDirectFlipCompatible )
      return *(_DWORD *)(*((_QWORD *)this + 51) + 104LL) > 1u;
  }
  return v2;
}
