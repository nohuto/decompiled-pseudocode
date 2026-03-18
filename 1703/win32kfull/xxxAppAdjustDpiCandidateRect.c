/*
 * XREFs of xxxAppAdjustDpiCandidateRect @ 0x1C01C0CF0
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0064A4C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C009E0F0 (NtUserUpdateLayeredWindow.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00FB81C (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?zzzNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00FBBB8 (-zzzNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     HasMaximizedState @ 0x1C006138C (HasMaximizedState.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0063098 (IsWindowBroadcastingDpiToChildrenX.c)
 */

__int64 __fastcall xxxAppAdjustDpiCandidateRect(_BYTE *a1, unsigned __int16 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+24h] [rbp-14h]

  v8 = 0;
  if ( (unsigned int)IsWindowBroadcastingDpiToChildrenX((__int64)a1) )
  {
    if ( !(unsigned int)HasMaximizedState(a1) )
    {
      v10 = a3[2] - *a3;
      v11 = a3[3] - a3[1];
      if ( xxxSendMessage((int)a1, 740, a2, (int)&v10) )
      {
        v8 = 1;
        a4[1] = a3[1];
        *a4 = *a3;
        a4[2] = v10 + *a3;
        a4[3] = v11 + a3[1];
      }
    }
  }
  return v8;
}
