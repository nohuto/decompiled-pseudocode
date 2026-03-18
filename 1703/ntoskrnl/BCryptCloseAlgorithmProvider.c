/*
 * XREFs of BCryptCloseAlgorithmProvider @ 0x140156F90
 * Callers:
 *     SecureDump_Init @ 0x140159F28 (SecureDump_Init.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401F6618 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SmCrEncCleanup @ 0x14043BF88 (SmCrEncCleanup.c)
 *     RtlGenerateClass5Guid @ 0x1405B6EC0 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptCloseAlgorithmProvider(BCRYPT_ALG_HANDLE hAlgorithm, ULONG dwFlags)
{
  NTSTATUS v3; // ebx
  unsigned __int64 ExtensionTable; // rax

  v3 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v3 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE, _QWORD))(ExtensionTable + 32))(hAlgorithm, 0LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v3;
}
