/*
 * XREFs of MiInitializeBlankPfns @ 0x14082AE10
 * Callers:
 *     MxCreateFreePfns @ 0x14082A9F8 (MxCreateFreePfns.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiInitializeBlankPfns(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // r9
  __int64 *v9; // r11
  __int64 v10; // r10
  __int64 *v11; // r8
  __int64 *v12; // rcx
  __int64 v13; // [rsp+40h] [rbp-18h]

  v13 = 0LL;
  if ( a2 == -1 )
    v5 = 1LL;
  else
    v5 = MiLargePageSizes[a2];
  v6 = 4294967293LL;
  if ( a5 )
    v6 = 0LL;
  result = MiUpdatePageFileHighInPte(0LL, v6);
  v10 = result;
  v11 = &v9[6 * v5];
  if ( v9 != v11 )
  {
    v12 = v9 + 2;
    do
    {
      *(v12 - 2) = 0LL;
      *(v12 - 1) = 0LL;
      *v12 = v10;
      v12[1] = 0LL;
      BYTE2(v13) = a5 & 7 | 0x40;
      v12[2] = v13;
      v12[3] = v8;
      v12 += 6;
      result = (__int64)(v12 - 2);
    }
    while ( v12 - 2 != v11 );
  }
  return result;
}
