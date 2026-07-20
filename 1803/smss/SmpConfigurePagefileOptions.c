/*
 * XREFs of SmpConfigurePagefileOptions @ 0x14000C670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigurePagefileOptions(__int64 a1, __int64 a2, int *a3, int a4)
{
  int v4; // eax

  if ( a4 == 4 )
    v4 = *a3;
  else
    v4 = 0;
  SmpPagefileOnOsVolume = v4;
  return 0LL;
}
