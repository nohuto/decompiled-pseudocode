/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x1401790D0
 * Callers:
 *     KiInitMachineDependent @ 0x140178EA4 (KiInitMachineDependent.c)
 *     KiExecuteDpc @ 0x140179020 (KiExecuteDpc.c)
 *     KiDeregisterNmiSxCallback @ 0x140240F44 (KiDeregisterNmiSxCallback.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
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
