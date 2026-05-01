/*
 * XREFs of ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x1800924CC
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180063A50 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     wil::details::functor_wrapper_void__lambda_576aa915576816ac157655134c5675a7__&___ptr64_::Run @ 0x180089F80 (wil--details--functor_wrapper_void__lambda_576aa915576816ac157655134c5675a7__-___ptr64_--Run.c)
 *     ?GetCortanaHeightForImmersiveSearch@@YAHXZ @ 0x180185AE8 (-GetCortanaHeightForImmersiveSearch@@YAHXZ.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@@Z @ 0x180185B84 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x1800906D4 (-getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetDWORD(CortanaFeatureConfiguration *a1, _DWORD *a2)
{
  struct CortanaFeatureConfiguration::FeatureBehaviorMap *SharedFeatureTable; // rax
  __int64 v4; // r10
  int v5; // ebx
  CortanaFeatureConfiguration *v6; // rcx
  CortanaFeatureConfiguration *v7; // rcx
  struct CortanaFeatureConfiguration::FeatureBehaviorMap *v8; // rax
  __int64 v9; // r11
  int v10; // r10d

  SharedFeatureTable = CortanaFeatureConfiguration::getSharedFeatureTable(a1);
  v5 = *((_DWORD *)SharedFeatureTable + 6 * v4 + 3);
  CortanaFeatureConfiguration::getSharedFeatureTable(v6);
  v8 = CortanaFeatureConfiguration::getSharedFeatureTable(v7);
  return CortanaFeatureConfiguration::GetDWORDCore(*((WCHAR **)v8 + v9), v10, v5, a2);
}
