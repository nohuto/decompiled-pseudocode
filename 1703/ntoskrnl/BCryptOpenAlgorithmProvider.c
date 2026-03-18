/*
 * XREFs of BCryptOpenAlgorithmProvider @ 0x1405B70B0
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401F6618 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401F6B94 (SecureDump_SymmetricEncryptionSetup.c)
 *     sub_1405A6B44 @ 0x1405A6B44 (sub_1405A6B44.c)
 *     RtlGenerateClass5Guid @ 0x1405B6EC0 (RtlGenerateClass5Guid.c)
 *     SmCrEncStart @ 0x140703C98 (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x140117418 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptOpenAlgorithmProvider(
        BCRYPT_ALG_HANDLE *phAlgorithm,
        LPCWSTR pszAlgId,
        LPCWSTR pszImplementation,
        ULONG dwFlags)
{
  NTSTATUS v8; // ebx
  unsigned __int64 ExtensionTable; // rax

  v8 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v8 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE *, LPCWSTR, LPCWSTR, _QWORD))(ExtensionTable + 200))(
           phAlgorithm,
           pszAlgId,
           pszImplementation,
           dwFlags);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v8;
}
