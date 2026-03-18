/*
 * XREFs of ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C010B570
 * Callers:
 *     WakeSomeone @ 0x1C004C0C0 (WakeSomeone.c)
 * Callees:
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0049220 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

_BOOL8 __fastcall ShouldAddPointerWakeFlag(const struct tagTHREADINFO *a1, const struct tagQMSG *a2)
{
  __int64 v2; // r10
  _QWORD *v3; // r11

  return a2
      && (unsigned int)IsGenuineMouseInput((const struct tagQMSG *)((char *)a2 + 120))
      && IsMouseInPointerActive(v3, v2);
}
