/*
 * XREFs of ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0233B30
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236E24 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236F48 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0231E30 (-DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0232768 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry(struct _DEVICE_OBJECT **this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  struct _DEVICE_OBJECT *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  NTSTATUS v10; // eax
  ULONG v11; // esi
  char i; // r14
  int v13; // eax
  void *KeyHandle; // [rsp+28h] [rbp-29h] BYREF
  struct _KEY_BASIC_INFORMATION *v16; // [rsp+30h] [rbp-21h] BYREF
  void *DeviceRegKey; // [rsp+38h] [rbp-19h] BYREF
  int v18; // [rsp+40h] [rbp-11h] BYREF
  __int64 *v19; // [rsp+48h] [rbp-9h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-1h] BYREF
  __int64 v21; // [rsp+80h] [rbp+2Fh] BYREF
  int v22; // [rsp+88h] [rbp+37h]

  if ( ((_BYTE)this[5] & 1) == 0 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v2);
  }
  if ( !this[7] )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = this[7];
  v22 = *(_DWORD *)L"S";
  v19 = &v21;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  v21 = *(_QWORD *)L"MODES";
  v18 = 786442;
  v6 = IoOpenDeviceRegistryKey(v5, 2u, 0xF003Fu, &DeviceRegKey);
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_8;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.RootDirectory = DeviceRegKey;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v8 = v10;
  if ( v10 < 0 )
  {
LABEL_8:
    v9 = WdLogNewEntry5_WdDmmEvent(v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdDmmEvent(v9);
  }
  else
  {
    v11 = 0;
    for ( i = 0; ; i = 1 )
    {
      v16 = 0LL;
      v13 = DxgkRetrieveSubkeyInfoFromRegistry(KeyHandle, v11++, &v16);
      LODWORD(v8) = v13;
      if ( v13 < 0 )
        break;
      LODWORD(v8) = DXGMONITOR::_ProcessMonitorResolutionKey((DXGMONITOR *)this, KeyHandle, v16);
      operator delete[](v16);
      if ( (int)v8 < 0 )
        break;
    }
    if ( i )
      LODWORD(v8) = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v8;
}
