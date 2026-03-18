/*
 * XREFs of VfUtilIsProtectedDriver @ 0x1407A6EBC
 * Callers:
 *     VfDriverEnableVerifier @ 0x1407A8C08 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1407A8D88 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall VfUtilIsProtectedDriver(PCUNICODE_STRING String2)
{
  unsigned int v2; // ebx

  v2 = 0;
  while ( !RtlEqualUnicodeString((PCUNICODE_STRING)&VfProtectedDriverNames[2 * v2], String2, 1u) )
  {
    if ( ++v2 >= 0x12 )
      return 0LL;
  }
  return 1LL;
}
