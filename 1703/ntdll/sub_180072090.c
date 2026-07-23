/*
 * XREFs of sub_180072090 @ 0x180072090
 * Callers:
 *     sub_180072440 @ 0x180072440 (sub_180072440.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_18007210C @ 0x18007210C (sub_18007210C.c)
 *     sub_1800727DC @ 0x1800727DC (sub_1800727DC.c)
 */

signed int __fastcall sub_180072090(char *a1, __int64 a2, __int64 a3)
{
  signed int result; // eax
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress = a1;
  result = sub_1800727DC(a2, a1 + 18, a3, &v6, 0LL, &v7, &BaseAddress);
  if ( result >= 0 && BaseAddress )
  {
    if ( v6 )
      *v6 = *(_QWORD *)BaseAddress;
    sub_18007210C(a2);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
