/*
 * XREFs of LdrpResGetMappingSize @ 0x14042982C
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400120D4 (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x1404295F0 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x14057D7AC (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpKrnGetDataTableEntry @ 0x140012970 (LdrpKrnGetDataTableEntry.c)
 *     RtlImageNtHeaderEx @ 0x14008BA30 (RtlImageNtHeaderEx.c)
 *     ZwQueryVirtualMemory @ 0x14017E3A0 (ZwQueryVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpResGetMappingSize(unsigned __int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  bool v7; // r12
  NTSTATUS result; // eax
  unsigned __int16 Magic; // dx
  unsigned __int64 SizeOfImage; // rdi
  PVOID *DataTableEntry; // rax
  _BYTE MemoryInformation[16]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-38h]
  PIMAGE_NT_HEADERS NtHeader; // [rsp+90h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return -1073741811;
  v5 = 0LL;
  if ( (a3 & 0x20000) != 0 )
    v5 = *a2;
  *a2 = 0LL;
  v6 = 0LL;
  v7 = (a3 & 0x100) != 0 && (a1 & 1) == 0;
  result = RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &NtHeader);
  if ( result >= 0 )
  {
    Magic = NtHeader->OptionalHeader.Magic;
    if ( Magic == 267 || Magic == 523 )
    {
      SizeOfImage = NtHeader->OptionalHeader.SizeOfImage;
    }
    else
    {
      SizeOfImage = 0LL;
      result = -1073741701;
    }
    if ( result >= 0 )
    {
      if ( !v7 || !SizeOfImage )
      {
        DataTableEntry = LdrpKrnGetDataTableEntry(a1);
        if ( DataTableEntry )
          v6 = *((unsigned int *)DataTableEntry + 16);
        if ( v6 )
        {
          result = 0;
        }
        else
        {
          result = ZwQueryVirtualMemory(
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL),
                     MemoryRegionInformation,
                     MemoryInformation,
                     0x20uLL,
                     0LL);
          if ( result >= 0 )
            v6 = v13;
        }
        if ( v6 || !SizeOfImage )
          goto LABEL_14;
        result = 0;
      }
      v6 = SizeOfImage;
LABEL_14:
      if ( result >= 0 )
      {
        if ( v5 && v5 < v6 )
          return -1073741793;
        else
          *a2 = v6;
      }
    }
  }
  return result;
}
