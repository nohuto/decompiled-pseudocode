/*
 * XREFs of ?UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z @ 0x180018248
 * Callers:
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x18000ECD0 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 * Callees:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProcess@@@Z @ 0x180014D84 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProc.c)
 *     WPP_SF_dSd @ 0x180017AA8 (WPP_SF_dSd.c)
 */

__int64 __fastcall CPlaybackManager::UseOfResourceAllowed(
        CPlaybackManager *this,
        struct CProcess *a2,
        unsigned int a3,
        enum ResourceType a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi

  v4 = 0;
  v5 = a3;
  if ( a4 )
  {
    if ( a4 == ResourceTypeTheme )
      LOBYTE(v4) = (unsigned int)CApplicationManager::GetSoundLevel(this, (__int64)a2) != 0;
  }
  else if ( (a3 - 10 <= 1 || a3 - 1 <= 1) && (unsigned int)CApplicationManager::GetSoundLevel(this, (__int64)a2) )
  {
    v4 = 1;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dSd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xFu,
      &WPP_a368ca27e3b33483ffe51d7896b5e1e1_Traceguids,
      *((unsigned int *)a2 + 54),
      off_18002B0D0[v5],
      v4);
  }
  return v4;
}
