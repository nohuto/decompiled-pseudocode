/*
 * XREFs of ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x18007A48C
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007A730 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

void __fastcall COverlayContext::DbgSaveOverlayStateInfoBefore(COverlayContext *this)
{
  unsigned int v2; // r8d
  unsigned int v3; // r11d
  unsigned int v4; // edi
  __int64 v5; // r10
  __int64 v6; // r9
  char *v7; // r8
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx

  v2 = (*((_DWORD *)this + 2240) + 1) % 6u;
  *((_DWORD *)this + 2240) = v2;
  memset_0((char *)this + 1288 * (int)v2 + 1232, 0, 0x508uLL);
  v3 = 0;
  v4 = 0;
  for ( *((_QWORD *)this + 161 * *((int *)this + 2240) + 154) = *(_QWORD *)(*((_QWORD *)this + 151) + 384LL);
        v4 < *((_DWORD *)this + 70);
        ++*((_DWORD *)this + 322 * *((int *)this + 2240) + 566) )
  {
    if ( v4 >= 2 )
      break;
    v5 = v4++;
    v6 = 248 * v5;
    v5 <<= 9;
    v7 = (char *)this + 1288 * *((int *)this + 2240) + v5 + 1240;
    v8 = v6 + *((_QWORD *)this + 32);
    v9 = *(_OWORD *)v8;
    v8 += 128LL;
    *(_OWORD *)v7 = v9;
    *((_OWORD *)v7 + 1) = *(_OWORD *)(v8 - 112);
    *((_OWORD *)v7 + 2) = *(_OWORD *)(v8 - 96);
    *((_OWORD *)v7 + 3) = *(_OWORD *)(v8 - 80);
    *((_OWORD *)v7 + 4) = *(_OWORD *)(v8 - 64);
    *((_OWORD *)v7 + 5) = *(_OWORD *)(v8 - 48);
    *((_OWORD *)v7 + 6) = *(_OWORD *)(v8 - 32);
    v7 += 128;
    *((_OWORD *)v7 - 1) = *(_OWORD *)(v8 - 16);
    *(_OWORD *)v7 = *(_OWORD *)v8;
    *((_OWORD *)v7 + 1) = *(_OWORD *)(v8 + 16);
    *((_OWORD *)v7 + 2) = *(_OWORD *)(v8 + 32);
    *((_OWORD *)v7 + 3) = *(_OWORD *)(v8 + 48);
    *((_OWORD *)v7 + 4) = *(_OWORD *)(v8 + 64);
    *((_OWORD *)v7 + 5) = *(_OWORD *)(v8 + 80);
    *((_OWORD *)v7 + 6) = *(_OWORD *)(v8 + 96);
    *((_QWORD *)v7 + 14) = *(_QWORD *)(v8 + 112);
    *(_DWORD *)((char *)this + 1288 * *((int *)this + 2240) + v5 + 1736) = *(_DWORD *)(*(_QWORD *)(v6
                                                                                                 + *((_QWORD *)this + 32)
                                                                                                 + 24)
                                                                                     + 76LL);
  }
  if ( *((_DWORD *)this + 78) )
  {
    do
    {
      if ( v3 >= 2 )
        break;
      v10 = *((_QWORD *)this + 36);
      v11 = v3++;
      v12 = 120 * v11 + 1288LL * *((int *)this + 2240);
      *(_OWORD *)((char *)this + v12 + 2272) = *(_OWORD *)(v10 + 120 * v11);
      *(_OWORD *)((char *)this + v12 + 2288) = *(_OWORD *)(v10 + 120 * v11 + 16);
      *(_OWORD *)((char *)this + v12 + 2304) = *(_OWORD *)(v10 + 120 * v11 + 32);
      *(_OWORD *)((char *)this + v12 + 2320) = *(_OWORD *)(v10 + 120 * v11 + 48);
      *(_OWORD *)((char *)this + v12 + 2336) = *(_OWORD *)(v10 + 120 * v11 + 64);
      *(_OWORD *)((char *)this + v12 + 2352) = *(_OWORD *)(v10 + 120 * v11 + 80);
      *(_OWORD *)((char *)this + v12 + 2368) = *(_OWORD *)(v10 + 120 * v11 + 96);
      *(_QWORD *)((char *)this + v12 + 2384) = *(_QWORD *)(v10 + 120 * v11 + 112);
      ++*((_DWORD *)this + 322 * *((int *)this + 2240) + 628);
    }
    while ( v3 < *((_DWORD *)this + 78) );
  }
  *((_BYTE *)this + 1288 * *((int *)this + 2240) + 2516) = *((_BYTE *)this + 1190);
}
