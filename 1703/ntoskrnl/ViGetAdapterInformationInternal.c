/*
 * XREFs of ViGetAdapterInformationInternal @ 0x14076C20C
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1407689C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140768BA0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140768DA0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140768E50 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCrashDumpRegisters @ 0x140768EF0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140768F90 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140769110 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140769400 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x140769630 (VfCancelAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x140769790 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140769940 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1407699F0 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140769AA0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140769BD0 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140769CA0 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140769FC0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14076A310 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x14076A4A0 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x14076A6D0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14076A890 (VfMapTransferEx.c)
 *     VfPutScatterGatherList @ 0x14076AD70 (VfPutScatterGatherList.c)
 *     ViGetRealDmaOperation @ 0x14076C45C (ViGetRealDmaOperation.c)
 *     ViHookDmaAdapter @ 0x14076C7EC (ViHookDmaAdapter.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1407687A8 (VF_ASSERT_MAX_IRQL.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 */

ULONG_PTR __fastcall ViGetAdapterInformationInternal(__int64 a1, char a2)
{
  KIRQL v4; // al
  ULONG_PTR v5; // rbx
  KIRQL v6; // si

  if ( !a1 )
    return 0LL;
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( ViVerifyDma )
      VF_ASSERT_MAX_IRQL();
    return 0LL;
  }
  if ( !ViVerifyDma && ViEnableAfterHibernate == 1 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&Lock);
  v5 = ViAdapterList;
  v6 = v4;
  while ( 1 )
  {
    if ( &ViAdapterList == (ULONG_PTR *)v5 )
    {
      KxReleaseSpinLock(&Lock);
      __writecr8(v6);
      return 0LL;
    }
    if ( a1 == *(_QWORD *)(v5 + 16) )
      break;
    v5 = *(_QWORD *)v5;
  }
  KxReleaseSpinLock(&Lock);
  __writecr8(v6);
  if ( a2 && *(int *)(v5 + 36) <= 0 )
  {
    ViHalPreprocessOptions(
      byte_1403413E4,
      "Driver has attempted to access an adapter (%p) that has already been released",
      (const void *)0x18);
    VfReportIssueWithOptions(0xE6u, 24, a1, v5, 0LL, byte_1403413E4);
  }
  return v5;
}
