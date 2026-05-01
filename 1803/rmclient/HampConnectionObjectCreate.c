/*
 * XREFs of HampConnectionObjectCreate @ 0x18000471C
 * Callers:
 *     HamCreateActivityForProcess @ 0x1800041E0 (HamCreateActivityForProcess.c)
 *     HamCreateExtendedExecution @ 0x1800045B0 (HamCreateExtendedExecution.c)
 * Callees:
 *     memset_0 @ 0x180007B70 (memset_0.c)
 */

__int64 __fastcall HampConnectionObjectCreate(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *Heap; // rax
  unsigned int v7; // edi
  _QWORD *v8; // rbx

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x40uLL);
    v8[5] = a2 + 16;
    v8[6] = -1LL;
    v8[7] = a1;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
