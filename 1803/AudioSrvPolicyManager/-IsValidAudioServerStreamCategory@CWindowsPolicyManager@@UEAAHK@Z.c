/*
 * XREFs of ?IsValidAudioServerStreamCategory@CWindowsPolicyManager@@UEAAHK@Z @ 0x180009600
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 */

__int64 __fastcall CWindowsPolicyManager::IsValidAudioServerStreamCategory(
        CWindowsPolicyManager *this,
        unsigned int a2)
{
  if ( a2 < 0x15 )
    return 1LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_d56c88153a89393ab450fa25117cb8b9_Traceguids, a2);
  }
  return 0LL;
}
