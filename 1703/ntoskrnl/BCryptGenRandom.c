/*
 * XREFs of BCryptGenRandom @ 0x1402464D8
 * Callers:
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401F6B94 (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrGenRandom @ 0x14024FD50 (SmCrGenRandom.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
