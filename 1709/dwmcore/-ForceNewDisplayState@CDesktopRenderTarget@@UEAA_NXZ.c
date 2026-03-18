/*
 * XREFs of ?ForceNewDisplayState@CDesktopRenderTarget@@UEAA_NXZ @ 0x180133B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDesktopRenderTarget::ForceNewDisplayState(CDesktopRenderTarget *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 264);
  if ( v1 )
    *((_BYTE *)this + 264) = 0;
  return v1 != 0;
}
