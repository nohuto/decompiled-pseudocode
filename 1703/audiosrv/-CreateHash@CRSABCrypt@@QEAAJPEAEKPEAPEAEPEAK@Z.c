/*
 * XREFs of ?CreateHash@CRSABCrypt@@QEAAJPEAEKPEAPEAEPEAK@Z @ 0x1800D5710
 * Callers:
 *     ?CheckSignature@CRSABCrypt@@QEAAJPEBEK0K@Z @ 0x1800D5544 (-CheckSignature@CRSABCrypt@@QEAAJPEBEK0K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 */

__int64 __fastcall CRSABCrypt::CreateHash(
        CRSABCrypt *this,
        unsigned __int8 *a2,
        ULONG a3,
        unsigned __int8 **a4,
        unsigned int *pcbResult)
{
  unsigned int *v5; // r15
  UCHAR *v9; // rsi
  UCHAR *v10; // rdi
  NTSTATUS Property; // ebx
  UCHAR *v12; // rax
  void *v13; // rax
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+40h] [rbp-10h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+48h] [rbp-8h] BYREF
  ULONG v17; // [rsp+90h] [rbp+40h] BYREF
  int v18; // [rsp+94h] [rbp+44h]
  ULONG pbOutput; // [rsp+A8h] [rbp+58h] BYREF

  v18 = HIDWORD(this);
  v5 = pcbResult;
  *a4 = 0LL;
  phAlgorithm = 0LL;
  *v5 = 0;
  pbOutput = 0;
  v17 = 0;
  v9 = 0LL;
  phHash = 0LL;
  v10 = 0LL;
  Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA256", L"Microsoft Primitive Provider", 0);
  if ( Property >= 0 )
  {
    Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", (PUCHAR)&pbOutput, 4u, (ULONG *)&pcbResult, 0);
    if ( Property >= 0 )
    {
      Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&v17, 4u, (ULONG *)&pcbResult, 0);
      if ( Property >= 0 )
      {
        v12 = (UCHAR *)operator new[](pbOutput, (const struct std::nothrow_t *)&std::nothrow);
        v9 = v12;
        if ( v12
          && (memset(v12, 0, pbOutput),
              v13 = operator new[](v17, (const struct std::nothrow_t *)&std::nothrow),
              (v10 = (UCHAR *)v13) != 0LL) )
        {
          memset(v13, 0, v17);
          Property = BCryptCreateHash(phAlgorithm, &phHash, v9, pbOutput, 0LL, 0, 0);
          if ( Property >= 0 )
          {
            Property = BCryptHashData(phHash, a2, a3, 0);
            if ( Property >= 0 )
              Property = BCryptFinishHash(phHash, v10, v17, 0);
          }
        }
        else
        {
          Property = -2147024882;
        }
      }
    }
  }
  if ( phHash )
  {
    BCryptDestroyHash(phHash);
    phHash = 0LL;
  }
  if ( phAlgorithm )
  {
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
    phAlgorithm = 0LL;
  }
  operator delete(v9);
  if ( Property < 0 )
  {
    operator delete(v10);
  }
  else
  {
    *v5 = v17;
    *a4 = v10;
  }
  return (unsigned int)Property;
}
