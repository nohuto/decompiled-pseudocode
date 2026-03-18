/*
 * XREFs of ?ForceNewDisplayState@CDesktopRenderTarget@@UEAA_NXZ @ 0x1801473A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDesktopRenderTarget::ForceNewDisplayState(CDesktopRenderTarget *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 265) )
  {
    result = 1;
    *((_BYTE *)this + 265) = 0;
  }
  return result;
}
