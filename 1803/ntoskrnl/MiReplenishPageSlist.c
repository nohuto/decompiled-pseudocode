/*
 * XREFs of MiReplenishPageSlist @ 0x1400D5110
 * Callers:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiGetPerfectColorHeadPage @ 0x1400D4EA0 (MiGetPerfectColorHeadPage.c)
 * Callees:
 *     MiPageListCollision @ 0x1400C0DC4 (MiPageListCollision.c)
 *     MiNodeFreeZeroPages @ 0x1400D4DF8 (MiNodeFreeZeroPages.c)
 *     MiDecreaseAvailablePages @ 0x1400D5664 (MiDecreaseAvailablePages.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400D5740 (MiNodeLargeFreeZeroPages.c)
 *     MiUpdateZeroFreeBitmap @ 0x1400D57EC (MiUpdateZeroFreeBitmap.c)
 *     MiIncreaseAvailablePages @ 0x140122A90 (MiIncreaseAvailablePages.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     InterlockedPushListSList @ 0x1401B2C80 (InterlockedPushListSList.c)
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 *     MiSetPfnSlist @ 0x1402654E0 (MiSetPfnSlist.c)
 *     HvlNotifyPageHeat @ 0x1402CA4CC (HvlNotifyPageHeat.c)
 */

unsigned __int64 __fastcall MiReplenishPageSlist(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // rsi
  unsigned __int64 *v12; // rdi
  unsigned __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rbx
  unsigned __int64 v17; // r13
  _SLIST_ENTRY *v18; // r12
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // r11
  __int64 v22; // r10
  volatile signed __int32 *v23; // r8
  unsigned int v24; // eax
  int v25; // r11d
  unsigned __int64 v26; // rcx
  unsigned int v27; // r9d
  signed __int64 v28; // rdx
  signed __int64 v29; // r8
  signed __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  int v32; // [rsp+20h] [rbp-128h]
  unsigned int v34; // [rsp+28h] [rbp-120h]
  volatile signed __int64 *v35; // [rsp+30h] [rbp-118h]
  unsigned __int64 *v36; // [rsp+38h] [rbp-110h]
  __int64 v37; // [rsp+40h] [rbp-108h]
  __int64 v38; // [rsp+48h] [rbp-100h]
  _SLIST_ENTRY *List; // [rsp+50h] [rbp-F8h]
  __int64 v40; // [rsp+58h] [rbp-F0h]
  unsigned int v41; // [rsp+74h] [rbp-D4h]
  _QWORD v42[17]; // [rsp+78h] [rbp-D0h] BYREF

  v4 = a2;
  v37 = 16LL * a3;
  v38 = *(_QWORD *)(a1 + 8LL * a2 + 4136);
  v5 = a3;
  result = *(unsigned __int16 *)(v37 + v38);
  v7 = *(unsigned int *)(a1 + 6300);
  if ( result >= v7 )
    return result;
  v8 = (int)v7 - result;
  v9 = *(_QWORD *)(a1 + 16) + 1984 * ((unsigned __int64)a3 >> byte_1403CB699);
  v40 = v9;
  v34 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_1403CB69A));
  if ( a2 )
  {
    v10 = *(_QWORD *)(a1 + 2120);
    v35 = (volatile signed __int64 *)(a1 + 2240);
    result = MiNodeFreeZeroPages(v9, (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_1403CB69A)), 4096);
    if ( result < v8 + 64 )
      return result;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 2112);
    v35 = (volatile signed __int64 *)(a1 + 2176);
    if ( (unsigned int)MmNumberOfChannels <= 1 )
      v11 = *(_QWORD *)(v9 + 1760);
    else
      v11 = *(_QWORD *)(v9 + 16 * ((unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_1403CB69A)) + 114LL));
    result = v11
           + MiNodeLargeFreeZeroPages(v9, (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_1403CB69A)), 0LL);
    if ( result < v8 + 64 || *(_BYTE *)(a1 + 4765) == 1 )
      return result;
  }
  v12 = (unsigned __int64 *)(v10 + 40 * v5);
  v13 = *v12;
  v36 = v12;
  if ( v8 <= *v12 )
    v13 = v8;
  result = *(_QWORD *)(a1 + 7040) - v13;
  if ( result >= 0x420 )
  {
    v14 = 0LL;
    v41 = 0;
    v32 = HvlEnlightenments & 0x200000;
    result = MiDecreaseAvailablePages(a1, v13, 1056LL, 0LL);
    if ( !(_DWORD)result )
      goto LABEL_52;
    v15 = v12[2];
    result = 0xFFFFFA8000000000uLL;
    v16 = 48 * v15 - 0x58000000000LL;
    v17 = v13;
    v18 = 0LL;
    List = (_SLIST_ENTRY *)v16;
    while ( 1 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        v27 = v41;
LABEL_42:
        v13 -= v14;
        if ( v14 )
        {
          if ( v27 )
            HvlNotifyPageHeat(1LL, v27, v42);
          v36[2] = v15;
          if ( v15 == 0xFFFFFFFFFLL )
          {
            MiUpdateZeroFreeBitmap(a1, (unsigned int)v4, a3, 0LL);
            v36[3] = 0xFFFFFFFFFLL;
          }
          else
          {
            v28 = *(_QWORD *)(v16 + 24);
            v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 24), v28 | 0xFFFFFFFFFLL, v28);
            if ( v28 != v29 )
            {
              do
              {
                v30 = v29;
                v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 24), v29 | 0xFFFFFFFFFLL, v29);
              }
              while ( v30 != v29 );
            }
          }
          InterlockedPushListSList((PSLIST_HEADER)(v37 + v38), List, v18, v14);
          *v36 -= v14;
          v31 = -v14;
          _InterlockedExchangeAdd64(v35, v31);
          result = _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 8 * v4 + 1760), v31);
          if ( (unsigned int)MmNumberOfChannels > 1 )
          {
            result = v34;
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 8 * (v4 + 2LL * v34) + 1824), v31);
          }
        }
