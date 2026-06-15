/*
 * XREFs of ??_GCVolumeLimitTrackerNull@@UEAAPEAXI@Z @ 0x18002C2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVolumeLimitTrackerNull@@UEAA@XZ @ 0x18002C2D4 (--1CVolumeLimitTrackerNull@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVolumeLimitTrackerNull *__fastcall CVolumeLimitTrackerNull::`scalar deleting destructor'(
        CVolumeLimitTrackerNull *this,
        char a2)
{
  CVolumeLimitTrackerNull::~CVolumeLimitTrackerNull(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x220);
  return this;
}
