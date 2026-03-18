/*
 * XREFs of VfFlushAdapterBuffersEx @ 0x140769940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1407687A8 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x14076C20C (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14076C45C (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfFlushAdapterBuffersEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 RealDmaOperation; // rax
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64, int, char); // r12
  __int64 AdapterInformationInternal; // rdi
  __int64 result; // rax

  RealDmaOperation = ViGetRealDmaOperation(a1, 208LL);
  LOBYTE(v11) = 1;
  v12 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, char))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v11);
  if ( AdapterInformationInternal )
    VF_ASSERT_MAX_IRQL();
  result = v12(a1, a2, a3, a4, a5, a6);
  if ( AdapterInformationInternal )
  {
    if ( !(_DWORD)result )
      _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 188), 0);
  }
  return result;
}
