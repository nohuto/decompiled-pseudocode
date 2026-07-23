/*
 * XREFs of MiLockdownSections @ 0x1404B6D54
 * Callers:
 *     MiConstructLoaderEntry @ 0x1404B65FC (MiConstructLoaderEntry.c)
 *     MiInitializeLoadedModuleList @ 0x140818184 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 */

void __fastcall MiLockdownSections(__int64 a1)
{
  void *v1; // rbp
  int v2; // ebx
  PIMAGE_NT_HEADERS v4; // rax
  _RTL_BITMAP *v5; // r14
  int NumberOfSections; // esi
  __int64 v7; // rdi
  BOOL v8; // eax
  int v9; // edx
  __int64 v10; // r8

  v1 = *(void **)(a1 + 48);
  v2 = 0;
  if ( (MiFlags & 0x10000) != 0 && (!*(_QWORD *)(a1 + 112) || (*(_DWORD *)(a1 + 196) & 2) != 0) )
    v2 = 2;
  if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) != 1 )
    v2 |= 1u;
  if ( v2 )
  {
    v4 = RtlImageNtHeader(v1);
    v5 = *(_RTL_BITMAP **)(a1 + 240);
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v7 = (__int64)&v4->OptionalHeader + v4->FileHeader.SizeOfOptionalHeader;
    if ( v4->FileHeader.NumberOfSections )
    {
      do
      {
        v8 = 0;
        if ( *(_DWORD *)v7 == 1987011374 )
          v8 = *(_WORD *)(v7 + 4) == 29285;
        v9 = v8 | 2;
        if ( (*(_DWORD *)(v7 + 36) & 0x20000000) == 0 )
          v9 = v8;
        if ( (v9 & v2) != 0 )
        {
          v10 = *(unsigned int *)(v7 + 8);
          if ( *(_DWORD *)(v7 + 16) >= (unsigned int)v10 )
            v10 = *(unsigned int *)(v7 + 16);
          RtlSetBits(
            v5,
            *(_DWORD *)(v7 + 12) >> 12,
            ((((unsigned __int64)v1 + *(unsigned int *)(v7 + 12) + v10 + 4095) & 0xFFFFFFFFFFFFF000uLL)
           - ((unsigned __int64)v1
            + *(unsigned int *)(v7 + 12))) >> 12);
        }
        --NumberOfSections;
        v7 += 40LL;
      }
      while ( NumberOfSections > 0 );
    }
  }
}
