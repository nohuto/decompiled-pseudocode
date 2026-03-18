/*
 * XREFs of BCryptGenRandom @ 0x14025DC14
 * Callers:
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401FCA14 (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrGenRandom @ 0x1402763B8 (SmCrGenRandom.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x14011BEF0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
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
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v6;
}
