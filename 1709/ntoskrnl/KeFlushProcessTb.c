/*
 * XREFs of KeFlushProcessTb @ 0x1400B8188
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400B7F8C (MiDeleteFinalPageTables.c)
 *     MmOutSwapProcess @ 0x140111FF0 (MmOutSwapProcess.c)
 *     KeSwapDirectoryTableBase @ 0x14012F060 (KeSwapDirectoryTableBase.c)
 *     MiDeleteProcessShadow @ 0x14017BF70 (MiDeleteProcessShadow.c)
 * Callees:
 *     KiFlushViaHypervisor @ 0x140059270 (KiFlushViaHypervisor.c)
 *     HvlFlushAddressSpaceTb @ 0x14014110C (HvlFlushAddressSpaceTb.c)
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
