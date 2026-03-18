/*
 * XREFs of CmpInitGlobalQuotaAllowed @ 0x140824C74
 * Callers:
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x140437454 (MmGetNumberOfPhysicalPages.c)
 */

__int64 CmpInitGlobalQuotaAllowed()
{
  unsigned __int64 v0; // rcx
  char v1; // r8
  char v2; // dl
  unsigned __int16 v3; // cx
  unsigned __int64 v4; // rax
  __int64 result; // rax

  CmpSizeOfPagedPoolInBytes = MmSizeOfPagedPoolInBytes;
  v0 = (((unsigned __int64)MmSizeOfPagedPoolInBytes * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( CmRegistrySizeLimitLength == 4 && CmRegistrySizeLimitType == 4 && CmRegistrySizeLimit )
  {
    v1 = 1;
LABEL_3:
    v2 = 0;
    goto LABEL_4;
  }
  v1 = 0;
  if ( CmRegistrySizeLimitLength != 8 || CmRegistrySizeLimitType != 11 || !CmRegistrySizeLimit )
    goto LABEL_3;
  v2 = 1;
LABEL_4:
  if ( !((unsigned __int8)v1 | (unsigned __int8)v2) )
  {
    v0 = MmSizeOfPagedPoolInBytes / 3uLL;
LABEL_6:
    CmpGlobalQuota = v0;
    goto LABEL_7;
  }
  CmpQuotaExplicitlySet = 1;
  if ( CmRegistrySizeLimit >= v0 )
    goto LABEL_6;
  v0 = CmRegistrySizeLimit;
  CmpGlobalQuota = CmRegistrySizeLimit;
LABEL_7:
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
      v4 = (unsigned __int64)MmGetNumberOfPhysicalPages(v3) >> 1;
    else
      LODWORD(v4) = 393216;
    result = (unsigned int)((_DWORD)v4 << 12);
  }
  CmSystemHiveLimitSize = result;
  return result;
}
