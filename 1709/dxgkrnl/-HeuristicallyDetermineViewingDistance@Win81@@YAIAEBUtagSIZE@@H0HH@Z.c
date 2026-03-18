/*
 * XREFs of ?HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0HH@Z @ 0x1C01D8458
 * Callers:
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C01D80FC (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z.c)
 * Callees:
 *     ?IsNativeResolutionOnlyTVTiming@Win81@@YAHUtagSIZE@@H@Z @ 0x1C01D85E4 (-IsNativeResolutionOnlyTVTiming@Win81@@YAHUtagSIZE@@H@Z.c)
 *     ?IsNetbookResolution@Win81@@YAHUtagSIZE@@@Z @ 0x1C01D864C (-IsNetbookResolution@Win81@@YAHUtagSIZE@@@Z.c)
 */

__int64 __fastcall Win81::HeuristicallyDetermineViewingDistance(
        Win81 *this,
        const struct tagSIZE *a2,
        Win81 **a3,
        const struct tagSIZE *a4,
        int a5)
{
  __int64 result; // rax
  struct tagSIZE v7; // rdx
  unsigned int v8; // r10d
  int v9; // r11d

  if ( !(unsigned int)(10000LL
                     * (*(_DWORD *)this * *(_DWORD *)this + *((_DWORD *)this + 1) * *((_DWORD *)this + 1))
                     / 0xFC04uLL)
    || (unsigned int)Win81::IsNativeResolutionOnlyTVTiming(*a3, (struct tagSIZE)(unsigned int)a4, (int)a3) && !v9 )
  {
    return 840LL;
  }
  if ( v8 < 0x1FA4 )
    return 163LL;
  if ( v8 < 0x4204 && !(unsigned int)Win81::IsNetbookResolution(*a3, v7) )
    return 200LL;
  if ( v8 < 0x57E4 )
    return 245LL;
  if ( v8 < 0x7E90 )
    return v9 != 0 ? 245 : 280;
  if ( v8 <= 0x15F90 || *a3 != (Win81 *)0x43800000780LL && *a3 != (Win81 *)0x87000000F00LL )
    return 280LL;
  result = 840LL;
  if ( !a5 )
    return 280LL;
  return result;
}
