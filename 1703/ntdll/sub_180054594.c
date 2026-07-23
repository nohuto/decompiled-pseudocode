/*
 * XREFs of sub_180054594 @ 0x180054594
 * Callers:
 *     RtlCreateActivationContext @ 0x180054430 (RtlCreateActivationContext.c)
 *     sub_180055274 @ 0x180055274 (sub_180055274.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180054594(int *a1, unsigned int a2, void *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  PVOID Heap; // rbp
  int v7; // r14d

  v3 = 0;
  v4 = a2;
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
  if ( (_DWORD)v4 )
    memset(Heap, 0, 8 * v4);
  *a1 = v7;
  a1[1] = v4;
  *((_QWORD *)a1 + 1) = Heap;
  return v3;
}
