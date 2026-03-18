/*
 * XREFs of rimStartDeviceReadIfAllowed @ 0x1C0009F6C
 * Callers:
 *     rimIssueReads @ 0x1C0009E88 (rimIssueReads.c)
 * Callees:
 *     RIMStartDeviceSpecificRead @ 0x1C000C120 (RIMStartDeviceSpecificRead.c)
 */

__int64 __fastcall rimStartDeviceReadIfAllowed(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r8d

  v2 = *(_DWORD *)(a2 + 184);
  v3 = 0;
  if ( (v2 & 0x100) == 0 && (v2 & 0x40) == 0 && (v2 & 0x200) == 0 && (v2 & 0x1000) == 0 )
    return (unsigned int)RIMStartDeviceSpecificRead(a1, a2, 0LL);
  return v3;
}
