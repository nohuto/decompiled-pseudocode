/*
 * XREFs of ?_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI0@Z @ 0x1C0109F00
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C1DC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C010AFF0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

int __fastcall DXGMONITOR::_ReadHMDPresenceFromMonitorStore(DXGMONITOR *this, unsigned int *a2, unsigned int *a3)
{
  int result; // eax
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned int v10; // eax
  NTSTATUS v11; // eax
  __int64 v12; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+60h] [rbp-20h] BYREF
  __int16 v18; // [rsp+70h] [rbp-10h]
  char v19; // [rsp+72h] [rbp-Eh]

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
    v9 = v7;
    if ( v7 != -1073741772 )
    {
      if ( v7 < 0 )
        goto LABEL_12;
      if ( *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
      {
LABEL_13:
        LODWORD(v9) = -1073741823;
        v12 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v12 + 24) = this;
        *(_QWORD *)(v12 + 32) = DWORD1(KeyValueInformation);
        goto LABEL_14;
      }
      v10 = HIDWORD(KeyValueInformation);
      *a2 = HIDWORD(KeyValueInformation);
      if ( v10 != 1 )
      {
LABEL_10:
        *a3 = v10;
LABEL_15:
        ZwClose(KeyHandle);
        return v9;
      }
      KeyValueInformation = 0uLL;
      v18 = 0;
      v19 = 0;
      RtlInitUnicodeString(&ValueName, L"HMDAlwaysOn");
      v11 = ZwQueryValueKey(
              KeyHandle,
              &ValueName,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x13u,
              &ResultLength);
      v9 = v11;
      if ( v11 != -1073741772 )
      {
        if ( v11 >= 0 )
        {
          if ( *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
          {
            v10 = HIDWORD(KeyValueInformation);
            goto LABEL_10;
          }
          goto LABEL_13;
        }
LABEL_12:
        v12 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v12 + 24) = this;
        *(_QWORD *)(v12 + 32) = v9;
LABEL_14:
        WdLogEvent5_WdError(v12);
        goto LABEL_15;
      }
    }
    LODWORD(v9) = 0;
    goto LABEL_15;
  }
  return result;
}
