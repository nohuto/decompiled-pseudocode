/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x1404E8050
 * Callers:
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x1404E6494 (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1404E6644 (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x1404E7E30 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1404E7ED4 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x140741A90 (_NtPlugPlayGetDeviceRelationsList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetNtPlugPlayRoutine(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 >= 6 )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 88);
  return v3;
}
