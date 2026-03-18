/*
 * XREFs of ?_ReadHMDPresenceFromRegistry@DXGMONITOR@@AEAAJPEAI0@Z @ 0x1C0107884
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0109488 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGMONITOR::_ReadHMDPresenceFromRegistry(DXGMONITOR *this, unsigned int *a2, unsigned int *a3)
{
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  int v17; // eax
  NTSTATUS v18; // eax
  __int64 v19; // rax
  void *DeviceRegKey; // [rsp+30h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-30h] BYREF
  __int64 KeyValueInformation; // [rsp+60h] [rbp-20h] BYREF
  __int64 v25; // [rsp+68h] [rbp-18h]
  __int16 v26; // [rsp+70h] [rbp-10h]
  char v27; // [rsp+72h] [rbp-Eh]

  *a2 = 0;
  *a3 = 0;
  DeviceRegKey = 0LL;
  if ( (*((_DWORD *)this + 6) & 0x10) == 0 )
    return 3221225635LL;
  v6 = IoOpenDeviceRegistryKey(*((PDEVICE_OBJECT *)this + 5), 2u, 0x20019u, &DeviceRegKey);
  v11 = v6;
  if ( v6 < 0 )
  {
    v16 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    *(_QWORD *)(v16 + 24) = this;
    *(_QWORD *)(v16 + 32) = v11;
    goto LABEL_5;
  }
  RtlInitUnicodeString(&DestinationString, L"HMDDevicePresent");
  v12 = ZwQueryValueKey(
          DeviceRegKey,
          &DestinationString,
          KeyValuePartialInformation,
          &KeyValueInformation,
          0x13u,
          &ResultLength);
  v11 = v12;
  if ( v12 != -1073741772 )
  {
    if ( v12 >= 0 )
    {
      if ( HIDWORD(KeyValueInformation) != 4 && (_DWORD)v25 != 4 )
      {
LABEL_20:
        LODWORD(v11) = -1073741788;
        v19 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v19 + 24) = this;
        *(_QWORD *)(v19 + 32) = HIDWORD(KeyValueInformation);
        goto LABEL_21;
      }
      v17 = HIDWORD(v25);
      *a2 = HIDWORD(v25);
      if ( v17 != 1 )
        goto LABEL_5;
      KeyValueInformation = 0LL;
      v25 = 0LL;
      v26 = 0;
      v27 = 0;
      RtlInitUnicodeString(&ValueName, L"HMDAlwaysOn");
      v18 = ZwQueryValueKey(
              DeviceRegKey,
              &ValueName,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x13u,
              &ResultLength);
      v11 = v18;
      if ( v18 == -1073741772 )
        goto LABEL_4;
      if ( v18 >= 0 )
      {
        if ( HIDWORD(KeyValueInformation) == 4 || (_DWORD)v25 == 4 )
        {
          *a3 = HIDWORD(v25);
          goto LABEL_5;
        }
        goto LABEL_20;
      }
    }
    v19 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = v11;
LABEL_21:
    WdLogEvent5_WdError(v19);
    goto LABEL_5;
  }
LABEL_4:
  LODWORD(v11) = 0;
LABEL_5:
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v11;
}
