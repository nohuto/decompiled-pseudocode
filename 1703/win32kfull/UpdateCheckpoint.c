/*
 * XREFs of UpdateCheckpoint @ 0x1C001D3E8
 * Callers:
 *     _GetWindowPlacement @ 0x1C001CFF0 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C0101008 (xxxSetWindowPlacement.c)
 *     WPUpdateCheckPointSettings @ 0x1C0101708 (WPUpdateCheckPointSettings.c)
 *     xxxSetInternalWindowPos @ 0x1C01D2BBC (xxxSetInternalWindowPos.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F20A8 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C001D438 (CkptRestore.c)
 *     GetRect @ 0x1C0062FEC (GetRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateCheckpoint(__int64 a1)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  GetRect(a1, v3, 66LL);
  return CkptRestore(a1, v3);
}
