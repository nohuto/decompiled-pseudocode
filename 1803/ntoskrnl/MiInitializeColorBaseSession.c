/*
 * XREFs of MiInitializeColorBaseSession @ 0x14007F688
 * Callers:
 *     MiInitializeColorBase @ 0x1400494D0 (MiInitializeColorBase.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 */

unsigned __int8 __fastcall MiInitializeColorBaseSession(__int64 a1, __int64 a2)
{
  __int64 SessionVm; // rax
  __int64 v3; // r8

  SessionVm = MiGetSessionVm(a1, a2, a1);
  return MiInitializePageColorBase(SessionVm, 0, v3);
}
