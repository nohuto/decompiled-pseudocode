/*
 * XREFs of LdrDisableThreadCalloutsForDll @ 0x180079BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 */

__int64 __fastcall LdrDisableThreadCalloutsForDll(unsigned __int64 a1)
{
  int v1; // ebx
  unsigned __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  if ( !byte_18015C3A8 )
  {
    v1 = sub_18001FA3C(a1, (__int64 *)&v5, &v4);
    if ( v1 >= 0 )
    {
      v2 = v5;
      if ( !*(_WORD *)(v5 + 110) )
        *(_BYTE *)(v5 + 106) |= 4u;
      sub_18001F5FC(v2);
    }
  }
  return (unsigned int)v1;
}
