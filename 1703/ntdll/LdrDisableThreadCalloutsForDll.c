/*
 * XREFs of LdrDisableThreadCalloutsForDll @ 0x18007E0D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030264 @ 0x180030264 (sub_180030264.c)
 */

__int64 __fastcall LdrDisableThreadCalloutsForDll(unsigned __int64 a1)
{
  int v1; // ebx
  unsigned __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  if ( !byte_18015B388 )
  {
    v1 = sub_180030264(a1, (__int64 *)&v5, &v4);
    if ( v1 >= 0 )
    {
      v2 = v5;
      if ( !*(_WORD *)(v5 + 110) )
        *(_BYTE *)(v5 + 106) |= 4u;
      sub_18003015C(v2);
    }
  }
  return (unsigned int)v1;
}
