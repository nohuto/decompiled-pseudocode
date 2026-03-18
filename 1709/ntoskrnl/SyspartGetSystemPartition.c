/*
 * XREFs of SyspartGetSystemPartition @ 0x1405B1B1C
 * Callers:
 *     BiGetSystemPartition @ 0x1405B1A94 (BiGetSystemPartition.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x14057DA64 (SiGetSystemDeviceName.c)
 *     SiQuerySystemPartitionInformation @ 0x1405B1B68 (SiQuerySystemPartitionInformation.c)
 */

__int64 __fastcall SyspartGetSystemPartition(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax

  result = SiQuerySystemPartitionInformation(a1);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetSystemPartition, a1, a2, a3);
  return result;
}
