/*
 * XREFs of MiReleaseLargePteMappings @ 0x14013D2CC
 * Callers:
 *     MiEmptyPteBins @ 0x1400844C4 (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x1400A2790 (MiInsertCachedPte.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapLargePages @ 0x140221B04 (MiUnmapLargePages.c)
 */

__int64 __fastcall MiReleaseLargePteMappings(__int64 a1, _DWORD *a2, BOOL a3)
{
  __int64 v3; // rbp
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int64 PteTimeStamp; // rdi
  __int64 v10; // rax
  _QWORD *v11; // r10
  unsigned int v12; // r14d
  unsigned __int64 i; // r11
  __int64 v14; // rcx
  __int64 v15; // r10
  unsigned int v16; // eax
  signed __int32 v18[18]; // [rsp+0h] [rbp-48h] BYREF

  v3 = (unsigned int)a2[1];
  v5 = 0LL;
  v6 = ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v7 = MI_READ_PTE_LOCK_FREE(v6 + 8 * v3);
    if ( (v7 & 0xF000) == 0x1000 )
    {
      PteTimeStamp = 1LL;
    }
    else
    {
      v10 = MI_READ_PTE_LOCK_FREE(v8 + 8);
      PteTimeStamp = (unsigned int)MiGetPteTimeStamp(v10);
    }
    v3 = (unsigned int)MiGetPteTimeStamp(v7);
    v5 += PteTimeStamp;
    v12 = 0;
    for ( i = (__int64)((_QWORD)v11 << 25) >> 16 << 25 >> 16; v12 < PteTimeStamp; v11 = (_QWORD *)(v15 + 8) )
    {
      *v11 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v11) )
        MiWritePteShadow(v14);
      ++v12;
    }
    if ( a3 )
    {
      MiUnmapLargePages(i, PteTimeStamp << 21, 9LL);
      if ( !v3 )
        return v5;
      _InterlockedOr(v18, 0);
      v16 = KiTbFlushTimeStamp - *a2;
      a3 = v16 <= 2 && ((*a2 & 1) != 0 || v16 < 2);
    }
    else
    {
      MiReturnSystemVa(i, (PteTimeStamp << 21) + i, 15, 0LL);
    }
  }
  while ( v3 );
  return v5;
}
