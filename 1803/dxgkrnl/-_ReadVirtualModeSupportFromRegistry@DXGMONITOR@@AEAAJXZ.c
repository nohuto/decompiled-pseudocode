/*
 * XREFs of ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0233360
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0232408 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReadVirtualModeSupportFromRegistry(UNICODE_STRING *this)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-28h] BYREF
  int v11; // [rsp+54h] [rbp-24h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]

  result = DXGMONITOR::_OpenMonitorDataStore(this, 1, &KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"VMSDisabled");
    v3 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    ZwClose(KeyHandle);
    if ( (int)v3 >= 0 )
    {
      if ( v11 == 4 && v12 == 4 )
      {
        LODWORD(this[2].Buffer) = (__int64)this[2].Buffer & 0xFFFFFF7F | (v13 != 0 ? 0x80 : 0);
        return 0LL;
      }
      else
      {
        v6 = WdLogNewEntry5_WdError(v4);
        *(_QWORD *)(v6 + 24) = this;
        *(_QWORD *)(v6 + 32) = -1073741823LL;
        WdLogEvent5_WdError(v6);
        return 3221225473LL;
      }
    }
    else
    {
      v5 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v5 + 24) = this;
      *(_QWORD *)(v5 + 32) = v3;
      WdLogEvent5_WdError(v5);
      return (unsigned int)v3;
    }
  }
  return result;
}
