/*
 * XREFs of ?IsVisible@CFrameApplicationPresentation@@UEBA_NXZ @ 0x1800148A0
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18005E0C8 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CFrameApplicationPresentation::IsVisible(CFrameApplicationPresentation *this)
{
  return *((_BYTE *)this + 52);
}
