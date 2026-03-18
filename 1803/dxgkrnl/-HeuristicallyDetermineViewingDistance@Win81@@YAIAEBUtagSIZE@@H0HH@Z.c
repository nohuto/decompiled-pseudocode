/*
 * XREFs of ?HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0HH@Z @ 0x1C01E2940
 * Callers:
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C01E2580 (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z.c)
 * Callees:
 *     ?IsNativeResolutionOnlyTVTiming@Win81@@YAHUtagSIZE@@H@Z @ 0x1C01E2AF0 (-IsNativeResolutionOnlyTVTiming@Win81@@YAHUtagSIZE@@H@Z.c)
 *     ?IsNetbookResolution@Win81@@YAHUtagSIZE@@@Z @ 0x1C01E2B58 (-IsNetbookResolution@Win81@@YAHUtagSIZE@@@Z.c)
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
  int v10; // edx
  unsigned __int64 v11; // r8
  int v12; // r9d
  int v13; // ecx
  int v14; // r8d

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
  if ( v8 <= 0x15F90 )
    return 280LL;
  v10 = 1;
  v11 = (unsigned __int64)*a3 >> 32;
  v12 = v11;
  if ( (unsigned int)*a3 == 1920 && (v13 = 1080, (_DWORD)v11 == 1080) )
  {
    v14 = 1;
  }
  else
  {
    v14 = 0;
    v13 = v12;
  }
  if ( (unsigned int)*a3 != 3840 || v13 != 2160 )
    v10 = 0;
  if ( !v14 && !v10 )
    return 280LL;
  result = 840LL;
  if ( !a5 )
    return 280LL;
  return result;
}
