/*
 * XREFs of EditionPostMouseMoveToQ @ 0x1C0047430
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 */

__int64 __fastcall EditionPostMouseMoveToQ(
        struct tagMLIST *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        struct tagINPUT_MESSAGE_SOURCE *a6)
{
  return PostInputMessage(a1, 0LL, 0x200u, a2, a3, a4, a5, 0, a6, 0LL, 0LL);
}
