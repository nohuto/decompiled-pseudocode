/*
 * XREFs of PspReaper @ 0x14010EF10
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteThread @ 0x14003FA70 (KeDeleteThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeEnumerateKernelStackSegments @ 0x14010EFE4 (KeEnumerateKernelStackSegments.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

signed __int64 PspReaper()
{
  _QWORD *v0; // rbx
  volatile signed __int32 *v1; // rdi
  void *v2; // rcx
  signed __int64 result; // rax

  do
  {
    v0 = (_QWORD *)_InterlockedExchange64(&PsReaperListHead, 1LL);
    do
    {
      v1 = (volatile signed __int32 *)(v0 - 195);
      KeDeleteThread(v0 - 195);
      v2 = (void *)v0[37];
      if ( v2 )
      {
        ExFreePoolWithTag(v2, 0);
        *((_QWORD *)v1 + 232) = 0LL;
      }
      if ( _InterlockedExchangeAdd(v1 + 474, 0xFFFFFFFF) == 1 )
      {
        KeEnumerateKernelStackSegments(v0 - 195, PspDeleteKernelStack, 0LL);
        *((_QWORD *)v1 + 5) = 0LL;
      }
      v0 = (_QWORD *)*v0;
      ObfDereferenceObjectWithTag((PVOID)v1, 0x746C6644u);
    }
    while ( v0 && v0 != (_QWORD *)1 );
    result = _InterlockedCompareExchange64(&PsReaperListHead, 0LL, 1LL);
  }
  while ( result != 1 );
  return result;
}
