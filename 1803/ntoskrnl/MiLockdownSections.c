/*
 * XREFs of MiLockdownSections @ 0x1405F958C
 * Callers:
 *     MiConstructLoaderEntry @ 0x1405F8E14 (MiConstructLoaderEntry.c)
 *     MiInitializeLoadedModuleList @ 0x14089DE40 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 */

void __fastcall MiLockdownSections(__int64 a1)
{
  void *v1; // rbp
  int SystemRegionType; // eax
  int v4; // edx
  int v5; // esi
  PIMAGE_NT_HEADERS v6; // rax
  _RTL_BITMAP *v7; // r14
  int NumberOfSections; // edi
  __int64 v9; // rbx
  BOOL v10; // eax
  int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // eax

  v1 = *(void **)(a1 + 48);
  SystemRegionType = MiGetSystemRegionType((unsigned __int64)v1);
  v5 = v4 | 1;
  if ( SystemRegionType == 1 )
    v5 = v4;
  if ( v5 )
  {
    v6 = RtlImageNtHeader(v1);
    v7 = *(_RTL_BITMAP **)(a1 + 264);
    NumberOfSections = v6->FileHeader.NumberOfSections;
    v9 = (__int64)&v6->OptionalHeader + v6->FileHeader.SizeOfOptionalHeader;
    if ( v6->FileHeader.NumberOfSections )
    {
      do
      {
        v10 = 0;
        if ( *(_DWORD *)v9 == 1987011374 )
          v10 = *(_WORD *)(v9 + 4) == 29285;
        v11 = v10 | 2;
        if ( (*(_DWORD *)(v9 + 36) & 0x20000000) == 0 )
          v11 = v10;
        if ( (v11 & v5) != 0 )
        {
          v12 = *(unsigned int *)(v9 + 16);
          v13 = *(_DWORD *)(v9 + 8);
          if ( (unsigned int)v12 < v13 )
            v12 = v13;
          RtlSetBits(
            v7,
            *(_DWORD *)(v9 + 12) >> 12,
            ((((unsigned __int64)v1 + *(unsigned int *)(v9 + 12) + v12 + 4095) & 0xFFFFFFFFFFFFF000uLL)
           - ((unsigned __int64)v1
            + *(unsigned int *)(v9 + 12))) >> 12);
        }
        --NumberOfSections;
        v9 += 40LL;
      }
      while ( NumberOfSections > 0 );
    }
  }
}
