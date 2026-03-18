/*
 * XREFs of ViGetAdapterInformationInternal @ 0x1407ADED8
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1407AA640 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407AA820 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1407AAA20 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x1407AAAD0 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCrashDumpRegisters @ 0x1407AABB0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x1407AAC50 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x1407AADD0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1407AB0C0 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x1407AB2F0 (VfCancelAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x1407AB450 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1407AB600 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1407AB6B0 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1407AB760 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x1407AB890 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x1407AB960 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x1407ABC80 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1407ABFD0 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x1407AC160 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x1407AC3A0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1407AC560 (VfMapTransferEx.c)
 *     VfPutScatterGatherList @ 0x1407ACA40 (VfPutScatterGatherList.c)
 *     ViGetRealDmaOperation @ 0x1407AE128 (ViGetRealDmaOperation.c)
 *     ViHookDmaAdapter @ 0x1407AE4B8 (ViHookDmaAdapter.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1407AA42C (VF_ASSERT_MAX_IRQL.c)
 *     ViHalPreprocessOptions @ 0x1407AE2E0 (ViHalPreprocessOptions.c)
 */

ULONG_PTR __fastcall ViGetAdapterInformationInternal(ULONG_PTR a1, char a2)
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
      byte_140359A80,
      "Driver has attempted to access an adapter (%p) that has already been released",
      (const void *)0x18);
    VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, v5, 0LL, byte_140359A80);
  }
  return v5;
}
