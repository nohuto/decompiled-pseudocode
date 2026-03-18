/*
 * XREFs of PpmParkSnapNodeStatistics @ 0x140035E18
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x140035EB0 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     PpmIdleSnapConcurrency @ 0x140035D70 (PpmIdleSnapConcurrency.c)
 */

unsigned __int64 PpmParkSnapNodeStatistics()
{
  unsigned __int64 result; // rax
  unsigned __int16 i; // di
  __int64 v2; // rbx
  __int64 v3; // rsi
  PKSPIN_LOCK *v4; // r14
  __int64 v5; // rbp
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
  {
    v2 = PpmParkNodes + 248LL * i;
    if ( *(_BYTE *)(v2 + 6) )
    {
      PpmIdleSnapConcurrency(*(PKSPIN_LOCK *)(v2 + 48), v2 + 56);
      if ( *(_BYTE *)(v2 + 6) != *(_BYTE *)(v2 + 104) )
      {
        v3 = 0LL;
        v4 = (PKSPIN_LOCK *)(v2 + 128);
        v5 = 2LL;
        do
        {
          PpmIdleSnapConcurrency(*v4, v3 + v2 + 144);
          v3 += 48LL;
          ++v4;
          --v5;
        }
        while ( v5 );
      }
    }
    ++i;
  }
  return result;
}
