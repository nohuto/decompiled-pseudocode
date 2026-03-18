/*
 * XREFs of TransformForInputMagnification @ 0x1C01A2C40
 * Callers:
 *     TransformPhysicalPointToScreen @ 0x1C01A2DA8 (TransformPhysicalPointToScreen.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     AcquireMagInputLock @ 0x1C0103100 (AcquireMagInputLock.c)
 *     ConvertPointCoordinates @ 0x1C01A28A0 (ConvertPointCoordinates.c)
 *     MagInputTransform @ 0x1C01D3940 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C01D3A14 (MagnificationTransformPoint.c)
 */

__int64 __fastcall TransformForInputMagnification(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int128 *v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14[6]; // [rsp+30h] [rbp-18h] BYREF

  AcquireMagInputLock();
  v6 = MagInputTransform();
  if ( v6 && PtInRect((_DWORD *)(v6 + 16), *a3) )
  {
    MagnificationTransformPoint(v7, a3);
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v8 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 40LL) + 44LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v8 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 40LL) + 60LL);
    }
    else
    {
      v8 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 40LL) + 28LL);
    }
    v9 = *v8;
    v10 = *a3;
    v11 = *(_OWORD *)(a1 + 140);
    *(_OWORD *)v14 = v9;
    v13 = v11;
    if ( !(unsigned int)ConvertPointCoordinates(v10, v14, (int *)&v13, a2) )
      *a2 = 0LL;
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return 1LL;
}
