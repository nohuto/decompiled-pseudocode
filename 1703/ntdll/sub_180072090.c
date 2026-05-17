/*
 * XREFs of sub_180072090 @ 0x180072090
 * Callers:
 *     sub_180072440 @ 0x180072440 (sub_180072440.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_18007210C @ 0x18007210C (sub_18007210C.c)
 *     sub_1800727DC @ 0x1800727DC (sub_1800727DC.c)
 */

__int64 __fastcall sub_180072090(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v5; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  v5 = a1;
  result = sub_1800727DC(a2, (char *)a1 + 18, a3, &v6, 0LL, &v7, &v5);
  if ( (int)result >= 0 && v5 )
  {
    if ( v6 )
      *v6 = *v5;
    sub_18007210C(a2);
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v5);
  }
  return result;
}
