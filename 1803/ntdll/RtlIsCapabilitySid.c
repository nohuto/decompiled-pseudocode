/*
 * XREFs of RtlIsCapabilitySid @ 0x18002ECC0
 * Callers:
 *     RtlCheckTokenCapability @ 0x180030720 (RtlCheckTokenCapability.c)
 * Callees:
 *     RtlCompareMemory @ 0x18009F080 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlIsCapabilitySid(PSID Sid)
{
  return *((_BYTE *)Sid + 1) >= 2u
      && *(_BYTE *)Sid == 1
      && RtlCompareMemory((char *)Sid + 2, &Source2, 6uLL) == 6
      && *((_DWORD *)Sid + 2) == 3;
}
