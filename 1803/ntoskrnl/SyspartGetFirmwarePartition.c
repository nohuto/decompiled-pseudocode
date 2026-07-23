/*
 * XREFs of SyspartGetFirmwarePartition @ 0x14060A358
 * Callers:
 *     BiGetSystemPartition @ 0x14060A2D0 (BiGetSystemPartition.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x1405695B4 (SiGetSystemDeviceName.c)
 *     SiQuerySystemInformationString @ 0x14060A3B4 (SiQuerySystemInformationString.c)
 */

__int64 __fastcall SyspartGetFirmwarePartition(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax

  result = SiQuerySystemInformationString(SystemFirmwarePartitionInformation, a1);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetFirmwareSystemPartition, a1, a2, a3);
  return result;
}
