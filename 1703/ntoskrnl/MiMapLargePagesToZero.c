/*
 * XREFs of MiMapLargePagesToZero @ 0x140129880
 * Callers:
 *     MiGetLargePageToZero @ 0x140129020 (MiGetLargePageToZero.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x14015C940 (MiGetUltraMapping.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiMapLargePagesToZero(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // r12
  unsigned __int8 CurrentIrql; // r13
  int v11; // r8d
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 UltraMapping; // r10
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rcx
  unsigned __int64 v18; // r11
  int v19; // [rsp+68h] [rbp+20h] BYREF

  v8 = MiLargePageSizes[a4];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v19);
    while ( *(__int64 *)(a3 + 24) < 0 );
  }
  if ( *(_BYTE *)(a1 + 68) == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  v11 = -1543503868;
  if ( a4 > 1 )
    v11 = -1610612732;
  ValidPte = MiMakeValidPte(a2, (a3 + 0x58000000000LL) / 48, v11);
  UltraMapping = (__int64)(a2 << 25) >> 16;
  if ( *(_BYTE *)(a1 + 104) == 1 )
  {
    UltraMapping = MiGetUltraMapping(a1, a4);
    a2 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    if ( !a4 )
    {
      a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      goto LABEL_15;
    }
  }
  else if ( a4 != 2 )
  {
    v14 = 2 - a4;
    do
    {
      UltraMapping = (__int64)(UltraMapping << 25) >> 16;
      --v14;
    }
    while ( v14 );
  }
  if ( a4 > 1 )
  {
    v16 = 8 * v8;
    if ( a2 < 8 * v8 + a2 )
    {
      do
      {
        *(_QWORD *)a2 = ValidPte;
        if ( (unsigned int)MiPteInShadowRange(a2) )
          MiWritePteShadow(v17);
        a2 += 8LL;
        ValidPte ^= (ValidPte ^ ((ValidPte & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
      }
      while ( a2 < v18 );
      v16 = 8 * v8;
    }
    a2 -= v16;
    goto LABEL_23;
  }
LABEL_15:
  *(_QWORD *)a2 = ValidPte;
  if ( (unsigned int)MiPteInShadowRange(a2) )
    MiWritePteShadow(v15);
LABEL_23:
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = UltraMapping;
  *(_DWORD *)(a1 + 64) = a4;
  *(_QWORD *)(a1 + 72) = a3;
  *(_QWORD *)(a1 + 48) = UltraMapping + (v8 << 12) - 1;
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return UltraMapping;
}
