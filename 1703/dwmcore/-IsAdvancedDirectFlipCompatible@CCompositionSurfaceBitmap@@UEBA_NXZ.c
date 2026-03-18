/*
 * XREFs of ?IsAdvancedDirectFlipCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801644A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsAdvancedDirectFlipCompatible(CCompositionSurfaceBitmap *this)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 52);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 104) + 104LL))(v3 + 104) )
    return *(_DWORD *)(*((_QWORD *)this + 51) + 104LL) > 2u;
  return v2;
}
