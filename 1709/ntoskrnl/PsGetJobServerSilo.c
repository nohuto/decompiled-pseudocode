/*
 * XREFs of PsGetJobServerSilo @ 0x14024E400
 * Callers:
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1400D4220 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetJobServerSilo(__int64 a1, __int64 *a2)
{
  if ( a1 )
  {
    *a2 = PsGetEffectiveServerSilo(a1);
    return 0LL;
  }
  else
  {
    *a2 = 0LL;
    return 3221225485LL;
  }
}
