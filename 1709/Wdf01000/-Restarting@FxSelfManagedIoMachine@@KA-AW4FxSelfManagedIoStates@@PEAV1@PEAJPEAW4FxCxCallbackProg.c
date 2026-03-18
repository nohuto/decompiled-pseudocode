/*
 * XREFs of ?Restarting@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C000E5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0034860 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::Restarting(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  FxPkgPnp *m_PkgPnp; // rax
  FxPnpDeviceSelfManagedIoRestart *p_m_DeviceSelfManagedIoRestart; // rcx
  FxDeviceBase *m_DeviceBase; // r9
  unsigned __int64 v8; // r9
  FxCxCallbackProgress v9; // al
  FxCxCallbackProgress v11; // [rsp+30h] [rbp+8h] BYREF

  m_PkgPnp = This->m_PkgPnp;
  p_m_DeviceSelfManagedIoRestart = &This->m_DeviceSelfManagedIoRestart;
  m_DeviceBase = m_PkgPnp->m_DeviceBase;
  LOWORD(m_PkgPnp) = m_DeviceBase->m_ObjectSize;
  v8 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !(_WORD)m_PkgPnp )
    v8 = 0LL;
  p_m_DeviceSelfManagedIoRestart->m_Device = (WDFDEVICE__ *)v8;
  *Status = FxPrePostCallback::InvokeStateful(p_m_DeviceSelfManagedIoRestart, &v11, FxCxCleanupAfterPreOrClientFailure);
  v9 = v11;
  if ( Progress )
    *Progress = v11;
  if ( *Status < 0 )
    return (unsigned int)((unsigned __int8)v9 < FxCxCallbackProgressClientSucceeded) + 9;
  else
    return 5LL;
}
