/*
 * XREFs of PostEventMessage @ 0x1C01C0B9C
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C006DA90 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 */

__int64 __fastcall PostEventMessage(
        struct tagTHREADINFO *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  return PostEventMessageEx(a1, a2, a3, a4, a5, a6, a7, 0LL);
}
