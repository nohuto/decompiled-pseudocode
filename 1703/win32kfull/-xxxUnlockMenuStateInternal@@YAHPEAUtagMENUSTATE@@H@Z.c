/*
 * XREFs of ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01EAAA8
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C003BBCC (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01BC3E8 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     NtUserMNDragLeave @ 0x1C01DCB50 (NtUserMNDragLeave.c)
 *     xxxUnlockMenuState @ 0x1C01EBBA0 (xxxUnlockMenuState.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0212C20 (xxxMNDragOver.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxMNEndMenuState @ 0x1C01EB210 (xxxMNEndMenuState.c)
 */

__int64 __fastcall xxxUnlockMenuStateInternal(struct tagMENUSTATE *a1, int a2)
{
  int v3; // r9d

  if ( (*((_DWORD *)a1 + 10))-- != 1 )
    return 0LL;
  v3 = *((_DWORD *)a1 + 2);
  if ( (v3 & 4) != 0 && (**(_DWORD **)a1 & 0x8000) == 0 )
    return 0LL;
  if ( !a2 && (v3 & 0x1000000) == 0 )
    return 0LL;
  xxxMNEndMenuState(a1);
  return 1LL;
}
