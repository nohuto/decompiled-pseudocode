/*
 * XREFs of ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0047210
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00473CC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C002B280 (LogicalToPhysicalDPIPoint.c)
 *     GetDwmDependentMetric @ 0x1C002BF30 (GetDwmDependentMetric.c)
 *     EngMulDiv @ 0x1C0049E60 (EngMulDiv.c)
 */

__int64 __fastcall CMouseProcessor::GetMouseCoordinateAbsolute(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        _DWORD *a5,
        _DWORD *a6,
        int a7,
        __int64 a8,
        char a9)
{
  int v13; // esi
  int v14; // ecx
  int DwmDependentMetric; // ebx
  int v16; // ecx
  int v17; // edx
  int v18; // ebx
  unsigned int v19; // eax
  int v20; // edx
  unsigned int v21; // eax
  _DWORD *v22; // rbx
  char v23; // dl
  __int64 v24; // rcx
  __int64 result; // rax

  v13 = a4 & 2;
  if ( (a4 & 2) != 0 )
    v14 = 78;
  else
    v14 = 0;
  DwmDependentMetric = GetDwmDependentMetric(v14);
  v16 = 79;
  if ( !v13 )
    v16 = 1;
  v17 = GetDwmDependentMetric(v16);
  v18 = a2 * DwmDependentMetric;
  *a5 = v18;
  if ( v18 < 0 )
  {
    *a6 = -(unsigned __int16)-(__int16)v18;
    v19 = -((unsigned int)-*a5 >> 16);
  }
  else
  {
    *a6 = (unsigned __int16)v18;
    v19 = (unsigned __int16)HIWORD(*a5);
  }
  v20 = a3 * v17;
  *a5 = v19;
  a5[1] = v20;
  if ( v20 < 0 )
  {
    a6[1] = -(unsigned __int16)-(__int16)v20;
    v21 = -((unsigned int)-a5[1] >> 16);
  }
  else
  {
    a6[1] = (unsigned __int16)v20;
    v21 = (unsigned __int16)HIWORD(a5[1]);
  }
  a5[1] = v21;
  if ( v13 )
  {
    *a5 += GetDwmDependentMetric(76);
    a5[1] += GetDwmDependentMetric(77);
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    LogicalToPhysicalDPIPoint((__int64)a5, (__int64)a5, 0, 0LL);
    v22 = gpsi;
    LOWORD(a2) = EngMulDiv(*a5 - *((_DWORD *)gpsi + 546), 0xFFFF, *((_DWORD *)gpsi + 548));
    LOWORD(a3) = EngMulDiv(a5[1] - v22[547], 0xFFFF, v22[549]);
  }
  *(_QWORD *)(a1 + 220) = 0LL;
  if ( ((a9 & 1) == 0 || (a4 & 0x20) != 0) && (int)IsEditionMagnificationMousePositionSupported() >= 0 )
    EditionMagnificationMousePosition(a5);
  v23 = gptInd;
  v24 = 3LL * (unsigned int)gptInd;
  *((_DWORD *)&gaptMouse + 2 * v24) = a2 | 0xFFFF0000;
  *((_DWORD *)&gaptMouse + 2 * v24 + 1) = a3 | 0xFFFF0000;
  *((_DWORD *)&gaptMouse + 2 * v24 + 2) = a7;
  *((_QWORD *)&gaptMouse + v24 + 2) = a8;
  result = (v23 + 1) & 0x3F;
  gptInd = (v23 + 1) & 0x3F;
  return result;
}
