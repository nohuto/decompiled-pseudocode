/*
 * XREFs of ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C010AA88
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010B884 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C694 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C010AC28 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C010D2D8 (-DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry(struct _DEVICE_OBJECT **this)
{
  struct _DEVICE_OBJECT *v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  NTSTATUS v6; // eax
  ULONG v7; // esi
  char i; // r14
  int SubkeyInfoFromRegistry; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  PVOID P; // [rsp+28h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+30h] [rbp-21h] BYREF
  void *DeviceRegKey; // [rsp+38h] [rbp-19h] BYREF
  int v18; // [rsp+40h] [rbp-11h] BYREF
  __int64 *v19; // [rsp+48h] [rbp-9h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-1h] BYREF
  __int64 v21; // [rsp+80h] [rbp+2Fh] BYREF
  int v22; // [rsp+88h] [rbp+37h]

  if ( ((_BYTE)this[3] & 1) == 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !this[5] )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_DWORD *)this + 104) != 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v13);
  }
  v2 = this[5];
  v22 = *(_DWORD *)L"S";
  v19 = &v21;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  v21 = *(_QWORD *)L"MODES";
  v18 = 786442;
  v3 = IoOpenDeviceRegistryKey(v2, 2u, 0xF003Fu, &DeviceRegKey);
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_22;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  ObjectAttributes.RootDirectory = DeviceRegKey;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v5 = v6;
  if ( v6 < 0 )
  {
LABEL_22:
    v14 = WdLogNewEntry5_WdDmmEvent(v4);
    *(_QWORD *)(v14 + 24) = v5;
    WdLogEvent5_WdDmmEvent(v14);
  }
  else
  {
    v7 = 0;
    for ( i = 0; ; i = 1 )
    {
      P = 0LL;
      SubkeyInfoFromRegistry = DxgkRetrieveSubkeyInfoFromRegistry(KeyHandle, v7++, (struct _KEY_BASIC_INFORMATION **)&P);
      LODWORD(v5) = SubkeyInfoFromRegistry;
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      LODWORD(v5) = DXGMONITOR::_ProcessMonitorResolutionKey(
                      (DXGMONITOR *)this,
                      KeyHandle,
                      (struct _KEY_BASIC_INFORMATION *)P);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( (int)v5 < 0 )
        break;
    }
    if ( i )
      LODWORD(v5) = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v5;
}
