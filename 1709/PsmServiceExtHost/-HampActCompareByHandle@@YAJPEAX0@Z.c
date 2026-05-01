/*
 * XREFs of ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x180047350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HampActCompareByHandle(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8

  v2 = a2[5];
  if ( *a1 >= v2 )
    return *a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
