/*
 * XREFs of _PostThreadMessage @ 0x1C00CBC1C
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     NtUserPostThreadMessage @ 0x1C00CBA30 (NtUserPostThreadMessage.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     zzzCancelJournalling @ 0x1C0110594 (zzzCancelJournalling.c)
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C011716C (-EndShutdown@@YAXJ@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C01182F4 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     zzzPostInertiaMessage @ 0x1C020AA48 (zzzPostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1C00CBC7C (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  SetUnavailableInputSource(v9);
  return PostThreadMessageEx(a1, a2, a3, a4, v9);
}
