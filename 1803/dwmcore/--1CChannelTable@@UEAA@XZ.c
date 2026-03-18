/*
 * XREFs of ??1CChannelTable@@UEAA@XZ @ 0x180143938
 * Callers:
 *     ??1CConnection@@EEAA@XZ @ 0x1801435D0 (--1CConnection@@EEAA@XZ.c)
 *     ??_GCChannelTable@@UEAAPEAXI@Z @ 0x180143970 (--_GCChannelTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CChannelTable::~CChannelTable(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE LockSemaphore; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CChannelTable::`vftable';
  DeleteCriticalSection(this + 1);
  LockSemaphore = this->LockSemaphore;
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&HANDLE_TABLE::`vftable';
  operator delete(LockSemaphore);
}
