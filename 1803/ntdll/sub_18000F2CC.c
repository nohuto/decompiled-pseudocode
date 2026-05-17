/*
 * XREFs of sub_18000F2CC @ 0x18000F2CC
 * Callers:
 *     sub_18000C4A0 @ 0x18000C4A0 (sub_18000C4A0.c)
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     RtlUnwindEx @ 0x18000DEA0 (RtlUnwindEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18000F2CC(_QWORD *a1, PVOID *a2)
{
  struct _TEB *v2; // r8
  _UNKNOWN **StackLimit; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v2 = NtCurrentTeb();
  *a2 = v2->NtTib.StackBase;
  StackLimit = (_UNKNOWN **)v2->NtTib.StackLimit;
  *a1 = StackLimit;
  return StackLimit <= &retaddr && &retaddr < *a2;
}
