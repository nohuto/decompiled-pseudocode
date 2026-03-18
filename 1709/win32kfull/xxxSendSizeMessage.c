/*
 * XREFs of xxxSendSizeMessage @ 0x1C0049940
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     xxxHandleWindowPosChanged @ 0x1C0113B28 (xxxHandleWindowPosChanged.c)
 * Callees:
 *     _GetClientRect @ 0x1C00499C0 (_GetClientRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendSizeMessage(ULONG_PTR BugCheckParameter2)
{
  _WORD v3[2]; // [rsp+50h] [rbp-18h] BYREF

  GetClientRect(BugCheckParameter2, v3);
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 0, 0LL, 1, 0);
}
