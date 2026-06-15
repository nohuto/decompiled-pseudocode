/*
 * XREFs of ??_ECKsNotificationsMonitor@@MEAAPEAXI@Z @ 0x1800F15D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ??1CKsNotificationsMonitor@@MEAA@XZ @ 0x1800F1588 (--1CKsNotificationsMonitor@@MEAA@XZ.c)
 */

CKsNotificationsMonitor *__fastcall CKsNotificationsMonitor::`vector deleting destructor'(
        CKsNotificationsMonitor *this,
        char a2)
{
  CKsNotificationsMonitor::~CKsNotificationsMonitor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
