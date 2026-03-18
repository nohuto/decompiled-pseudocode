/*
 * XREFs of MiUnmapLargePages @ 0x140268FF4
 * Callers:
 *     MmUnmapIoSpace @ 0x14013D150 (MmUnmapIoSpace.c)
 *     MiUnmapLargeDriver @ 0x140755F38 (MiUnmapLargeDriver.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 */

__int64 __fastcall MiUnmapLargePages(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // edi
  unsigned __int64 v4; // r11
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rsi
  _QWORD *v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r10

  v3 = 14;
  v4 = a2;
  if ( a3 != 9 )
    v3 = a3;
  if ( (a2 & 0x1FFFFF) != 0 )
  {
    v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v7 = v6 + (a2 >> 21 << 12);
    v8 = v6 + 8 * (((a1 & 0xFFF) + a2 + 4095) >> 12);
    while ( v7 < v8 && MI_READ_PTE_LOCK_FREE(v7) )
    {
      *v9 = ZeroPte;
      if ( MiPteInShadowRange((unsigned __int64)v9) )
        MiWritePteShadow(v11, v10, v12);
      v7 = v13 + 8;
    }
    v4 = (v4 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  }
  return MiReturnSystemVa(a1, a1 + v4, v3);
}
