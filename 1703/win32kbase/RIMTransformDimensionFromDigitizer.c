/*
 * XREFs of RIMTransformDimensionFromDigitizer @ 0x1C0108420
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00906DC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0090700 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMConvertPointCoordinates @ 0x1C0107D4C (RIMConvertPointCoordinates.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C01087CC (RIMTransformPointerDevicePointToPhysical.c)
 */

void __fastcall RIMTransformDimensionFromDigitizer(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v8; // rdx
  __int128 *v9; // rcx
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13[6]; // [rsp+40h] [rbp-18h] BYREF
  char v14; // [rsp+60h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 264) & 0x80u) != 0 && *(_QWORD *)(a1 + 536) )
  {
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)&v14,
      (struct _KTHREAD **)(*(_QWORD *)(a1 + 408) + 96LL));
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 536) + 740LL) - 2) & 0xFFFFFFFD) == 0 )
    {
      if ( a2 )
      {
        *(_DWORD *)a2 ^= *(_DWORD *)(a2 + 4);
        *(_DWORD *)(a2 + 4) ^= *(_DWORD *)a2;
        *(_DWORD *)a2 ^= *(_DWORD *)(a2 + 4);
      }
      else
      {
        *a3 ^= a3[1];
        a3[1] ^= *a3;
        *a3 ^= a3[1];
      }
    }
    if ( a2 )
      RIMTransformPointerDevicePointToPhysical(*(_QWORD *)(a1 + 536), *(_QWORD *)a2, a3);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 536) + 288LL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 52LL) & 1) != 0 )
      {
        v8 = *(_QWORD *)(a1 + 536);
        v9 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v8 + 288) + 40LL) + 44LL);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                           + 52LL) & 1) != 0 )
      {
        v8 = *(_QWORD *)(a1 + 536);
        v9 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v8 + 288) + 40LL) + 60LL);
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 536);
        v9 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v8 + 288) + 40LL) + 28LL);
      }
      v10 = *v9;
      v11 = *(_QWORD *)a3;
      v12 = v10;
      *(_OWORD *)v13 = *(_OWORD *)(v8 + 140);
      if ( (unsigned int)RIMConvertPointCoordinates(v11, v13, (int *)&v12, (_QWORD *)a4) )
      {
        *(_DWORD *)a4 = abs32(v10 - *(_DWORD *)a4);
        *(_DWORD *)(a4 + 4) = abs32(DWORD1(v10) - *(_DWORD *)(a4 + 4));
      }
      else
      {
        *(_DWORD *)a4 = 0;
        *(_DWORD *)(a4 + 4) = 0;
      }
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v14);
  }
}
