/*
 * XREFs of NVMePowerSettingChangeNotification @ 0x1C00068B8
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C50 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeUpdateResumeLatencyTolerance @ 0x1C00061E4 (NVMeUpdateResumeLatencyTolerance.c)
 */

char __fastcall NVMePowerSettingChangeNotification(_DWORD *a1, __int64 a2)
{
  if ( (a1[288] & 1) != 0 )
  {
    if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1.Data1
      && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1.Data4
      && *(_DWORD *)(a2 + 24) == 4 )
    {
      a1[294] = **(_DWORD **)(a2 + 16);
LABEL_15:
      NVMeUpdateResumeLatencyTolerance((__int64)a1);
      return 1;
    }
    if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT1.Data1
      && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_NVME_POWER_IDLE_TIMEOUT1.Data4
      && *(_DWORD *)(a2 + 24) == 4 )
    {
      if ( a1[16] == -1 )
        a1[295] = **(_DWORD **)(a2 + 16);
    }
    else
    {
      if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2.Data1
        && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2.Data4
        && *(_DWORD *)(a2 + 24) == 4 )
      {
        a1[296] = **(_DWORD **)(a2 + 16);
        goto LABEL_15;
      }
      if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT2.Data1
        && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_NVME_POWER_IDLE_TIMEOUT2.Data4
        && *(_DWORD *)(a2 + 24) == 4 )
      {
        a1[297] = **(_DWORD **)(a2 + 16);
      }
    }
  }
  return 1;
}
