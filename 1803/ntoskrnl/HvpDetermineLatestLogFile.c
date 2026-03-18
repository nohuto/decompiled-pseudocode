/*
 * XREFs of HvpDetermineLatestLogFile @ 0x140706224
 * Callers:
 *     HvAnalyzeLogFiles @ 0x1407056A4 (HvAnalyzeLogFiles.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HvpDetermineLatestLogFile(unsigned int *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d
  unsigned int v3; // eax

  v1 = *a1;
  v2 = a1[1];
  if ( *a1 >= v2 )
    v3 = v1 - v2;
  else
    v3 = v2 - v1;
  if ( v3 <= 0x7FFFFFFF )
    return v1 < v2;
  else
    return v1 >= v2;
}
