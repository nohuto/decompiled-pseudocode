/*
 * XREFs of ?IsDestroyed@COPMProtectedOutput@@UEAAEXZ @ 0x1C00C5F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0062E70 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?IsDestroyed@CMonitorPDO@@UEAAEXZ @ 0x1C00C0200 (-IsDestroyed@CMonitorPDO@@UEAAEXZ.c)
 */

char __fastcall COPMProtectedOutput::IsDestroyed(COPMProtectedOutput *this)
{
  void **v1; // rbx
  char IsDestroyed; // di

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
