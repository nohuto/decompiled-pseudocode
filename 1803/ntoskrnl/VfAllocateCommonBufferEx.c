/*
 * XREFs of VfAllocateCommonBufferEx @ 0x140817B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViGetAdapterInformationInternal @ 0x14081B044 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14081B294 (ViGetRealDmaOperation.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfAllocateCommonBufferEx(__int64 a1, ULONG_PTR *a2, unsigned int a3, __int64 a4, char a5, int a6)
{
  __int64 RealDmaOperation; // rax
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, ULONG_PTR *, _QWORD, __int64, int, int); // r15
  __int64 AdapterInformationInternal; // rbx
  __int64 result; // rax
  int v15; // [rsp+20h] [rbp-38h]

  RealDmaOperation = ViGetRealDmaOperation(a1, 152LL);
  LOBYTE(v11) = 1;
  v12 = (__int64 (__fastcall *)(__int64, ULONG_PTR *, _QWORD, __int64, int, int))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v11);
  if ( (MmVerifierData & 0x4000000) != 0 && a2 && *a2 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, *a2, a3, 0LL);
  LOBYTE(v15) = a5;
  result = v12(a1, a2, a3, a4, v15, a6);
  if ( result )
  {
    if ( AdapterInformationInternal )
      _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 172));
  }
  return result;
}
