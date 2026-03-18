/*
 * XREFs of _MuiRegAllocArray @ 0x1401415DC
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401418D0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1405BC4CC (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1405BD8FC (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1405BDFE4 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14078A8EC (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14078B090 (RtlpMuiRegLangInfoMatchesSpec.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall MuiRegAllocArray(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned int v4; // esi
  PVOID PoolWithTag; // rax
  PVOID v6; // rdi

  v2 = 0LL;
  v3 = 2LL * a2;
  if ( v3 <= 0xFFFFFFFF && (_DWORD)v3 )
  {
    v4 = 2 * a2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v3, 0x72746C6Du);
    v6 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v4);
    return v6;
  }
  return (PVOID)v2;
}
