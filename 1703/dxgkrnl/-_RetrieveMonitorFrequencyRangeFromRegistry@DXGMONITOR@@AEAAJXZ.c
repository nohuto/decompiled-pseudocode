/*
 * XREFs of ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0107EE0
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01089B4 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0109488 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0108048 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C010A064 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C010A0EC (-DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry(
        struct _DEVICE_OBJECT **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _DEVICE_OBJECT *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  ULONG v13; // esi
  char i; // r14
  int SubkeyInfoFromRegistry; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  PVOID P; // [rsp+20h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-38h] BYREF
  void *DeviceRegKey; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v24; // [rsp+38h] [rbp-28h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h] BYREF
  int v26; // [rsp+50h] [rbp-10h]

  if ( ((_BYTE)this[3] & 1) == 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !this[5] )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v19);
  }
  v5 = this[5];
  v26 = *(_DWORD *)L"S";
  v24.Buffer = (wchar_t *)&v25;
  DeviceRegKey = 0LL;
  Handle = 0LL;
  v25 = *(_QWORD *)L"MODES";
  *(_DWORD *)&v24.Length = 786442;
  v6 = IoOpenDeviceRegistryKey(v5, 2u, 0xF003Fu, &DeviceRegKey);
  v11 = v6;
  if ( v6 < 0 || (v12 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, DeviceRegKey, &v24), v11 = v12, v12 < 0) )
  {
    v20 = WdLogNewEntry5_WdDmmEvent(v8, v7, v9, v10);
    *(_QWORD *)(v20 + 24) = v11;
    WdLogEvent5_WdDmmEvent(v20);
  }
  else
  {
    v13 = 0;
    for ( i = 0; ; i = 1 )
    {
      P = 0LL;
      SubkeyInfoFromRegistry = DxgkRetrieveSubkeyInfoFromRegistry(Handle, v13++, (struct _KEY_BASIC_INFORMATION **)&P);
      LODWORD(v11) = SubkeyInfoFromRegistry;
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      LODWORD(v11) = DXGMONITOR::_ProcessMonitorResolutionKey(
                       (DXGMONITOR *)this,
                       Handle,
                       (struct _KEY_BASIC_INFORMATION *)P);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( (int)v11 < 0 )
        break;
    }
    if ( i )
      LODWORD(v11) = 0;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v11;
}
