/*
 * XREFs of _MuiRegAllocArray @ 0x1401798F4
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140179BE8 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x140634554 (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140635D80 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140636454 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1407F6DA4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1407F7548 (RtlpMuiRegLangInfoMatchesSpec.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
