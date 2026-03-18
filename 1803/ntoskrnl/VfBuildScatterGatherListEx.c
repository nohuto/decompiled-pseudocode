/*
 * XREFs of VfBuildScatterGatherListEx @ 0x140818240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140817148 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x1408173A4 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140817430 (VF_ASSERT_IRQL.c)
 *     ViCheckMdlLength @ 0x14081A5FC (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x14081B044 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14081B294 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x14081B448 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfBuildScatterGatherListEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  __int64 RealDmaOperation; // rax
  __int64 v20; // rdx
  __int64 AdapterInformationInternal; // rdi
  unsigned int v23; // eax
  unsigned int v24; // ebx
  int v25; // eax
  unsigned int v26; // ebx
  __int64 (__fastcall *v27)(__int64, __int64, __int64, ULONG_PTR, __int64, unsigned int, int, __int64, __int64, char, __int64, int, __int64, __int64, __int64); // [rsp+80h] [rbp-38h]

  RealDmaOperation = ViGetRealDmaOperation(a1, 200LL);
  LOBYTE(v20) = 1;
  v27 = (__int64 (__fastcall *)(__int64, __int64, __int64, ULONG_PTR, __int64, unsigned int, int, __int64, __int64, char, __int64, int, __int64, __int64, __int64))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v20);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    if ( !a4 )
      return 3221225485LL;
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 164));
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 168));
    VERIFY_BUFFER_LOCKED(a4);
    v23 = ViCheckMdlLength(a4, a5, a6);
    if ( v23 )
    {
      v24 = v23;
      ViHalPreprocessOptions(
        byte_14039D058,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v23,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v24, 0LL, 0LL, byte_14039D058);
    }
  }
  v25 = v27(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
  v26 = v25;
  if ( AdapterInformationInternal )
  {
    if ( v25 < 0 )
      DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  }
  return v26;
}
