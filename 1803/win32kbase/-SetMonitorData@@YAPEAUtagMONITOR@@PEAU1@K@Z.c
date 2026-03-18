/*
 * XREFs of ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0058D90
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0053D74 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 *     GreGetDeviceCaps @ 0x1C0054280 (GreGetDeviceCaps.c)
 *     IntersectRect @ 0x1C0057618 (IntersectRect.c)
 *     bDeleteDCInternal @ 0x1C0059000 (bDeleteDCInternal.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0059594 (DrvGetCurrentDpiInfoFromHDev.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006DF8C (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 */

struct tagMONITOR *__fastcall SetMonitorData(struct tagMONITOR *Monitor, unsigned int a2, __int64 a3, int a4)
{
  int v5; // ebp
  BOOL v6; // r12d
  __int64 *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r15
  HDC DisplayDC; // rax
  HDC v11; // r13
  __int16 DeviceCaps; // ax
  int v13; // r14d
  int CurrentDpiInfoFromHDev; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // r8d
  int v18; // r9d
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int *v25; // r8
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  struct tagMONITOR *result; // rax
  _DWORD *v30; // rdx
  char v31[8]; // [rsp+20h] [rbp-98h] BYREF
  int v32; // [rsp+28h] [rbp-90h]
  int v33; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v34; // [rsp+C0h] [rbp+8h]
  __int16 v35; // [rsp+C8h] [rbp+10h]

  v5 = 0;
  v6 = 1;
  v7 = *(__int64 **)(gpDispInfo + 16);
  v8 = 5LL * a2;
  v9 = v7[5 * a2 + 4];
  v35 = 96;
  LOWORD(v34) = 96;
  DisplayDC = GreCreateDisplayDC(v9, 0, 0, a4);
  v11 = DisplayDC;
  if ( !DisplayDC )
    goto LABEL_38;
  DeviceCaps = GreGetDeviceCaps(DisplayDC, 94);
  v13 = DeviceCaps & 0x4000;
  v6 = v13 == 0;
  if ( (DeviceCaps & 0x4000) == 0 )
  {
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v9, v31);
    v15 = v32;
    if ( CurrentDpiInfoFromHDev < 0 )
      v15 = 100;
    v35 = (96 * v15 + 50) / 0x64u;
    v16 = DrvGetCurrentDpiInfoFromHDev(v9, v31);
    v19 = v33;
    if ( v16 < 0 )
      v19 = v18;
    v34 = (unsigned int)(((unsigned int)(96 * v19 + 50) * (unsigned __int64)v17) >> 32) >> 5;
  }
  bDeleteDCInternal(v11, 1LL, 0LL);
  if ( !v13 )
  {
LABEL_38:
    if ( !HIDWORD(v7[v8 + 6]) && !LODWORD(v7[v8 + 6]) )
      v5 = 1;
  }
  if ( !Monitor )
  {
    if ( v5 )
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
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 64LL) = v35;
  *((_WORD *)Monitor + 112) = v34;
  v20 = *((_QWORD *)Monitor + 5);
  if ( v6 )
    *(_DWORD *)(v20 + 24) |= 1u;
  else
    *(_DWORD *)(v20 + 24) &= ~1u;
  v21 = *((_QWORD *)Monitor + 5);
  v22 = v7[v8 + 6];
  v23 = *(_QWORD *)(v21 + 28) - v22;
  if ( !v23 )
    v23 = *(_QWORD *)(v21 + 36) - v7[v8 + 7];
  if ( v23 )
  {
    *(_DWORD *)(v21 + 44) += v22 - *(_DWORD *)(v21 + 28);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) += HIDWORD(v7[v8 + 6]) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) += LODWORD(v7[v8 + 7]) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) += HIDWORD(v7[v8 + 7]) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL);
  }
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 28LL) = v7[v8 + 6];
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL) = HIDWORD(v7[v8 + 6]);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL) = v7[v8 + 7];
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL) = HIDWORD(v7[v8 + 7]);
  v24 = v9;
  if ( !v6 )
    v24 = *v7;
  v25 = (int *)*((_QWORD *)Monitor + 5);
  *((_QWORD *)Monitor + 29) = v24;
  *((_QWORD *)Monitor + 30) = v9;
  v26 = v25[11];
  if ( v25[13] < v26 )
  {
    v25[13] = v26;
    v25 = (int *)*((_QWORD *)Monitor + 5);
  }
  v27 = v25[12];
  if ( v25[14] < v27 )
  {
    v25[14] = v27;
    v25 = (int *)*((_QWORD *)Monitor + 5);
  }
  if ( !(unsigned int)IntersectRect(v25 + 11, v25 + 11, v25 + 7) )
  {
    v30 = (_DWORD *)*((_QWORD *)Monitor + 5);
    v30[11] = v30[7];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) = v30[8];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) = v30[9];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) = v30[10];
  }
  if ( v5 )
  {
    v28 = gpDispInfo;
    *(_QWORD *)(*(_QWORD *)gpDispInfo + 8LL) = *((_QWORD *)Monitor + 6);
    *(_QWORD *)(v28 + 96) = Monitor;
  }
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 60LL) = *(_DWORD *)(v9 + 2636);
  result = Monitor;
  *((_DWORD *)Monitor + 150) = 0;
  return result;
}
