/*
 * XREFs of MiReplenishPageSlist @ 0x1400C53D0
 * Callers:
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiGetPerfectColorHeadPage @ 0x1400CAD78 (MiGetPerfectColorHeadPage.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x1400C5878 (MiNodeFreeZeroPages.c)
 *     MiIncreaseAvailablePages @ 0x1400C72C0 (MiIncreaseAvailablePages.c)
 *     MiDecreaseAvailablePages @ 0x1400C7448 (MiDecreaseAvailablePages.c)
 *     MiSetPfnBlink @ 0x1400C7514 (MiSetPfnBlink.c)
 *     MiUpdateZeroFreeBitmap @ 0x1400C758C (MiUpdateZeroFreeBitmap.c)
 *     MiPageListCollision @ 0x14010F9B8 (MiPageListCollision.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     InterlockedPushListSList @ 0x140189020 (InterlockedPushListSList.c)
 *     MiSetPfnSlist @ 0x14022A9D4 (MiSetPfnSlist.c)
 *     HvlNotifyPageHeat @ 0x140294980 (HvlNotifyPageHeat.c)
 */

unsigned __int64 __fastcall MiReplenishPageSlist(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // r12
  _SLIST_HEADER *v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rbp
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned __int64 *v13; // r13
  _SLIST_ENTRY *v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rbx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // r11
  __int64 v21; // r10
  volatile signed __int32 *v22; // r8
  unsigned int v23; // eax
  int v24; // r11d
  unsigned __int64 v25; // rcx
  unsigned int v26; // r9d
  unsigned __int64 v27; // rsi
  int v28; // [rsp+20h] [rbp-118h]
  unsigned int v30; // [rsp+28h] [rbp-110h]
  volatile signed __int64 *v31; // [rsp+30h] [rbp-108h]
  unsigned __int64 v32; // [rsp+38h] [rbp-100h]
  _SLIST_ENTRY *List; // [rsp+40h] [rbp-F8h]
  _SLIST_HEADER *ListHead; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v35; // [rsp+50h] [rbp-E8h]
  unsigned int v36; // [rsp+64h] [rbp-D4h]
  _QWORD v37[17]; // [rsp+68h] [rbp-D0h] BYREF

  v4 = a2;
  v5 = (_SLIST_HEADER *)(*(_QWORD *)(a1 + 8LL * a2 + 4072) + 16LL * a3);
  v6 = a3;
  v7 = *(unsigned int *)(a1 + 5212);
  ListHead = v5;
  result = LOWORD(v5->Alignment);
  if ( result < v7 )
  {
    v9 = (int)v7 - result;
    v35 = *(_QWORD *)(a1 + 16) + 8256 * ((unsigned __int64)a3 >> byte_140388501);
    v10 = a2 == 0;
    v30 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_140388502));
    v11 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_140388502));
    if ( v10 )
    {
      v12 = *(_QWORD *)(a1 + 2048);
      v31 = (volatile signed __int64 *)(a1 + 2112);
      result = MiNodeFreeZeroPages(v35, v11, 1026LL);
      if ( result < v9 + 64 || *(_BYTE *)(a1 + 4677) == 1 )
        return result;
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 2056);
      v31 = (volatile signed __int64 *)(a1 + 2176);
      result = MiNodeFreeZeroPages(v35, v11, 1024LL);
      if ( result < v9 + 64 )
        return result;
    }
    v13 = (unsigned __int64 *)(v12 + 40 * v6);
    if ( v9 > *v13 )
      v9 = *(_QWORD *)(v12 + 40 * v6);
    result = *(_QWORD *)(a1 + 5952) - v9;
    if ( result >= 0x420 )
    {
      v14 = 0LL;
      v15 = 0LL;
      v36 = 0;
      if ( (HvlEnlightenments & 0x200000) == 0 || (v28 = 1, (_DWORD)v4) )
        v28 = 0;
      v32 = v9;
      result = MiDecreaseAvailablePages(a1, v9, 1056LL, 0LL);
      if ( !(_DWORD)result )
        goto LABEL_46;
      v16 = v13[2];
      result = 0xFFFFFA8000000000uLL;
      v17 = 48 * v16 - 0x58000000000LL;
      List = (_SLIST_ENTRY *)v17;
      while ( 1 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          v26 = v36;
LABEL_38:
          v9 = v32 - v15;
          if ( v15 )
          {
            if ( v26 )
              HvlNotifyPageHeat(1LL, v26, v37);
            v13[2] = v16;
            if ( v16 == 0xFFFFFFFFFLL )
            {
              MiUpdateZeroFreeBitmap(a1, (unsigned int)v4, a3, 0LL);
              v13[3] = 0xFFFFFFFFFLL;
            }
            else
            {
              MiSetPfnBlink(v17, 0xFFFFFFFFFLL, 0LL);
            }
            InterlockedPushListSList(ListHead, List, v14, v15);
            *v13 -= v15;
            v27 = -v15;
            _InterlockedExchangeAdd64(v31, v27);
            result = _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 8 * v4 + 8032), v27);
            if ( (unsigned int)MmNumberOfChannels > 1 )
            {
              result = v30;
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 8 * (v4 + 2LL * v30) + 8096), v27);
            }
          }
LABEL_46:
          if ( v9 )
            return MiIncreaseAvailablePages(a1, v9);
          return result;
        }
        v14 = (_SLIST_ENTRY *)v17;
        if ( dword_140388B14 == 1 )
        {
          LOBYTE(v18) = 1;
          v19 = (unsigned __int128)((v17 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v20 = (v17 + 0x58000000000LL) / 48;
          v21 = ((v19 < 0) + (unsigned __int8)(v19 >> 3)) & 0x1F;
          v22 = (volatile signed __int32 *)stru_140388B68.Buffer + (v20 >> 5);
          if ( (unsigned __int64)(v21 + 1) > 0x20 )
          {
            if ( (((v19 < 0) + (unsigned __int8)(v19 >> 3)) & 0x1F) != 0 )
            {
              v24 = v20 & 0x1F;
              _InterlockedOr(v22++, ((1 << (32 - v24)) - 1) << v21);
              v18 = 1LL - (unsigned int)(32 - v24);
              if ( v18 >= 0x20 )
              {
                v25 = v18 >> 5;
                v18 += -32LL * (v18 >> 5);
                do
                {
                  *v22++ = -1;
                  --v25;
                }
                while ( v25 );
              }
              if ( !v18 )
                goto LABEL_26;
            }
            v23 = (1 << v18) - 1;
          }
          else
          {
            v23 = 1 << v21;
          }
          _InterlockedOr(v22, v23);
        }
LABEL_26:
        *(_BYTE *)(v17 + 34) = *(_BYTE *)(v17 + 34) & 0xF8 | 5;
        if ( (*(_BYTE *)(v17 + 34) & 8) != 0 )
          MiPageListCollision(v17, 1LL);
        *(_QWORD *)(v17 + 24) &= 0xFFFFFFF000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v28 && MiGetPteTimeStamp(*(_QWORD *)(v17 + 16)) == 4294967293LL && v36 < 0x10 )
          v37[v36++] = v16 << 12;
        v16 = *(_QWORD *)v17 & 0xFFFFFFFFFLL;
        if ( v16 == 0xFFFFFFFFFLL )
          v17 = 0LL;
        else
          v17 = 48 * v16 - 0x58000000000LL;
        result = MiSetPfnSlist(v14, (unsigned int)v4);
        ++v15;
        v14->Next = (_SLIST_ENTRY *)v17;
        if ( !--v9 )
          goto LABEL_38;
      }
    }
  }
  return result;
}
