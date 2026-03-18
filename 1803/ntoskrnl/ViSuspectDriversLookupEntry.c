/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x14082AFC8
 * Callers:
 *     VfDriverEnableVerifier @ 0x140815C38 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversRemove @ 0x14082AD78 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversIsLoaded @ 0x1408E1A38 (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall ViSuspectDriversLookupEntry(PCUNICODE_STRING String2)
{
  __int64 i; // rbx

  for ( i = VfSuspectDriversList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &VfSuspectDriversList )
      return 0LL;
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 24), String2, 1u) )
      break;
  }
  return i;
}
