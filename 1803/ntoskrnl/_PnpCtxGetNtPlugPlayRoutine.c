/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x1405038D4
 * Callers:
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x140503830 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x14057ABA0 (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140585FB4 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x140586770 (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x1407F06E0 (_NtPlugPlayGetDeviceRelationsList.c)
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
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 248);
  return v3;
}
