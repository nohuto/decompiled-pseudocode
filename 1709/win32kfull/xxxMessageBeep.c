/*
 * XREFs of xxxMessageBeep @ 0x1C013EAE0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     ?EditionMessageBeep@@YAHK@Z @ 0x1C01A1DC0 (-EditionMessageBeep@@YAHK@Z.c)
 *     xxxMNChar @ 0x1C02064C0 (xxxMNChar.c)
 *     xxxFlashEnabledPopup @ 0x1C020F4B8 (xxxFlashEnabledPopup.c)
 *     xxxMNKeyFilter @ 0x1C021A71C (xxxMNKeyFilter.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00E0DF4 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxSoundSentry @ 0x1C012362C (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C01A1DD4 (xxxOldMessageBeep.c)
 */

__int64 __fastcall xxxMessageBeep(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // rdx

  v4 = (unsigned int)a1;
  v5 = 4LL;
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 4) != 0 )
  {
    xxxOldMessageBeep(a1, 4LL, (unsigned int)a1);
  }
  else
  {
    if ( (gdwPUDFlags & 0x80000) != 0 )
      CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
    xxxSoundSentry(a1, v5, v4, a4);
  }
  return 1LL;
}
