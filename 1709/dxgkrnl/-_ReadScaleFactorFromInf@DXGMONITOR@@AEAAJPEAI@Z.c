/*
 * XREFs of ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C010A048
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C694 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

__int64 __fastcall DXGMONITOR::_ReadScaleFactorFromInf(DXGMONITOR *this, unsigned int *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  void *DeviceRegKey; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v19; // [rsp+54h] [rbp-1Ch]
  int v20; // [rsp+58h] [rbp-18h]
  unsigned int v21; // [rsp+5Ch] [rbp-14h]

  *a2 = 0;
  DeviceRegKey = 0LL;
  if ( (*((_DWORD *)this + 6) & 0x10) == 0 )
    return 3221225635LL;
  v4 = IoOpenDeviceRegistryKey(*((PDEVICE_OBJECT *)this + 5), 2u, 0x20019u, &DeviceRegKey);
  v7 = v4;
  if ( v4 < 0 )
  {
    v12 = WdLogNewEntry5_WdTrace(v6, v5);
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = v7;
LABEL_13:
    if ( DeviceRegKey )
      ZwClose(DeviceRegKey);
    return (unsigned int)v7;
  }
  RtlInitUnicodeString(&DestinationString, L"PreferredScaleFactor");
  v8 = ZwQueryValueKey(
         DeviceRegKey,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x13u,
         &ResultLength);
  v7 = v8;
  if ( v8 == -1073741772 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = this;
    return (unsigned int)v7;
  }
  if ( v8 >= 0 )
  {
    if ( v19 == 4 || v20 == 4 )
    {
      *a2 = v21;
    }
    else
    {
      LODWORD(v7) = -1073741788;
      v14 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v14 + 24) = this;
      *(_QWORD *)(v14 + 32) = v19;
      WdLogEvent5_WdError(v14);
    }
    goto LABEL_13;
  }
  v13 = WdLogNewEntry5_WdError(v10);
  *(_QWORD *)(v13 + 24) = this;
  *(_QWORD *)(v13 + 32) = v7;
  WdLogEvent5_WdError(v13);
  return (unsigned int)v7;
}
