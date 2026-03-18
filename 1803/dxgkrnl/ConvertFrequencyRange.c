/*
 * XREFs of ConvertFrequencyRange @ 0x1C0238808
 * Callers:
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C023A998 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C02388DC (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 *     ConvertMonitorFrequencyRangeType @ 0x1C0238958 (ConvertMonitorFrequencyRangeType.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0238D60 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 */

__int64 __fastcall ConvertFrequencyRange(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // ecx

  if ( !a1 || !a2 )
    return 3221225485LL;
  memset((void *)a2, 0, 0x30uLL);
  result = ConvertMonitorFrequencyRangeType((unsigned int)a1[9], a2 + 36);
  if ( (int)result >= 0 )
  {
    result = ConvertMonitorCapablitiesOrigin(
               (enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN)*(unsigned __int8 *)a1,
               (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)a2);
    if ( (int)result >= 0 )
    {
      v5 = *(_DWORD *)(a2 + 36);
      *(_DWORD *)(a2 + 4) = a1[1];
      *(_DWORD *)(a2 + 8) = a1[2];
      *(_DWORD *)(a2 + 12) = a1[3];
      *(_DWORD *)(a2 + 16) = a1[4];
      *(_DWORD *)(a2 + 20) = a1[5];
      *(_DWORD *)(a2 + 24) = a1[6];
      *(_DWORD *)(a2 + 28) = a1[7];
      *(_DWORD *)(a2 + 32) = a1[8];
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return 3223192408LL;
        *(_QWORD *)(a2 + 40) = (unsigned int)a1[12];
      }
      else
      {
        *(_DWORD *)(a2 + 40) = a1[10];
        *(_DWORD *)(a2 + 44) = a1[11];
      }
      return IsValidFrequencyRange((const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)a2);
    }
  }
  return result;
}
