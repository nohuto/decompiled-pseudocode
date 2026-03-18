/*
 * XREFs of SepDeReferenceLogonSessionDirect @ 0x140036550
 * Callers:
 *     SepLinkLogonSessions @ 0x14014A49C (SepLinkLogonSessions.c)
 *     SepStopReferencingLogonSession @ 0x140456BA0 (SepStopReferencingLogonSession.c)
 *     NtQueryInformationToken @ 0x140508720 (NtQueryInformationToken.c)
 *     PspDeleteExternalServerSiloState @ 0x1406DEC14 (PspDeleteExternalServerSiloState.c)
 *     SepSetServerSiloToken @ 0x1406F0F14 (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x1406F67E0 (SeGetLinkedToken.c)
 * Callees:
 *     SepDeReferenceLogonSession @ 0x14057D950 (SepDeReferenceLogonSession.c)
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
