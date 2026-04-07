/*
 * XREFs of Template_dddd @ 0x1800877DC
 * Callers:
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x1800873C8 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x1800875D0 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_dddd(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6)
{
  _QWORD v7[10]; // [rsp+20h] [rbp-60h] BYREF
  int v8; // [rsp+A0h] [rbp+20h] BYREF
  int v9; // [rsp+A8h] [rbp+28h] BYREF

  v9 = a4;
  v8 = a3;
  v7[0] = &v8;
  v7[1] = 4LL;
  v7[2] = &v9;
  v7[3] = 4LL;
  v7[4] = &a5;
  v7[5] = 4LL;
  v7[6] = &a6;
  v7[7] = 4LL;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmGlassSheetAnimation_End, 4LL, v7);
}
