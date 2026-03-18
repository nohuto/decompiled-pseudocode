/*
 * XREFs of xxxSendMessageFF @ 0x1C0142E80
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageEx @ 0x1C00EE970 (xxxSendMessageEx.c)
 */

ULONG_PTR __fastcall xxxSendMessageFF(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        ULONG64 a5)
{
  if ( a5 )
    return xxxSendMessageEx((__int64 *)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4, a5);
  else
    return xxxSendTransformableMessageTimeout((__int64 *)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4, 0, 0, 0LL, 0, 1);
}
