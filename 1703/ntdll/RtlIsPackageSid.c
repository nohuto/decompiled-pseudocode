/*
 * XREFs of RtlIsPackageSid @ 0x180087480
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareMemory @ 0x1800A9760 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlIsPackageSid(PSID Sid)
{
  return *((_BYTE *)Sid + 1) >= 2u
      && *(_BYTE *)Sid == 1
      && RtlCompareMemory((char *)Sid + 2, &Source2, 6uLL) == 6
      && *((_DWORD *)Sid + 2) == 2;
}
