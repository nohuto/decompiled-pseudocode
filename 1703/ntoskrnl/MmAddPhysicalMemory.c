/*
 * XREFs of MmAddPhysicalMemory @ 0x1406B4450
 * Callers:
 *     <none>
 * Callees:
 *     MiAddPhysicalMemoryChunks @ 0x1406B3AC4 (MiAddPhysicalMemoryChunks.c)
 */

NTSTATUS __stdcall MmAddPhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  int v2; // r9d
  bool v3; // zf
  LONGLONG QuadPart; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (StartAddress->QuadPart & 0xFFF) == 0;
  QuadPart = StartAddress->QuadPart;
  if ( !v3 && (QuadPart & 1) != 0 )
  {
    v2 = 256;
    LODWORD(QuadPart) = QuadPart & 0xFFFFFFFE;
  }
  return MiAddPhysicalMemoryChunks(&MiSystemPartition, &QuadPart, (signed __int64 *)NumberOfBytes, v2);
}
