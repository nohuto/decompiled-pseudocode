/*
 * XREFs of ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0070698
 * Callers:
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0026CD0 (DrvGetCurrentDpiInfoFromHDev.c)
 *     IntersectRect @ 0x1C00285C8 (IntersectRect.c)
 *     GreGetDeviceCaps @ 0x1C002A9C0 (GreGetDeviceCaps.c)
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 *     bDeleteDCInternal @ 0x1C0042230 (bDeleteDCInternal.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00636C4 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ??4?$SharedPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C0070934 (--4-$SharedPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@P.c)
 */

struct tagMONITOR *__fastcall SetMonitorData(struct tagMONITOR *Monitor, unsigned int a2)
{
  int v2; // ebp
  __int64 *v4; // rdi
  __int16 v5; // r13
  BOOL v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // r15
  HDC DisplayDC; // rax
  HDC v10; // r12
  int v11; // eax
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
  char v29[8]; // [rsp+20h] [rbp-88h] BYREF
  int v30; // [rsp+28h] [rbp-80h]
  int v31; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v32; // [rsp+B8h] [rbp+10h]

  v2 = 0;
  v4 = (__int64 *)*((_QWORD *)gpDispInfo + 1);
  v5 = 96;
  v6 = 1;
  LOWORD(v32) = 96;
  v7 = 5LL * a2;
  v8 = v4[5 * a2 + 4];
  DisplayDC = GreCreateDisplayDC(v8, 0, 0);
  v10 = DisplayDC;
  if ( !DisplayDC )
    goto LABEL_39;
  v11 = GreGetDeviceCaps((unsigned int)DisplayDC, 94) & 0x4000;
  v6 = v11 == 0;
  if ( !v11 )
  {
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v8, (__int64)v29);
    v13 = v30;
    if ( CurrentDpiInfoFromHDev < 0 )
      v13 = 100;
    v5 = (96 * v13 + 50) / 0x64u;
    v14 = DrvGetCurrentDpiInfoFromHDev(v8, (__int64)v29);
    v17 = v31;
    if ( v14 < 0 )
      v17 = v16;
    v32 = (unsigned int)(((unsigned int)(96 * v17 + 50) * (unsigned __int64)v15) >> 32) >> 5;
  }
  bDeleteDCInternal(v10, 1, 0, 0);
  if ( v6 )
  {
LABEL_39:
    if ( !HIDWORD(v4[v7 + 6]) && !LODWORD(v4[v7 + 6]) )
      v2 = 1;
  }
  if ( !Monitor )
  {
    if ( v2 )
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
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 128LL) = v5;
  *((_WORD *)Monitor + 56) = v32;
  v18 = *((_QWORD *)Monitor + 5);
  if ( v6 )
    *(_DWORD *)(v18 + 24) |= 1u;
  else
    *(_DWORD *)(v18 + 24) &= ~1u;
  v19 = *((_QWORD *)Monitor + 5);
  v20 = v4[v7 + 6];
  v21 = *(_QWORD *)(v19 + 28) - v20;
  if ( !v21 )
    v21 = *(_QWORD *)(v19 + 36) - v4[v7 + 7];
  if ( v21 )
  {
    *(_DWORD *)(v19 + 76) += v20 - *(_DWORD *)(v19 + 28);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 80LL) += HIDWORD(v4[v7 + 6]) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 84LL) += LODWORD(v4[v7 + 7]) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 88LL) += HIDWORD(v4[v7 + 7]) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL);
  }
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 28LL) = v4[v7 + 6];
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL) = HIDWORD(v4[v7 + 6]);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL) = v4[v7 + 7];
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL) = HIDWORD(v4[v7 + 7]);
  v22 = v8;
  if ( !v6 )
    v22 = *v4;
  *((_QWORD *)Monitor + 15) = v22;
  v23 = *((_QWORD *)Monitor + 5);
  *((_QWORD *)Monitor + 16) = v8;
  v24 = *(_DWORD *)(v23 + 76);
  if ( *(_DWORD *)(v23 + 84) < v24 )
    *(_DWORD *)(v23 + 84) = v24;
  v25 = *((_QWORD *)Monitor + 5);
  v26 = *(_DWORD *)(v25 + 80);
  if ( *(_DWORD *)(v25 + 88) < v26 )
    *(_DWORD *)(v25 + 88) = v26;
  if ( !(unsigned int)IntersectRect(
                        (int *)(*((_QWORD *)Monitor + 5) + 76LL),
                        (int *)(*((_QWORD *)Monitor + 5) + 76LL),
                        (int *)(*((_QWORD *)Monitor + 5) + 28LL)) )
  {
    v28 = (_DWORD *)*((_QWORD *)Monitor + 5);
    v28[19] = v28[7];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 80LL) = v28[8];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 84LL) = v28[9];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 88LL) = v28[10];
  }
  if ( v2 )
    tagKERNELDISPLAYINFO::SharedPointerFieldpMonitorPrimary<tagMONITOR>::operator=((char *)gpDispInfo + 88, Monitor);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 124LL) = *(_DWORD *)(v8 + 2660);
  result = Monitor;
  *((_DWORD *)Monitor + 134) = 0;
  return result;
}
