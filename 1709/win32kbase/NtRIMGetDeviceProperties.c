/*
 * XREFs of NtRIMGetDeviceProperties @ 0x1C00FFFA0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0009030 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RIMGetDeviceProperties @ 0x1C0101E10 (RIMGetDeviceProperties.c)
 */

__int64 __fastcall NtRIMGetDeviceProperties(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9

  if ( !(unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return 3221225506LL;
  LOBYTE(v6) = 1;
  return RIMGetDeviceProperties(a1, a2, a3, v6);
}
