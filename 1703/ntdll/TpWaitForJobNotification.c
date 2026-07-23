/*
 * XREFs of TpWaitForJobNotification @ 0x180080E80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     sub_180080F20 @ 0x180080F20 (sub_180080F20.c)
 *     sub_1800811F0 @ 0x1800811F0 (sub_1800811F0.c)
 */

int __fastcall TpWaitForJobNotification(_RTL_SRWLOCK *a1)
{
  int result; // eax

  result = sub_1800811F0(a1, 0LL);
  if ( result )
  {
    sub_180080F20(a1);
    return sub_18007358C(a1 + 16, 0, 1);
  }
  return result;
}
