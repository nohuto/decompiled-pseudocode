/*
 * XREFs of LdrSetImplicitPathOptions @ 0x1800D59F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030264 @ 0x180030264 (sub_180030264.c)
 */

__int64 __fastcall LdrSetImplicitPathOptions(unsigned __int64 a1, int a2)
{
  int v3; // eax
  int v4; // edi
  unsigned __int64 v5; // rcx
  int v7; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = 32512;
  if ( (dword_180158674 & 4) == 0 )
    v3 = 31488;
  if ( (~v3 & a2) != 0 || !a2 )
    return 3221225485LL;
  v4 = sub_180030264(a1, (__int64 *)&v8, &v7);
  if ( v4 >= 0 )
  {
    v5 = v8;
    *(_DWORD *)(v8 + 272) = a2;
    sub_18003015C(v5);
  }
  return (unsigned int)v4;
}
