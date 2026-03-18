/*
 * XREFs of VfFlushAdapterBuffers @ 0x140769790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1407687A8 (VF_ASSERT_MAX_IRQL.c)
 *     ViFlushDoubleBuffer @ 0x14076BD8C (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x14076C20C (ViGetAdapterInformationInternal.c)
 *     ViGetMapRegisterFile @ 0x14076C324 (ViGetMapRegisterFile.c)
 *     ViGetRealDmaOperation @ 0x14076C45C (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 *     ViSwap @ 0x14076D244 (ViSwap.c)
 */

char __fastcall VfFlushAdapterBuffers(__int64 a1, ULONG_PTR a2, const void *a3, const void *a4, int a5, char a6)
{
  __int64 RealDmaOperation; // rax
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, ULONG_PTR, const void *, const void *, int, char); // rdi
  __int64 AdapterInformationInternal; // rbp
  char result; // al
  ULONG_PTR MapRegisterFile; // r13
  char v16; // r12
  const void *v19; // [rsp+40h] [rbp-48h] BYREF
  const void *v20; // [rsp+48h] [rbp-40h] BYREF
  ULONG_PTR v21; // [rsp+50h] [rbp-38h] BYREF
  __int64 (__fastcall *v22)(__int64, ULONG_PTR, const void *, const void *, int, char); // [rsp+58h] [rbp-30h]

  RealDmaOperation = ViGetRealDmaOperation(a1, 40LL);
  LOBYTE(v11) = 1;
  v22 = (__int64 (__fastcall *)(__int64, ULONG_PTR, const void *, const void *, int, char))RealDmaOperation;
  v12 = (__int64 (__fastcall *)(__int64, ULONG_PTR, const void *, const void *, int, char))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v11);
  if ( !AdapterInformationInternal )
    goto LABEL_4;
  VF_ASSERT_MAX_IRQL();
  if ( a3 == (const void *)-559026163LL )
  {
    a3 = 0LL;
    goto LABEL_4;
  }
  MapRegisterFile = ViGetMapRegisterFile(a3);
  if ( !MapRegisterFile )
  {
LABEL_4:
    result = v12(a1, a2, a3, a4, a5, a6);
    if ( AdapterInformationInternal )
    {
      if ( result )
        _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 188), 0);
    }
    return result;
  }
  v21 = a2;
  v19 = a4;
  v20 = a3;
  if ( (unsigned int)ViSwap(&v20, &v21, &v19) )
  {
    v16 = v22(a1, v21, v20, v19, a5, a6);
    ViFlushDoubleBuffer(MapRegisterFile, a2, a6);
    if ( v16 )
      _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 188), 0);
    return v16;
  }
  else
  {
    if ( a5 )
    {
      ViHalPreprocessOptions(
        byte_1403413CC,
        "Cannot flush map register that isn't mapped! (Map register base %p, flushing address %p, MDL %p)",
        (const void *)0x20,
        a3,
        a4);
      VfReportIssueWithOptions(0xE6u, 32, (int)a3, (int)a4, a2, byte_1403413CC);
    }
    return 0;
  }
}
