/*
 * XREFs of MiUnlinkNodeLargePageHelper @ 0x1400E7480
 * Callers:
 *     MiTryUnlinkNodeLargePage @ 0x140003CC0 (MiTryUnlinkNodeLargePage.c)
 *     MiUnlinkNodeLargePage @ 0x1400E7040 (MiUnlinkNodeLargePage.c)
 *     MiCoalesceFreeLargePages @ 0x1400E89A0 (MiCoalesceFreeLargePages.c)
 * Callees:
 *     MiPageListCollision @ 0x1400C0DC4 (MiPageListCollision.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiIncreaseAvailablePages @ 0x140122A90 (MiIncreaseAvailablePages.c)
 *     MiWakeLargePageRebuild @ 0x140155D70 (MiWakeLargePageRebuild.c)
 *     MiUpdateAvailableEvents @ 0x1401700A4 (MiUpdateAvailableEvents.c)
 *     MiObtainFreePages @ 0x140259A20 (MiObtainFreePages.c)
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140265490 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiUnlinkNodeLargePageHelper(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  int v15; // eax
  char v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // r10
  __int64 v19; // rbx
  __int64 v20; // r9
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // r11
  unsigned __int64 v28; // rdx
  volatile signed __int32 *v29; // r8
  unsigned int v30; // esi
  unsigned __int64 v31; // rcx

  v7 = (unsigned int)a3;
  v8 = a4;
  v9 = MiLargePageSizes[(unsigned int)a3];
  v10 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL));
  if ( v9 == 1 )
  {
    v13 = _InterlockedDecrement64((volatile signed __int64 *)(v10 + 7040));
    if ( v13 == *(_QWORD *)(v10 + 6120) || v13 == *(_QWORD *)(v10 + 6128) )
      MiUpdateAvailableEvents(v10, a2);
    v11 = v13 + 1;
  }
  else
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 7040), -v9);
    v12 = *(_QWORD *)(v10 + 6128);
    v13 = v11 - v9;
    if ( v11 - v9 <= v12 && v11 > v12 || (v14 = *(_QWORD *)(v10 + 6120), v13 <= v14) && v11 > v14 )
      MiUpdateAvailableEvents(v10, a2);
  }
  if ( v13 <= 0x420 )
  {
    v25 = *(_QWORD *)(v10 + 6768);
    if ( !v25 || !*(_BYTE *)(v25 + 52) )
      MiObtainFreePages(v10, a2, a3);
    if ( v13 < 0xA0 && v11 >= 0xA0 && *(_DWORD *)(v10 + 1144) )
      KeSetEvent((PRKEVENT)(v10 + 992), 0, 0);
  }
  if ( v13 < 0x9F )
  {
    v26 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
    if ( (v26 & 0xC) == 8 )
    {
      v15 = 1;
    }
    else if ( v13 < 0x20 && (ULONG_PTR *)v10 == &MiSystemPartition )
    {
      v15 = 0;
    }
    else if ( (v26 & 2) != 0 && v13 >= 0x21 )
    {
      v15 = 1;
    }
    else
    {
      v15 = (*(unsigned __int8 *)(v10 + 4) >> 3) & 1;
    }
  }
  else
  {
    v15 = 1;
  }
  if ( (a5 & 8) == 0 && !v15 )
  {
    MiIncreaseAvailablePages(v10, v9);
    return 0LL;
  }
  v16 = *(_BYTE *)(a2 + 34);
  if ( (v16 & 8) != 0 )
  {
    MiPageListCollision(a2);
    MiSetOriginalPtePfnFromFreeList(a2 + 16);
    v16 = *(_BYTE *)(a2 + 34);
  }
  v17 = (__int64)a1 - *(_QWORD *)(v10 + 16);
  *(_QWORD *)(a2 + 8) = 0LL;
  v18 = (a2 + 0x58000000000LL) / 48;
  v19 = v17 / 1984;
  v20 = v16 & 7;
  --a1[34 * v7 + v20];
  v21 = v8 + 34 * v7 + 4 * (v20 + (v18 < 0x100000 ? 2 : 0));
  v22 = 3 * (v18 / MiLargePageSizes[v7] % (unsigned int)dword_1403CB6E8[v7]);
  --*(_QWORD *)(a1[v21 + 18] + 8 * v22 + 16);
  --a1[v21 + 2];
  v23 = 2176LL;
  if ( (_DWORD)v20 )
    v23 = 2240LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + v10), -v9);
  if ( dword_1403CBDAC == 1 )
  {
    v27 = ((a2 + 0x58000000000LL) / 48) & 0x1F;
    v28 = v9;
    v29 = (volatile signed __int32 *)(qword_1403CBE08 + 4 * (v18 >> 5));
    if ( (unsigned __int64)(v27 + v9) > 0x20 )
    {
      if ( (v18 & 0x1F) != 0 )
      {
        _InterlockedOr(v29, ((1 << (32 - (v18 & 0x1F))) - 1) << v27);
        v28 = v9 - (32 - (unsigned int)(v18 & 0x1F));
        ++v29;
      }
      if ( v28 >= 0x20 )
      {
        v31 = v28 >> 5;
        v28 += -32LL * (v28 >> 5);
        do
        {
          *v29++ = -1;
          --v31;
        }
        while ( v31 );
      }
      if ( !v28 )
        goto LABEL_13;
      v30 = (1 << v28) - 1;
    }
    else
    {
      if ( v9 == 32 )
      {
        *v29 = -1;
        goto LABEL_13;
      }
      v30 = ((1 << v9) - 1) << v27;
    }
    _InterlockedOr(v29, v30);
  }
LABEL_13:
  if ( *(_BYTE *)(v10 + 4765) == 1 )
  {
    *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 1;
  }
  else if ( !(_DWORD)v20 && (MiFlags & 0x80u) != 0 && (++dword_1403CBEAC & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero((a2 + 0x58000000000LL) / 48);
  }
  if ( v9 == 16
    && (unsigned __int64)(16 * (a1[68] + a1[69] + 32LL * (a1[34] + a1[35] + ((*a1 + a1[1]) << 9)))) <= 0x200
    && (MiFlags & 0x30) != 0 )
  {
    MiWakeLargePageRebuild(v10, (unsigned int)v19, 0LL);
  }
  return a2;
}
