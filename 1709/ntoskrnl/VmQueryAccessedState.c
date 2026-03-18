/*
 * XREFs of VmQueryAccessedState @ 0x140278238
 * Callers:
 *     MiTrimWorkingSetTail @ 0x140010B30 (MiTrimWorkingSetTail.c)
 *     MiAgeWorkingSetTail @ 0x14009EF90 (MiAgeWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x14021E1E0 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14021E4C0 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14021EA70 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     VmpQueryAccessedState @ 0x140279824 (VmpQueryAccessedState.c)
 */

__int64 VmQueryAccessedState()
{
  return VmpQueryAccessedState((PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[16]);
}
