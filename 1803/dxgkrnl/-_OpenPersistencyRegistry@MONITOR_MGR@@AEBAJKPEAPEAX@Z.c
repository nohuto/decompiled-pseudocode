/*
 * XREFs of ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C022CD2C
 * Callers:
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C022A474 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022A678 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C022AE80 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C0231CFC (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C0231DA4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OpenPersistencyRegistry(MONITOR_MGR *this, ACCESS_MASK a2, void **a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r15
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  void *v16; // r8
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  void *DeviceRegKey; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING v30; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v31[2]; // [rsp+38h] [rbp-38h] BYREF
  int v32; // [rsp+58h] [rbp-18h]
  wchar_t v33; // [rsp+5Ch] [rbp-14h]

  if ( a2 != 131097 && a2 != 131078 && a2 != 983103 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)this + 1);
  DeviceRegKey = 0LL;
  if ( !*(_QWORD *)(v8 + 16) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
    v8 = *((_QWORD *)this + 1);
  }
  if ( !*(_QWORD *)(*(_QWORD *)(v8 + 16) + 192LL) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v10);
    v8 = *((_QWORD *)this + 1);
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(v8 + 16) + 192LL));
  if ( !DeviceAttachmentBaseRef )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = IoOpenDeviceRegistryKey(DeviceAttachmentBaseRef, 1u, a2, &DeviceRegKey);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( (int)v14 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v27 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(v27 + 32) = v14;
    WdLogEvent5_WdError(v27);
    return (unsigned int)v14;
  }
  v16 = DeviceRegKey;
  if ( !DeviceRegKey )
  {
    v17 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v17);
    v16 = DeviceRegKey;
  }
  v32 = *(_DWORD *)L"cy";
  *a3 = 0LL;
  v33 = aMonitorpersist[18];
  v30.Buffer = (wchar_t *)v31;
  v31[0] = *(_OWORD *)L"MonitorPersistency";
  *(_DWORD *)&v30.Length = 2490404;
  v31[1] = *(_OWORD *)L"ersistency";
  v18 = DxgkOpenRegistrySubkey(a3, a2, v16, &v30);
  v14 = v18;
  if ( v18 != -1073741772 )
  {
    if ( v18 >= 0 )
    {
      if ( !*a3 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v26);
      }
      goto LABEL_26;
    }
    goto LABEL_23;
  }
  if ( a2 == 131078 || a2 == 983103 )
  {
    v24 = DxgkCreateRegistrySubkey(a3, a2, DeviceRegKey, &v30);
    v14 = v24;
    if ( v24 >= 0 )
      goto LABEL_26;
LABEL_23:
    v25 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v25 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(v25 + 32) = v14;
    WdLogEvent5_WdError(v25);
    goto LABEL_26;
  }
  v23 = WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
  *(_QWORD *)(v23 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *(_QWORD *)(v23 + 32) = -1073741772LL;
LABEL_26:
  ZwClose(DeviceRegKey);
  return (unsigned int)v14;
}
