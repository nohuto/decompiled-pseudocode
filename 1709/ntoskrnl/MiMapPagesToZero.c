/*
 * XREFs of MiMapPagesToZero @ 0x14005C610
 * Callers:
 *     MiGetPagesToZero @ 0x1401352C8 (MiGetPagesToZero.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140028064 (MiFinalizePageAttribute.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiUserPdeOrAbove @ 0x1401155A0 (MiUserPdeOrAbove.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapPagesToZero(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 CurrentIrql; // rax
  int v11; // r14d
  unsigned __int8 v13; // al
  int v14; // eax
  char v15; // cl
  int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rbp
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbp
  int v21; // eax
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  unsigned __int16 v24; // cx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  unsigned __int64 i; // r10
  unsigned int v31; // ebp
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r11
  int v34; // [rsp+20h] [rbp-48h] BYREF
  __int64 v35; // [rsp+28h] [rbp-40h]

  if ( a4 >= 3 )
    v8 = 1LL;
  else
    v8 = MiLargePageSizes[a4];
  v9 = (a3 + 0x58000000000LL) / 48;
  CurrentIrql = KeGetCurrentIrql();
  v35 = CurrentIrql;
  __writecr8(2uLL);
  v11 = 0;
  v34 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v34);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) );
    LOBYTE(CurrentIrql) = v35;
  }
  if ( *(_BYTE *)(a1 + 68) == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)CurrentIrql);
    return 0LL;
  }
  else
  {
    if ( v8 == 1 )
    {
      v13 = *(_BYTE *)(a3 + 34);
      if ( (v13 & 0x40) != 0 )
      {
        if ( (v13 & 0xC0) == 0xC0 )
          MiFinalizePageAttribute(a3, 1LL, 1u);
      }
      else if ( dword_140388574[4 * ((unsigned __int64)v13 >> 6)] == 1 )
      {
        MiChangePageAttribute(a3, 1LL, 1LL);
      }
      v14 = 4;
      v15 = *(_BYTE *)(a3 + 34) >> 6;
      if ( v15 )
      {
        if ( v15 == 2 )
          v14 = 28;
      }
      else
      {
        v14 = 12;
      }
    }
    else
    {
      v14 = 4;
    }
    v16 = v14 | 0x4000000;
    if ( a4 > 1 )
      v16 = v14;
    v17 = v16 & 0x1F;
    v18 = (v9 & 0xFFFFFFFFFLL) << 12;
    v19 = v18 | MmProtectToPteMask[v17] & 0xFFFF000000000E7FuLL | 0x21;
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v23 = v18 | MmProtectToPteMask[v17] & 0xFFFF000000000E7FuLL | 0x121;
    }
    else
    {
      v20 = (__int64)(a2 << 25) >> 16;
      if ( a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
        {
          v19 |= 0x8000000000000000uLL;
        }
        else if ( (v16 & 0x4000000) == 0 )
        {
          v19 &= ~0x8000000000000000uLL;
        }
        v21 = MiUserPdeOrAbove(a2);
        LOBYTE(v17) = v16 & 0x1F;
        if ( v21 )
          v19 |= 4uLL;
      }
      v22 = v19 | 4;
      if ( a2 > 0xFFFFF6BFFFFFFF78uLL )
        v22 = v19;
      if ( v20 >= 0xFFFF800000000000uLL )
      {
        if ( byte_1403899D0[((v20 >> 39) & 0x1FF) - 256] != 1
          && (v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          if ( v20 < qword_140389B40 || (v11 = HIBYTE(word_1403885F8), v20 > qword_140388958) )
            v11 = (unsigned __int8)word_1403885F8;
        }
      }
      else
      {
        v11 = HIBYTE(word_1403885F8);
      }
      v23 = v22 | 0x100;
      if ( !v11 )
        v23 = v22;
    }
    v24 = v23 | 0x42;
    if ( (v17 & 5) != 4 )
      v24 = v23;
    v25 = ((unsigned __int16)((unsigned __int8)word_1403885F8 << 8) ^ v24) & 0x100;
    v26 = v23 | 0x42;
    if ( (v17 & 5) != 4 )
      v26 = v23;
    v27 = v26 ^ v25;
    v28 = v27 | 0x80;
    if ( (v16 & 0x4000000) == 0 )
      v28 = v27;
    v29 = v28 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    for ( i = (__int64)(a2 << 25) >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    v31 = a4;
    if ( a4 > 1 )
    {
      v32 = 8 * v8 + a2;
      if ( a2 < v32 )
      {
        v33 = 0xFFFFF6FB7DBED7F8uLL;
        do
        {
          *(_QWORD *)a2 = v29;
          if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= v33 )
            MiWritePteShadow(a2, v29);
          a2 += 8LL;
          v29 ^= (v29 ^ (v29 + 4096)) & 0xFFFFFFFFF000LL;
        }
        while ( a2 < v32 );
        v31 = a4;
      }
      a2 -= 8 * v8;
    }
    else
    {
      *(_QWORD *)a2 = v29;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(a2, v29);
    }
    *(_QWORD *)(a1 + 32) = a2;
    *(_QWORD *)(a1 + 40) = i;
    *(_QWORD *)(a1 + 48) = (v8 << 12) + i - 1;
    *(_DWORD *)(a1 + 64) = v31;
    *(_QWORD *)(a1 + 72) = a3;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v35);
    return 1LL;
  }
}
