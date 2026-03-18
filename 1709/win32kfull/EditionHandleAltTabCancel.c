/*
 * XREFs of EditionHandleAltTabCancel @ 0x1C01122A0
 * Callers:
 *     <none>
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C004FB70 (MSGLUA_GPQFOREGROUND.c)
 *     IsGpqForegroundAccessibleExplicit @ 0x1C00560C4 (IsGpqForegroundAccessibleExplicit.c)
 *     xxxCancelCoolSwitch @ 0x1C0115384 (xxxCancelCoolSwitch.c)
 */

_BOOL8 __fastcall EditionHandleAltTabCancel(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        int a6,
        char a7)
{
  int v10; // ecx

  if ( !gspwndAltTab )
    return 0LL;
  if ( a4 )
    return 0LL;
  if ( a5 <= 0x12u )
  {
    v10 = 328192;
    if ( _bittest(&v10, a5) )
      return 0LL;
  }
  xxxCancelCoolSwitch();
  if ( (unsigned int)IsGpqForegroundAccessibleExplicit(a6, a1, a2) )
    return a5 == 27 && (a7 & 2) == 0;
  MSGLUA_GPQFOREGROUND();
  return 1LL;
}
