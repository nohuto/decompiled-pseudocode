/*
 * XREFs of VfFreeCommonBuffer @ 0x140769BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x1407683C8 (DECREMENT_COMMON_BUFFERS.c)
 *     VF_ASSERT_IRQL @ 0x140768728 (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x14076C20C (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14076C45C (ViGetRealDmaOperation.c)
 *     ViHalFreeDomainCommonBuffer @ 0x14076C560 (ViHalFreeDomainCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x14076D104 (ViSpecialFreeCommonBuffer.c)
 */

void __fastcall VfFreeCommonBuffer(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char a5)
{
  __int64 RealDmaOperation; // rax
  __int64 v10; // rdx
  void (__fastcall *v11)(__int64, _QWORD, __int64, __int64, char); // r14
  __int64 AdapterInformationInternal; // rdi
  char v13; // al
  char v14; // r15
  char v15; // si
  __int64 v16; // r9
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = a3;
  RealDmaOperation = ViGetRealDmaOperation(a1, 24LL);
  LOBYTE(v10) = 1;
  v11 = (void (__fastcall *)(__int64, _QWORD, __int64, __int64, char))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v10);
  v13 = ViHalFreeDomainCommonBuffer(&v17);
  v14 = a5;
  v15 = v13;
  if ( !AdapterInformationInternal
    || v13
    || (VF_ASSERT_IRQL(0),
        LOBYTE(v16) = v14,
        !(unsigned int)ViSpecialFreeCommonBuffer(v11, AdapterInformationInternal, a4, v16)) )
  {
    v11(a1, a2, a3, a4, v14);
    if ( AdapterInformationInternal )
    {
      if ( !v15 )
        DECREMENT_COMMON_BUFFERS(AdapterInformationInternal);
    }
  }
}
