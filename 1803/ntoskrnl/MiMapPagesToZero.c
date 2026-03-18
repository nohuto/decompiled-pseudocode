/*
 * XREFs of MiMapPagesToZero @ 0x14009D760
 * Callers:
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 *     MiGetPagesToZero @ 0x14017B8BC (MiGetPagesToZero.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiFinalizePageAttribute @ 0x140056268 (MiFinalizePageAttribute.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiUserPdeOrAbove @ 0x14009DC68 (MiUserPdeOrAbove.c)
 *     MiRemoveFaultNode @ 0x14009DCE0 (MiRemoveFaultNode.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiMapPagesToZero(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rbp
  unsigned __int8 CurrentIrql; // si
  unsigned int v11; // ebx
  unsigned __int8 v12; // al
  int v13; // ecx
  char v14; // al
  unsigned int v15; // ecx
  int v16; // r12d
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  __int64 v19; // r8
  unsigned __int64 v20; // rbp
  int v21; // ecx
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned __int64 i; // r10
  __int64 v28; // r11
  unsigned __int64 v29; // rbx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int8 v35; // [rsp+60h] [rbp+8h]
  unsigned int v36; // [rsp+78h] [rbp+20h]

  v36 = a4;
  if ( (unsigned int)a4 < 3 )
    v7 = MiLargePageSizes[(unsigned int)a4];
  else
    v7 = 1LL;
  v8 = (unsigned __int128)((a3 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v9 = (a3 + 0x58000000000LL) / 48;
  CurrentIrql = KeGetCurrentIrql();
  v35 = CurrentIrql;
  __writecr8(2uLL);
  v11 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
    while ( *(__int64 *)(a3 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) );
    a4 = v36;
  }
  if ( *(_BYTE *)(a1 + 69) == 1 )
  {
    MiRemoveFaultNode(a1);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    if ( v7 == 1 )
    {
      v12 = *(_BYTE *)(a3 + 34);
      if ( (v12 & 0x40) != 0 )
      {
        if ( (v12 & 0xC0) == 0xC0 )
          MiFinalizePageAttribute(a3, 1LL, 1u);
      }
      else if ( dword_1403CB714[4 * ((unsigned __int64)v12 >> 6)] == 1 )
      {
        MiChangePageAttribute(a3, 1LL, 1LL);
      }
      v13 = 4;
      v14 = *(_BYTE *)(a3 + 34) >> 6;
      if ( v14 )
      {
        if ( v14 == 2 )
          v13 = 28;
      }
      else
      {
        v13 = 12;
      }
      a4 = v36;
    }
    else
    {
      v13 = 4;
    }
    v15 = v13 | 0xA0000000;
    v16 = v15 | 0x4000000;
    if ( (unsigned int)a4 > 1 )
      v16 = v15;
    v17 = v16 & 0x1F;
    v18 = ((v9 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v17] & 0xFFFF000000000E7FuLL | 0x21;
    v19 = 0xFFFFF6FFFFFFFFFFuLL;
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v23 = ((v9 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v17] & 0xFFFF000000000E7FuLL | 0x121;
    }
    else
    {
      v20 = (__int64)(a2 << 25) >> 16;
      if ( a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
        {
          v18 |= 0x8000000000000000uLL;
        }
        else if ( (v16 & 0x4000000) == 0 )
        {
          v18 &= ~0x8000000000000000uLL;
        }
        v31 = MiUserPdeOrAbove(a2, v8, 0xFFFFF6FFFFFFFFFFuLL, a4);
        LODWORD(a4) = v36;
        v19 = 0xFFFFF6FFFFFFFFFFuLL;
        if ( v31 )
          v18 |= 4uLL;
      }
      if ( a2 <= 0xFFFFF6BFFFFFFF78uLL )
        v18 |= 4uLL;
      if ( v20 < 0xFFFF800000000000uLL )
      {
        v21 = HIBYTE(word_1403CB7D0);
      }
      else if ( byte_1403CCF90[((v20 >> 39) & 0x1FF) - 256] == 1 )
      {
        v21 = 0;
      }
      else if ( v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( v20 < qword_1403CD100 || v20 > qword_1403CBB70 )
          v21 = (unsigned __int8)word_1403CB7D0;
        else
          v21 = HIBYTE(word_1403CB7D0);
      }
      else
      {
        v21 = 0;
      }
      v22 = v18 | 0x100;
      if ( !v21 )
        v22 = v18;
      v23 = v22;
    }
    if ( (v16 & 5) == 4 && v16 < 0 )
      v23 |= 0x42uLL;
    v24 = ((unsigned __int16)v23 ^ (unsigned __int16)((unsigned __int8)word_1403CB7D0 << 8)) & 0x100 ^ v23;
    v25 = v24 | 0x80;
    if ( (v16 & 0x4000000) == 0 )
      v25 = v24;
    v26 = v25 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    for ( i = (__int64)(a2 << 25) >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    if ( (unsigned int)a4 <= 1 )
    {
      *(_QWORD *)a2 = v26;
      if ( MiPteInShadowRange(a2) )
      {
        MiWritePteShadow(v33, v32, v34);
        LODWORD(a4) = v36;
      }
    }
    else
    {
      v28 = 8 * v7;
      v29 = 8 * v7 + a2;
      if ( a2 < v29 )
      {
        do
        {
          *(_QWORD *)a2 = v26;
          if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(a2, v26, v19);
          a2 += 8LL;
          v26 ^= (v26 ^ (v26 + 4096)) & 0xFFFFFFFFF000LL;
        }
        while ( a2 < v29 );
        LODWORD(a4) = v36;
      }
      a2 -= v28;
    }
    *(_QWORD *)(a1 + 32) = a2;
    *(_QWORD *)(a1 + 40) = i;
    *(_DWORD *)(a1 + 64) = a4;
    *(_QWORD *)(a1 + 72) = a3;
    *(_QWORD *)(a1 + 48) = i + (v7 << 12) - 1;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v35);
    return 1LL;
  }
}
