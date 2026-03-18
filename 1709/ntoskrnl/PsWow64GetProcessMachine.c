/*
 * XREFs of PsWow64GetProcessMachine @ 0x14049DA60
 * Callers:
 *     KeVerifyContextRecord @ 0x14006A690 (KeVerifyContextRecord.c)
 *     RtlpWalkFrameChain @ 0x1400D68B0 (RtlpWalkFrameChain.c)
 *     PsWow64GetSupportedArchitectures @ 0x1400E5898 (PsWow64GetSupportedArchitectures.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     PspApplyMitigationOptions @ 0x14048B80C (PspApplyMitigationOptions.c)
 *     WbHeapExecuteCall @ 0x1405024B0 (WbHeapExecuteCall.c)
 *     WbDisableTracing @ 0x14050264C (WbDisableTracing.c)
 *     WbValidateHeapExecuteCallArguments @ 0x1405028F0 (WbValidateHeapExecuteCallArguments.c)
 *     PspWow64SetContextThread @ 0x140516788 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140583D4C (PspWow64GetContextThread.c)
 *     PspWow64InitThread @ 0x14058EEAC (PspWow64InitThread.c)
 *     PspWow64SetupCpuArea @ 0x1405963A4 (PspWow64SetupCpuArea.c)
 *     WbGetWowTrapFrame @ 0x14076D81C (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x14076D908 (WbSetWowTrapFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessMachine(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1064);
  if ( v1 )
    return *(unsigned __int16 *)(v1 + 8);
  else
    return 34404LL;
}
