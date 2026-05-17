/*
 * XREFs of sub_18004CED4 @ 0x18004CED4
 * Callers:
 *     sub_18004D090 @ 0x18004D090 (sub_18004D090.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_18004CF50 @ 0x18004CF50 (sub_18004CF50.c)
 *     sub_18004D42C @ 0x18004D42C (sub_18004D42C.c)
 */

__int64 __fastcall sub_18004CED4(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v5; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  v5 = a1;
  result = sub_18004D42C(a2, (char *)a1 + 18, a3, &v6, 0LL, &v7, &v5);
  if ( (int)result >= 0 && v5 )
  {
    if ( v6 )
      *v6 = *v5;
    sub_18004CF50(a2);
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v5);
  }
  return result;
}
