/*
 * XREFs of SeQueryTokenTrustLink @ 0x1400893C8
 * Callers:
 *     PsRestoreImpersonation @ 0x1404C62C0 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
