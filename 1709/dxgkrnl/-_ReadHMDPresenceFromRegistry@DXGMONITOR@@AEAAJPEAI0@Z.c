/*
 * XREFs of ?_ReadHMDPresenceFromRegistry@DXGMONITOR@@AEAAJPEAI0@Z @ 0x1C0109F68
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C694 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

__int64 __fastcall DXGMONITOR::_ReadHMDPresenceFromRegistry(DXGMONITOR *this, unsigned int *a2, unsigned int *a3)
{
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rax
  int v14; // eax
  NTSTATUS v15; // eax
  __int64 v16; // rax
  void *DeviceRegKey; // [rsp+30h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-30h] BYREF
  __int64 KeyValueInformation; // [rsp+60h] [rbp-20h] BYREF
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int16 v23; // [rsp+70h] [rbp-10h]
  char v24; // [rsp+72h] [rbp-Eh]

  *a2 = 0;
  *a3 = 0;
  DeviceRegKey = 0LL;
  if ( (*((_DWORD *)this + 6) & 0x10) == 0 )
    return 3221225635LL;
  v6 = IoOpenDeviceRegistryKey(*((PDEVICE_OBJECT *)this + 5), 2u, 0x20019u, &DeviceRegKey);
  v9 = v6;
  if ( v6 < 0 )
  {
    v13 = WdLogNewEntry5_WdTrace(v8, v7);
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = v9;
    goto LABEL_5;
  }
  RtlInitUnicodeString(&DestinationString, L"HMDDevicePresent");
  v10 = ZwQueryValueKey(
          DeviceRegKey,
          &DestinationString,
          KeyValuePartialInformation,
          &KeyValueInformation,
          0x13u,
          &ResultLength);
  v9 = v10;
  if ( v10 != -1073741772 )
  {
    if ( v10 >= 0 )
    {
      if ( HIDWORD(KeyValueInformation) != 4 && (_DWORD)v22 != 4 )
      {
LABEL_20:
        LODWORD(v9) = -1073741788;
        v16 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v16 + 24) = this;
        *(_QWORD *)(v16 + 32) = HIDWORD(KeyValueInformation);
        goto LABEL_21;
      }
      v14 = HIDWORD(v22);
      *a2 = HIDWORD(v22);
      if ( v14 != 1 )
        goto LABEL_5;
      KeyValueInformation = 0LL;
      v22 = 0LL;
      v23 = 0;
      v24 = 0;
      RtlInitUnicodeString(&ValueName, L"HMDAlwaysOn");
      v15 = ZwQueryValueKey(
              DeviceRegKey,
              &ValueName,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x13u,
              &ResultLength);
      v9 = v15;
      if ( v15 == -1073741772 )
        goto LABEL_4;
      if ( v15 >= 0 )
      {
        if ( HIDWORD(KeyValueInformation) == 4 || (_DWORD)v22 == 4 )
        {
          *a3 = HIDWORD(v22);
          goto LABEL_5;
        }
        goto LABEL_20;
      }
    }
    v16 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v16 + 24) = this;
    *(_QWORD *)(v16 + 32) = v9;
LABEL_21:
    WdLogEvent5_WdError(v16);
    goto LABEL_5;
  }
LABEL_4:
  LODWORD(v9) = 0;
LABEL_5:
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v9;
}
