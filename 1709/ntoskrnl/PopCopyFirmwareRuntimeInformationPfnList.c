/*
 * XREFs of PopCopyFirmwareRuntimeInformationPfnList @ 0x140432844
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x140432438 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 */

void __fastcall PopCopyFirmwareRuntimeInformationPfnList(_QWORD *MemoryMap, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rbx
  PVOID *v6; // rdi

  v2 = MemoryMap[29];
  if ( v2 )
  {
    v5 = (*(_DWORD *)(v2 + 40) >> 12) + (unsigned int)((*(_DWORD *)(v2 + 40) & 0xFFF) != 0);
    if ( v5 > 1 )
      v5 = 1LL;
    v6 = (PVOID *)(v2 + 48);
    memmove((void *)(a2 + 648), v6, 8LL * (unsigned int)v5);
    for ( *(_DWORD *)(a2 + 640) = v5; v5; --v5 )
      PoSetHiberRange(MemoryMap, 0xC000u, *v6++, 1uLL, 0x644D6946u);
  }
  else
  {
    *(_DWORD *)(a2 + 640) = 0;
  }
}
