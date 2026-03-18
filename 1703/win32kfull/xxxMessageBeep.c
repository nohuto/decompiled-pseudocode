/*
 * XREFs of xxxMessageBeep @ 0x1C0137A80
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     ?EditionMessageBeep@@YAHK@Z @ 0x1C0196340 (-EditionMessageBeep@@YAHK@Z.c)
 *     xxxMNChar @ 0x1C020497C (xxxMNChar.c)
 *     xxxFlashEnabledPopup @ 0x1C020DC94 (xxxFlashEnabledPopup.c)
 *     xxxMNKeyFilter @ 0x1C0219524 (xxxMNKeyFilter.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00DA5D4 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxSoundSentry @ 0x1C0119A28 (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C019634C (xxxOldMessageBeep.c)
 */

__int64 __fastcall xxxMessageBeep(__int64 a1)
{
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) != 0 )
  {
    xxxOldMessageBeep(a1, 4LL, (unsigned int)a1);
  }
  else
  {
    if ( (gdwPUDFlags & 0x80000) != 0 )
      CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
    xxxSoundSentry();
  }
  return 1LL;
}
