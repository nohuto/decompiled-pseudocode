/*
 * XREFs of MiReplenishPageSlist @ 0x1400756C0
 * Callers:
 *     MiRemoveAnyPage @ 0x1400B91F0 (MiRemoveAnyPage.c)
 * Callees:
 *     MiDecreaseAvailablePages @ 0x140075ABC (MiDecreaseAvailablePages.c)
 *     MiNodeLargeFreeZeroPages @ 0x140075B98 (MiNodeLargeFreeZeroPages.c)
 *     MiSetPfnBlink @ 0x140075C3C (MiSetPfnBlink.c)
 *     MiIncreaseAvailablePages @ 0x1400B6F40 (MiIncreaseAvailablePages.c)
 *     MiNodeFreeZeroPages @ 0x1400B8330 (MiNodeFreeZeroPages.c)
 *     MiPageListCollision @ 0x140125804 (MiPageListCollision.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     InterlockedPushListSList @ 0x140189520 (InterlockedPushListSList.c)
 *     MiSetPfnSlist @ 0x14021F374 (MiSetPfnSlist.c)
 *     HvlNotifyPageHeat @ 0x140269C18 (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiReplenishPageSlist(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  _SLIST_HEADER *v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 Alignment_low; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r9
  unsigned int v13; // ecx
  __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 *v16; // rdi
  __int64 v17; // r14
  BOOL v18; // r13d
  __int64 v19; // rbx
  volatile signed __int32 *v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // r10
  _SLIST_ENTRY *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r9
  unsigned int v27; // r9d
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // r10
  __int64 v31; // r9
  unsigned int v32; // eax
  int v33; // r10d
  unsigned __int64 v34; // rcx
  unsigned int v36; // [rsp+28h] [rbp-120h]
  volatile signed __int64 *v37; // [rsp+30h] [rbp-118h]
  unsigned __int64 v38; // [rsp+38h] [rbp-110h]
  _QWORD *v39; // [rsp+40h] [rbp-108h]
  _SLIST_ENTRY *List; // [rsp+48h] [rbp-100h]
  _SLIST_HEADER *ListHead; // [rsp+50h] [rbp-F8h]
  unsigned __int64 v42; // [rsp+58h] [rbp-F0h]
  __int64 v43; // [rsp+60h] [rbp-E8h]
  unsigned int v44; // [rsp+74h] [rbp-D4h]
  _QWORD v45[17]; // [rsp+78h] [rbp-D0h] BYREF

  v7 = (_SLIST_HEADER *)(*(_QWORD *)(a1 + 8LL * (int)a2 + 3944) + 16LL * a3);
  v43 = (int)a2;
  v8 = *(unsigned int *)(a1 + 5084);
  ListHead = v7;
  v9 = a3;
  Alignment_low = LOWORD(v7->Alignment);
  if ( Alignment_low >= v8 )
    return 0LL;
  v11 = (int)v8 - Alignment_low;
  v12 = *(_QWORD *)(a1 + 48) + 2184 * ((unsigned __int64)a3 >> byte_14036C1B9);
  v13 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_14036C1BA));
  v42 = v12;
  v36 = v13;
  if ( a2 )
  {
    v14 = *(_QWORD *)(a1 + 1928);
    v37 = (volatile signed __int64 *)(a1 + 2048);
    if ( MiNodeFreeZeroPages(v12, v13, 1024LL) >= v11 + 64 )
      goto LABEL_7;
    return 0LL;
  }
  v14 = *(_QWORD *)(a1 + 1920);
  v37 = (volatile signed __int64 *)(a1 + 1984);
  if ( (unsigned int)MmNumberOfChannels > 1 )
    v15 = *(_QWORD *)(v12 + 16LL * v13 + 2072);
  else
    v15 = *(_QWORD *)(v12 + 2008);
  if ( v15 + MiNodeLargeFreeZeroPages(v12, v13, 0LL) < v11 + 64 || *(_BYTE *)(a1 + 4549) == 1 )
    return 0LL;
LABEL_7:
  v16 = (unsigned __int64 *)(v14 + 40 * v9);
  if ( v11 > *v16 )
    v11 = *v16;
  v39 = (_QWORD *)(v14 + 40 * v9);
  if ( *(_QWORD *)(a1 + 5760) - v11 < 0x420 )
    return 0LL;
  v17 = 0LL;
  v44 = 0;
  v18 = (HvlEnlightenments & 0x200000) != 0 && HvlMemoryHeatHintEnabled && !a2;
  v19 = a1;
  v38 = v11;
  if ( !(unsigned int)MiDecreaseAvailablePages(a1, v11, 1056LL, 0LL) )
    goto LABEL_31;
  v21 = v16[2];
  v22 = 48 * v21 - 0x58000000000LL;
  v23 = 0xFFFFFFFFFLL;
  v24 = 0LL;
  List = (_SLIST_ENTRY *)v22;
  while ( 1 )
  {
    v25 = 0x2AAAAAAAAAAAAAABLL;
    if ( a4 != v22 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
        break;
    }
    v24 = (_SLIST_ENTRY *)v22;
    if ( dword_14036C91C == 1 )
    {
      LOBYTE(v29) = 1;
      v25 = (unsigned __int128)((v22 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v30 = (v22 + 0x58000000000LL) / 48;
      v31 = ((v25 < 0) + (unsigned __int8)(v25 >> 3)) & 0x1F;
      v20 = (volatile signed __int32 *)stru_14036C970.Buffer + (v30 >> 5);
      if ( (unsigned __int64)(v31 + 1) > 0x20 )
      {
        if ( (((v25 < 0) + (unsigned __int8)(v25 >> 3)) & 0x1F) != 0 )
        {
          v33 = v30 & 0x1F;
          v25 = (unsigned int)(32 - v33);
          _InterlockedOr(v20++, ((1 << (32 - v33)) - 1) << v31);
          v29 = 1 - v25;
          if ( (unsigned __int64)(1 - v25) >= 0x20 )
          {
            v34 = v29 >> 5;
            v29 += -32LL * (v29 >> 5);
            do
            {
              *v20++ = -1;
              --v34;
            }
            while ( v34 );
          }
          if ( !v29 )
            goto LABEL_17;
        }
        v32 = (1 << v29) - 1;
      }
      else
      {
        v32 = 1 << v31;
      }
      _InterlockedOr(v20, v32);
    }
LABEL_17:
    *(_BYTE *)(v22 + 34) = *(_BYTE *)(v22 + 34) & 0xF8 | 5;
    if ( (*(_BYTE *)(v22 + 34) & 8) != 0 )
      MiPageListCollision(v22, v25);
    *(_QWORD *)(v22 + 24) &= 0xFFFFFFF000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v18 && (((unsigned __int64)*(unsigned int *)(v22 + 16) >> 5) & 0x1F) != 0 )
    {
      v26 = v44;
      if ( v44 < 0x10 )
      {
        v45[v44] = v21;
        v45[v44] <<= 12;
        v26 = ++v44;
      }
    }
    else
    {
      v26 = v44;
    }
    v21 = *(_QWORD *)v22 & 0xFFFFFFFFFLL;
    if ( v21 == 0xFFFFFFFFFLL )
      v22 = 0LL;
    else
      v22 = 48 * v21 - 0x58000000000LL;
    MiSetPfnSlist(v24, a2, v20, v26);
    ++v17;
    v24->Next = (_SLIST_ENTRY *)v22;
    if ( !--v11 )
      goto LABEL_24;
  }
  v27 = v44;
LABEL_24:
  v11 = v38 - v17;
  if ( v17 )
  {
    if ( v27 )
    {
      HvlNotifyPageHeat(1LL, v27, v45);
      v23 = 0xFFFFFFFFFLL;
    }
    v39[2] = v21;
    if ( v21 == v23 )
      v39[3] = v23;
    else
      MiSetPfnBlink(v22, v23, 0LL);
    InterlockedPushListSList(ListHead, List, v24, v17);
    *v39 -= v17;
    _InterlockedExchangeAdd64(v37, -v17);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 8 * v43 + 2008), -v17);
    v19 = a1;
    if ( (unsigned int)MmNumberOfChannels > 1 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 8 * (v43 + 2LL * v36) + 2072), -v17);
  }
  else
  {
    v19 = a1;
  }
LABEL_31:
  if ( v11 )
    MiIncreaseAvailablePages(v19, v11);
  return v17;
}
