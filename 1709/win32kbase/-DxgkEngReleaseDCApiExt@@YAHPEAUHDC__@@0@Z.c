/*
 * XREFs of ?DxgkEngReleaseDCApiExt@@YAHPEAUHDC__@@0@Z @ 0x1C00F3040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngReleaseDCApiExt(HDC a1, HDC a2)
{
  int v4; // eax
  unsigned int v5; // r8d

  v4 = IsDxgkEngReleaseDCSupported();
  v5 = 0;
  if ( v4 >= 0 )
    return (unsigned int)DxgkEngReleaseDC(a1, a2, 0LL);
  return v5;
}
