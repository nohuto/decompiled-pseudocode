/*
 * XREFs of SepDeReferenceLogonSessionDirect @ 0x14012BB1C
 * Callers:
 *     SepLinkLogonSessions @ 0x1401523CC (SepLinkLogonSessions.c)
 *     NtQueryInformationToken @ 0x1404A40D0 (NtQueryInformationToken.c)
 *     SepStopReferencingLogonSession @ 0x1405D9B60 (SepStopReferencingLogonSession.c)
 *     PspDeleteExternalServerSiloState @ 0x140715064 (PspDeleteExternalServerSiloState.c)
 *     SepSetServerSiloToken @ 0x140728934 (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x14072E300 (SeGetLinkedToken.c)
 * Callees:
 *     SepDeReferenceLogonSession @ 0x1405A7534 (SepDeReferenceLogonSession.c)
 */

signed __int64 __fastcall SepDeReferenceLogonSessionDirect(_QWORD *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt
  __int64 v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  _m_prefetchw(a1 + 3);
  result = a1[3];
  while ( result - 1 > 0 )
  {
    v2 = result;
    result = _InterlockedCompareExchange64(a1 + 3, result - 1, result);
    if ( v2 == result )
      return result;
  }
  if ( result != 1 )
    __fastfail(0xEu);
  v3 = a1[20];
  v4 = a1[1];
  return SepDeReferenceLogonSession(&v4, v3);
}
