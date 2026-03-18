/*
 * XREFs of EditionPostMouseWheelToForeground @ 0x1C01BC900
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 */

__int64 __fastcall EditionPostMouseWheelToForeground(
        unsigned int a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        struct tagINPUT_MESSAGE_SOURCE *a8,
        __int64 a9)
{
  return PostInputMessage(gpqForeground, 0LL, a1, a2, a3, a4, a5, a6, a7, a8, 0LL, a9);
}
