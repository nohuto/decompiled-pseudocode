/*
 * XREFs of RtlIsCapabilitySid @ 0x180047BB0
 * Callers:
 *     RtlCheckTokenCapability @ 0x180046650 (RtlCheckTokenCapability.c)
 * Callees:
 *     RtlCompareMemory @ 0x1800A9760 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlIsCapabilitySid(PSID Sid)
{
  return *((_BYTE *)Sid + 1) >= 2u
      && *(_BYTE *)Sid == 1
      && RtlCompareMemory((char *)Sid + 2, &Source2, 6uLL) == 6
      && *((_DWORD *)Sid + 2) == 3;
}
