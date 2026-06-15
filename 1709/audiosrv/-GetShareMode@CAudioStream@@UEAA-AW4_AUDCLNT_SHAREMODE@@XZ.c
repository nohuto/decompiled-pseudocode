/*
 * XREFs of ?GetShareMode@CAudioStream@@UEAA?AW4_AUDCLNT_SHAREMODE@@XZ @ 0x18007CA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAudioStream::GetShareMode(CAudioStream *this)
{
  return *((_BYTE *)this + 32) != 0;
}
