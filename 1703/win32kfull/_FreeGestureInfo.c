/*
 * XREFs of _FreeGestureInfo @ 0x1C01EF7C0
 * Callers:
 *     UnlinkSendListSms @ 0x1C0049380 (UnlinkSendListSms.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     fnHkINLPMSG @ 0x1C0054DB0 (fnHkINLPMSG.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 *     CleanInputMessage @ 0x1C00CB8DC (CleanInputMessage.c)
 *     NtUserGetGestureExtArgs @ 0x1C01D8C50 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01D8D90 (NtUserGetGestureInfo.c)
 *     NtUserInjectGesture @ 0x1C01DC1D0 (NtUserInjectGesture.c)
 *     SendGestureMessage @ 0x1C01EF47C (SendGestureMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeGestureInfo(unsigned __int64 a1)
{
  _DWORD *v1; // rax

  v1 = (_DWORD *)HMValidateHandleNoSecure(a1, 21);
  if ( !v1 || *(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v1 + gSharedInfo[1] + 24LL) != 21 )
    return 0LL;
  HMDestroyObject(v1);
  return 1LL;
}
