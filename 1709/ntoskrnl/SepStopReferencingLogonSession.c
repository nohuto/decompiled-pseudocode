/*
 * XREFs of SepStopReferencingLogonSession @ 0x1405D9B60
 * Callers:
 *     SepLinkLogonSessions @ 0x1401523CC (SepLinkLogonSessions.c)
 *     SepSetLogonSessionToken @ 0x14045A9BC (SepSetLogonSessionToken.c)
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x14012BB1C (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertToOwnTokenClaims @ 0x140152604 (SepConvertToOwnTokenClaims.c)
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
