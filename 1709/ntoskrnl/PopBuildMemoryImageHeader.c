/*
 * XREFs of PopBuildMemoryImageHeader @ 0x140432438
 * Callers:
 *     PopEndMirroring @ 0x140432FE0 (PopEndMirroring.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     MmGetHighestPhysicalPage @ 0x1401167C8 (MmGetHighestPhysicalPage.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 *     PopAllocatePages @ 0x140432360 (PopAllocatePages.c)
 *     PopCopyFirmwareRuntimeInformationPfnList @ 0x140432844 (PopCopyFirmwareRuntimeInformationPfnList.c)
 */

__int64 __fastcall PopBuildMemoryImageHeader(_QWORD *MemoryMap, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rbx
  _QWORD *v13; // r13
  unsigned __int64 v14; // rbp
  PVOID Pages; // rax
  PVOID v16; // r14

  if ( a2 )
    return *((unsigned int *)MemoryMap + 47);
  v3 = MemoryMap[25];
  PoSetHiberRange(MemoryMap, 2u, (PVOID)v3, 0x3D8uLL, 0x676D694Du);
  memset((void *)v3, 0, 0x1000uLL);
  *(_DWORD *)(v3 + 24) = 4096;
  *(_DWORD *)(v3 + 12) = 984;
  *(_QWORD *)(v3 + 16) = (unsigned __int64)MmGetPhysicalAddress((PVOID)v3).QuadPart >> 12;
  *(_QWORD *)(v3 + 32) = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(v3 + 40) = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(v3 + 64) = *((_QWORD *)&xmmword_140365B28 + 1);
  *(_DWORD *)(v3 + 60) = 7;
  *(_QWORD *)(v3 + 48) = KeFeatureBits;
  *(_DWORD *)(v3 + 4) = (unsigned __int16)KeProcessorArchitecture;
  *(_BYTE *)(v3 + 56) = *((_BYTE *)MemoryMap + 1);
  *(_BYTE *)(v3 + 868) = byte_140365B40;
  *(_QWORD *)(v3 + 920) = MmGetHighestPhysicalPage(0);
  v4 = MemoryMap[15];
  if ( v4 )
    *(_DWORD *)(v3 + 72) = *(_DWORD *)(v4 + 40) >> 12;
  v5 = MemoryMap[40];
  if ( v5 )
  {
    v6 = (__int64 *)(v3 + 928);
    v7 = 3LL;
    *(_QWORD *)(v3 + 928) = v5;
    v8 = (_QWORD *)(v3 + 936);
    do
    {
      v9 = *v6++;
      *v8++ = v9 + 1;
      --v7;
    }
    while ( v7 );
  }
  *(_QWORD *)(v3 + 912) = 0LL;
  v10 = MemoryMap[27];
  if ( v10 )
  {
    v11 = (unsigned __int64)*(unsigned int *)(v10 + 40) >> 12;
    memmove((void *)(v3 + 664), (const void *)(v10 + 48), 8 * v11);
    *(_DWORD *)(v3 + 660) = v11;
  }
  else
  {
    *(_DWORD *)(v3 + 660) = 0;
  }
  PopCopyFirmwareRuntimeInformationPfnList(MemoryMap);
  v12 = (_QWORD *)MemoryMap[8];
  do
  {
    if ( v12 == MemoryMap + 8 )
    {
      *(_DWORD *)(v3 + 960) = *((_DWORD *)MemoryMap + 114);
      return *((unsigned int *)MemoryMap + 47);
    }
    v13 = v12;
    v12 = (_QWORD *)*v12;
    v14 = (unsigned __int64)(unsigned int)((*((_DWORD *)v13 + 8) - *((_DWORD *)v13 + 6)) << 12) >> 12;
    Pages = PopAllocatePages(v14);
    v16 = Pages;
    if ( Pages )
      PoSetHiberRange(MemoryMap, 0x8000u, Pages, v14 << 12, 0x436C6F6Eu);
    else
      *((_DWORD *)MemoryMap + 47) = -1073741670;
    v13[5] = v16;
  }
  while ( v16 );
  return 3221225626LL;
}
