/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x14003F2EC
 * Callers:
 *     SepCopyTokenAccessInformation @ 0x14046EA9C (SepCopyTokenAccessInformation.c)
 *     NtQueryInformationToken @ 0x140508720 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
