/*
 * XREFs of ?Destroy@CMonitorPDO@@UEAAJXZ @ 0x1C00E8680
 * Callers:
 *     ??0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C00E8320 (--0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C00E8570 (--1CMonitorPDO@@UEAA@XZ.c)
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C00ED360 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C006D9A0 (-Lock@CMutex@@QEAAXXZ.c)
 */

__int64 __fastcall CMonitorPDO::Destroy(CMonitorPDO *this)
{
  void **v1; // rbx
  int v3; // edi
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // r14
  void *v7; // rbp
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax

  v1 = (void **)*((_QWORD *)this + 1);
  v3 = 0;
  CMutex::Lock(v1);
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *((_DWORD *)this + 6) = 0;
    *((_QWORD *)this + 4) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = (void *)_InterlockedExchange64((volatile __int64 *)this + 5, 0LL);
  v7 = (void *)_InterlockedExchange64((volatile __int64 *)this + 6, 0LL);
  if ( *v1 )
    KeReleaseMutex((PRKMUTEX)*v1, 0);
  if ( v6 )
  {
    v8 = IoUnregisterPlugPlayNotificationEx(v6);
    if ( v8 < 0 )
      v3 = v8;
  }
  if ( v7 )
  {
    v9 = IoUnregisterPlugPlayNotificationEx(v7);
    if ( v9 < 0 && v3 >= 0 )
      return (unsigned int)v9;
  }
  return (unsigned int)v3;
}
