/*
 * XREFs of sub_1800833C0 @ 0x1800833C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005D87C @ 0x18005D87C (sub_18005D87C.c)
 */

__int64 __fastcall sub_1800833C0(__int64 a1, __int128 *a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a2;
  v3 = sub_18005D87C(0, 0LL, 0LL, &v5);
  result = 0LL;
  if ( v3 )
  {
    *(_QWORD *)(a1 - 8) = v3;
    return 1LL;
  }
  return result;
}
