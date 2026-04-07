/*
 * XREFs of Template_pddddddd @ 0x1800936F4
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180008E0C (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180092210 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_pddddddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  _QWORD v11[18]; // [rsp+20h] [rbp-79h] BYREF
  __int64 v12; // [rsp+E0h] [rbp+47h] BYREF
  int v13; // [rsp+E8h] [rbp+4Fh] BYREF

  v13 = a4;
  v12 = a3;
  v11[0] = &v12;
  v11[3] = 4LL;
  v11[2] = &v13;
  v11[5] = 4LL;
  v11[4] = &a5;
  v11[1] = 8LL;
  v11[6] = &a6;
  v11[8] = &a7;
  v11[10] = &a8;
  v11[12] = &a9;
  v11[14] = &a10;
  v11[7] = 4LL;
  v11[9] = 4LL;
  v11[11] = 4LL;
  v11[13] = 4LL;
  v11[15] = 4LL;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmSystemAnimation_CreateVisual, 8LL, v11);
}
