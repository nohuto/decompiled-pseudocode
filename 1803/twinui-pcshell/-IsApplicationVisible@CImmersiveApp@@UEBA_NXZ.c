/*
 * XREFs of ?IsApplicationVisible@CImmersiveApp@@UEBA_NXZ @ 0x180049890
 * Callers:
 *     ?IsVisible@CImmersiveApp@@UEAAJPEAH@Z @ 0x18004D240 (-IsVisible@CImmersiveApp@@UEAAJPEAH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::IsApplicationVisible(CImmersiveApp *this)
{
  return (*((_DWORD *)this + 106) & 4) != 0;
}
