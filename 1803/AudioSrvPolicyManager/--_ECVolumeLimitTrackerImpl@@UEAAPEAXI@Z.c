/*
 * XREFs of ??_ECVolumeLimitTrackerImpl@@UEAAPEAXI@Z @ 0x18002B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVolumeLimitTrackerImpl@@UEAA@XZ @ 0x18002B6E4 (--1CVolumeLimitTrackerImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVolumeLimitTrackerImpl *__fastcall CVolumeLimitTrackerImpl::`vector deleting destructor'(
        CVolumeLimitTrackerImpl *this,
        char a2)
{
  CVolumeLimitTrackerImpl::~CVolumeLimitTrackerImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2C8);
  return this;
}
