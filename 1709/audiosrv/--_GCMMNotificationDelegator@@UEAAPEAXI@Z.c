/*
 * XREFs of ??_GCMMNotificationDelegator@@UEAAPEAXI@Z @ 0x1800928F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMMNotificationDelegator@@UEAA@XZ @ 0x180092408 (--1CMMNotificationDelegator@@UEAA@XZ.c)
 */

CMMNotificationDelegator *__fastcall CMMNotificationDelegator::`scalar deleting destructor'(
        CMMNotificationDelegator *this,
        char a2)
{
  CMMNotificationDelegator::~CMMNotificationDelegator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
