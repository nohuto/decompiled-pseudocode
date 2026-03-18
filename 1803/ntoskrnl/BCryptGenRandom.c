/*
 * XREFs of BCryptGenRandom @ 0x14029F4EC
 * Callers:
 *     SecureDump_SymmetricEncryptionSetup @ 0x140239754 (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrGenRandom @ 0x1402A9444 (SmCrGenRandom.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14009C120 (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptGenRandom(BCRYPT_ALG_HANDLE hAlgorithm, PUCHAR pbBuffer, ULONG cbBuffer, ULONG dwFlags)
{
  NTSTATUS v6; // ebx
  unsigned __int64 ExtensionTable; // rax

  v6 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, PUCHAR, _QWORD, __int64))(ExtensionTable + 160))(
           0LL,
           pbBuffer,
           cbBuffer,
           2LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v6;
}
