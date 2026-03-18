/*
 * XREFs of BCryptEncrypt @ 0x140246408
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401F6618 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Encrypt_DmpData @ 0x1401F6870 (SecureDump_Encrypt_DmpData.c)
 *     SmCrAuthEncrypt @ 0x14024FCDC (SmCrAuthEncrypt.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
