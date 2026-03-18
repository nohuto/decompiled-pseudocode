/*
 * XREFs of ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C010A11C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C1DC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C010AFF0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

int __fastcall DXGMONITOR::_ReadScaleFactorFromMonitorStore(DXGMONITOR *this, unsigned int *a2)
{
  int result; // eax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+54h] [rbp-24h]
  int v15; // [rsp+58h] [rbp-20h]
  unsigned int v16; // [rsp+5Ch] [rbp-1Ch]

  *a2 = 0;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 1u, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredScaleFactor");
    v5 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    ZwClose(KeyHandle);
    if ( (_DWORD)v5 == -1073741772 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6) + 24) = this;
      return -1073741772;
    }
    else if ( (int)v5 >= 0 )
    {
      if ( v14 == 4 && v15 == 4 )
      {
        *a2 = v16;
        return 0;
      }
      else
      {
        v9 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v9 + 24) = this;
        *(_QWORD *)(v9 + 32) = v14;
        WdLogEvent5_WdError(v9);
        return -1073741823;
      }
    }
    else
    {
      v8 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v8 + 24) = this;
      *(_QWORD *)(v8 + 32) = v5;
      WdLogEvent5_WdError(v8);
      return v5;
    }
  }
  return result;
}
