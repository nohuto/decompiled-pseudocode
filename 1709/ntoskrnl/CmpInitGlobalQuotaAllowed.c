/*
 * XREFs of CmpInitGlobalQuotaAllowed @ 0x14083A4E4
 * Callers:
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x14056E6E0 (MmGetNumberOfPhysicalPages.c)
 */

__int64 CmpInitGlobalQuotaAllowed()
{
  unsigned __int64 v0; // rcx
  char v1; // al
  unsigned __int16 v2; // cx
  unsigned __int64 v3; // rax
  __int64 result; // rax

  CmpSizeOfPagedPoolInBytes = MmSizeOfPagedPoolInBytes;
  v0 = (((unsigned __int64)MmSizeOfPagedPoolInBytes * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( CmRegistrySizeLimitLength == 4 && CmRegistrySizeLimitType == 4 && CmRegistrySizeLimit
    || (v1 = 0, CmRegistrySizeLimitLength == 8) && CmRegistrySizeLimitType == 11 && CmRegistrySizeLimit )
  {
    v1 = 1;
  }
  if ( !v1 )
  {
    v0 = MmSizeOfPagedPoolInBytes / 3uLL;
LABEL_5:
    CmpGlobalQuota = v0;
    goto LABEL_6;
  }
  CmpQuotaExplicitlySet = 1;
  if ( CmRegistrySizeLimit >= v0 )
    goto LABEL_5;
  v0 = CmRegistrySizeLimit;
  CmpGlobalQuota = CmRegistrySizeLimit;
LABEL_6:
  if ( v0 > 0xFFFFFFFF )
  {
    v0 = 0xFFFFFFFFLL;
    CmpGlobalQuota = 0xFFFFFFFFLL;
  }
  if ( v0 < 0x1000000 )
  {
    v0 = 0x1000000LL;
    CmpGlobalQuota = 0x1000000LL;
  }
  CmpGlobalQuotaWarning = 95 * (v0 / 0x64);
  if ( CmSystemHiveLimitSize )
  {
    result = (unsigned int)(CmSystemHiveLimitSize << 20);
  }
  else
  {
    if ( (MmGetNumberOfPhysicalPages(0) & 0xFFFFFFFFFFFFFFFEuLL) < 0xC0000 )
      v3 = (unsigned __int64)MmGetNumberOfPhysicalPages(v2) >> 1;
    else
      LODWORD(v3) = 393216;
    result = (unsigned int)((_DWORD)v3 << 12);
  }
  CmSystemHiveLimitSize = result;
  return result;
}
