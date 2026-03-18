/*
 * XREFs of MiGet64KPage @ 0x140055A00
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x140017760 (MiResolvePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140017C10 (MiGetPageChain.c)
 *     MiGetClusterPage @ 0x1402698A0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x140052058 (MiPfnZeroingNeeded.c)
 *     MiGetFreeZeroLargePage @ 0x140055FD0 (MiGetFreeZeroLargePage.c)
 *     MiProtectionToCacheAttribute @ 0x140056EF8 (MiProtectionToCacheAttribute.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiInsertLargePageInNodeList @ 0x140136628 (MiInsertLargePageInNodeList.c)
 *     MiZeroAndConvertLargePage @ 0x14013825C (MiZeroAndConvertLargePage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiAddColdPagesToHotRanges @ 0x140264C70 (MiAddColdPagesToHotRanges.c)
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140265490 (MiSetOriginalPtePfnFromFreeList.c)
 *     HvlNotifyPageHeat @ 0x1402CA4CC (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiGet64KPage(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  int v6; // edi
  __int64 result; // rax
  int v8; // ebx
  unsigned int v9; // r13d
  __int64 v10; // rsi
  __int64 v11; // r14
  int v12; // r12d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r12
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rbx
  unsigned int v21; // ebp
  unsigned int v22; // ebp
  __int64 v23; // r10
  __int64 v24; // r11
  int v25; // eax
  int v26; // r8d
  BOOL v27; // r15d
  __int64 v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // rdi
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  char v35; // al
  int v36; // [rsp+30h] [rbp-158h]
  unsigned int v37; // [rsp+34h] [rbp-154h]
  int v39; // [rsp+3Ch] [rbp-14Ch] BYREF
  __int64 v40; // [rsp+40h] [rbp-148h]
  __int64 v41; // [rsp+48h] [rbp-140h]
  unsigned __int64 v42; // [rsp+50h] [rbp-138h]
  __int64 v43; // [rsp+58h] [rbp-130h]
  unsigned __int64 v44; // [rsp+60h] [rbp-128h]
  unsigned __int64 v45; // [rsp+68h] [rbp-120h]
  char v46[16]; // [rsp+70h] [rbp-118h] BYREF
  __int64 v47; // [rsp+80h] [rbp-108h] BYREF
  char v48; // [rsp+92h] [rbp-F6h]
  unsigned int v49; // [rsp+A0h] [rbp-E8h] BYREF
  unsigned int v50; // [rsp+A4h] [rbp-E4h]
  _BYTE v51[7]; // [rsp+A8h] [rbp-E0h] BYREF

  v6 = a1;
  if ( !*(_QWORD *)(1984LL * a2 + *(_QWORD *)(a1 + 16) + 1808) && (_DWORD)InitializationPhase )
    return 0LL;
  v8 = 3;
  while ( 1 )
  {
    v9 = v8;
    v36 = v8--;
    result = MiGetFreeZeroLargePage(v6, v8, 4, a2, a4, 4);
    v40 = result;
    v10 = result;
    if ( result )
      break;
    if ( !v8 )
      return result;
  }
  v11 = MiLargePageSizes[v8];
  v12 = *(_BYTE *)(result + 34) & 7;
  v37 = v12;
  if ( v11 != 16 )
  {
    do
    {
      v13 = v11;
      v14 = 0LL;
      v42 = 0LL;
      v15 = (v10 + 0x58000000000LL) / 48;
      v41 = v15;
      v16 = v9;
      v17 = MiLargePageSizes[v16];
      v18 = v13 / v17;
      v45 = v18;
      if ( v18 )
      {
        v19 = 48 * v17;
        v43 = 48 * v17;
        v44 = v18 - 1;
        do
        {
          v20 = v10 + 48;
          v21 = 1;
          if ( v17 > 1 )
          {
            do
            {
              MiLockPageAtDpcInline(v20);
              *(_QWORD *)(v20 + 40) ^= (MiLargePageContainingFrames[v16] ^ *(_QWORD *)(v20 + 40)) & 0xFFFFFFFFFLL;
              *(_QWORD *)(v20 + 24) &= 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++v21;
              v20 += 48LL;
            }
            while ( v21 < v17 );
            v10 = v40;
            v14 = v42;
            v15 = v41;
            v19 = v43;
          }
          MiLockPageAtDpcInline(v10);
          *(_QWORD *)(v10 + 40) ^= (*(_QWORD *)(v10 + 40) ^ MiLargePageContainingFrames[v16]) & 0xFFFFFFFFFLL;
          if ( v14 != v44 )
          {
            *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
            *(_BYTE *)(v10 + 34) ^= (v37 ^ *(_BYTE *)(v10 + 34)) & 7;
            MiInsertLargePageInNodeList(v15, v17, v37);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v15 += v17;
          v10 += v19;
          ++v14;
          v41 = v15;
          v40 = v10;
          v42 = v14;
        }
        while ( v14 < v45 );
        v9 = v36;
      }
      ++v9;
      v11 = v17;
      v10 += -48LL * v17;
      v36 = v9;
      v40 = v10;
    }
    while ( v17 != 16 );
    v12 = v37;
  }
  v22 = MiProtectionToCacheAttribute(a3);
  if ( !v12 && (MiFlags & 0x80u) != 0 && (++dword_1403CBEAC & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero(
      ((unsigned __int64)((unsigned __int128)((v10 - v23) * (__int128)v24) >> 64) >> 63)
    + ((__int64)((unsigned __int128)((v10 - v23) * (__int128)v24) >> 64) >> 3));
  v47 = ZeroPte;
  v48 = v48 & 0x38 | 0x45;
  if ( v12 )
    MiSetOriginalPtePfnFromFreeList(&v47);
  v25 = v49;
  v26 = HvlEnlightenments & 0x200000;
  v50 = 0;
  if ( (HvlEnlightenments & 0x200000) != 0 )
    v25 = 1;
  v49 = v25;
  v27 = v26 != 0;
  if ( v22 != 1 || MiPfnZeroingNeeded((__int64)v46, 1) )
  {
    if ( v26 )
    {
      if ( v12 || (MiAddColdPagesToHotRanges(&v49, (v10 + 0x58000000000LL) / 48, (v10 + 0x58000000000LL) / 48), !v50) )
      {
        v27 = 0;
      }
      else
      {
        HvlNotifyPageHeat(v49, v50, v51);
        v27 = 0;
      }
    }
    MiZeroAndConvertLargePage(v10, 2LL, v22);
  }
  v28 = (unsigned __int128)((v10 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v29 = (v10 + 0x58000000000LL) / 48;
  v30 = v10 + 24;
  v31 = v29 + 1;
  do
  {
    v39 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v30, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v39);
      while ( *(__int64 *)v30 < 0 );
    }
    *(_QWORD *)(v30 + 16) &= 0xFFFFFFF000000000uLL;
    *(_QWORD *)(v30 - 24) = 0LL;
    if ( v27 )
      MiAddColdPagesToHotRanges(&v49, v28, v29);
    v32 = *(_QWORD *)v30;
    v33 = *(_QWORD *)v30;
    *(_QWORD *)(v30 - 8) = ZeroPte;
    v28 = v32 | 0xFFFFFFFFFLL;
    v34 = v32 ^ (v31 ^ v33) & 0xFFFFFFFFFLL;
    v35 = *(_BYTE *)(v30 + 10);
    if ( v11 == 1 )
      v34 = v28;
    *(_QWORD *)v30 = v34;
    *(_BYTE *)(v30 + 10) = v35 & 0xF8 | 5;
    _InterlockedAnd64((volatile signed __int64 *)v30, 0x7FFFFFFFFFFFFFFFuLL);
    ++v29;
    ++v31;
    v30 += 48LL;
    --v11;
  }
  while ( v11 );
  if ( v27 )
  {
    if ( v50 )
      HvlNotifyPageHeat(v49, v50, v51);
  }
  return v10;
}
