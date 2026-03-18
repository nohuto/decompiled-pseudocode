/*
 * XREFs of MiMakeProtectionMask @ 0x14003D3F0
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x14002F6E0 (MmSetAddressRangeModifiedEx.c)
 *     MiCommitExistingVad @ 0x14003AFF0 (MiCommitExistingVad.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MmAllocateContiguousNodeMemory @ 0x140119380 (MmAllocateContiguousNodeMemory.c)
 *     MmMapIoSpaceEx @ 0x1401199B0 (MmMapIoSpaceEx.c)
 *     MmSetPageProtection @ 0x140139650 (MmSetPageProtection.c)
 *     MmProtectMdlSystemAddress @ 0x140217160 (MmProtectMdlSystemAddress.c)
 *     MmProtectSystemCacheView @ 0x14021A1C8 (MmProtectSystemCacheView.c)
 *     MmMapMdl @ 0x14021A540 (MmMapMdl.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140497B10 (NtProtectVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140498B10 (MmProtectVirtualMemory.c)
 *     MiInitializeCreateSectionPacket @ 0x14049B630 (MiInitializeCreateSectionPacket.c)
 *     NtMapViewOfSection @ 0x1404CF7E0 (NtMapViewOfSection.c)
 *     MiMapViewOfSection @ 0x1404CFC50 (MiMapViewOfSection.c)
 *     MiCopyPagesIntoEnclave @ 0x1406E7BD4 (MiCopyPagesIntoEnclave.c)
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
