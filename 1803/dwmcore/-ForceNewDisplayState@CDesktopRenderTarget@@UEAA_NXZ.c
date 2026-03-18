/*
 * XREFs of ?ForceNewDisplayState@CDesktopRenderTarget@@UEAA_NXZ @ 0x180157A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDesktopRenderTarget::ForceNewDisplayState(CDesktopRenderTarget *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 160) )
  {
    result = 1;
    *((_BYTE *)this + 160) = 0;
  }
  return result;
}
