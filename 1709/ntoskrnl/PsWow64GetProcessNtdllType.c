/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x14045FB98
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14045F718 (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x14045F94C (PspPrepareSystemDllInitBlock.c)
 *     PsMapSystemDlls @ 0x14045FCCC (PsMapSystemDlls.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     DbgkCreateThread @ 0x14053F718 (DbgkCreateThread.c)
 *     PsThawProcess @ 0x14057CE6C (PsThawProcess.c)
 *     PspWow64InitThread @ 0x14058EEAC (PspWow64InitThread.c)
 *     DbgkSendSystemDllMessages @ 0x1406A9A4C (DbgkSendSystemDllMessages.c)
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
