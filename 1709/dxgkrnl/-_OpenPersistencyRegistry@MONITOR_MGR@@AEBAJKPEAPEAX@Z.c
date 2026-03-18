/*
 * XREFs of ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C010D4B4
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D428 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01FCB30 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01FCEF8 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C010D250 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C020020C (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OpenPersistencyRegistry(MONITOR_MGR *this, ACCESS_MASK a2, void **a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r15
  __int64 v10; // rbx
  __int64 v11; // rcx
  void *v12; // r8
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  void *DeviceRegKey; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING v29; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v30[2]; // [rsp+38h] [rbp-38h] BYREF
  int v31; // [rsp+58h] [rbp-18h]
  wchar_t v32; // [rsp+5Ch] [rbp-14h]

  if ( a2 != 131097 && a2 != 131078 && a2 != 983103 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !a3 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v19);
  }
  v6 = *((_QWORD *)this + 1);
  DeviceRegKey = 0LL;
  if ( !*(_QWORD *)(v6 + 16) )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v20);
  }
  v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( !*(_QWORD *)(v7 + 192) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v21);
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL)
                                                                           + 192LL));
  if ( !DeviceAttachmentBaseRef )
  {
    v22 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v22);
  }
  v10 = IoOpenDeviceRegistryKey(DeviceAttachmentBaseRef, 1u, a2, &DeviceRegKey);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( (int)v10 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v27 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(v27 + 32) = v10;
    WdLogEvent5_WdError(v27);
    return (unsigned int)v10;
  }
  v12 = DeviceRegKey;
  if ( !DeviceRegKey )
  {
    v23 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v23);
    v12 = DeviceRegKey;
  }
  v31 = *(_DWORD *)L"cy";
  *a3 = 0LL;
  v32 = aMonitorpersist[18];
  v29.Buffer = (wchar_t *)v30;
  v30[0] = *(_OWORD *)L"MonitorPersistency";
  *(_DWORD *)&v29.Length = 2490404;
  v30[1] = *(_OWORD *)L"ersistency";
  v13 = DxgkOpenRegistrySubkey(a3, a2, v12, &v29);
  v10 = v13;
  if ( v13 != -1073741772 )
  {
    if ( v13 >= 0 )
    {
      if ( !*a3 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v26);
      }
      goto LABEL_17;
    }
    goto LABEL_23;
  }
  if ( a2 == 131078 || a2 == 983103 )
  {
    v24 = DxgkCreateRegistrySubkey(a3, a2, DeviceRegKey, &v29);
    v10 = v24;
    if ( v24 >= 0 )
      goto LABEL_17;
LABEL_23:
    v25 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v25 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(v25 + 32) = v10;
    WdLogEvent5_WdError(v25);
    goto LABEL_17;
  }
  v16 = WdLogNewEntry5_WdTrace(v15, v14);
  *(_QWORD *)(v16 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *(_QWORD *)(v16 + 32) = -1073741772LL;
LABEL_17:
  ZwClose(DeviceRegKey);
  return (unsigned int)v10;
}
