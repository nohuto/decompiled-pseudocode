/*
 * XREFs of UpdateCheckpoint @ 0x1C004B848
 * Callers:
 *     WPUpdateCheckPointSettings @ 0x1C0049A34 (WPUpdateCheckPointSettings.c)
 *     xxxSetWindowPlacement @ 0x1C004A88C (xxxSetWindowPlacement.c)
 *     _GetWindowPlacement @ 0x1C004B5A0 (_GetWindowPlacement.c)
 *     xxxSetInternalWindowPos @ 0x1C01D2EAC (xxxSetInternalWindowPos.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01D9AC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C004B898 (CkptRestore.c)
 *     GetRect @ 0x1C0066ABC (GetRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateCheckpoint(__int64 a1)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  GetRect(a1, v3, 66LL);
  return CkptRestore(a1, v3);
}
