/*
 * XREFs of ?AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z @ 0x1800779A0
 * Callers:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180049510 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z @ 0x18001BB00 (-AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::AddInvalidRegion(CD2DBitmapCache *this, const struct CRegion *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 i; // rsi
  CSecondaryBitmap *v8; // rcx
  __int64 (__fastcall *v9)(CSecondaryBitmap *, const struct CRegion *); // rax
  int v10; // eax
  int v11; // edi
  int v12; // eax

  v3 = 0;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 32LL))(v4 + 16);
    v3 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x34u);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
  {
    v8 = (CSecondaryBitmap *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) + 264LL);
    v9 = *(__int64 (__fastcall **)(CSecondaryBitmap *, const struct CRegion *))(*(_QWORD *)v8 + 32LL);
    if ( v9 == CSecondaryBitmap::AddInvalidRegion )
      v10 = CSecondaryBitmap::AddInvalidRegion(v8, a2);
    else
      v10 = v9(v8, a2);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x3Bu);
    if ( !v3 || v3 >= 0 && v11 < 0 )
      v3 = v11;
  }
  return (unsigned int)v3;
}
