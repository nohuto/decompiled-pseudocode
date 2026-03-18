/*
 * XREFs of VfGetScatterGatherListEx @ 0x14076A310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x14076845C (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x1407686B8 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1407687A8 (VF_ASSERT_MAX_IRQL.c)
 *     ViCheckMdlLength @ 0x14076B7C0 (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x14076C20C (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14076C45C (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfGetScatterGatherListEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 RealDmaOperation; // rax
  __int64 v18; // rdx
  __int64 AdapterInformationInternal; // rdi
  unsigned int v20; // eax
  int v21; // ebx
  int v22; // eax
  unsigned int v23; // ebx
  __int64 (__fastcall *v26)(__int64, __int64, __int64, __int64, __int64, unsigned int, int, __int64, __int64, char, __int64, __int64, __int64); // [rsp+70h] [rbp-38h]

  RealDmaOperation = ViGetRealDmaOperation(a1, 192LL);
  LOBYTE(v18) = 1;
  v26 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, unsigned int, int, __int64, __int64, char, __int64, __int64, __int64))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v18);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_MAX_IRQL();
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 164));
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 168));
    VERIFY_BUFFER_LOCKED(a4);
    v20 = ViCheckMdlLength(a4, a5, a6);
    if ( v20 )
    {
      v21 = v20;
      ViHalPreprocessOptions(
        byte_14034134C,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v20,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 36, v21, 0, 0LL, byte_14034134C);
    }
  }
  v22 = v26(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  v23 = v22;
  if ( AdapterInformationInternal && v22 < 0 )
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  return v23;
}
