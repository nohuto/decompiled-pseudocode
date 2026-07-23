/*
 * XREFs of TpWaitForJobNotification @ 0x1800560F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     sub_180056190 @ 0x180056190 (sub_180056190.c)
 *     sub_18005649C @ 0x18005649C (sub_18005649C.c)
 */

int __fastcall TpWaitForJobNotification(_RTL_SRWLOCK *a1)
{
  int result; // eax

  result = sub_18005649C(a1, 0LL);
  if ( result )
  {
    sub_180056190(a1);
    return sub_180055584(a1 + 16, 0, 1);
  }
  return result;
}
