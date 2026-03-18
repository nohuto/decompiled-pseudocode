/*
 * XREFs of _DeferWindowPos @ 0x1C0066DC0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C005774C (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C0066F70 (xxxSetWindowPosAndBand.c)
 *     _DeferWindowPosAndBand @ 0x1C009ABD8 (_DeferWindowPosAndBand.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8 (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxSetWindowRgn @ 0x1C0107570 (xxxSetWindowRgn.c)
 *     xxxArrangeIconicWindows @ 0x1C013DA60 (xxxArrangeIconicWindows.c)
 * Callees:
 *     DestroySMWP @ 0x1C00687B0 (DestroySMWP.c)
 */

__int64 __fastcall DeferWindowPos(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v19; // eax
  int v20; // ebp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax

  v10 = 1LL;
  v11 = *(int *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 28) + 1 > (int)v11 )
  {
    if ( (int)v11 + 4 < (unsigned int)v11
      || (v20 = v11 + 4, v19 = v11 + 4, (unsigned int)(v11 + 4) > 0xC30C30)
      || ((v21 = 168 * v11, v22 = *(_QWORD *)(a1 + 40), v23 = 168LL * v19, (void *const)a1 == gSMWP)
        ? (v24 = UserReAllocPoolZInit(v22, v21, v23, 2004054869LL))
        : (v24 = UserReAllocPoolWithQuotaZInit(v22, v21, v23, 2004054869LL)),
          !v24) )
    {
      DestroySMWP(a1);
      return 0LL;
    }
    *(_QWORD *)(a1 + 40) = v24;
    *(_DWORD *)(a1 + 32) = v20;
  }
  v15 = *(int *)(a1 + 28);
  v16 = *(_QWORD *)(a1 + 40) + 168 * v15;
  *(_DWORD *)(a1 + 28) = v15 + 1;
  *(_QWORD *)v16 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(a2 + 60) & 0x20) == 0 )
  {
    if ( (unsigned __int64)a3 <= 1 || (unsigned __int64)a3 > 0xFFFFFFFFFFFFFFFDuLL )
      v10 = (__int64)a3;
    else
      v10 = *a3;
  }
  *(_DWORD *)(v16 + 20) = a5;
  *(_DWORD *)(v16 + 24) = a6;
  *(_DWORD *)(v16 + 28) = a7;
  *(_QWORD *)(v16 + 8) = v10;
  *(_DWORD *)(v16 + 16) = a4;
  *(_DWORD *)(v16 + 32) = a8;
  *(_QWORD *)(v16 + 112) = 0LL;
  *(_QWORD *)(v16 + 120) = 0LL;
  *(_QWORD *)(v16 + 128) = 0LL;
  *(_DWORD *)(v16 + 140) = 0;
  *(_DWORD *)(v16 + 136) = 0;
  *(_DWORD *)(v16 + 148) = 0;
  *(_DWORD *)(v16 + 144) = 0;
  *(_DWORD *)(v16 + 156) &= 0xFFFFFF1F;
  if ( (a8 & 3) != 3 || (a8 & 4) == 0 && a3 == (__int64 *)-1LL )
  {
    v17 = *(_QWORD *)(a2 + 360);
    *(_DWORD *)(v16 + 156) |= 0x20u;
    *(_QWORD *)(v16 + 128) = v17;
  }
  *(_DWORD *)(v16 + 156) &= 0xFFFFFFE0;
  *(_DWORD *)(v16 + 152) = a9;
  return a1;
}
