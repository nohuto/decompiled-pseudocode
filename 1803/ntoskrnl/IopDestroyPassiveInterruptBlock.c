/*
 * XREFs of IopDestroyPassiveInterruptBlock @ 0x140726E58
 * Callers:
 *     IoDisconnectInterrupt @ 0x14060B8E0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14060BCDC (IopConnectInterrupt.c)
 * Callees:
 *     IopDereferencePassiveInterruptBlock @ 0x14023B1D8 (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x14023B27C (IopFindPassiveInterruptBlock.c)
 */

void __fastcall IopDestroyPassiveInterruptBlock(unsigned int a1)
{
  __int64 PassiveInterruptBlock; // rax

  PassiveInterruptBlock = IopFindPassiveInterruptBlock(a1);
  if ( PassiveInterruptBlock )
  {
    _InterlockedDecrement((volatile signed __int32 *)(PassiveInterruptBlock + 192));
    IopDereferencePassiveInterruptBlock((PVOID **)PassiveInterruptBlock);
  }
}
