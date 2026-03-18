/*
 * XREFs of MiFindBestOutswapPagefile @ 0x14007D30C
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x140004100 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiWsSwapPageFileNumber @ 0x14007D3A8 (MiWsSwapPageFileNumber.c)
 *     MiPageFileLargestBitmapsRun @ 0x14007DC78 (MiPageFileLargestBitmapsRun.c)
 */

__int64 __fastcall MiFindBestOutswapPagefile(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r13d
  unsigned int v10; // esi
  unsigned int v11; // edi
  __int64 *v12; // r14
  __int64 v13; // r15
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  v4 = MiWsSwapPageFileNumber();
  v9 = *(_DWORD *)(v6 + 5592);
  v10 = 0;
  *a2 = v4;
  v11 = 16;
  if ( !v9 )
    return *a2;
  v12 = (__int64 *)(v6 + 5600);
  do
  {
    v13 = *v12;
    if ( (*(_BYTE *)(*v12 + 204) & 0xD0) == 0x80 )
    {
      if ( v11 == 16
        || (v15 = MiPageFileLargestBitmapsRun(*(_QWORD *)(a1 + 8LL * v11 + 5600), v5, v7, v8),
            (unsigned int)MiPageFileLargestBitmapsRun(v13, v16, v17, v18) > v15) )
      {
        v11 = v10;
      }
    }
    ++v10;
    ++v12;
  }
  while ( v10 < v9 );
  if ( v11 == 16 )
    return *a2;
  return v11;
}
