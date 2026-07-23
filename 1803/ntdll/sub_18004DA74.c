/*
 * XREFs of sub_18004DA74 @ 0x18004DA74
 * Callers:
 *     RtlCreateActivationContext @ 0x18004D910 (RtlCreateActivationContext.c)
 *     sub_18004DCD8 @ 0x18004DCD8 (sub_18004DCD8.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_18004DA74(int *a1, unsigned int a2, void *a3)
{
  unsigned int v3; // ebx
  PVOID Heap; // rbp
  int v7; // r15d

  v3 = 0;
  Heap = a3;
  v7 = 0;
  if ( !a1 || !a2 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() bad parameters:\nSXS:    Map        : 0x%p\nSXS:    EntryCount : 0x%lx\n",
      "RtlpInitializeAssemblyStorageMap",
      a1,
      a2);
    return (unsigned int)-1073741811;
  }
  if ( !a3 )
  {
    if ( !is_mul_ok(a2, 8uLL) )
      return (unsigned int)-1073741675;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * a2);
    if ( !Heap )
      return (unsigned int)-1073741801;
    v7 = 1;
  }
  if ( a2 )
    memset(Heap, 0, 8LL * a2);
  *a1 = v7;
  a1[1] = a2;
  *((_QWORD *)a1 + 1) = Heap;
  return v3;
}
