/*
 * XREFs of VfFreeCommonBuffer @ 0x140818A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x1408170B4 (DECREMENT_COMMON_BUFFERS.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1408174B0 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x14081B044 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14081B294 (ViGetRealDmaOperation.c)
 *     ViHalFreeDomainCommonBuffer @ 0x14081B394 (ViHalFreeDomainCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x14081BF34 (ViSpecialFreeCommonBuffer.c)
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
    || (VF_ASSERT_MAX_IRQL(),
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
