/*
 * XREFs of xxxSendSizeMessage @ 0x1C003C8A0
 * Callers:
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     _GetClientRect @ 0x1C003C920 (_GetClientRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendSizeMessage(__int64 a1, int a2)
{
  int v3; // edi
  _WORD v5[12]; // [rsp+50h] [rbp-18h] BYREF

  v3 = a1;
  GetClientRect(a1, v5);
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(
           v3,
           5,
           a2,
           (unsigned __int16)(v5[4] - v5[0]) | ((unsigned __int16)(v5[6] - v5[2]) << 16),
           0,
           0,
           0LL,
           1,
           0);
}
