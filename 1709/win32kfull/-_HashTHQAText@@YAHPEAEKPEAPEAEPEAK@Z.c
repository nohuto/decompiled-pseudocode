/*
 * XREFs of ?_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z @ 0x1C01B6214
 * Callers:
 *     _VerifyTHQBlob @ 0x1C01B6E08 (_VerifyTHQBlob.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _HashTHQAText(PUCHAR pbInput, __int64 a2, unsigned __int8 **a3, unsigned int *a4)
{
  UCHAR *v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int8 *v11; // rax
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+40h] [rbp-10h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+48h] [rbp-8h] BYREF
  ULONG v15; // [rsp+98h] [rbp+48h] BYREF
  ULONG pbOutput; // [rsp+A0h] [rbp+50h] BYREF
  ULONG pcbResult; // [rsp+A8h] [rbp+58h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  pcbResult = 0;
  v15 = 0;
  pbOutput = 0;
  phAlgorithm = 0LL;
  v7 = 0LL;
  phHash = 0LL;
  v8 = 0;
  if ( BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA256", 0LL, 0) >= 0
    && BCryptGetProperty(phAlgorithm, L"ObjectLength", (PUCHAR)&pbOutput, 4u, &pcbResult, 0) >= 0 )
  {
    v7 = (UCHAR *)Win32AllocPoolZInit(pbOutput, 1668313941LL);
    if ( v7 )
    {
      if ( BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&v15, 4u, &pcbResult, 0) >= 0 )
      {
        v11 = (unsigned __int8 *)Win32AllocPoolZInit(v15, 1668313941LL);
        *a3 = v11;
        if ( v11 )
        {
          if ( BCryptCreateHash(phAlgorithm, &phHash, v7, pbOutput, 0LL, 0, 0) >= 0
            && BCryptHashData(phHash, pbInput, 4u, 0) >= 0
            && BCryptFinishHash(phHash, *a3, v15, 0) >= 0 )
          {
            v8 = 1;
            *a4 = v15;
          }
        }
      }
    }
  }
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v7 )
    Win32FreePool(v7, v9, v10);
  if ( !v8 && *a3 )
  {
    Win32FreePool(*a3, v9, v10);
    *a3 = 0LL;
  }
  return v8;
}
