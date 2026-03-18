/*
 * XREFs of EditionIsGpqForegroundAccessible @ 0x1C01B4E90
 * Callers:
 *     <none>
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C004FB70 (MSGLUA_GPQFOREGROUND.c)
 *     IsGpqForegroundAccessible @ 0x1C0050654 (IsGpqForegroundAccessible.c)
 */

__int64 __fastcall EditionIsGpqForegroundAccessible(unsigned int a1)
{
  if ( (unsigned int)IsGpqForegroundAccessible(a1) )
    return 1LL;
  MSGLUA_GPQFOREGROUND();
  return 0LL;
}
