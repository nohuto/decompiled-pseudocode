/*
 * XREFs of MiMakeProtectionMask @ 0x140117260
 * Callers:
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MmAllocateContiguousNodeMemory @ 0x1400BE2B0 (MmAllocateContiguousNodeMemory.c)
 *     MmSetPageProtection @ 0x1400C7020 (MmSetPageProtection.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MmSetAddressRangeModifiedEx @ 0x140124A90 (MmSetAddressRangeModifiedEx.c)
 *     MmMapIoSpaceEx @ 0x14013A010 (MmMapIoSpaceEx.c)
 *     MmProtectMdlSystemAddress @ 0x140254B70 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x140256AE0 (MmMapMdl.c)
 *     MiInitializeCreateSectionPacket @ 0x1404C34D0 (MiInitializeCreateSectionPacket.c)
 *     MmProtectVirtualMemory @ 0x1404D6080 (MmProtectVirtualMemory.c)
 *     MiMapViewOfSectionCommon @ 0x140593B40 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x140593F20 (MiMapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1405B5960 (NtProtectVirtualMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionMask(unsigned int a1)
{
  char v1; // dl
  __int64 result; // rax

  if ( a1 >= 0x800 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0xF) != 0 )
  {
    if ( (a1 & 0xF0) != 0 )
      return 0xFFFFFFFFLL;
    v1 = MmUserProtectionToMask1[a1 & 0xF];
  }
  else
  {
    if ( !((unsigned __int8)a1 >> 4) )
      return 0xFFFFFFFFLL;
    v1 = MmUserProtectionToMask2[(unsigned __int8)a1 >> 4];
  }
  result = (unsigned int)v1;
  if ( (_DWORD)result == -1 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0x700) == 0 )
    return result;
  if ( (a1 & 0x100) != 0 )
  {
    if ( (_DWORD)result != 24 && (a1 & 0x600) == 0 )
    {
      result = (unsigned int)result | 0x10;
      goto LABEL_14;
    }
    return 0xFFFFFFFFLL;
  }
LABEL_14:
  if ( (a1 & 0x200) != 0 )
  {
    if ( (_DWORD)result != 24 && (a1 & 0x400) == 0 )
      return (unsigned int)result | 8;
    return 0xFFFFFFFFLL;
  }
  if ( (a1 & 0x400) != 0 )
  {
    if ( (_DWORD)result != 24 && (result & 2) == 0 )
      return (unsigned int)result | 0x18;
    return 0xFFFFFFFFLL;
  }
  return result;
}
