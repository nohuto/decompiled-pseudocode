/*
 * XREFs of PopBuildMemoryImageHeader @ 0x14040D080
 * Callers:
 *     PopEndMirroring @ 0x14040CD30 (PopEndMirroring.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     MmGetHighestPhysicalPage @ 0x1400DD8FC (MmGetHighestPhysicalPage.c)
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopAllocatePages @ 0x14040DF10 (PopAllocatePages.c)
 */

__int64 __fastcall PopBuildMemoryImageHeader(_QWORD *MemoryMap, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  _QWORD *v9; // rbx
  _QWORD *v10; // r13
  unsigned __int64 v11; // rbp
  void *Pages; // rax
  void *v13; // r15
  __int64 *v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  PVOID *v20; // r14
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF

  v21 = 0LL;
  if ( !a2 )
  {
    v3 = MemoryMap[25];
    PoSetHiberRange(MemoryMap, 2u, (PVOID)v3, 0x3D8uLL, 0x676D694Du);
    memset((void *)v3, 0, 0x1000uLL);
    *(_DWORD *)(v3 + 24) = 4096;
    *(_DWORD *)(v3 + 12) = 984;
    *(_QWORD *)(v3 + 16) = (unsigned __int64)MmGetPhysicalAddress((PVOID)v3).QuadPart >> 12;
    *(_QWORD *)(v3 + 32) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v3 + 40) = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(v3 + 64) = *((_QWORD *)&xmmword_14034B2C8 + 1);
    *(_DWORD *)(v3 + 60) = 7;
    *(_QWORD *)(v3 + 48) = KeFeatureBits;
    *(_DWORD *)(v3 + 4) = (unsigned __int16)KeProcessorArchitecture;
    *(_BYTE *)(v3 + 56) = *((_BYTE *)MemoryMap + 1);
    *(_BYTE *)(v3 + 868) = byte_14034B2E0;
    *(_QWORD *)(v3 + 920) = MmGetHighestPhysicalPage(0);
    v4 = MemoryMap[15];
    if ( v4 )
      *(_DWORD *)(v3 + 72) = *(_DWORD *)(v4 + 40) >> 12;
    v5 = MemoryMap[40];
    if ( v5 )
    {
      v15 = (__int64 *)(v3 + 928);
      v16 = 3LL;
      *(_QWORD *)(v3 + 928) = v5;
      v17 = (_QWORD *)(v3 + 936);
      do
      {
        v18 = *v15++;
        *v17++ = v18 + 1;
        --v16;
      }
      while ( v16 );
    }
    ((void (__fastcall *)(__int64 *))off_14033B518[0])(&v21);
    *(_QWORD *)(v3 + 912) = v21;
    v6 = MemoryMap[27];
    if ( v6 )
    {
      v7 = (unsigned __int64)*(unsigned int *)(v6 + 40) >> 12;
      memmove((void *)(v3 + 664), (const void *)(v6 + 48), 8 * v7);
      *(_DWORD *)(v3 + 660) = v7;
    }
    else
    {
      *(_DWORD *)(v3 + 660) = 0;
    }
    v8 = MemoryMap[29];
    if ( v8 )
    {
      v19 = (*(_DWORD *)(v8 + 40) >> 12) + (unsigned int)((*(_DWORD *)(v8 + 40) & 0xFFF) != 0);
      if ( v19 > 1 )
        v19 = 1LL;
      v20 = (PVOID *)(v8 + 48);
      memmove((void *)(v3 + 648), v20, 8 * v19);
      for ( *(_DWORD *)(v3 + 640) = v19; v19; --v19 )
        PoSetHiberRange(MemoryMap, 0xC000u, *v20++, 1uLL, 0x644D6946u);
    }
    else
    {
      *(_DWORD *)(v3 + 640) = 0;
    }
    v9 = (_QWORD *)MemoryMap[8];
    while ( v9 != MemoryMap + 8 )
    {
      v10 = v9;
      v9 = (_QWORD *)*v9;
      v11 = (unsigned __int64)(unsigned int)((*((_DWORD *)v10 + 8) - *((_DWORD *)v10 + 6)) << 12) >> 12;
      Pages = (void *)PopAllocatePages(v11);
      v13 = Pages;
      if ( Pages )
        PoSetHiberRange(MemoryMap, 0x8000u, Pages, v11 << 12, 0x436C6F6Eu);
      else
        *((_DWORD *)MemoryMap + 47) = -1073741670;
      v10[5] = v13;
      if ( !v13 )
        return 3221225626LL;
    }
    *(_DWORD *)(v3 + 960) = *((_DWORD *)MemoryMap + 114);
  }
  return *((unsigned int *)MemoryMap + 47);
}
