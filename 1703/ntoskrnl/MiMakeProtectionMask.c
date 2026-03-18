/*
 * XREFs of MiMakeProtectionMask @ 0x1400CE440
 * Callers:
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 *     MmAllocateContiguousNodeMemory @ 0x140123D30 (MmAllocateContiguousNodeMemory.c)
 *     MmMapIoSpaceEx @ 0x1401243A0 (MmMapIoSpaceEx.c)
 *     MmSetPageProtection @ 0x140135210 (MmSetPageProtection.c)
 *     MmProtectMdlSystemAddress @ 0x14020FE00 (MmProtectMdlSystemAddress.c)
 *     MmProtectSystemCacheView @ 0x1402126D8 (MmProtectSystemCacheView.c)
 *     NtMapViewOfSection @ 0x1404C9130 (NtMapViewOfSection.c)
 *     MiInitializeCreateSectionPacket @ 0x14050CA20 (MiInitializeCreateSectionPacket.c)
 *     MiMapViewOfSection @ 0x1405198A0 (MiMapViewOfSection.c)
 *     MmProtectVirtualMemory @ 0x14051A990 (MmProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x14051D2E0 (NtProtectVirtualMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
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
    if ( (_DWORD)result == 24 || (a1 & 0x600) != 0 )
      return 0xFFFFFFFFLL;
    result = (unsigned int)result | 0x10;
  }
  if ( (a1 & 0x200) == 0 )
    goto LABEL_15;
  if ( (_DWORD)result == 24 || (a1 & 0x400) != 0 )
    return 0xFFFFFFFFLL;
  result = (unsigned int)result | 8;
LABEL_15:
  if ( (a1 & 0x400) != 0 )
  {
    if ( (_DWORD)result != 24 && (result & 2) == 0 )
      return (unsigned int)result | 0x18;
    return 0xFFFFFFFFLL;
  }
  return result;
}
