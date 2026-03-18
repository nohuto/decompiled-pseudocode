/*
 * XREFs of SepReferenceLogonSession @ 0x14046F448
 * Callers:
 *     SepDuplicateLogonSessionReference @ 0x14003DE38 (SepDuplicateLogonSessionReference.c)
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 *     SepLinkLogonSessions @ 0x14014A49C (SepLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
