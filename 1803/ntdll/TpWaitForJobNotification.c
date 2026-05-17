/*
 * XREFs of TpWaitForJobNotification @ 0x1800560F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     sub_180056190 @ 0x180056190 (sub_180056190.c)
 *     sub_18005649C @ 0x18005649C (sub_18005649C.c)
 */

__int64 __fastcall TpWaitForJobNotification(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r9

  result = sub_18005649C(a1, 0LL);
  if ( (_DWORD)result )
  {
    sub_180056190(a1);
    return sub_180055584((volatile signed __int64 *)(a1 + 128), 0, (unsigned __int64 *)1, v3);
  }
  return result;
}
