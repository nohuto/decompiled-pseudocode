/*
 * XREFs of ?DxgkEngWatchVisRgnChangeApiExt@@YAXPEAUHDC__@@H@Z @ 0x1C00F3130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkEngWatchVisRgnChangeApiExt(HDC a1, unsigned int a2)
{
  if ( (int)IsDxgkEngWatchVisRgnChangeSupported() >= 0 )
    DxgkEngWatchVisRgnChange(a1, a2);
}
