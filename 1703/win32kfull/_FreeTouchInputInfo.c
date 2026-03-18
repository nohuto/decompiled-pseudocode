/*
 * XREFs of _FreeTouchInputInfo @ 0x1C01B8360
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     UnlinkSendListSms @ 0x1C0049380 (UnlinkSendListSms.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     fnHkINLPMSG @ 0x1C0054DB0 (fnHkINLPMSG.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 *     CleanInputMessage @ 0x1C00CB8DC (CleanInputMessage.c)
 *     ForwardTouchMessage @ 0x1C01B81B4 (ForwardTouchMessage.c)
 *     NtUserGetTouchInputInfo @ 0x1C01DAAF0 (NtUserGetTouchInputInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeTouchInputInfo(unsigned __int64 a1)
{
  _DWORD *v1; // rax

  v1 = (_DWORD *)HMValidateHandleNoSecure(a1, 20);
  if ( !v1 || *(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v1 + gSharedInfo[1] + 24LL) != 20 )
    return 0LL;
  HMDestroyObject(v1);
  return 1LL;
}
