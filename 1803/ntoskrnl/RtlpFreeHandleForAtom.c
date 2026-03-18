/*
 * XREFs of RtlpFreeHandleForAtom @ 0x140547F54
 * Callers:
 *     RtlpFreeAllAtom @ 0x1400A1438 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x140784AE0 (RtlEmptyAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExMapHandleToPointer @ 0x1404B7800 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x140512040 (ExDestroyHandle.c)
 */

void __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h]

  v5 = 4 * (unsigned int)*(unsigned __int16 *)(a2 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExMapHandleToPointer(*(_QWORD *)(a1 + 16), v5);
  if ( v4 )
    ExDestroyHandle(*(_QWORD *)(a1 + 16), v5, v4);
  KeLeaveCriticalRegion();
}
