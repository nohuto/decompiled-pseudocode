/*
 * XREFs of PrepareGammaRampData @ 0x1C00F6DC0
 * Callers:
 *     xxxSwitchDesktopWithFade @ 0x1C00F61D8 (xxxSwitchDesktopWithFade.c)
 * Callees:
 *     GreGetDeviceGammaRamp @ 0x1C00F6FA8 (GreGetDeviceGammaRamp.c)
 */

__int64 __fastcall PrepareGammaRampData(unsigned int *a1, unsigned int **a2, _DWORD *a3)
{
  int DeviceGammaRamp; // r14d
  unsigned int v7; // esi
  __int64 DCEx; // rax
  __int64 v9; // rbx
  unsigned int DeviceCaps; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned int *v13; // rax
  unsigned int *v14; // rdi
  unsigned int v15; // ebp
  _QWORD *i; // rbx
  HDC DisplayDC; // rsi
  __int64 v18; // r15
  __int64 v19; // rax
  int v20; // ecx
  unsigned int v21; // eax

  DeviceGammaRamp = 0;
  v7 = 0;
  DCEx = _GetDCEx(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) + 16LL), 0LL, 8388611LL);
  v9 = DCEx;
  if ( !DCEx )
    return 3221225495LL;
  DeviceCaps = GreGetDeviceCaps(DCEx, 116LL);
  *a1 = DeviceCaps;
  if ( DeviceCaps < 0x3C )
    *a1 = 60;
  _ReleaseDC(v9);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v11 = *(_QWORD *)(gpDispInfo + 96LL);
  while ( v11 )
  {
    v19 = v11 + 40;
    v11 = *(_QWORD *)(v11 + 56);
    v20 = *(_DWORD *)(*(_QWORD *)v19 + 24LL);
    v21 = v7 + 1;
    if ( (v20 & 1) == 0 )
      v21 = v7;
    v7 = v21;
  }
  v12 = 1544LL * v7;
  if ( v12 > 0xFFFFFFFF || (unsigned int)(v12 + 1544) < 0x608 )
  {
    _ReleaseDC(v9);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    return 3221225621LL;
  }
  v13 = (unsigned int *)Win32AllocPoolZInit((unsigned int)(v12 + 1544), 1835231559LL);
  v14 = v13;
  if ( !v13 )
  {
    _ReleaseDC(v9);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    return 3221225495LL;
  }
  *v13 = v7;
  if ( !gProtocolType )
  {
    v15 = 0;
    for ( i = *(_QWORD **)(gpDispInfo + 96LL); i; i = (_QWORD *)i[7] )
    {
      if ( (*(_DWORD *)(i[5] + 24LL) & 1) != 0 )
      {
        DisplayDC = (HDC)GreCreateDisplayDC(i[29], 0LL, 0LL);
        if ( !DisplayDC )
          break;
        v18 = 386LL * v15;
        DeviceGammaRamp = GreGetDeviceGammaRamp(DisplayDC);
        if ( !DeviceGammaRamp )
          break;
        GreMarkUndeletableDC(DisplayDC);
        ++v15;
        *(_QWORD *)&v14[v18 + 386] = DisplayDC;
      }
    }
  }
  *a3 = DeviceGammaRamp;
  *a2 = v14;
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  return 0LL;
}
