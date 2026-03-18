/*
 * XREFs of CmpAllocateTransientPoolWithQuotaTag @ 0x1400078DC
 * Callers:
 *     NtDeleteValueKey @ 0x14049ACA0 (NtDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x14049ED68 (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x14049F9B0 (CmCreateKey.c)
 *     NtSetValueKey @ 0x1404A3E60 (NtSetValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x1404A45C4 (CmpCaptureKeyValueArray.c)
 *     CmpBounceContextStart @ 0x1404AD270 (CmpBounceContextStart.c)
 *     CmUnloadKey @ 0x14054CB34 (CmUnloadKey.c)
 *     NtQueryValueKey @ 0x14059DE50 (NtQueryValueKey.c)
 *     NtQueryOpenSubKeysEx @ 0x1405ED870 (NtQueryOpenSubKeysEx.c)
 *     NtCompactKeys @ 0x1406EBADC (NtCompactKeys.c)
 *     NtRenameKey @ 0x1406EC3E0 (NtRenameKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithQuotaTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, a3);
}
