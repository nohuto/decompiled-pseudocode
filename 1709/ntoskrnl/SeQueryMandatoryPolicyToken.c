/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x14001457C
 * Callers:
 *     SepCopyTokenAccessInformation @ 0x14045C51C (SepCopyTokenAccessInformation.c)
 *     NtQueryInformationToken @ 0x1404A40D0 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
