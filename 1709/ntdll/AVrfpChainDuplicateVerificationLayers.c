/*
 * XREFs of AVrfpChainDuplicateVerificationLayers @ 0x1800DA91C
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D9BE0 (AVrfInitializeVerifier.c)
 * Callees:
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800DAE88 (AVrfpFindClosestThunkDuplicate.c)
 */

__int64 *AVrfpChainDuplicateVerificationLayers()
{
  __int64 *v0; // rbx
  __int64 *v1; // r15
  unsigned int v2; // r14d
  _QWORD *v3; // rbp
  __int64 v4; // r12
  _QWORD *v5; // rdi
  _QWORD *v6; // r13
  _QWORD *v7; // rsi
  __int64 ClosestThunkDuplicate; // rax
  __int64 *result; // rax
  int v10; // [rsp+60h] [rbp+8h]
  __int64 v11; // [rsp+68h] [rbp+10h]

  v0 = (__int64 *)AVrfpVerifierProvidersList;
LABEL_14:
  result = &AVrfpVerifierProvidersList;
  while ( v0 != &AVrfpVerifierProvidersList )
  {
    v1 = v0;
    v2 = 0;
    v0 = (__int64 *)*v0;
    v3 = (_QWORD *)v1[5];
    if ( *v3 )
    {
      v4 = 0LL;
      v5 = (_QWORD *)v1[5];
      do
      {
        v6 = (_QWORD *)v5[3];
        v10 = 0;
        if ( *v6 )
        {
          v7 = (_QWORD *)v5[3];
          do
          {
            if ( (AVrfpDebug & 0x20) != 0 )
            {
              v5 = &v3[4 * v4];
              DbgPrint("AVRF: Checking %ws for duplicate (%ws: %s) \n", v1[3], *v5, *v7);
            }
            ClosestThunkDuplicate = AVrfpFindClosestThunkDuplicate(v1, *v5, *v7);
            v11 = ClosestThunkDuplicate;
            if ( ClosestThunkDuplicate )
            {
              if ( (AVrfpDebug & 0x10) != 0 )
              {
                DbgPrint("AVRF: Chaining (%ws: %s) to %ws\n", *v5, *v7, v1[3]);
                ClosestThunkDuplicate = v11;
              }
              v7[1] = ClosestThunkDuplicate;
            }
            v7 = &v6[3 * (unsigned int)++v10];
          }
          while ( *v7 );
        }
        v5 = &v3[4 * ++v2];
        v4 = v2;
      }
      while ( *v5 );
      goto LABEL_14;
    }
  }
  return result;
}
