/*
 * XREFs of SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1402391B4
 * Callers:
 *     SecureDump_Init @ 0x14016F708 (SecureDump_Init.c)
 * Callees:
 *     BCryptCloseAlgorithmProvider @ 0x14017911C (BCryptCloseAlgorithmProvider.c)
 *     SecureDump_LogErrorEvent @ 0x1402396C0 (SecureDump_LogErrorEvent.c)
 *     BCryptDestroyKey @ 0x14029F3C8 (BCryptDestroyKey.c)
 *     BCryptEncrypt @ 0x14029F41C (BCryptEncrypt.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     BCryptGetProperty @ 0x14053A888 (BCryptGetProperty.c)
 *     BCryptOpenAlgorithmProvider @ 0x140634040 (BCryptOpenAlgorithmProvider.c)
 *     BCryptImportKeyPair @ 0x14078C6EC (BCryptImportKeyPair.c)
 */

__int64 SecureDump_EncryptSymmetricKeyWithPublicKey()
{
  UCHAR *v0; // rsi
  unsigned int v1; // edi
  void *v2; // rdx
  NTSTATUS Property; // ebx
  UCHAR *PoolWithTag; // rax
  const WCHAR *v5; // r8
  ULONG v6; // r9d
  ULONG pcbResult; // [rsp+28h] [rbp-50h]
  ULONG dwFlags; // [rsp+30h] [rbp-48h]
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-28h] BYREF
  _QWORD pPaddingInfo[2]; // [rsp+58h] [rbp-20h] BYREF
  int v12; // [rsp+68h] [rbp-10h]
  ULONG cbInput; // [rsp+B0h] [rbp+38h] BYREF
  int pbOutput; // [rsp+B8h] [rbp+40h] BYREF
  ULONG v15; // [rsp+C0h] [rbp+48h] BYREF
  BCRYPT_KEY_HANDLE phKey; // [rsp+C8h] [rbp+50h] BYREF

  pPaddingInfo[0] = L"SHA256";
  phAlgorithm = 0LL;
  v0 = 0LL;
  phKey = 0LL;
  pPaddingInfo[1] = 0LL;
  v1 = 1;
  v12 = 0;
  dword_1403CB0DC = 2;
  Property = BCryptExportKey(hObject, 0LL, L"KeyDataBlob", 0LL, 0, &cbInput, 0);
  if ( Property >= 0 )
  {
    PoolWithTag = (UCHAR *)ExAllocatePoolWithTag(NonPagedPoolNx, cbInput, 0x706D6453u);
    v0 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_3:
      Property = -1073741670;
      goto LABEL_14;
    }
    Property = BCryptExportKey(hObject, 0LL, L"KeyDataBlob", PoolWithTag, cbInput, &cbInput, 0);
    if ( Property >= 0 )
    {
      Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"RSA", 0LL, 1u);
      if ( Property >= 0 )
      {
        Property = BCryptImportKeyPair(phAlgorithm, v2, v5, &phKey, (PUCHAR)pbInput, ::dwFlags, dwFlags);
        if ( Property < 0
          || (Property = BCryptGetProperty(phKey, L"KeyLength", (PUCHAR)&pbOutput, v6, &v15, pcbResult), Property < 0) )
        {
          v1 = 3;
        }
        else if ( pbOutput == 2048 )
        {
          Property = BCryptEncrypt(phKey, v0, cbInput, pPaddingInfo, 0LL, 0, 0LL, 0, &::pcbResult, 4u);
          if ( Property >= 0 )
          {
            P = ExAllocatePoolWithTag(NonPagedPoolNx, ::pcbResult, 0x706D6453u);
            if ( !P )
              goto LABEL_3;
            Property = BCryptEncrypt(phKey, v0, cbInput, pPaddingInfo, 0LL, 0, (PUCHAR)P, ::pcbResult, &::pcbResult, 4u);
          }
        }
        else
        {
          v1 = 4;
          Property = -1073741823;
        }
      }
    }
  }
LABEL_14:
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, (ULONG)v2);
  if ( phKey )
    BCryptDestroyKey(phKey);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  if ( Property < 0 )
    SecureDump_LogErrorEvent(v1);
  return (unsigned int)Property;
}
