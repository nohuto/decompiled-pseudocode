/*
 * XREFs of ?MonitorInterfaceCallbackInternal@CMonitorPDO@@AEAAJPEBU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z @ 0x1C00EDB40
 * Callers:
 *     ?MonitorInterfaceCallback@CMonitorPDO@@CAJPEAX0@Z @ 0x1C00EDB20 (-MonitorInterfaceCallback@CMonitorPDO@@CAJPEAX0@Z.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0074C60 (-Lock@CMutex@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMonitorPDO::MonitorInterfaceCallbackInternal(
        CMonitorPDO *this,
        const struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION *a2)
{
  __int64 v4; // r8
  void **v5; // rbx
  bool v6; // si

  v4 = *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1 - *(_QWORD *)&a2->Event.Data1;
  if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1 == *(_QWORD *)&a2->Event.Data1 )
    v4 = *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4 - *(_QWORD *)a2->Event.Data4;
  if ( !v4 )
  {
    v5 = (void **)*((_QWORD *)this + 1);
    v6 = 0;
    CMutex::Lock(v5);
    if ( *((_QWORD *)this + 4) )
      v6 = RtlCompareUnicodeString((PCUNICODE_STRING)((char *)this + 24), a2->SymbolicLinkName, 0) == 0;
    if ( *v5 )
      KeReleaseMutex((PRKMUTEX)*v5, 0);
    if ( v6 )
      (*(void (__fastcall **)(CMonitorPDO *))(*(_QWORD *)this + 8LL))(this);
  }
  return 0LL;
}
