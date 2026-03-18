/*
 * XREFs of HMValidateHandleNoRip @ 0x1C0053EA8
 * Callers:
 *     xxxCreateWindowSmIcon @ 0x1C0051CA4 (xxxCreateWindowSmIcon.c)
 *     xxxClientLoadImage @ 0x1C00522F0 (xxxClientLoadImage.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00538FC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxClientCopyImage @ 0x1C0053A84 (xxxClientCopyImage.c)
 *     xxxClientLoadMenu @ 0x1C0053BA0 (xxxClientLoadMenu.c)
 *     xxxEventWndProc @ 0x1C0053E10 (xxxEventWndProc.c)
 *     DestroyWindowSmIcon @ 0x1C005D7C8 (DestroyWindowSmIcon.c)
 *     _RegisterClassEx @ 0x1C0075704 (_RegisterClassEx.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C009E924 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     FindQMsg @ 0x1C00A86D0 (FindQMsg.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00C6290 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00DFCD0 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     DWP_GetIcon @ 0x1C010CAD8 (DWP_GetIcon.c)
 *     xxxSetClassData @ 0x1C011CDDC (xxxSetClassData.c)
 *     _CsDdeUninitialize @ 0x1C01217E0 (_CsDdeUninitialize.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C013EB70 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     _GetWindowIcon @ 0x1C0140914 (_GetWindowIcon.c)
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01CEDD0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CF95C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     NtUserUpdateInstance @ 0x1C01ED1B0 (NtUserUpdateInstance.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F4338 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F44C0 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxSetClassIcon @ 0x1C020C114 (xxxSetClassIcon.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRip(__int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  __int64 v6; // r14

  v3 = 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v5 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v6 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2])) >> 5);
    if ( (WORD1(a1) == *(_WORD *)(v5 + 26) || WORD1(a1) == 0xFFFF || !WORD1(a1) && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v5 + 25) & 1) == 0
      && *(_BYTE *)(v5 + 24) == a2 )
    {
      v3 = *(_QWORD *)(gpKernelHandleTable + 8 * v6);
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464) & 0x20000000) == 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0) & v3;
  if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
    return 0LL;
  return v3;
}
