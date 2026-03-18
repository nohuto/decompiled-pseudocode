/*
 * XREFs of KeFlushProcessTb @ 0x140063154
 * Callers:
 *     MmOutSwapProcess @ 0x140040CE4 (MmOutSwapProcess.c)
 *     MiDeleteFinalPageTables @ 0x140063178 (MiDeleteFinalPageTables.c)
 *     KeSwapDirectoryTableBase @ 0x140136ADC (KeSwapDirectoryTableBase.c)
 *     MiDeleteProcessShadow @ 0x14017C830 (MiDeleteProcessShadow.c)
 * Callees:
 *     KiFlushViaHypervisor @ 0x1400D9420 (KiFlushViaHypervisor.c)
 *     HvlFlushAddressSpaceTb @ 0x1401EB808 (HvlFlushAddressSpaceTb.c)
 */

__int64 __fastcall KeFlushProcessTb(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = KiFlushViaHypervisor();
  if ( (_DWORD)result )
    return HvlFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, v3, 0LL);
  return result;
}
