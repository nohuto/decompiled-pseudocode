/*
 * XREFs of MiReleaseLargePteMappings @ 0x14022BEB8
 * Callers:
 *     MiInsertCachedPte @ 0x1400753D0 (MiInsertCachedPte.c)
 *     MiEmptyPteBins @ 0x1400A4EA0 (MiEmptyPteBins.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiUnmapLargePages @ 0x14022E928 (MiUnmapLargePages.c)
 */

__int64 __fastcall MiReleaseLargePteMappings(__int64 a1, _DWORD *a2, BOOL a3)
{
  __int64 v3; // rsi
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // r10
  __int64 PteShadow; // r9
  unsigned __int64 PteTimeStamp; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // r10
  unsigned int v14; // ebp
  unsigned __int64 v15; // r11
  unsigned int v16; // eax
  signed __int32 v18[22]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+60h] [rbp+8h]

  v3 = (unsigned int)a2[1];
  v5 = 0LL;
  v6 = ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = v6;
  v7 = 0xFFFFF6FB7DBED000uLL;
  v8 = 0xFFFFF6FB7DBED7F8uLL;
  do
  {
    v9 = (__int64 *)(v6 + 8 * v3);
    PteShadow = *v9;
    if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow();
      v8 = 0xFFFFF6FB7DBED7F8uLL;
      v7 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( (PteShadow & 0xF000) == 0x1000 )
    {
      PteTimeStamp = 1LL;
    }
    else
    {
      v12 = v9[1];
      if ( (unsigned __int64)(v9 + 1) >= 0xFFFFF6FB7DBED000uLL )
      {
        v7 = 0xFFFFF6FB7DBED7F8uLL;
        if ( (unsigned __int64)(v9 + 1) <= 0xFFFFF6FB7DBED7F8uLL )
          v12 = MiReadPteShadow();
      }
      PteTimeStamp = (unsigned int)MiGetPteTimeStamp(v12, v7, v8);
    }
    v3 = (unsigned int)MiGetPteTimeStamp(PteShadow, v7, v8);
    v5 += PteTimeStamp;
    v14 = 0;
    v15 = (__int64)(v13 << 25) >> 16 << 25 >> 16;
    if ( PteTimeStamp )
    {
      do
      {
        *(_QWORD *)v13 = 0LL;
        if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow();
        ++v14;
        v13 += 8LL;
      }
      while ( v14 < PteTimeStamp );
      v6 = v19;
    }
    if ( a3 )
    {
      MiUnmapLargePages(v15, PteTimeStamp << 21, 9LL);
      if ( !v3 )
        return v5;
      _InterlockedOr(v18, 0);
      v16 = KiTbFlushTimeStamp - *a2;
      a3 = v16 <= 2 && ((*a2 & 1) != 0 || v16 < 2);
    }
    else
    {
      MiReturnSystemVa(v15, (PteTimeStamp << 21) + v15, 14, 0LL);
    }
    v8 = 0xFFFFF6FB7DBED7F8uLL;
    v7 = 0xFFFFF6FB7DBED000uLL;
  }
  while ( v3 );
  return v5;
}
