/*
 * XREFs of ?DxgkEngGetDCApiExt@@YAPEAUHDC__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x1C00F0350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngGetDCApiExt(HWND a1, HDC *a2)
{
  int DCSupported; // eax
  __int64 v5; // r8

  DCSupported = IsDxgkEngGetDCSupported();
  v5 = 0LL;
  if ( DCSupported >= 0 )
    return DxgkEngGetDC(a1, a2, 0LL);
  return v5;
}
