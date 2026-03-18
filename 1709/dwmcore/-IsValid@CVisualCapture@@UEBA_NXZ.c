/*
 * XREFs of ?IsValid@CVisualCapture@@UEBA_NXZ @ 0x180078AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVisualCapture::IsValid(CVisualCapture *this)
{
  return *((_BYTE *)this + 321) == 0;
}
