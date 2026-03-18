/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x1401435F0
 * Callers:
 *     KiInitMachineDependent @ 0x1401433D4 (KiInitMachineDependent.c)
 *     KiExecuteDpc @ 0x140143540 (KiExecuteDpc.c)
 *     KiDeregisterNmiSxCallback @ 0x140203AB4 (KiDeregisterNmiSxCallback.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 */

void __fastcall KiSetSystemAffinityThreadToProcessor(int a1, struct _GROUP_AFFINITY *a2)
{
  unsigned int v2; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  v2 = KiProcessorIndexToNumberMappingTable[a1];
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v2 >> 6);
  Affinity.Mask = 1LL << (v2 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, a2);
}
