/*
 * XREFs of Template_ddqqqqqqp @ 0x180090E68
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180006D50 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_ddqqqqqqp(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  _QWORD v12[20]; // [rsp+20h] [rbp-91h] BYREF
  int v13; // [rsp+F0h] [rbp+3Fh] BYREF
  int v14; // [rsp+F8h] [rbp+47h] BYREF

  v14 = a4;
  v13 = a3;
  v12[0] = &v13;
  v12[1] = 4LL;
  v12[2] = &v14;
  v12[3] = 4LL;
  v12[4] = &a5;
  v12[5] = 4LL;
  v12[6] = &a6;
  v12[8] = &a7;
  v12[10] = &a8;
  v12[12] = &a9;
  v12[14] = &a10;
  v12[16] = &a11;
  v12[7] = 4LL;
  v12[9] = 4LL;
  v12[11] = 4LL;
  v12[13] = 4LL;
  v12[15] = 4LL;
  v12[17] = 8LL;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmAnimationResource_ResourceHandles, 9LL, v12);
}
