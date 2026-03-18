/*
 * XREFs of _FreeGestureInfo @ 0x1C01F9C50
 * Callers:
 *     UnlinkSendListSms @ 0x1C00A17B0 (UnlinkSendListSms.c)
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     fnHkINLPMSG @ 0x1C00AA9D0 (fnHkINLPMSG.c)
 *     CleanInputMessage @ 0x1C0111FEC (CleanInputMessage.c)
 *     NtUserGetGestureExtArgs @ 0x1C01E55A0 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01E56E0 (NtUserGetGestureInfo.c)
 *     NtUserInjectGesture @ 0x1C01E83E0 (NtUserInjectGesture.c)
 *     SendGestureMessage @ 0x1C01F9904 (SendGestureMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeGestureInfo(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rax

  LOBYTE(a2) = 21;
  v4 = (_DWORD *)HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( !v4 || *(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v4 + gSharedInfo[1] + 24LL) != 21 )
    return 0LL;
  HMDestroyObject(v4);
  return 1LL;
}
