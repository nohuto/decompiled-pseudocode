/*
 * XREFs of BCryptEncrypt @ 0x14029F41C
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1402391B4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Encrypt_DmpData @ 0x140239410 (SecureDump_Encrypt_DmpData.c)
 *     SmCrAuthEncrypt @ 0x1402A93D0 (SmCrAuthEncrypt.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14009C120 (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptEncrypt(
        BCRYPT_KEY_HANDLE hKey,
        PUCHAR pbInput,
        ULONG cbInput,
        void *pPaddingInfo,
        PUCHAR pbIV,
        ULONG cbIV,
        PUCHAR pbOutput,
        ULONG cbOutput,
        ULONG *pcbResult,
        ULONG dwFlags)
{
  NTSTATUS v14; // ebx
  unsigned __int64 ExtensionTable; // rax

  v14 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v14 = (*(__int64 (__fastcall **)(BCRYPT_KEY_HANDLE, PUCHAR, _QWORD, void *, PUCHAR, ULONG, PUCHAR, ULONG, ULONG *, ULONG))(ExtensionTable + 88))(
            hKey,
            pbInput,
            cbInput,
            pPaddingInfo,
            pbIV,
            cbIV,
            pbOutput,
            cbOutput,
            pcbResult,
            dwFlags);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v14;
}
