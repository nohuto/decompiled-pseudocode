/*
 * XREFs of CcShouldLazyWriteCacheMap @ 0x1400223FC
 * Callers:
 *     CcLazyWriteScan @ 0x140021D88 (CcLazyWriteScan.c)
 * Callees:
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     CcCanIWriteStream @ 0x140064730 (CcCanIWriteStream.c)
 */

bool __fastcall CcShouldLazyWriteCacheMap(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  int v8; // edx
  unsigned int v9; // ecx
  __int64 v10; // r9
  int Partition; // eax

  v4 = *(_DWORD *)(a1 + 152);
  if ( (v4 & 0x400820) != 0 )
    return 0;
  if ( (v4 & 0x10000) != 0 )
    return 1;
  if ( *(_DWORD *)(a1 + 516) )
    return 0;
  v8 = *(_DWORD *)(a1 + 4);
  if ( !v8 && (!*(_DWORD *)(a1 + 112) || !*(_QWORD *)(a1 + 8)) || (v4 & 0x40000000) != 0 )
    return 1;
  v9 = *(_DWORD *)(a1 + 112);
  if ( !v9 || !a2 )
    return 0;
  ++*(_DWORD *)(a1 + 268);
  if ( (v4 & 0x1000000) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 240);
    return *(_DWORD *)(v10 + 104)
        || MEMORY[0xFFFFF78000000320] > (__int64)(*(_QWORD *)(v10 + 136) + 0x9896800uLL / KeMaximumIncrement)
        || *(_DWORD *)(a1 + 112) >= 0x40u;
  }
  if ( (v4 & 0x200) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 268) & 0xF) == 0 || v9 >= 0x40 )
      return 1;
    return a4 == 16;
  }
  else
  {
    if ( (*(_DWORD *)(a3 + 80) & 0x8000) == 0 || !v8 )
      return 1;
    Partition = CcGetPartition(a1);
    return (unsigned __int8)CcCanIWriteStream(Partition, a3, 0x1000000, 0, 8) == 0;
  }
}
