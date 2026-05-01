/*
 * XREFs of ?GetIsFullScreen@CStartExperienceManager@@UEAAJPEAE@Z @ 0x180076A70
 * Callers:
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180079178 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStartExperienceManager::GetIsFullScreen(CStartExperienceManager *this, unsigned __int8 *a2)
{
  *a2 = *((_BYTE *)this + 316);
  return 0LL;
}
