/*
 * XREFs of PnpIsLegacyDriver @ 0x1405ADAC0
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405AD458 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x1405CC050 (IopUnloadDriver.c)
 *     IovpBuildDriverObjectList @ 0x140763538 (IovpBuildDriverObjectList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpIsLegacyDriver(__int64 a1)
{
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) )
    return 0LL;
  else
    return (*(unsigned __int8 *)(a1 + 16) >> 1) & 1;
}
