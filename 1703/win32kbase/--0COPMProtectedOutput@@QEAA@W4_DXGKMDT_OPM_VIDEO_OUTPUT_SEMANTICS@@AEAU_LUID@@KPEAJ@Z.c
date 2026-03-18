/*
 * XREFs of ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C00ECE84
 * Callers:
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00ED240 (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C006D9A0 (-Lock@CMutex@@QEAAXXZ.c)
 *     ??0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C00E8320 (--0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 *     ?IsDestroyed@CMonitorPDO@@UEAAEXZ @ 0x1C00E8790 (-IsDestroyed@CMonitorPDO@@UEAAEXZ.c)
 *     CallMonitor @ 0x1C00E89E0 (CallMonitor.c)
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C00ED360 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 */

COPMProtectedOutput *__fastcall COPMProtectedOutput::COPMProtectedOutput(
        COPMProtectedOutput *this,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a2,
        struct _LUID *a3,
        unsigned int a4,
        int *a5)
{
  int *v5; // r14
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v7; // eax
  void **v8; // rbx
  int v9; // esi
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS InputBuffer; // [rsp+48h] [rbp+10h] BYREF

  InputBuffer = a2;
  v5 = a5;
  CMonitorPDO::CMonitorPDO(this, a3, a4, a5);
  *((_BYTE *)this + 80) = 0;
  *(_QWORD *)this = &COPMProtectedOutput::`vftable';
  v7 = InputBuffer;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 21) = v7;
  if ( *v5 >= 0 )
  {
    v8 = (void **)*((_QWORD *)this + 1);
    CMutex::Lock(v8);
    if ( CMonitorPDO::IsDestroyed(this) )
    {
      v9 = -1071774438;
      if ( *v8 )
        KeReleaseMutex((PRKMUTEX)*v8, 0);
LABEL_10:
      COPMProtectedOutput::Destroy(this);
      *v5 = v9;
      return this;
    }
    v9 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x23248Bu, &InputBuffer, 4u, (char *)this + 72, 8u);
    if ( v9 >= 0 )
      *((_BYTE *)this + 80) = 1;
    if ( *v8 )
      KeReleaseMutex((PRKMUTEX)*v8, 0);
    if ( v9 < 0 )
      goto LABEL_10;
  }
  return this;
}
