/*
 * XREFs of sub_1800313AC @ 0x1800313AC
 * Callers:
 *     sub_1800313E0 @ 0x1800313E0 (sub_1800313E0.c)
 *     RtlUnwindEx @ 0x180033870 (RtlUnwindEx.c)
 *     sub_180034E60 @ 0x180034E60 (sub_180034E60.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800313AC(_QWORD *a1, PVOID *a2)
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
