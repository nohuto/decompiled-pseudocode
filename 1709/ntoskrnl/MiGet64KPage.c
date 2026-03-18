/*
 * XREFs of MiGet64KPage @ 0x1400C4A90
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1400464C0 (MiResolvePrivateZeroFault.c)
 *     MiGetClusterPage @ 0x14022EEDC (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x140028A58 (MiProtectionToCacheAttribute.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiPfnZeroingNeeded @ 0x1400C4A48 (MiPfnZeroingNeeded.c)
 *     MiGetFreeZeroLargePage @ 0x1400C4F80 (MiGetFreeZeroLargePage.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiZeroAndConvertLargePage @ 0x1400CFECC (MiZeroAndConvertLargePage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiAddColdPagesToHotRanges @ 0x14022A2C8 (MiAddColdPagesToHotRanges.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022A99C (MiSetOriginalPtePfnFromFreeList.c)
 *     HvlNotifyPageHeat @ 0x140294980 (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiGet64KPage(int a1, int a2, unsigned int a3, int a4)
{
  int v7; // ebx
  unsigned int v8; // r12d
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // r14
  int v12; // ebp
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r12
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rbx
  unsigned int v21; // ebp
  unsigned int v22; // esi
  int v23; // r9d
  __int64 v24; // r10
  __int64 v25; // r11
  int v26; // eax
  int v27; // r8d
  BOOL v28; // r15d
  unsigned __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // rbp
  unsigned int v34; // [rsp+30h] [rbp-158h]
  int v35; // [rsp+34h] [rbp-154h]
  int v37; // [rsp+3Ch] [rbp-14Ch] BYREF
  __int64 v38; // [rsp+40h] [rbp-148h]
  __int64 v39; // [rsp+48h] [rbp-140h]
  unsigned __int64 v40; // [rsp+50h] [rbp-138h]
  __int64 v41; // [rsp+58h] [rbp-130h]
  unsigned __int64 v42; // [rsp+60h] [rbp-128h]
  unsigned __int64 v43; // [rsp+68h] [rbp-120h]
  char v44[16]; // [rsp+70h] [rbp-118h] BYREF
  __int64 v45; // [rsp+80h] [rbp-108h] BYREF
  char v46; // [rsp+92h] [rbp-F6h]
  unsigned int v47; // [rsp+A0h] [rbp-E8h] BYREF
  unsigned int v48; // [rsp+A4h] [rbp-E4h]
  _BYTE v49[7]; // [rsp+A8h] [rbp-E0h] BYREF

  v7 = 3;
  while ( 1 )
  {
    v8 = v7;
    v35 = v7--;
    result = MiGetFreeZeroLargePage(a1, v7, 66, a2, a4, 4);
    v38 = result;
    v10 = result;
    if ( result )
      break;
    if ( !v7 )
      return result;
  }
  v11 = MiLargePageSizes[v7];
  v12 = *(_BYTE *)(result + 34) & 7;
  v34 = v12;
  if ( v11 != 16 )
  {
    do
    {
      v13 = v11;
      v14 = 0LL;
      v40 = 0LL;
      v15 = (v10 + 0x58000000000LL) / 48;
      v39 = v15;
      v16 = v8;
      v17 = MiLargePageSizes[v16];
      v18 = v13 / v17;
      v43 = v18;
      if ( v18 )
      {
        v19 = 48 * v17;
        v41 = 48 * v17;
        v42 = v18 - 1;
        do
        {
          v20 = v10 + 48;
          v21 = 1;
          if ( v17 > 1 )
          {
            do
            {
              MiLockPageAtDpcInline(v20);
              *(_QWORD *)(v20 + 40) ^= (*(_QWORD *)(v20 + 40) ^ MiLargePageContainingFrames[v16]) & 0xFFFFFFFFFLL;
              *(_QWORD *)(v20 + 24) &= 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++v21;
              v20 += 48LL;
            }
            while ( v21 < v17 );
            v10 = v38;
            v14 = v40;
            v15 = v39;
            v19 = v41;
          }
          MiLockPageAtDpcInline(v10);
          v12 = v34;
          *(_QWORD *)(v10 + 40) ^= (*(_QWORD *)(v10 + 40) ^ MiLargePageContainingFrames[v16]) & 0xFFFFFFFFFLL;
          if ( v14 != v42 )
          {
            *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
            *(_BYTE *)(v10 + 34) ^= (*(_BYTE *)(v10 + 34) ^ v34) & 7;
            MiInsertLargePageInNodeListHelper(v15, v17, v34, 0LL);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v15 += v17;
          v10 += v19;
          ++v14;
          v39 = v15;
          v38 = v10;
          v40 = v14;
        }
        while ( v14 < v43 );
      }
      v11 = v17;
      v8 = v35 + 1;
      v10 += -48LL * v17;
      ++v35;
      v38 = v10;
    }
    while ( v17 != 16 );
  }
  v22 = MiProtectionToCacheAttribute(a3);
  v45 = 0LL;
  v46 = v46 & 0x38 | 0x45;
  if ( v12 )
    MiSetOriginalPtePfnFromFreeList(&v45);
  v26 = v47;
  v27 = HvlEnlightenments & 0x200000;
  v48 = 0;
  if ( (HvlEnlightenments & 0x200000) != 0 )
    v26 = v23;
  v47 = v26;
  v28 = v27 != 0;
  if ( v22 != 1 || MiPfnZeroingNeeded((__int64)v44, v23) )
  {
    if ( v27 )
    {
      if ( !v12 )
      {
        v29 = ((unsigned __int64)((unsigned __int128)((v10 - v24) * (__int128)v25) >> 64) >> 63)
            + ((__int64)((unsigned __int128)((v10 - v24) * (__int128)v25) >> 64) >> 3);
        MiAddColdPagesToHotRanges(&v47, v29, v29);
        if ( v48 )
          HvlNotifyPageHeat(v47, v48, v49);
      }
      v28 = 0;
    }
    MiZeroAndConvertLargePage(v10, 2LL, v22);
  }
  v30 = (unsigned __int128)((v10 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v31 = (v10 + 0x58000000000LL) / 48;
  v32 = v10 + 24;
  v33 = v31 + 1;
  do
  {
    v37 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v37);
      while ( *(__int64 *)v32 < 0 );
    }
    *(_QWORD *)(v32 + 16) &= 0xFFFFFFF000000000uLL;
    *(_QWORD *)(v32 - 24) = 0LL;
    if ( v28 )
      MiAddColdPagesToHotRanges(&v47, v30, v31);
    *(_QWORD *)(v32 - 8) = 0LL;
    if ( v11 == 1 )
      *(_QWORD *)v32 |= 0xFFFFFFFFFuLL;
    else
      *(_QWORD *)v32 ^= (v33 ^ *(_QWORD *)v32) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v32 + 10) = *(_BYTE *)(v32 + 10) & 0xF8 | 5;
    _InterlockedAnd64((volatile signed __int64 *)v32, 0x7FFFFFFFFFFFFFFFuLL);
    ++v31;
    ++v33;
    v32 += 48LL;
    --v11;
  }
  while ( v11 );
  if ( v28 )
  {
    if ( v48 )
      HvlNotifyPageHeat(v47, v48, v49);
  }
  return v10;
}
