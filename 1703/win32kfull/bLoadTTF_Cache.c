/*
 * XREFs of bLoadTTF_Cache @ 0x1C0228090
 * Callers:
 *     bLoadTTF @ 0x1C0227B94 (bLoadTTF.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     vCopy_IFIV @ 0x1C0229D5C (vCopy_IFIV.c)
 *     EngFntCacheFault @ 0x1C0269950 (EngFntCacheFault.c)
 */

__int64 __fastcall bLoadTTF_Cache(__int64 a1, PVOID *a2, __int64 a3)
{
  PVOID v5; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  unsigned int v9; // r14d
  __int64 (__fastcall *v10)(__int64, unsigned int); // rax

  v5 = 0LL;
  *a2 = 0LL;
  if ( *(_DWORD *)(a3 + 240) >= 0xFFFFFEA0 )
    return 0LL;
  v7 = EngAllocMem(0, *(_DWORD *)(a3 + 240) + 352, 0x64667454u);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  v9 = 1;
  *a2 = v7;
  memset(v7, 0, 0x160uLL);
  v8[5] = 0LL;
  *((_DWORD *)v8 + 12) = 0;
  v8[7] = a1;
  v8[8] = 0LL;
  *((_DWORD *)v8 + 18) = 0;
  v8[10] = 0LL;
  v8[3] = 0LL;
  v8[4] = 0LL;
  v8[2] = 0LL;
  v8[12] = 0LL;
  v8[11] = 0LL;
  if ( *(_DWORD *)(a3 + 176) != 2 || (v5 = EngAllocMem(0, (*(_DWORD *)(a3 + 240) + 7) & 0xFFFFFFF8, 0x64667454u)) != 0LL )
  {
    *((_OWORD *)v8 + 7) = *(_OWORD *)(a3 + 4);
    *((_OWORD *)v8 + 8) = *(_OWORD *)(a3 + 20);
    *((_OWORD *)v8 + 9) = *(_OWORD *)(a3 + 36);
    *((_OWORD *)v8 + 10) = *(_OWORD *)(a3 + 52);
    *((_OWORD *)v8 + 11) = *(_OWORD *)(a3 + 68);
    *((_OWORD *)v8 + 12) = *(_OWORD *)(a3 + 84);
    *((_OWORD *)v8 + 13) = *(_OWORD *)(a3 + 100);
    *((_OWORD *)v8 + 14) = *(_OWORD *)(a3 + 116);
    *((_OWORD *)v8 + 15) = *(_OWORD *)(a3 + 132);
    *((_OWORD *)v8 + 16) = *(_OWORD *)(a3 + 148);
    *((_OWORD *)v8 + 17) = *(_OWORD *)(a3 + 164);
    *((_OWORD *)v8 + 18) = *(_OWORD *)(a3 + 180);
    *((_OWORD *)v8 + 19) = *(_OWORD *)(a3 + 196);
    *((_OWORD *)v8 + 20) = *(_OWORD *)(a3 + 212);
    v8[42] = *(_QWORD *)(a3 + 228);
    *((_DWORD *)v8 + 86) = *(_DWORD *)(a3 + 236);
    memmove(v8 + 44, (const void *)(a3 + 240), *(unsigned int *)(a3 + 240));
    if ( v5 )
    {
      vCopy_IFIV(v8 + 44, v5);
      v8[2] = v5;
      if ( *(_DWORD *)a3 == 1 )
      {
        v10 = (__int64 (__fastcall *)(__int64, unsigned int))SearchGsubTable;
      }
      else if ( *(_DWORD *)a3 == 2 )
      {
        v10 = (__int64 (__fastcall *)(__int64, unsigned int))SearchMortTable;
      }
      else
      {
        v10 = SearchDummyTable;
      }
      v8[1] = v10;
    }
    v8[13] = 0LL;
  }
  else
  {
    v9 = 0;
    if ( *a2 )
    {
      EngFreeMem(*a2);
      *a2 = 0LL;
    }
  }
  return v9;
}
