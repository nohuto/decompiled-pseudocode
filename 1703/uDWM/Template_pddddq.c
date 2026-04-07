/*
 * XREFs of Template_pddddq @ 0x1800937C8
 * Callers:
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800089A8 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_pddddq(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7, char a8)
{
  _QWORD v9[14]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v10; // [rsp+C0h] [rbp+57h] BYREF
  int v11; // [rsp+C8h] [rbp+5Fh] BYREF

  v11 = a4;
  v10 = a3;
  v9[0] = &v10;
  v9[1] = 8LL;
  v9[2] = &v11;
  v9[3] = 4LL;
  v9[4] = &a5;
  v9[5] = 4LL;
  v9[6] = &a6;
  v9[8] = &a7;
  v9[10] = &a8;
  v9[7] = 4LL;
  v9[9] = 4LL;
  v9[11] = 4LL;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmSystemAnimation_ClipVisual, 6LL, v9);
}
