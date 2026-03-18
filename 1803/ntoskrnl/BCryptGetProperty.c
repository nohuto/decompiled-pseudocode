/*
 * XREFs of BCryptGetProperty @ 0x14053A888
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1402391B4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x140239754 (SecureDump_SymmetricEncryptionSetup.c)
 *     WbHashData @ 0x14053A76C (WbHashData.c)
 *     RtlGenerateClass5Guid @ 0x140633E50 (RtlGenerateClass5Guid.c)
 *     SmCrEncStart @ 0x14079EFA0 (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14009C108 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14009C120 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptGetProperty(
        BCRYPT_HANDLE hObject,
        LPCWSTR pszProperty,
        PUCHAR pbOutput,
        ULONG cbOutput,
        ULONG *pcbResult,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  unsigned __int64 ExtensionTable; // rax

  v9 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v9 = (*(__int64 (__fastcall **)(BCRYPT_HANDLE, LPCWSTR, PUCHAR, __int64, ULONG *, _DWORD))(ExtensionTable + 168))(
           hObject,
           pszProperty,
           pbOutput,
           4LL,
           pcbResult,
           0);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v9;
}
