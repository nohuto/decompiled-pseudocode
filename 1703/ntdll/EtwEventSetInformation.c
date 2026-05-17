/*
 * XREFs of EtwEventSetInformation @ 0x180019E30
 * Callers:
 *     sub_180086558 @ 0x180086558 (sub_180086558.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwEventSetInformation(__int64 a1, int a2, __int64 a3, int a4)
{
  int v4; // edx

  if ( a2 )
  {
    v4 = a2 - 2;
    if ( !v4 )
    {
      if ( a3 && (unsigned int)(a4 - 3) <= 0xFFFC )
        return sub_180019E6C(a1, a3, (unsigned __int16)a4);
      return 87LL;
    }
    if ( v4 != 1 )
      return 50LL;
    if ( a3 && a4 == 1 )
      return sub_180104668(a1, a3);
    return 87LL;
  }
  if ( a4 )
    return 87LL;
  return sub_18008354C();
}
