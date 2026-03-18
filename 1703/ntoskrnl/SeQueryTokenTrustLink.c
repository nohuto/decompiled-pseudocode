/*
 * XREFs of SeQueryTokenTrustLink @ 0x140097C38
 * Callers:
 *     PsRestoreImpersonation @ 0x140510CB0 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
