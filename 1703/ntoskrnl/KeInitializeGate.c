/*
 * XREFs of KeInitializeGate @ 0x140035EB4
 * Callers:
 *     KiInitializeProcessor @ 0x140412130 (KiInitializeProcessor.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     PspSetContextThreadInternal @ 0x14053B080 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 *     MiInitializePartition @ 0x1405A1920 (MiInitializePartition.c)
 *     MmScrubMemory @ 0x1406C04B8 (MmScrubMemory.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406E496C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeGate(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  result = a1 + 8;
  *(_WORD *)a1 = 263;
  *(_BYTE *)(a1 + 2) = 6;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  return result;
}
