/*
 * XREFs of ?DxgkEngAcquireStableVisRgnApiExt@@YAXPEAUHDC__@@@Z @ 0x1C00F2C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkEngAcquireStableVisRgnApiExt(HDC a1)
{
  if ( (int)IsDxgkEngAcquireStableVisRgnSupported() >= 0 )
    DxgkEngAcquireStableVisRgn(a1);
}
