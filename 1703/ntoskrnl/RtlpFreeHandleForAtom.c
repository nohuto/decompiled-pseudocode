/*
 * XREFs of RtlpFreeHandleForAtom @ 0x14043139C
 * Callers:
 *     RtlpFreeAllAtom @ 0x1400187A8 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x1406E9560 (RtlEmptyAtomTable.c)
 * Callees:
 *     ExDestroyHandle @ 0x1404F81FC (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x1404FA960 (ExMapHandleToPointer.c)
 */

void __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h]

  v5 = 4 * (unsigned int)*(unsigned __int16 *)(a2 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExMapHandleToPointer(*(_QWORD *)(a1 + 16), v5);
  if ( v4 )
    ExDestroyHandle(*(_QWORD *)(a1 + 16), v5, v4);
  KeLeaveCriticalRegion();
}
