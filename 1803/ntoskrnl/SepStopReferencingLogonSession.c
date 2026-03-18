/*
 * XREFs of SepStopReferencingLogonSession @ 0x140546014
 * Callers:
 *     SepLinkLogonSessions @ 0x1400A1590 (SepLinkLogonSessions.c)
 *     NtSetInformationToken @ 0x140544C00 (NtSetInformationToken.c)
 *     SepSetLogonSessionToken @ 0x140547FB4 (SepSetLogonSessionToken.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x1400A0C10 (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertToOwnTokenClaims @ 0x1400A0C48 (SepConvertToOwnTokenClaims.c)
 */

__int64 __fastcall SepStopReferencingLogonSession(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi

  result = SepConvertToOwnTokenClaims(a1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
    *(_DWORD *)(a1 + 200) |= 0x20u;
    return v3;
  }
  return result;
}
