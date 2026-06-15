/*
 * XREFs of ?Release@CMonitorManager@@UEAAKXZ @ 0x1800E14A0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCMonitorManager@@IEAAPEAXI@Z @ 0x1800DE1B8 (--_GCMonitorManager@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall CMonitorManager::Release(CMonitorManager *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    CMonitorManager::`scalar deleting destructor'(this);
  return v1;
}
