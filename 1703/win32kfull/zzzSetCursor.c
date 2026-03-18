/*
 * XREFs of zzzSetCursor @ 0x1C0041A08
 * Callers:
 *     NtUserSetCursor @ 0x1C003E520 (NtUserSetCursor.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00408F0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzHideCursorNoCapture @ 0x1C0195F70 (zzzHideCursorNoCapture.c)
 *     xxxSwitchWndProc @ 0x1C01CD060 (xxxSwitchWndProc.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F56B4 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C01F76A4 (xxxInitializeMoveSizeData.c)
 *     xxxDragObject @ 0x1C0211F88 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C0218D34 (xxxHelpLoop.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0049A60 (zzzUpdateCursorImage.c)
 */

__int64 __fastcall zzzSetCursor(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(gptiCurrent + 384LL);
  result = *(_QWORD *)(v1 + 328);
  if ( result != a1 )
  {
    v7 = a1;
    v6 = v1 + 328;
    result = HMAssignmentLock(&v6);
    if ( !gpqCursor )
      MEMORY[0] = v1;
    if ( v1 == gpqCursor )
    {
      v6 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v6;
      v7 = result;
      if ( result )
        ++*(_DWORD *)(result + 8);
      zzzUpdateCursorImage(&v6, v3);
      return ThreadUnlock1(v5, v4);
    }
  }
  return result;
}
