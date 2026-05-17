/*
 * XREFs of LdrSetImplicitPathOptions @ 0x1800CAE20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 */

__int64 __fastcall LdrSetImplicitPathOptions(unsigned __int64 a1, int a2)
{
  int v3; // edi
  unsigned __int64 v4; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (~((dword_1801596D4 & 4 | 0x7B) << 8) & a2) != 0 || !a2 )
    return 3221225485LL;
  v3 = sub_18001FA3C(a1, (__int64 *)&v7, &v6);
  if ( v3 >= 0 )
  {
    v4 = v7;
    *(_DWORD *)(v7 + 272) = a2;
    sub_18001F5FC(v4);
  }
  return (unsigned int)v3;
}
