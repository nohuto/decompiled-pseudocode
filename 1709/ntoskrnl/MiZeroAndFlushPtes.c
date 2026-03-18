/*
 * XREFs of MiZeroAndFlushPtes @ 0x1401188A4
 * Callers:
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     MiFillSystemPtes @ 0x14009ABD0 (MiFillSystemPtes.c)
 *     MmUnmapIoSpace @ 0x1401186A0 (MmUnmapIoSpace.c)
 *     MmMapMdl @ 0x14021A540 (MmMapMdl.c)
 * Callees:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiDereferenceIoPages @ 0x140118C1C (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiZeroAndFlushPtes(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r14
  __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rtt
  __int64 PteShadow; // rax
  unsigned __int64 v11; // r9
  int v12; // r10d
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rsi
  __int64 v18; // r15
  __int64 v19; // rdi
  _QWORD *v20; // rbx
  unsigned int v21; // [rsp+28h] [rbp-E0h]
  __int64 v22; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v24; // [rsp+40h] [rbp-C8h]
  int v25; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v26; // [rsp+4Ch] [rbp-BCh]
  __int64 v27; // [rsp+50h] [rbp-B8h]
  __int64 v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+60h] [rbp-A8h]
  _QWORD v30[32]; // [rsp+108h] [rbp+0h] BYREF

  v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 1LL;
  v21 = MI_IS_PHYSICAL_ADDRESS(a1);
  v6 = v21;
  if ( v21 )
  {
    do
    {
      v5 <<= 9;
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v6;
    }
    while ( v6 );
  }
  v7 = 0;
  v27 = 20LL;
  v25 = 0;
  v26 = 0;
  v28 = 0LL;
  v29 = 0LL;
  while ( 1 )
  {
    v9 = a2;
    v8 = a2 % v5;
    a2 = v8;
    v24 = v8;
    v23 = v4 + 8 * (v9 / v5);
    if ( v4 < v23 )
    {
      do
      {
        PteShadow = *(_QWORD *)v4;
        if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v4, *(_QWORD *)v4);
        v22 = PteShadow;
        v13 = MI_GET_PAGE_FRAME_FROM_PTE(&v22);
        *(_QWORD *)v4 = 0LL;
        if ( v4 >= v14 && v4 <= v11 )
          MiWritePteShadow(v4, 0LL);
        MiInsertTbFlushEntry(&v25, v3, 1LL, v12);
        if ( !MiIsPfnInline(v13) )
        {
          if ( v7 && (v15 = v30[2 * v7 - 1], v15 == v13) )
          {
            v30[2 * v7 - 1] = v5 + v15;
          }
          else
          {
            v16 = 2LL * v7++;
            v30[v16] = v13;
            v30[v16 + 1] = v13 + v5;
            if ( v7 == 16 )
            {
              MiFlushTbList((__int64)&v25, (_KPROCESS *)v8);
              v17 = v30;
              v18 = 16LL;
              do
              {
                MiDereferenceIoPages(1LL, *v17, v17[1] - *v17);
                v17 += 2;
                --v18;
              }
              while ( v18 );
              v7 = 0;
            }
          }
        }
        v4 += 8LL;
        v3 += v5 << 12;
      }
      while ( v4 < v23 );
      a2 = v24;
    }
    if ( !a2 )
      break;
    v5 = 1LL;
    v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  MiFlushTbList((__int64)&v25, (_KPROCESS *)v8);
  v19 = v7;
  if ( v7 )
  {
    v20 = v30;
    do
    {
      MiDereferenceIoPages(1LL, *v20, v20[1] - *v20);
      v20 += 2;
      --v19;
    }
    while ( v19 );
  }
}
