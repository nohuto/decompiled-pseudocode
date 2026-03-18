/*
 * XREFs of SepReferenceLogonSession @ 0x14054491C
 * Callers:
 *     SepCreateTokenEx @ 0x14009FEE4 (SepCreateTokenEx.c)
 *     SepLinkLogonSessions @ 0x1400A1590 (SepLinkLogonSessions.c)
 *     SepDuplicateLogonSessionReference @ 0x1400D1B50 (SepDuplicateLogonSessionReference.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x140544950 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
