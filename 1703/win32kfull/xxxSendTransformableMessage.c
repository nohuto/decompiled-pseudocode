/*
 * XREFs of xxxSendTransformableMessage @ 0x1C01E6D28
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendTransformableMessage(
        ULONG_PTR a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        int a5)
{
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(a1, a2, a3, a4, 0, 0, 0LL, 1, a5);
}
