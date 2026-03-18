/*
 * XREFs of ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C012F490
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C012FD50 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionGetActiveHKL @ 0x1C00668D4 (ApiSetEditionGetActiveHKL.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     xxxProcessKeyEvent @ 0x1C0130400 (xxxProcessKeyEvent.c)
 */

void __fastcall RemoteSyncToggleKeys(int a1)
{
  unsigned int v1; // ecx
  int v2; // ebx
  _BYTE v3[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v4; // [rsp+32h] [rbp-2Eh]
  __int64 v5; // [rsp+38h] [rbp-28h]

  v5 = 0LL;
  v1 = a1 | 0x8000;
  HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = v1;
  if ( gpqForeground )
  {
    v2 = (v1 >> 14) & 1;
    if ( ((v1 & 4) == 0) != ((~byte_1C01A09C5 & 2) != 0) )
    {
      v3[0] = 58;
      v4 = 20;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL);
      v3[0] = 58;
      v4 = -32748;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL);
    }
    if ( ((BYTE4(WPP_MAIN_CB.Queue.Wcb.DeviceContext) & 2) == 0) != ((~byte_1C01A09E4 & 2) != 0) )
    {
      v3[0] = 69;
      v4 = 144;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL);
      v3[0] = 69;
      v4 = -32624;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL);
    }
    if ( ((BYTE4(WPP_MAIN_CB.Queue.Wcb.DeviceContext) & 1) == 0) != ((~byte_1C01A09E4 & 8) != 0) )
    {
      v3[0] = 70;
      v4 = 145;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL);
      v3[0] = 70;
      v4 = -32623;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL);
    }
    if ( (ApiSetEditionGetActiveHKL() & 0x3FF) == 0x11
      && ((BYTE4(WPP_MAIN_CB.Queue.Wcb.DeviceContext) & 8) == 0) != ((~byte_1C01A09C5 & 8) != 0) )
    {
      v3[0] = 112;
      v4 = 21;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL);
      v3[0] = 112;
      v4 = -32747;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL);
    }
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 0;
  }
}
