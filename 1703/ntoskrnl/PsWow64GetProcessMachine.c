/*
 * XREFs of PsWow64GetProcessMachine @ 0x14053B210
 * Callers:
 *     PsWow64GetSupportedArchitectures @ 0x14000AEB4 (PsWow64GetSupportedArchitectures.c)
 *     KeVerifyContextRecord @ 0x1400FCA70 (KeVerifyContextRecord.c)
 *     PspWow64SetupCpuArea @ 0x1404241B0 (PspWow64SetupCpuArea.c)
 *     PspWow64SetContextThread @ 0x1404254C4 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140425814 (PspWow64GetContextThread.c)
 *     PspWow64InitThread @ 0x1404264E0 (PspWow64InitThread.c)
 *     PspSetupUserProcessAddressSpace @ 0x14049BA50 (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x14049BCB0 (PspPrepareSystemDllInitBlock.c)
 *     PsMapSystemDlls @ 0x14049BFFC (PsMapSystemDlls.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     PspApplyMitigationOptions @ 0x1404A0710 (PspApplyMitigationOptions.c)
 *     DbgkCreateThread @ 0x1404F8500 (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x14067E910 (DbgkSendSystemDllMessages.c)
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
