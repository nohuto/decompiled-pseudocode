/*
 * XREFs of MiUnlinkNodeLargePageHelper @ 0x1401294A0
 * Callers:
 *     MiTryUnlinkNodeLargePage @ 0x140128BFC (MiTryUnlinkNodeLargePage.c)
 *     MiUnlinkNodeLargePage @ 0x1401291F0 (MiUnlinkNodeLargePage.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiPageListCollision @ 0x140125804 (MiPageListCollision.c)
 *     MiUpdateAvailableEvents @ 0x1401548AC (MiUpdateAvailableEvents.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14017D278 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiObtainFreePages @ 0x140215244 (MiObtainFreePages.c)
 *     MiWakeLargePageRebuild @ 0x14022553C (MiWakeLargePageRebuild.c)
 */

__int64 __fastcall MiUnlinkNodeLargePageHelper(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  unsigned int v11; // r14d
  __int64 v12; // rbp
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // r11
  unsigned __int64 v26; // r10
  volatile signed __int32 *v27; // r8
  unsigned int v28; // r9d
  int v29; // r12d
  unsigned __int64 v30; // rdx
  unsigned __int64 v32; // [rsp+50h] [rbp+8h]

  v5 = a4;
  v7 = a3;
  if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
  {
    MiPageListCollision(a2);
    MiSetOriginalPtePfnFromFreeList(a2 + 16, v8, v9);
  }
  v10 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL));
  v11 = 0;
  v12 = MiLargePageSizes[v7];
  v13 = (__int64)a1 - *(_QWORD *)(v10 + 48);
  *(_QWORD *)(a2 + 8) = 0LL;
  v14 = (a2 + 0x58000000000LL) / 48;
  v15 = (__int64)((unsigned __int128)(v13 * (__int128)0xF00F00F00F00F01LL) >> 64) >> 7;
  v32 = (v15 >> 63) + v15;
  v16 = *(_BYTE *)(a2 + 34) & 7;
  --a1[2 * v7 + v16];
  v17 = -v12;
  v18 = v5 + 4 * (v16 + 2 * ((v14 < 0x100000) + 2 * v7));
  --a1[v18 + 102];
  if ( (_DWORD)v16 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 2048), v17);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 1984), v17);
  if ( v12 == 1 )
  {
    v19 = _InterlockedDecrement64((volatile signed __int64 *)(v10 + 5760));
    if ( v19 == *(_QWORD *)(v10 + 4840) || v19 == *(_QWORD *)(v10 + 4848) )
      MiUpdateAvailableEvents(v10);
    v20 = v19 + 1;
  }
  else
  {
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 5760), -v12);
    v21 = *(_QWORD *)(v10 + 4848);
    v19 = v20 - v12;
    if ( v20 > v21 && v19 <= v21 || (v22 = *(_QWORD *)(v10 + 4840), v19 <= v22) && v20 > v22 )
      MiUpdateAvailableEvents(v10);
  }
  if ( v19 <= 0x420 )
  {
    v23 = *(_QWORD *)(v10 + 5544);
    if ( !v23 || !*(_BYTE *)(v23 + 52) )
      MiObtainFreePages(v10);
    if ( v19 < 0xA0 && v20 >= 0xA0 && *(_DWORD *)(v10 + 1192) )
      KeSetEvent((PRKEVENT)(v10 + 1040), 0, 0);
  }
  if ( v19 < 0x9F )
  {
    v24 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
    if ( (v24 & 0xC) == 8 )
    {
      v11 = 1;
    }
    else if ( v19 >= 0x20 || (ULONG_PTR *)v10 != &MiSystemPartition )
    {
      if ( (v24 & 2) != 0 && v19 >= 0x21 )
        v11 = 1;
      else
        v11 = (*(unsigned __int8 *)(v10 + 4) >> 4) & 1;
    }
  }
  else
  {
    v11 = 1;
  }
  if ( dword_14036C91C == 1 )
  {
    v25 = ((a2 + 0x58000000000LL) / 48) & 0x1F;
    v26 = v12;
    v27 = (volatile signed __int32 *)stru_14036C970.Buffer + (v14 >> 5);
    if ( (unsigned __int64)(v25 + v12) <= 0x20 )
    {
      if ( v12 == 32 )
      {
        *v27 = -1;
        goto LABEL_47;
      }
      v28 = ((1 << v12) - 1) << v25;
      goto LABEL_46;
    }
    if ( (v14 & 0x1F) != 0 )
    {
      v29 = v14 & 0x1F;
      _InterlockedOr(v27, ((1 << (32 - v29)) - 1) << v25);
      v26 = v12 - (unsigned int)(32 - v29);
      ++v27;
    }
    if ( v26 >= 0x20 )
    {
      v30 = v26 >> 5;
      v26 += -32LL * (v26 >> 5);
      do
      {
        *v27++ = -1;
        --v30;
      }
      while ( v30 );
    }
    if ( v26 )
    {
      v28 = (1 << v26) - 1;
LABEL_46:
      _InterlockedOr(v27, v28);
    }
  }
LABEL_47:
  if ( *(_BYTE *)(v10 + 4549) == 1 )
    *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 1;
  if ( v12 == 16
    && (unsigned __int64)(16 * (a1[4] + a1[5] + 32LL * (a1[2] + a1[3] + ((*a1 + a1[1]) << 9)))) <= 0x200
    && (MiFlags & 0x30) != 0 )
  {
    MiWakeLargePageRebuild(v10, (unsigned int)v32, 0LL);
  }
  return v11;
}
