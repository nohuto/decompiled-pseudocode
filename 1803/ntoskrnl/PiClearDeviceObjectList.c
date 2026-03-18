/*
 * XREFs of PiClearDeviceObjectList @ 0x1405C8568
 * Callers:
 *     PiAllocateDeviceObjectList @ 0x1405C84AC (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x1405C8518 (IopFreeRelationList.c)
 *     PipGrowDeviceObjectList @ 0x140739F48 (PipGrowDeviceObjectList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

void *__fastcall PiClearDeviceObjectList(_DWORD *a1)
{
  __int64 i; // rdi
  void *result; // rax

  for ( i = 0LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
    ObfDereferenceObjectWithTag(*(PVOID *)&a1[6 * i + 4], 0x4C706E50u);
  result = memset(a1 + 4, 0, 24LL * (unsigned int)a1[1]);
  *a1 = 0;
  a1[2] = 0;
  return result;
}
