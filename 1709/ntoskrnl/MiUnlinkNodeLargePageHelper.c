/*
 * XREFs of MiUnlinkNodeLargePageHelper @ 0x1400C68C0
 * Callers:
 *     MiUnlinkNodeLargePage @ 0x1400C6570 (MiUnlinkNodeLargePage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140126570 (MiTryUnlinkNodeLargePage.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiPageAvailableEx @ 0x1400C729C (MiPageAvailableEx.c)
 *     MiIncreaseAvailablePages @ 0x1400C72C0 (MiIncreaseAvailablePages.c)
 *     MiPageListCollision @ 0x14010F9B8 (MiPageListCollision.c)
 *     MiUpdateAvailableEvents @ 0x140137060 (MiUpdateAvailableEvents.c)
 *     MiWakeLargePageRebuild @ 0x14015124C (MiWakeLargePageRebuild.c)
 *     MiObtainFreePages @ 0x14021D8D8 (MiObtainFreePages.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022A99C (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiUnlinkNodeLargePageHelper(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 v6; // r13
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // r11
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v23; // rax
  __int64 v24; // r10
  unsigned __int64 v25; // r9
  volatile signed __int32 *v26; // r8
  unsigned int v27; // ebp
  int v28; // r11d
  unsigned __int64 v29; // rcx
  __int64 v30; // [rsp+58h] [rbp+10h]

  v6 = a3;
  v8 = a4;
  v9 = MiLargePageSizes[a3];
  v10 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL));
  if ( v9 == 1 )
  {
    v13 = _InterlockedDecrement64((volatile signed __int64 *)(v10 + 5952));
    if ( v13 == *(_QWORD *)(v10 + 4968) || v13 == *(_QWORD *)(v10 + 4976) )
      MiUpdateAvailableEvents(v10, a2);
    v11 = v13 + 1;
  }
  else
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 5952), -v9);
    v12 = *(_QWORD *)(v10 + 4976);
    v13 = v11 - v9;
    if ( v11 - v9 <= v12 && v11 > v12 || (v14 = *(_QWORD *)(v10 + 4968), v13 <= v14) && v11 > v14 )
      MiUpdateAvailableEvents(v10, a2);
  }
  if ( v13 <= 0x420 )
  {
    v23 = *(_QWORD *)(v10 + 5680);
    if ( !v23 || !*(_BYTE *)(v23 + 52) )
      MiObtainFreePages(v10, a2);
    if ( v13 < 0xA0 && v11 >= 0xA0 && *(_DWORD *)(v10 + 1144) )
      KeSetEvent((PRKEVENT)(v10 + 992), 0, 0);
  }
  if ( (a5 & 4) == 0 && !(unsigned int)MiPageAvailableEx(v10, v13, 0LL) )
  {
    MiIncreaseAvailablePages(v10, v9);
    return 0LL;
  }
  if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
  {
    MiPageListCollision(a2, 1LL);
    MiSetOriginalPtePfnFromFreeList(a2 + 16);
  }
  v15 = (__int64)a1 - *(_QWORD *)(v10 + 16);
  *(_QWORD *)(a2 + 8) = 0LL;
  v16 = (a2 + 0x58000000000LL) / 48;
  v17 = v15 / 8256;
  v30 = v15 / 8256;
  v18 = *(_BYTE *)(a2 + 34) & 7;
  --a1[2 * v6 + v18];
  if ( (unsigned int)v6 > 1 )
  {
    v19 = 16 * (v8 + 4 * (v18 + 2LL * (v16 < 0x100000)))
        + (((unsigned __int64)(unsigned int)dword_140388540 >> 4) & (unsigned int)(v16 >> 4));
    v17 = v15 / 8256;
    --a1[v19 + 630];
  }
  v20 = v8 + 4 * (v18 + 2 * (2 * v6 + (v16 < 0x100000)));
  v21 = -v9;
  --a1[v20 + 6];
  if ( (_DWORD)v18 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 2176), v21);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 2112), v21);
  if ( dword_140388B14 == 1 )
  {
    v24 = ((a2 + 0x58000000000LL) / 48) & 0x1F;
    v25 = v9;
    v26 = (volatile signed __int32 *)stru_140388B68.Buffer + (v16 >> 5);
    if ( (unsigned __int64)(v24 + v9) > 0x20 )
    {
      if ( (v16 & 0x1F) != 0 )
      {
        v28 = v16 & 0x1F;
        _InterlockedOr(v26, ((1 << (32 - v28)) - 1) << v24);
        v17 = v30;
        v25 = v9 - (unsigned int)(32 - v28);
        ++v26;
      }
      if ( v25 >= 0x20 )
      {
        v29 = v25 >> 5;
        v25 += -32LL * (v25 >> 5);
        do
        {
          *v26++ = -1;
          --v29;
        }
        while ( v29 );
      }
      if ( !v25 )
        goto LABEL_13;
      v27 = (1 << v25) - 1;
    }
    else
    {
      if ( v9 == 32 )
      {
        *v26 = -1;
        goto LABEL_13;
      }
      v27 = ((1 << v9) - 1) << v24;
    }
    _InterlockedOr(v26, v27);
  }
LABEL_13:
  if ( *(_BYTE *)(v10 + 4677) == 1 )
    *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 1;
  if ( v9 == 16
    && (unsigned __int64)(16 * (a1[4] + a1[5] + 32LL * (a1[2] + a1[3] + ((*a1 + a1[1]) << 9)))) <= 0x200
    && (MiFlags & 0x30) != 0 )
  {
    MiWakeLargePageRebuild(v10, v17, 0LL);
  }
  return a2;
}
