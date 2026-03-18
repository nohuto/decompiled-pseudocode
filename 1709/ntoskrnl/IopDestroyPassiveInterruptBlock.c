/*
 * XREFs of IopDestroyPassiveInterruptBlock @ 0x1406C1178
 * Callers:
 *     IopConnectInterrupt @ 0x1404EBE88 (IopConnectInterrupt.c)
 *     IoDisconnectInterrupt @ 0x14058E500 (IoDisconnectInterrupt.c)
 * Callees:
 *     IopDereferencePassiveInterruptBlock @ 0x1401FE808 (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x1401FE8AC (IopFindPassiveInterruptBlock.c)
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