LABEL_52:
        if ( v13 )
          return MiIncreaseAvailablePages(a1, v13);
        return result;
      }
      v18 = (_SLIST_ENTRY *)v16;
      if ( !(_DWORD)v4 && (MiFlags & 0x80u) != 0 && (++dword_1403CBEAC & MmPageValidationFrequency) == 0 )
        MiArePageContentsZero((v16 + 0x58000000000LL) / 48);
      if ( dword_1403CBDAC == 1 )
      {
        LOBYTE(v19) = 1;
        v20 = (unsigned __int128)((v16 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
        v21 = (v16 + 0x58000000000LL) / 48;
        v22 = ((v20 < 0) + (unsigned __int8)(v20 >> 3)) & 0x1F;
        v23 = (volatile signed __int32 *)(qword_1403CBE08 + 4 * (v21 >> 5));
        if ( (unsigned __int64)(v22 + 1) > 0x20 )
        {
          if ( (((v20 < 0) + (unsigned __int8)(v20 >> 3)) & 0x1F) != 0 )
          {
            v25 = v21 & 0x1F;
            _InterlockedOr(v23++, ((1 << (32 - v25)) - 1) << v22);
            v19 = 1LL - (unsigned int)(32 - v25);
            if ( v19 >= 0x20 )
            {
              v26 = v19 >> 5;
              v19 += -32LL * (v19 >> 5);
              do
              {
                *v23++ = -1;
                --v26;
              }
              while ( v26 );
            }
            if ( !v19 )
              goto LABEL_30;
          }
          v24 = (1 << v19) - 1;
        }
        else
        {
          v24 = 1 << v22;
        }
        _InterlockedOr(v23, v24);
      }
LABEL_30:
      *(_BYTE *)(v16 + 34) = *(_BYTE *)(v16 + 34) & 0xF8 | 5;
      if ( (*(_BYTE *)(v16 + 34) & 8) != 0 )
        MiPageListCollision(v16);
      *(_QWORD *)(v16 + 24) &= 0xFFFFFFF000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v32 && MiGetPteTimeStamp(*(_QWORD *)(v16 + 16)) == 4294967293LL && v41 < 0x10 )
        v42[v41++] = v15 << 12;
      v15 = *(_QWORD *)v16 & 0xFFFFFFFFFLL;
      if ( v15 == 0xFFFFFFFFFLL )
        v16 = 0LL;
      else
        v16 = 48 * v15 - 0x58000000000LL;
      result = MiSetPfnSlist(v18, (unsigned int)v4);
      ++v14;
      v18->Next = (_SLIST_ENTRY *)v16;
      if ( !--v17 )
        goto LABEL_42;
    }
  }
  return result;
}
