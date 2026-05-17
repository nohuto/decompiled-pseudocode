/*
 * XREFs of TpWaitForJobNotification @ 0x180080E80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     sub_180080F20 @ 0x180080F20 (sub_180080F20.c)
 *     sub_1800811F0 @ 0x1800811F0 (sub_1800811F0.c)
 */

__int64 __fastcall TpWaitForJobNotification(__int64 a1)
{
  __int64 result; // rax

  result = sub_1800811F0(a1, 0LL);
  if ( (_DWORD)result )
  {
    sub_180080F20(a1);
    return sub_18007358C((volatile signed __int64 *)(a1 + 128), 0, 1);
  }
  return result;
}
