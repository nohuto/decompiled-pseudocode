/*
 * XREFs of _PostMessageExtended @ 0x1C00541EC
 * Callers:
 *     xxxTranslateMessage @ 0x1C005265C (xxxTranslateMessage.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C005410C (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00AB4B0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

struct tagQMSG *__fastcall PostMessageExtended(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagINPUT_MESSAGE_SOURCE *a5)
{
  return _PostTransformableMessageExtended(a1, a2, a3, a4, a5, 1);
}
