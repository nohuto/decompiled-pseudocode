/*
 * XREFs of ApiSetEditionHandleAndPostKeyEvent @ 0x1C0011784
 * Callers:
 *     xxxKeyEvent @ 0x1C0010760 (xxxKeyEvent.c)
 * Callees:
 *     CoreMsgSend @ 0x1C0011904 (CoreMsgSend.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionHandleAndPostKeyEvent(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        int a6,
        __int16 a7,
        __int16 a8,
        __int16 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int16 a14)
{
  __int64 v16; // rbx
  __int64 *v18; // rax
  unsigned int v19; // edi
  int v20; // edx
  int v22; // [rsp+20h] [rbp-78h]
  __int64 v23; // [rsp+70h] [rbp-28h]

  v16 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      288,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  if ( gInputAttemptedConnectionHandle )
  {
    v23 = 0LL;
    if ( gpqForeground )
    {
      v18 = *(__int64 **)(gpqForeground + 112);
      if ( v18 || (v18 = *(__int64 **)(gpqForeground + 120)) != 0LL )
        v23 = *v18;
    }
    CoreMsgSend(gInputAttemptedConnectionHandle);
  }
  v19 = 0;
  if ( (int)IsEditionHandleAndPostKeyEventSupported() >= 0 )
  {
    LOBYTE(v22) = a5;
    v19 = EditionHandleAndPostKeyEvent(a1, v16, a3, a4, v22, a6, a7, a8, a9, a10, a11, a12, a13, a14, v23);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v20) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      14,
      289,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  return v19;
}
