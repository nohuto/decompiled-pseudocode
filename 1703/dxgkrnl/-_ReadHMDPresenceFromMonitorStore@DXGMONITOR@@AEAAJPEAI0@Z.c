/*
 * XREFs of ?_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI0@Z @ 0x1C010781C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01092BC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0108310 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

int __fastcall DXGMONITOR::_ReadHMDPresenceFromMonitorStore(DXGMONITOR *this, unsigned int *a2, unsigned int *a3)
{
  int result; // eax
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned int v11; // eax
  NTSTATUS v12; // eax
  __int64 v13; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+60h] [rbp-20h] BYREF
  __int16 v19; // [rsp+70h] [rbp-10h]
  char v20; // [rsp+72h] [rbp-Eh]

  *a2 = 0;
  *a3 = 0;
  KeyHandle = 0LL;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 1u, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"HMDDevicePresent");
    v7 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x13u,
           &ResultLength);
    v10 = v7;
    if ( v7 != -1073741772 )
    {
      if ( v7 < 0 )
        goto LABEL_12;
      if ( *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
      {
LABEL_13:
        LODWORD(v10) = -1073741823;
        v13 = WdLogNewEntry5_WdError(v9, v8);
        *(_QWORD *)(v13 + 24) = this;
        *(_QWORD *)(v13 + 32) = DWORD1(KeyValueInformation);
        goto LABEL_14;
      }
      v11 = HIDWORD(KeyValueInformation);
      *a2 = HIDWORD(KeyValueInformation);
      if ( v11 != 1 )
      {
LABEL_10:
        *a3 = v11;
LABEL_15:
        ZwClose(KeyHandle);
        return v10;
      }
      KeyValueInformation = 0uLL;
      v19 = 0;
      v20 = 0;
      RtlInitUnicodeString(&ValueName, L"HMDAlwaysOn");
      v12 = ZwQueryValueKey(
              KeyHandle,
              &ValueName,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x13u,
              &ResultLength);
      v10 = v12;
      if ( v12 != -1073741772 )
      {
        if ( v12 >= 0 )
        {
          if ( *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
          {
            v11 = HIDWORD(KeyValueInformation);
            goto LABEL_10;
          }
          goto LABEL_13;
        }
LABEL_12:
        v13 = WdLogNewEntry5_WdError(v9, v8);
        *(_QWORD *)(v13 + 24) = this;
        *(_QWORD *)(v13 + 32) = v10;
LABEL_14:
        WdLogEvent5_WdError(v13);
        goto LABEL_15;
      }
    }
    LODWORD(v10) = 0;
    goto LABEL_15;
  }
  return result;
}
