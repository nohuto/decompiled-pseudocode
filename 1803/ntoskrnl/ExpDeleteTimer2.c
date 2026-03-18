/*
 * XREFs of ExpDeleteTimer2 @ 0x14052EE50
 * Callers:
 *     <none>
 * Callees:
 *     KeDisableTimer2 @ 0x140087498 (KeDisableTimer2.c)
 */

unsigned __int8 __fastcall ExpDeleteTimer2(__int64 a1)
{
  return KeDisableTimer2(a1, 1, 1, 0LL);
}
