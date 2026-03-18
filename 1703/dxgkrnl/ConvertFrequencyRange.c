/*
 * XREFs of ConvertFrequencyRange @ 0x1C0105274
 * Callers:
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C01068A8 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0105344 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0109DE8 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall ConvertFrequencyRange(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 result; // rax
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rax

  if ( !a1 || !a2 )
    return 3221225485LL;
  memset((void *)a2, 0, 0x30uLL);
  v5 = (int)a1[9];
  if ( a1[9] == 1 )
  {
    *(_DWORD *)(a2 + 36) = 1;
  }
  else
  {
    if ( a1[9] != 2 )
    {
      v9 = WdLogNewEntry5_WdError((unsigned int)(a1[9] - 1), v4);
      *(_QWORD *)(v9 + 24) = v5;
      WdLogEvent5_WdError(v9);
      *(_DWORD *)(a2 + 36) = 0;
      return 3223192408LL;
    }
    *(_DWORD *)(a2 + 36) = 2;
  }
  result = ConvertMonitorCapablitiesOrigin(*(unsigned __int8 *)a1, a2);
  if ( (int)result < 0 )
    return result;
  v7 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a2 + 4) = a1[1];
  *(_DWORD *)(a2 + 8) = a1[2];
  *(_DWORD *)(a2 + 12) = a1[3];
  *(_DWORD *)(a2 + 16) = a1[4];
  *(_DWORD *)(a2 + 20) = a1[5];
  *(_DWORD *)(a2 + 24) = a1[6];
  *(_DWORD *)(a2 + 28) = a1[7];
  *(_DWORD *)(a2 + 32) = a1[8];
  v8 = v7 - 1;
  if ( !v8 )
  {
    *(_DWORD *)(a2 + 40) = a1[10];
    *(_DWORD *)(a2 + 44) = a1[11];
    return IsValidFrequencyRange((const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)a2);
  }
  if ( v8 != 1 )
    return 3223192408LL;
  *(_QWORD *)(a2 + 40) = (unsigned int)a1[12];
  return IsValidFrequencyRange((const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)a2);
}
