/*
 * XREFs of ?EnsureProperties@CNaturalAnimationMarshaler@DirectComposition@@AEAAJW4Enum@NaturalMotionAnimationType@@@Z @ 0x1C01471C8
 * Callers:
 *     ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0147310 (-SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CNaturalAnimationMarshaler::EnsureProperties(_DWORD *a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = a1[39];
  result = 0LL;
  if ( v1 )
  {
    if ( v1 != 3 )
      return 3221225485LL;
  }
  else
  {
    a1[40] = 1060320051;
    a1[41] = 1028443341;
    a1[39] = 3;
  }
  return result;
}
