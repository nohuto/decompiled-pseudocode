/*
 * XREFs of ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C00ED360
 * Callers:
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C00ECE84 (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C00ECF80 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C006D9A0 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?Destroy@CMonitorPDO@@UEAAJXZ @ 0x1C00E8680 (-Destroy@CMonitorPDO@@UEAAJXZ.c)
 *     CallMonitor @ 0x1C00E89E0 (CallMonitor.c)
 */

__int64 __fastcall COPMProtectedOutput::Destroy(COPMProtectedOutput *this)
{
  void **v1; // rbx
  int v3; // esi
  int v4; // eax
  int v5; // eax

  v1 = (void **)*((_QWORD *)this + 1);
  v3 = 0;
  CMutex::Lock(v1);
  if ( *((_BYTE *)this + 80) )
  {
    v4 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x2324A3u, (char *)this + 72, 8u, 0LL, 0);
    *((_BYTE *)this + 80) = 0;
    if ( v4 < 0 )
      v3 = v4;
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( *v1 )
    KeReleaseMutex((PRKMUTEX)*v1, 0);
  v5 = CMonitorPDO::Destroy(this);
  if ( v5 < 0 && v3 >= 0 )
    return (unsigned int)v5;
  return (unsigned int)v3;
}
