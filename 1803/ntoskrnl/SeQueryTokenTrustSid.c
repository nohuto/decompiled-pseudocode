/*
 * XREFs of SeQueryTokenTrustSid @ 0x1400CB7A4
 * Callers:
 *     PsImpersonateClient @ 0x14059AA70 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
