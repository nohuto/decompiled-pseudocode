/*
 * XREFs of KiExecuteDpc @ 0x140143540
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     KiExecuteAllDpcs @ 0x140094F80 (KiExecuteAllDpcs.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 *     KiTryToEndDpcProcessing @ 0x140128794 (KiTryToEndDpcProcessing.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1401435F0 (KiSetSystemAffinityThreadToProcessor.c)
 */

void __fastcall __noreturn KiExecuteDpc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _DWORD v3[68]; // [rsp+20h] [rbp-138h] BYREF

  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 31);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 8u);
  KiSetSystemAffinityThreadToProcessor(*(unsigned int *)(a1 + 36), 0LL);
  *(_BYTE *)(a1 + 11880) = 1;
  while ( 1 )
  {
    v3[0] = 0;
    KeWaitForGate(a1 + 22656, 5u);
    do
    {
      *(_WORD *)(a1 + 11886) = 1;
      _disable();
      KiExecuteAllDpcs(a1, (__int64)CurrentThread, v3, 1u);
      _enable();
    }
    while ( !KiTryToEndDpcProcessing((volatile signed __int16 *)(a1 + 11886), a1 + 11816) );
  }
}
