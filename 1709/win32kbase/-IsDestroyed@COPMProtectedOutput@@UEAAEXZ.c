/*
 * XREFs of ?IsDestroyed@COPMProtectedOutput@@UEAAEXZ @ 0x1C00A12A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0074C60 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?IsDestroyed@CMonitorPDO@@UEAAEXZ @ 0x1C00A1760 (-IsDestroyed@CMonitorPDO@@UEAAEXZ.c)
 */

unsigned __int8 __fastcall COPMProtectedOutput::IsDestroyed(COPMProtectedOutput *this)
{
  void **v1; // rbx
  unsigned __int8 IsDestroyed; // di

  v1 = (void **)*((_QWORD *)this + 1);
  CMutex::Lock(v1);
  if ( *((_BYTE *)this + 80) )
    IsDestroyed = CMonitorPDO::IsDestroyed(this);
  else
    IsDestroyed = 1;
  if ( *v1 )
    KeReleaseMutex((PRKMUTEX)*v1, 0);
  return IsDestroyed;
}
