/*
 * XREFs of PsGetJobServerSilo @ 0x140284790
 * Callers:
 *     NtQueryInformationJobObject @ 0x140535514 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008A8E0 (PsGetEffectiveServerSilo.c)
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
