/*
 * XREFs of ?AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z @ 0x18008A770
 * Callers:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18002B020 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::AddInvalidRegion(CD2DBitmapCache *this, const struct CRegion *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 i; // rdi
  __int64 v8; // rcx
  signed int v9; // eax
  int v10; // ebp
  signed int v11; // eax

  v3 = 0;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 32LL))(v4 + 16);
    v3 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x34u);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) + 264LL;
    v9 = (*(__int64 (__fastcall **)(__int64, const struct CRegion *))(*(_QWORD *)v8 + 32LL))(v8, a2);
    v10 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x3Bu);
    if ( !v3 || v3 >= 0 && v10 < 0 )
      v3 = v10;
  }
  return (unsigned int)v3;
}
