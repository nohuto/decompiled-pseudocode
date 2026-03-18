/*
 * XREFs of CmQueryRegistryQuotaInformation @ 0x140595DF0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     CmpUpdateGlobalQuotaAllowed @ 0x14048DDCC (CmpUpdateGlobalQuotaAllowed.c)
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
