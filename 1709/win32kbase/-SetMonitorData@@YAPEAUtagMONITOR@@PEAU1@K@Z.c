/*
 * XREFs of ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0061814
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C005EE74 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C005B7B4 (DrvGetCurrentDpiInfoFromHDev.c)
 *     IntersectRect @ 0x1C005C860 (IntersectRect.c)
 *     GreGetDeviceCaps @ 0x1C005CBF0 (GreGetDeviceCaps.c)
 *     bDeleteDCInternal @ 0x1C0061E40 (bDeleteDCInternal.c)
 *     ??4?$SharedPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C0061F88 (--4-$SharedPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@P.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0063DEC (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 */

struct tagMONITOR *__fastcall SetMonitorData(struct tagMONITOR *Monitor, unsigned int a2)
{
  int v3; // ebp
  BOOL v4; // r12d
  __int64 *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r15
  struct HOBJ__ *DisplayDC; // rax
  struct HOBJ__ *v9; // r13
  __int16 DeviceCaps; // ax
  int v11; // r14d
  int CurrentDpiInfoFromHDev; // eax
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // r8d
  int v16; // r9d
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  int v26; // ecx
  struct tagMONITOR *result; // rax
  _DWORD *v28; // rdx
  char v29[8]; // [rsp+20h] [rbp-98h] BYREF
  int v30; // [rsp+28h] [rbp-90h]
  int v31; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v32; // [rsp+C0h] [rbp+8h]
  __int16 v33; // [rsp+C8h] [rbp+10h]

  v3 = 0;
  v4 = 1;
  v5 = *(__int64 **)(gpDispInfo + 8);
  v6 = 5LL * a2;
  v7 = v5[5 * a2 + 4];
  v33 = 96;
  LOWORD(v32) = 96;
  DisplayDC = (struct HOBJ__ *)GreCreateDisplayDC(v7, 0, 0);
  v9 = DisplayDC;
  if ( !DisplayDC )
    goto LABEL_38;
  DeviceCaps = GreGetDeviceCaps(DisplayDC, 94);
  v11 = DeviceCaps & 0x4000;
  v4 = v11 == 0;
  if ( (DeviceCaps & 0x4000) == 0 )
  {
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v7, (__int64)v29);
    v13 = v30;
    if ( CurrentDpiInfoFromHDev < 0 )
      v13 = 100;
    v33 = (96 * v13 + 50) / 0x64u;
    v14 = DrvGetCurrentDpiInfoFromHDev(v7, (__int64)v29);
    v17 = v31;
    if ( v14 < 0 )
      v17 = v16;
    v32 = (unsigned int)(((unsigned int)(96 * v17 + 50) * (unsigned __int64)v15) >> 32) >> 5;
  }
  bDeleteDCInternal(v9, 1LL, 0LL);
  if ( !v11 )
  {
LABEL_38:
    if ( !HIDWORD(v5[v6 + 6]) && !LODWORD(v5[v6 + 6]) )
      v3 = 1;
  }
  if ( !Monitor )
  {
    if ( v3 )
    {
      Monitor = (struct tagMONITOR *)gpMonitorCached;
      gpMonitorCached = 0LL;
    }
    else
    {
      Monitor = CreateMonitor();
    }
    if ( !Monitor )
      return 0LL;
  }
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 64LL) = v33;
  *((_WORD *)Monitor + 112) = v32;
  v18 = *((_QWORD *)Monitor + 5);
  if ( v4 )
    *(_DWORD *)(v18 + 24) |= 1u;
  else
    *(_DWORD *)(v18 + 24) &= ~1u;
  v19 = *((_QWORD *)Monitor + 5);
  v20 = v5[v6 + 6];
  v21 = *(_QWORD *)(v19 + 28) - v20;
  if ( !v21 )
    v21 = *(_QWORD *)(v19 + 36) - v5[v6 + 7];
  if ( v21 )
  {
    *(_DWORD *)(v19 + 44) += v20 - *(_DWORD *)(v19 + 28);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) += HIDWORD(v5[v6 + 6]) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) += LODWORD(v5[v6 + 7]) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) += HIDWORD(v5[v6 + 7]) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL);
  }
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 28LL) = v5[v6 + 6];
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL) = HIDWORD(v5[v6 + 6]);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL) = v5[v6 + 7];
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL) = HIDWORD(v5[v6 + 7]);
  v22 = v7;
  if ( !v4 )
    v22 = *v5;
  *((_QWORD *)Monitor + 29) = v22;
  v23 = *((_QWORD *)Monitor + 5);
  *((_QWORD *)Monitor + 30) = v7;
  v24 = *(_DWORD *)(v23 + 44);
  if ( *(_DWORD *)(v23 + 52) < v24 )
    *(_DWORD *)(v23 + 52) = v24;
  v25 = *((_QWORD *)Monitor + 5);
  v26 = *(_DWORD *)(v25 + 48);
  if ( *(_DWORD *)(v25 + 56) < v26 )
    *(_DWORD *)(v25 + 56) = v26;
  if ( !(unsigned int)IntersectRect(
                        (_DWORD *)(*((_QWORD *)Monitor + 5) + 44LL),
                        (int *)(*((_QWORD *)Monitor + 5) + 44LL),
                        (int *)(*((_QWORD *)Monitor + 5) + 28LL)) )
  {
    v28 = (_DWORD *)*((_QWORD *)Monitor + 5);
    v28[11] = v28[7];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) = v28[8];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) = v28[9];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) = v28[10];
  }
  if ( v3 )
    tagKERNELDISPLAYINFO::SharedPointerFieldpMonitorPrimary<tagMONITOR>::operator=(gpDispInfo + 88, Monitor);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 60LL) = *(_DWORD *)(v7 + 2660);
  result = Monitor;
  *((_DWORD *)Monitor + 150) = 0;
  return result;
}
