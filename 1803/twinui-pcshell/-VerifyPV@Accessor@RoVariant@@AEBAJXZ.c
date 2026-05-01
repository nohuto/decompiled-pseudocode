/*
 * XREFs of ?VerifyPV@Accessor@RoVariant@@AEBAJXZ @ 0x1800F9F00
 * Callers:
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x1800F9EC0 (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x18016EB4C (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180176800 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z @ 0x180176E14 (-GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z.c)
 *     ?GetRect@Accessor@RoVariant@@QEBAJPEAURect@Foundation@Windows@@@Z @ 0x1801C2230 (-GetRect@Accessor@RoVariant@@QEBAJPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoVariant::Accessor::VerifyPV(RoVariant::Accessor *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 2);
  if ( v1 == 7 )
    return 0LL;
  result = 2147650720LL;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return result;
}
