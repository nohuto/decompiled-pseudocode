/*
 * XREFs of SmFixSingleBitCorruption @ 0x1402A6534
 * Callers:
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1402A4F98 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x1400AE6F0 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 */

__int64 __fastcall SmFixSingleBitCorruption(unsigned __int8 *a1, unsigned __int64 a2, int a3)
{
  unsigned __int8 *v3; // r12
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int8 *v9; // rax
  char v10; // cl
  int v11; // ebp
  unsigned __int8 v12; // r14
  __int64 result; // rax
  int v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp+10h]
  int v16; // [rsp+70h] [rbp+18h]

  v16 = a3;
  v15 = a2;
  v3 = a1 - 1;
  v4 = 8 * a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( !(8 * a2) )
    return 0LL;
  do
  {
    v9 = v3 + 1;
    v10 = v7 & 7;
    if ( (v7 & 7) != 0 )
      v9 = v3;
    v11 = 1 << v10;
    v3 = v9;
    v12 = *v9 ^ (1 << v10);
    *v9 = v12;
    MetroHash64::Hash(a1, a2, (unsigned __int8 *const)&v14);
    if ( v14 == v16 )
    {
      ++v5;
      v6 = v7;
    }
    a2 = v15;
    ++v7;
    *v3 = v11 ^ v12;
  }
  while ( v7 < v4 );
  if ( v5 != 1 )
    return 0LL;
  result = 1LL;
  a1[v6 >> 3] ^= 1 << (v6 & 7);
  return result;
}
