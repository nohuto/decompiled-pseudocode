/*
 * XREFs of MiUnmapLargePages @ 0x140221B04
 * Callers:
 *     MmUnmapIoSpace @ 0x1401238F0 (MmUnmapIoSpace.c)
 *     MiReleaseLargePteMappings @ 0x14013D2CC (MiReleaseLargePteMappings.c)
 *     MiUnmapLargeDriver @ 0x1406BF148 (MiUnmapLargeDriver.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiUnmapLargePages(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // r15d
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // r13
  unsigned __int64 v10; // r12
  _QWORD *v11; // r11
  __int64 v12; // r10
  __int64 v13; // r11
  int v15; // [rsp+20h] [rbp-108h] BYREF
  __int16 v16; // [rsp+24h] [rbp-104h]
  __int64 v17; // [rsp+28h] [rbp-100h]
  __int64 v18; // [rsp+30h] [rbp-F8h]
  __int64 v19; // [rsp+38h] [rbp-F0h]

  v17 = 20LL;
  v3 = 15;
  if ( a3 != 9 )
    v3 = a3;
  v4 = a2;
  v5 = a2 >> 21;
  v15 = 0;
  v16 = 0;
  v18 = 0LL;
  v19 = 0LL;
  if ( (a2 & 0x1FFFFF) != 0 )
  {
    v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = v5 << 12;
    v9 = (_QWORD *)((v5 << 12) + v7);
    v10 = v7 + 8 * (((a1 & 0xFFF) + a2 + 4095) >> 12);
    v11 = v9;
    if ( (unsigned __int64)v9 < v10 )
    {
      do
      {
        if ( !MI_READ_PTE_LOCK_FREE((unsigned __int64)v11) )
          break;
        *v11 = v12;
        if ( MiPteInShadowRange((unsigned __int64)v11) )
          MiWritePteShadow();
        v11 = (_QWORD *)(v13 + 8);
      }
      while ( (unsigned __int64)v11 < v10 );
      v8 = v5 << 12;
    }
    if ( v11 != v9 )
      MiInsertTbFlushEntry((__int64)&v15, ((v5 << 37) + (v7 << 25)) >> 16, ((__int64)v11 - v8 - v7) >> 3, 0);
    v4 = (v4 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  }
  MiInsertTbFlushEntry((__int64)&v15, a1, v5, 1);
  return MiReturnSystemVa(a1, a1 + v4, v3, (__int64)&v15);
}
