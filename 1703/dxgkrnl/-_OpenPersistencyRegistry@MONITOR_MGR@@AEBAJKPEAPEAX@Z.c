/*
 * XREFs of ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C0115088
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0114FFC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01E2370 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01E2738 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C010A064 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C011CB50 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OpenPersistencyRegistry(MONITOR_MGR *this, __int64 a2, void **a3, __int64 a4)
{
  ACCESS_MASK v5; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r15
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  void *v18; // r8
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  void *DeviceRegKey; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING v37; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v38[2]; // [rsp+38h] [rbp-38h] BYREF
  int v39; // [rsp+58h] [rbp-18h]
  wchar_t v40; // [rsp+5Ch] [rbp-14h]

  v5 = a2;
  if ( (_DWORD)a2 != 131097 && (_DWORD)a2 != 131078 && (_DWORD)a2 != 983103 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !a3 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v27);
  }
  v7 = *((_QWORD *)this + 1);
  DeviceRegKey = 0LL;
  if ( !*(_QWORD *)(v7 + 16) )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v28);
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( !*(_QWORD *)(v8 + 192) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
    WdLogEvent5_WdAssertion(v29);
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL)
                                                                           + 192LL));
  if ( !DeviceAttachmentBaseRef )
  {
    v30 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v30);
  }
  v14 = IoOpenDeviceRegistryKey(DeviceAttachmentBaseRef, 1u, v5, &DeviceRegKey);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( (int)v14 < 0 )
  {
    v35 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v35 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(v35 + 32) = v14;
    WdLogEvent5_WdError(v35);
    return (unsigned int)v14;
  }
  v18 = DeviceRegKey;
  if ( !DeviceRegKey )
  {
    v31 = WdLogNewEntry5_WdAssertion(v16, v15, 0LL, v17);
    WdLogEvent5_WdAssertion(v31);
    v18 = DeviceRegKey;
  }
  v39 = *(_DWORD *)L"cy";
  *a3 = 0LL;
  v40 = aMonitorpersist[18];
  v37.Buffer = (wchar_t *)v38;
  v38[0] = *(_OWORD *)L"MonitorPersistency";
  *(_DWORD *)&v37.Length = 2490404;
  v38[1] = *(_OWORD *)L"ersistency";
  v19 = DxgkOpenRegistrySubkey(a3, v5, v18, &v37);
  v14 = v19;
  if ( v19 != -1073741772 )
  {
    if ( v19 >= 0 )
    {
      if ( !*a3 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
        WdLogEvent5_WdAssertion(v34);
      }
      goto LABEL_17;
    }
    goto LABEL_23;
  }
  if ( v5 == 131078 || v5 == 983103 )
  {
    v32 = DxgkCreateRegistrySubkey(a3, v5, DeviceRegKey, &v37);
    v14 = v32;
    if ( v32 >= 0 )
      goto LABEL_17;
LABEL_23:
    v33 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v33 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(v33 + 32) = v14;
    WdLogEvent5_WdError(v33);
    goto LABEL_17;
  }
  v24 = WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
  *(_QWORD *)(v24 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *(_QWORD *)(v24 + 32) = -1073741772LL;
LABEL_17:
  ZwClose(DeviceRegKey);
  return (unsigned int)v14;
}
