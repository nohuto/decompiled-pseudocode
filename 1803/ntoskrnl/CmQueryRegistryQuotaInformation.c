/*
 * XREFs of CmQueryRegistryQuotaInformation @ 0x1405F3F60
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     CmpUpdateGlobalQuotaAllowed @ 0x140514E2C (CmpUpdateGlobalQuotaAllowed.c)
 */

__int64 CmQueryRegistryQuotaInformation()
{
  __int64 v0; // r8

  CmpUpdateGlobalQuotaAllowed();
  *(_DWORD *)v0 = CmpGlobalQuota;
  *(_DWORD *)(v0 + 4) = CmpGlobalQuotaUsed;
  *(_QWORD *)(v0 + 8) = CmpSizeOfPagedPoolInBytes;
  return 0LL;
}
