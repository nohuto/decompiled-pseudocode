/*
 * XREFs of PnpIsLegacyDriver @ 0x140517478
 * Callers:
 *     IopUnloadDriver @ 0x14046EF24 (IopUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14051A720 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IovpBuildDriverObjectList @ 0x1407A523C (IovpBuildDriverObjectList.c)
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
