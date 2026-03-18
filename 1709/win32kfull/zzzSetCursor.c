/*
 * XREFs of zzzSetCursor @ 0x1C0098174
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0096704 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     NtUserSetCursor @ 0x1C009A9A0 (NtUserSetCursor.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzHideCursorNoCapture @ 0x1C01A10C0 (zzzHideCursorNoCapture.c)
 *     xxxSwitchWndProc @ 0x1C01D1410 (xxxSwitchWndProc.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DC988 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C01DE8F8 (xxxInitializeMoveSizeData.c)
 *     xxxDragObject @ 0x1C02134AC (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C0219F1C (xxxHelpLoop.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0089310 (zzzUpdateCursorImage.c)
 *     _GetCurrentLogicalCursorThread @ 0x1C0098230 (_GetCurrentLogicalCursorThread.c)
 */

__int64 __fastcall zzzSetCursor(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-48h]
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(GetCurrentLogicalCursorThread() + 408);
  v3 = *(_QWORD *)(v2 + 368);
  if ( v3 != a1 )
  {
    *(_QWORD *)&v7 = v2 + 368;
    *((_QWORD *)&v7 + 1) = a1;
    v8 = v7;
    v3 = HMAssignmentLock(&v8);
    if ( !gpqCursor )
      MEMORY[0] = v2;
    if ( v2 == gpqCursor )
    {
      v9[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v9;
      v9[1] = v3;
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      zzzUpdateCursorImage();
      return ThreadUnlock1(v6, v5);
    }
  }
  return v3;
}
