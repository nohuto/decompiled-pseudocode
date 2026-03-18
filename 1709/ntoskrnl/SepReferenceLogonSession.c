/*
 * XREFs of SepReferenceLogonSession @ 0x14045CEC8
 * Callers:
 *     SepDuplicateLogonSessionReference @ 0x14001373C (SepDuplicateLogonSessionReference.c)
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 *     SepLinkLogonSessions @ 0x1401523CC (SepLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x14045CEFC (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
