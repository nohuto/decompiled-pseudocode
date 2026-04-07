/*
 * XREFs of ?Initialize@CDesktopThumbnailCVI@@UEAAJPEAUIDwmChannel@@@Z @ 0x18003D2E0
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
