/*
 * XREFs of sub_180102310 @ 0x180102310
 * Callers:
 *     sub_18000DDA0 @ 0x18000DDA0 (sub_18000DDA0.c)
 *     sub_18000E224 @ 0x18000E224 (sub_18000E224.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_18001D964 @ 0x18001D964 (sub_18001D964.c)
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_18006128C @ 0x18006128C (sub_18006128C.c)
 *     sub_180078084 @ 0x180078084 (sub_180078084.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     sub_180090C78 @ 0x180090C78 (sub_180090C78.c)
 *     sub_18009100C @ 0x18009100C (sub_18009100C.c)
 *     sub_180100F68 @ 0x180100F68 (sub_180100F68.c)
 *     sub_180101730 @ 0x180101730 (sub_180101730.c)
 * Callees:
 *     <none>
 */

struct _PEB *sub_180102310()
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  if ( result->BeingDebugged )
  {
    __debugbreak();
    byte_180159690 = 0;
  }
  return result;
}
