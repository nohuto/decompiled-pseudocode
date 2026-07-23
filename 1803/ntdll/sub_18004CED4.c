/*
 * XREFs of sub_18004CED4 @ 0x18004CED4
 * Callers:
 *     sub_18004D090 @ 0x18004D090 (sub_18004D090.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_18004CF50 @ 0x18004CF50 (sub_18004CF50.c)
 *     sub_18004D42C @ 0x18004D42C (sub_18004D42C.c)
 */

signed int __fastcall sub_18004CED4(char *a1, __int64 a2, __int64 a3)
{
  signed int result; // eax
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress = a1;
  result = sub_18004D42C(a2, a1 + 18, a3, &v6, 0LL, &v7, &BaseAddress);
  if ( result >= 0 && BaseAddress )
  {
    if ( v6 )
      *v6 = *(_QWORD *)BaseAddress;
    sub_18004CF50(a2);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
