/*
 * XREFs of RtlUnlockBootStatusData @ 0x1800E6F00
 * Callers:
 *     <none>
 * Callees:
 *     ZwPowerInformation @ 0x18009B690 (ZwPowerInformation.c)
 */

NTSTATUS __cdecl RtlUnlockBootStatusData(HANDLE FileHandle)
{
  NTSTATUS result; // eax
  _DWORD v2[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v3; // [rsp+38h] [rbp-20h]
  __int64 v4; // [rsp+40h] [rbp-18h]

  if ( !FileHandle )
  {
    v2[1] = 0;
    v3 = 0LL;
    v2[0] = 38;
    v4 = 0LL;
    return ZwPowerInformation(PowerInformationInternal, v2, 0x18u, 0LL, 0);
  }
  return result;
}
