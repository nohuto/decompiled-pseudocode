/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x14077BD04
 * Callers:
 *     VfDriverEnableVerifier @ 0x140767064 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversRemove @ 0x14077BABC (VfSuspectDriversRemove.c)
 *     VfSuspectDriversIsLoaded @ 0x140835AB8 (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
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
