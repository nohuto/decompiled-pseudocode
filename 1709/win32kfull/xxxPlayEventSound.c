/*
 * XREFs of xxxPlayEventSound @ 0x1C010EDC0
 * Callers:
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     xxxSnapWindow @ 0x1C013F298 (xxxSnapWindow.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00E0DF4 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall xxxPlayEventSound(__int64 a1, __int64 a2)
{
  RPC_BINDING_HANDLE *v2; // rbx

  if ( (gdwPUDFlags & 0x1000000) != 0 && (*(_DWORD *)(gptiCurrent + 464LL) & 4) == 0 )
  {
    v2 = CUserPlaySound::s_pUserPlaySound;
    UserSessionSwitchLeaveCrit(gptiCurrent, a2);
    CUserPlaySound::PlaySync(v2);
    EnterCrit(0LL, 1LL);
  }
  return 1LL;
}
