/*
 * XREFs of VirtualizeMultiMonDigitizerSize @ 0x1C01C0C58
 * Callers:
 *     MiPConvertLogicalRect @ 0x1C0007B80 (MiPConvertLogicalRect.c)
 *     _GetPointerDeviceRects @ 0x1C010493C (_GetPointerDeviceRects.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01C0710 (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     GetDwmDependentMetric @ 0x1C003E228 (GetDwmDependentMetric.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

char __fastcall VirtualizeMultiMonDigitizerSize(__int64 a1)
{
  INT v2; // eax
  INT v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  INT DwmDependentMetric; // eax
  INT v7; // eax
  INT v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  INT v11; // eax
  _DWORD v13[4]; // [rsp+20h] [rbp-28h] BYREF

  LOBYTE(v2) = W32GetCurrentThreadDpiAwarenessContext() & 0xF;
  if ( (_BYTE)v2 != 2 )
  {
    ExpandedMonitorSpace(v13);
    v3 = v13[2] - v13[0];
    DwmDependentMetric = GetDwmDependentMetric(78LL, 0LL, v4, v5);
    v7 = EngMulDiv(*(_DWORD *)(a1 + 8), DwmDependentMetric, v3);
    v8 = v13[3] - v13[1];
    *(_DWORD *)(a1 + 8) = v7;
    v11 = GetDwmDependentMetric(79LL, 0LL, v9, v10);
    v2 = EngMulDiv(*(_DWORD *)(a1 + 12), v11, v8);
    *(_DWORD *)(a1 + 12) = v2;
  }
  return v2;
}
