/*
 * XREFs of _PostThreadMessage @ 0x1C009E634
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C009E440 (NtUserPostThreadMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00AB4B0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     zzzCancelJournalling @ 0x1C011A924 (zzzCancelJournalling.c)
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C0120F4C (-EndShutdown@@YAXJ@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0122E58 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     zzzPostInertiaMessage @ 0x1C020DBB4 (zzzPostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1C009E6C0 (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  SetUnavailableInputSource(v9);
  return PostThreadMessageEx(a1, a2, a3, a4, v9);
}
