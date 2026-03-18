/*
 * XREFs of KeInitializeGate @ 0x14012C014
 * Callers:
 *     KiInitializeProcessor @ 0x140426A8C (KiInitializeProcessor.c)
 *     PspGetContextThreadInternal @ 0x14049D7A0 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x14049DFC0 (PspSetContextThreadInternal.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     MiInitializePartition @ 0x1405B30A8 (MiInitializePartition.c)
 *     MmScrubMemory @ 0x1406EEF04 (MmScrubMemory.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14071CD5C (PspRundownUmsThreadForApcDelivery.c)
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
