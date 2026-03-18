/*
 * XREFs of ?GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180164300
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180037200 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetBitmapSource(
        CCompositionSurfaceBitmap *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  *a2 = 0LL;
  if ( a3
    && *(_QWORD *)a3 != __PAIR64__(g_luidZero.HighPart, 0)
    && CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)((char *)this - 64), 0) )
  {
    (*(void (__fastcall **)(__int64, struct IBitmapSource **, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 51) + 16LL) + 72LL))(
      *((_QWORD *)this + 51) + 16LL,
      a2,
      0LL);
  }
  return 0LL;
}
