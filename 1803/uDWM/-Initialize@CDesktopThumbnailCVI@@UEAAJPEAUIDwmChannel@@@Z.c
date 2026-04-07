/*
 * XREFs of ?Initialize@CDesktopThumbnailCVI@@UEAAJPEAUIDwmChannel@@@Z @ 0x180039E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopThumbnailCVI::Initialize(CDesktopThumbnailCVI *this, struct IDwmChannel *a2)
{
  *((_QWORD *)this + 2) = a2;
  return 0LL;
}
