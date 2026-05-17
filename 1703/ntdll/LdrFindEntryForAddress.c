/*
 * XREFs of LdrFindEntryForAddress @ 0x180076210
 * Callers:
 *     sub_180075EA0 @ 0x180075EA0 (sub_180075EA0.c)
 *     sub_180075FD4 @ 0x180075FD4 (sub_180075FD4.c)
 *     LdrInitShimEngineDynamic @ 0x1800D6C20 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180076258 @ 0x180076258 (sub_180076258.c)
 */

__int64 __fastcall LdrFindEntryForAddress(__int64 a1, unsigned __int64 *a2)
{
  int v3; // ebx
  unsigned __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    v3 = sub_180076258(a1, &v7, &v6);
    if ( v3 >= 0 )
    {
      v4 = v7;
      *a2 = v7;
      sub_18003015C(v4);
    }
  }
  else
  {
    return (unsigned int)-1073741515;
  }
  return (unsigned int)v3;
}
