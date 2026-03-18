/*
 * XREFs of ?BlendModeToWarpBlendMode@@YA?AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z @ 0x1801BF2A4
 * Callers:
 *     ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x1801BF410 (-Render@CWARPCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BlendModeToWarpBlendMode(int a1)
{
  __int64 result; // rax

  if ( a1 > 17 )
  {
    if ( a1 >= 19 )
    {
      if ( a1 <= 20 )
        return 2LL;
      switch ( a1 )
      {
        case 21:
          return 8LL;
        case 22:
          return 9LL;
        case 23:
          return 10LL;
      }
    }
    return 0LL;
  }
  result = 4LL;
  if ( a1 != 17 )
  {
    if ( !a1 || a1 == 4 )
      return 1LL;
    if ( a1 != 15 )
      return 0LL;
  }
  return result;
}
