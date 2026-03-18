/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x1404EA258
 * Callers:
 *     DbgkCreateThread @ 0x1404B87D4 (DbgkCreateThread.c)
 *     PsMapSystemDlls @ 0x1404E93D8 (PsMapSystemDlls.c)
 *     PspSetupUserProcessAddressSpace @ 0x1404E9DD0 (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1404EA008 (PspPrepareSystemDllInitBlock.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     PspWow64InitThread @ 0x140563200 (PspWow64InitThread.c)
 *     PsThawProcess @ 0x140565D8C (PsThawProcess.c)
 *     DbgkSendSystemDllMessages @ 0x14070E1AC (DbgkSendSystemDllMessages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessNtdllType(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1064);
  if ( result )
    return *(unsigned int *)(result + 12);
  return result;
}
