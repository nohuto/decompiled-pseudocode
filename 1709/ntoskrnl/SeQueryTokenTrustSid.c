/*
 * XREFs of SeQueryTokenTrustSid @ 0x14012BDC8
 * Callers:
 *     PsImpersonateClient @ 0x1404CE640 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
