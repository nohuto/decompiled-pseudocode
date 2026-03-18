/*
 * XREFs of RIMTransformPhysicalPointToScreen @ 0x1C0108634
 * Callers:
 *     RIMApplyTransforms @ 0x1C01073A8 (RIMApplyTransforms.c)
 *     RIMSetContactBoundary @ 0x1C0107FBC (RIMSetContactBoundary.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0108360 (RIMTransformCoordinatesFromDigitizer.c)
 * Callees:
 *     UserLogError @ 0x1C0008700 (UserLogError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00E6EB8 (WPP_RECORDER_SF_qD.c)
 *     DbgPrintRIMAlways @ 0x1C00FF030 (DbgPrintRIMAlways.c)
 *     RIMConvertPointCoordinates @ 0x1C0107D4C (RIMConvertPointCoordinates.c)
 *     ApiSetTransformForInputMagnification @ 0x1C013E014 (ApiSetTransformForInputMagnification.c)
 */

__int64 __fastcall RIMTransformPhysicalPointToScreen(__int64 a1, __int64 *a2, __int64 a3)
{
  __int128 *v7; // rcx
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int128 v10; // xmm1
  int v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  int v13[6]; // [rsp+50h] [rbp-18h] BYREF

  if ( *(_QWORD *)(a1 + 288) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v7 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 40LL) + 44LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v7 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 40LL) + 60LL);
    }
    else
    {
      v7 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 40LL) + 28LL);
    }
    v8 = *v7;
    v9 = *a2;
    v10 = *(_OWORD *)(a1 + 140);
    v12 = v8;
    *(_OWORD *)v13 = v10;
    if ( !(unsigned int)RIMConvertPointCoordinates(v9, v13, (int *)&v12, (_QWORD *)a3) )
    {
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
    }
    ApiSetTransformForInputMagnification(a1, a2);
    return 0LL;
  }
  else
  {
    UserLogError(-2147483385);
    v11 = *(_DWORD *)(a1 + 24);
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0x11u,
      (__int64)&WPP_2af9596112663d0feb47807a2bcd069c_Traceguids,
      *(_QWORD *)(a1 + 16),
      v11);
    DbgPrintRIMAlways(
      "rimmon:RIMTransformPhysicalPointToScreen: pMonitor not set for pointer device hRIM:%p HPD_TYPE:%d\n",
      *(const void **)(a1 + 16),
      *(_DWORD *)(a1 + 24));
    return 3221225628LL;
  }
}
