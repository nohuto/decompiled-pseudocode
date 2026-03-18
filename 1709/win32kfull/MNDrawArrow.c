/*
 * XREFs of MNDrawArrow @ 0x1C02166CC
 * Callers:
 *     xxxMNSetTop @ 0x1C02098F8 (xxxMNSetTop.c)
 *     xxxMNDrawFullNC @ 0x1C0216BF0 (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 * Callees:
 *     DrawFrameControl @ 0x1C007E640 (DrawFrameControl.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0080D90 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     BitBltSysBmp @ 0x1C0082AFC (BitBltSysBmp.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

_QWORD *__fastcall MNDrawArrow(HDC a1, __int64 **a2, __int64 a3)
{
  int v3; // ebp
  __int64 v6; // rsi
  __int64 v7; // r9
  HDC DCEx; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  unsigned int v14; // ebx
  unsigned int v15; // esi
  __int64 v16; // rdx
  LONG v17; // r14d
  int v18; // ebp
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  int v20; // r14d
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  _DWORD *v35; // rcx
  struct tagRECT v37; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  v6 = *(_QWORD *)(**a2 + 16);
  v7 = *(unsigned int *)(*(_QWORD *)(**a2 + 40) + 144LL);
  if ( (v7 & 3) != 0 )
  {
    if ( a1 )
      DCEx = a1;
    else
      DCEx = (HDC)_GetDCEx(v6, 0LL, 66561LL);
    v9 = **a2;
    if ( *(int *)(*(_QWORD *)(v9 + 40) + 56LL) < 0 )
    {
      v14 = 7;
    }
    else
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v9, (__int64)a2, a3, v7) & 0xF) != 0
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, a3, v7) + 432)
        || (v12 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, a3, v7) + 432)
                              + 8LL),
            (*(_DWORD *)(v12 + 52) & 1) == 0)
        || *(_WORD *)(PsGetCurrentProcessWin32Process(v12) + 284) == 96 )
      {
        v13 = (_DWORD *)(gpsi + 8012LL);
      }
      else
      {
        v13 = (_DWORD *)(gpsi + 9500LL);
      }
      v14 = *v13 + 3;
    }
    if ( v3 == -3 )
    {
      v15 = 65;
      v16 = 2LL;
      v17 = 3;
      v18 = 8;
    }
    else
    {
      DPIMETRICS = GetDPIMETRICS((struct tagWND *)v6);
      v20 = *(_DWORD *)(v6 + 140) - *(_DWORD *)(v6 + 132);
      v15 = 68;
      v17 = v20 - *((_DWORD *)DPIMETRICS + 7) - 3;
      v16 = 3LL;
      v18 = 16;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 144LL) & 3) == (_DWORD)v16 )
    {
      v15 += 2;
      v18 |= 0x100u;
    }
    v21 = **a2;
    if ( *(_QWORD *)(*(_QWORD *)(v21 + 40) + 128LL) )
    {
      v37.top = v17;
      v37.left = v14;
      if ( (W32GetCurrentThreadDpiAwarenessContext(v21, v16, a3, v7) & 0xF) != 0
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 432)
        || (v25 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 432)
                              + 8LL),
            (*(_DWORD *)(v25 + 52) & 1) == 0)
        || *(_WORD *)(PsGetCurrentProcessWin32Process(v25) + 284) == 96 )
      {
        v26 = (_DWORD *)(gpsi + 8044LL);
      }
      else
      {
        v26 = (_DWORD *)(gpsi + 9532LL);
      }
      v27 = v14 + *v26;
      v37.right = v27;
      if ( (W32GetCurrentThreadDpiAwarenessContext(v27, v22, v23, v24) & 0xF) != 0
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30) + 432)
        || (v34 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 432)
                              + 8LL),
            (*(_DWORD *)(v34 + 52) & 1) == 0)
        || *(_WORD *)(PsGetCurrentProcessWin32Process(v34) + 284) == 96 )
      {
        v35 = (_DWORD *)(gpsi + 8048LL);
      }
      else
      {
        v35 = (_DWORD *)(gpsi + 9536LL);
      }
      v37.bottom = v17 + *v35;
      DrawFrameControl(DCEx, &v37, 2u, v18 | 0x800);
    }
    else
    {
      BitBltSysBmp(DCEx, v14, v17, v15);
      BitBltSysBmp(DCEx, v14, v17, v15);
    }
    if ( !a1 )
      _ReleaseDC(DCEx);
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a2, (__int64)a2, a3, v7);
}
