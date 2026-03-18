/*
 * XREFs of MNDrawArrow @ 0x1C02157A4
 * Callers:
 *     xxxMNDrawFullNC @ 0x1C013E3E8 (xxxMNDrawFullNC.c)
 *     xxxMNSetTop @ 0x1C02078C0 (xxxMNSetTop.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 * Callees:
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C000E3CC (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     DrawFrameControl @ 0x1C002B024 (DrawFrameControl.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     BitBltSysBmp @ 0x1C00D642C (BitBltSysBmp.c)
 */

_QWORD *__fastcall MNDrawArrow(HDC a1, _QWORD *a2, int a3)
{
  __int64 v6; // rdi
  HDC DCEx; // r15
  _QWORD *v8; // rax
  _DWORD *v9; // rax
  LONG v10; // ebx
  unsigned int v11; // edi
  LONG v12; // esi
  int v13; // edx
  int v14; // ebp
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  int v16; // esi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _DWORD *v19; // rax
  _QWORD *v20; // rax
  _DWORD *v21; // rax
  RECT v23; // [rsp+20h] [rbp-28h] BYREF

  v6 = *(_QWORD *)(*a2 + 16LL);
  if ( (*(_DWORD *)(*(_QWORD *)(*a2 + 40LL) + 144LL) & 3) == 0 )
    return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a2);
  if ( a1 )
    DCEx = a1;
  else
    DCEx = (HDC)_GetDCEx(v6, 0LL, 66561LL);
  if ( *(int *)(*(_QWORD *)(*a2 + 40LL) + 56LL) >= 0 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v8 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 8678LL) != 96 )
      {
        v9 = (_DWORD *)(gpsi + 8204LL);
LABEL_13:
        v10 = *v9 + 3;
        goto LABEL_15;
      }
    }
    else
    {
      v8 = (_QWORD *)gpsi;
    }
    v9 = (_DWORD *)(*v8 + 6716LL);
    goto LABEL_13;
  }
  v10 = 7;
LABEL_15:
  if ( a3 == -3 )
  {
    v11 = 65;
    v12 = 3;
    v13 = 2;
    v14 = 8;
  }
  else
  {
    DPIMETRICS = GetDPIMETRICS((struct tagWND *)v6);
    v13 = 3;
    v16 = *(_DWORD *)(v6 + 140) - *(_DWORD *)(v6 + 132);
    v11 = 68;
    v12 = v16 - *((_DWORD *)DPIMETRICS + 7) - 3;
    v14 = 16;
  }
  v17 = *(_QWORD *)(*a2 + 40LL);
  if ( (*(_DWORD *)(v17 + 144) & 3) == v13 )
  {
    v11 += 2;
    v14 |= 0x100u;
  }
  if ( *(_QWORD *)(v17 + 128) )
  {
    v23.top = v12;
    v23.left = v10;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v18 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 8678LL) != 96 )
      {
        v19 = (_DWORD *)(gpsi + 8236LL);
LABEL_28:
        v23.right = v10 + *v19;
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 52LL) & 1) != 0 )
        {
          v20 = (_QWORD *)gpsi;
          if ( *(_WORD *)(gpsi + 8678LL) != 96 )
          {
            v21 = (_DWORD *)(gpsi + 8240LL);
LABEL_35:
            v23.bottom = v12 + *v21;
            DrawFrameControl(DCEx, &v23, 2, v14 | 0x800);
            goto LABEL_37;
          }
        }
        else
        {
          v20 = (_QWORD *)gpsi;
        }
        v21 = (_DWORD *)(*v20 + 6752LL);
        goto LABEL_35;
      }
    }
    else
    {
      v18 = (_QWORD *)gpsi;
    }
    v19 = (_DWORD *)(*v18 + 6748LL);
    goto LABEL_28;
  }
  BitBltSysBmp(DCEx, v10, v12, v11);
  BitBltSysBmp(DCEx, v10, v12, v11);
LABEL_37:
  if ( !a1 )
    _ReleaseDC(DCEx);
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a2);
}
