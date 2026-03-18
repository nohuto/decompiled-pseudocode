/*
 * XREFs of ?IsDestroyed@CMonitorPDO@@UEAAEXZ @ 0x1C00A1760
 * Callers:
 *     ?IsDestroyed@COPMProtectedOutput@@UEAAEXZ @ 0x1C00A12A0 (-IsDestroyed@COPMProtectedOutput@@UEAAEXZ.c)
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C00A15E4 (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0074C60 (-Lock@CMutex@@QEAAXXZ.c)
 */

char __fastcall CMonitorPDO::IsDestroyed(CMonitorPDO *this)
{
  void **v1; // rbx
  bool v3; // zf
  char v4; // di

  v1 = (void **)*((_QWORD *)this + 1);
  CMutex::Lock(v1);
  if ( !*((_WORD *)this + 12)
    || !*((_WORD *)this + 13)
    || !*((_QWORD *)this + 4)
    || (v3 = *((_QWORD *)this + 2) == 0LL, v4 = 0, v3) )
  {
    v4 = 1;
  }
  if ( *v1 )
    KeReleaseMutex((PRKMUTEX)*v1, 0);
  return v4;
}
