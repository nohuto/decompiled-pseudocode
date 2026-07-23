/*
 * XREFs of RtlUnlockBootStatusData @ 0x1800EAD40
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x1800A0C90 (NtPowerInformation.c)
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
    return NtPowerInformation(PowerInformationInternal, v2, 0x18u, 0LL, 0);
  }
  return result;
}
