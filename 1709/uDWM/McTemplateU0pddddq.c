/*
 * XREFs of McTemplateU0pddddq @ 0x18008FCA8
 * Callers:
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180005F60 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x18006CE6C (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0pddddq(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7, char a8)
{
  _BYTE v9[16]; // [rsp+20h] [rbp-49h] BYREF
  __int64 *v10; // [rsp+30h] [rbp-39h]
  __int64 v11; // [rsp+38h] [rbp-31h]
  int *v12; // [rsp+40h] [rbp-29h]
  __int64 v13; // [rsp+48h] [rbp-21h]
  char *v14; // [rsp+50h] [rbp-19h]
  __int64 v15; // [rsp+58h] [rbp-11h]
  char *v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  char *v18; // [rsp+70h] [rbp+7h]
  __int64 v19; // [rsp+78h] [rbp+Fh]
  char *v20; // [rsp+80h] [rbp+17h]
  __int64 v21; // [rsp+88h] [rbp+1Fh]
  __int64 v22; // [rsp+C0h] [rbp+57h] BYREF
  int v23; // [rsp+C8h] [rbp+5Fh] BYREF

  v23 = a4;
  v22 = a3;
  v11 = 8LL;
  v10 = &v22;
  v13 = 4LL;
  v12 = &v23;
  v15 = 4LL;
  v14 = &a5;
  v17 = 4LL;
  v16 = &a6;
  v19 = 4LL;
  v18 = &a7;
  v20 = &a8;
  v21 = 4LL;
  return McGenEventWriteUM(
           &Microsoft_Windows_Dwm_Udwm_Provider_Context,
           &UdwmSystemAnimation_ClipVisual,
           7LL,
           (__int64)v9);
}
