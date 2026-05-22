/*
 * XREFs of ?IsLocked@MobileCursor@@UEAA_NXZ @ 0x180030910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MobileCursor::IsLocked(MobileCursor *this)
{
  return *((_BYTE *)this + 57);
}
