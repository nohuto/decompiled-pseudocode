/*
 * XREFs of TransformPhysicalPointToScreen @ 0x1C01A2DA8
 * Callers:
 *     SetContactBoundary @ 0x1C01A2B40 (SetContactBoundary.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ConvertPointCoordinates @ 0x1C01A28A0 (ConvertPointCoordinates.c)
 */

__int64 __fastcall TransformPhysicalPointToScreen(__int64 a1, __int64 *a2, __int64 a3)
{
  __int128 *v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v6 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 40LL) + 44LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v6 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 40LL) + 60LL);
  }
  else
  {
    v6 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 40LL) + 28LL);
  }
  v7 = *v6;
  v8 = *a2;
  v9 = *(_OWORD *)(a1 + 140);
  v11 = v7;
  *(_OWORD *)v12 = v9;
  if ( !(unsigned int)ConvertPointCoordinates(v8, v12, (int *)&v11, (_QWORD *)a3) )
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
  }
  return TransformForInputMagnification(a1, a2, (unsigned __int64 *)a3);
}
