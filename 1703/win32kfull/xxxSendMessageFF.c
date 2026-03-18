/*
 * XREFs of xxxSendMessageFF @ 0x1C0139E00
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendMessageFF(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        unsigned __int64 a5)
{
  if ( a5 )
    return xxxSendMessageEx(-1, a2, a3, (int)a4, a5);
  else
    return xxxSendTransformableMessageTimeout(0xFFFFFFFFFFFFFFFFuLL, a2, a3, a4, 0, 0, 0LL, 0, 1);
}
