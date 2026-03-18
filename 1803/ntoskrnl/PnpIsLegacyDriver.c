/*
 * XREFs of PnpIsLegacyDriver @ 0x1405F7C8C
 * Callers:
 *     IopUnloadDriver @ 0x1405F5EC0 (IopUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405F72F4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IovpBuildDriverObjectList @ 0x14081220C (IovpBuildDriverObjectList.c)
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
