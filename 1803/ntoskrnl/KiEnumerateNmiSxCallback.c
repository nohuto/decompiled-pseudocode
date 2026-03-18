/*
 * XREFs of KiEnumerateNmiSxCallback @ 0x14015EB00
 * Callers:
 *     KiEnumerateCallback @ 0x14015EAA0 (KiEnumerateCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnumerateNmiSxCallback(PVOID **a1, unsigned __int8 *a2, _QWORD *a3)
{
  PVOID *v3; // r9
  PVOID *v4; // r10
  unsigned __int8 CurrentIrql; // al
  __int64 result; // rax

  v3 = *a1;
  v4 = &KiNmiCallbackListHead;
  if ( *a1 != &KiNmiCallbackListHead
    && (v3
     || (CurrentIrql = KeGetCurrentIrql(),
         __writecr8(2uLL),
         *a2 = CurrentIrql,
         (v3 = (PVOID *)KiNmiCallbackListHead) != 0LL)) )
  {
    *a3 = v3[1];
    if ( *v3 )
      v4 = (PVOID *)*v3;
    result = 1LL;
    *a1 = v4;
  }
  else
  {
    __writecr8(*a2);
    return 0LL;
  }
  return result;
}
