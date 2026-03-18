/*
 * XREFs of ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C019C500
 * Callers:
 *     ?ProcessMouseInputViaRim@@YAXPEAUDEVICEINFO@@PEAXK1@Z @ 0x1C019CEF8 (-ProcessMouseInputViaRim@@YAXPEAUDEVICEINFO@@PEAXK1@Z.c)
 *     xxxMoveEvent @ 0x1C01A1E40 (xxxMoveEvent.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0020750 (_MonitorFromPoint.c)
 *     GetDwmDependentMetric @ 0x1C003E228 (GetDwmDependentMetric.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     AcquireMagInputLock @ 0x1C0103100 (AcquireMagInputLock.c)
 *     MagInputTransform @ 0x1C01D3940 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C01D3A14 (MagnificationTransformPoint.c)
 *     GetDpiForSystem @ 0x1C0238FB8 (GetDpiForSystem.c)
 */

void __fastcall GetMouseCoord(
        INT a1,
        INT a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct tagPOINT *a6,
        struct _SUBPIXELS *a7,
        int a8,
        int a9,
        int a10)
{
  struct _SUBPIXELS *v10; // rsi
  int v11; // r13d
  char v12; // r12
  int v13; // r15d
  int DwmDependentMetric; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // r14d
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  LONG v22; // r14d
  int v23; // ecx
  struct tagPOINT *v24; // rbx
  unsigned int x_high; // eax
  int v26; // ecx
  unsigned int y_high; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  INT v30; // eax
  LONG y; // ecx
  __int64 v32; // rax
  __int64 v33; // r8
  int *v34; // rcx
  char v35; // al
  char CurrentThreadDpiAwarenessContext; // al
  struct tagPOINT *v37; // r15
  __int64 v38; // r14
  INT DpiForSystem; // ebx
  struct _SUBPIXELS **v40; // r9
  __int64 v41; // rcx
  unsigned int MouseSensitivity; // eax
  INT v43; // r8d
  int v44; // ecx
  int v45; // r9d
  INT v46; // eax
  int v47; // r10d
  int v48; // edx
  INT a; // [rsp+60h] [rbp+40h] BYREF
  INT v50; // [rsp+68h] [rbp+48h] BYREF
  int v51; // [rsp+70h] [rbp+50h] BYREF

  v50 = a2;
  a = a1;
  v10 = a7;
  v11 = a4;
  v12 = a3;
  *(_QWORD *)a7 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v37 = a6;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
    {
      v38 = MonitorFromPoint((__int64)*a6, 0x20u);
      if ( v38 )
      {
        DpiForSystem = GetDpiForSystem();
        a = EngMulDiv(a, *(unsigned __int16 *)(*(_QWORD *)(v38 + 40) + 128LL), DpiForSystem);
        v50 = EngMulDiv(v50, *(unsigned __int16 *)(*(_QWORD *)(v38 + 40) + 128LL), DpiForSystem);
      }
    }
    if ( a10 && ((unsigned __int8)MouseAccelerationEnabled() || (gTouchPadParameters[5] & 0x80u) == 0) )
    {
      v40 = &a7;
      a7 = 0LL;
      v41 = 1LL;
    }
    else
    {
      if ( !(unsigned __int8)MouseAccelerationEnabled() )
      {
        MouseSensitivity = GetMouseSensitivity(&v51);
        if ( !(unsigned __int8)IsDefaultMouseSensitivity(MouseSensitivity) )
        {
          v43 = a;
          if ( a )
          {
            v44 = idxRemainder + a * v51;
            a = v44 / 256;
            v45 = (idxRemainder + v43 * v51) % 256;
            idxRemainder = v45;
            v43 = v44 / 256;
            if ( v44 < 0 && v44 % 256 > 0 )
            {
              v43 = a + 1;
              v45 -= 256;
              ++a;
              idxRemainder = v45;
            }
          }
          else
          {
            v45 = idxRemainder;
          }
          v46 = v50;
          if ( v50 )
          {
            v47 = idyRemainder + v50 * v51;
            v48 = v47 % 256;
            v46 = v47 / 256;
            v50 = v47 / 256;
            idyRemainder = v47 % 256;
            if ( v47 < 0 && v48 > 0 )
            {
              ++v46;
              v48 -= 256;
              v50 = v46;
              idyRemainder = v48;
            }
          }
          else
          {
            v48 = idyRemainder;
          }
          *((_DWORD *)v10 + 1) = v48 << 8;
          *(_DWORD *)v10 = v45 << 8;
          goto LABEL_46;
        }
        *(_DWORD *)v10 = rand() % 0x10000;
        *((_DWORD *)v10 + 1) = rand() % 0x10000;
LABEL_45:
        v46 = v50;
        v43 = a;
LABEL_46:
        v37->y += v46;
        v37->x += v43;
        *((_DWORD *)&gaptMouse + 6 * gptInd) = LOWORD(v37->x) | ((unsigned __int16)(*(_WORD *)(gpsi + 2192LL) - 1) << 16);
        *((_DWORD *)&gaptMouse + 6 * gptInd + 1) = LOWORD(v37->y) | ((unsigned __int16)(*(_WORD *)(gpsi + 2196LL) - 1) << 16);
        *((_DWORD *)&gaptMouse + 6 * gptInd + 2) = v11;
        *((_QWORD *)&gaptMouse + 3 * gptInd + 2) = a5;
        v34 = (int *)gptInd;
        v35 = gptInd + 1;
        goto LABEL_47;
      }
      v40 = (struct _SUBPIXELS **)v10;
      v41 = 0LL;
    }
    DoAccel(v41, &a, &v50, v40);
    goto LABEL_45;
  }
  v13 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    DwmDependentMetric = GetDwmDependentMetric(78LL, 0LL, a3, a4);
    v17 = 79LL;
  }
  else
  {
    DwmDependentMetric = GetDwmDependentMetric(0LL, 0LL, a3, a4);
    v17 = 1LL;
  }
  v18 = DwmDependentMetric;
  v19 = GetDwmDependentMetric(v17, 0LL, v15, v16);
  v22 = a * v18;
  v23 = v19;
  v24 = a6;
  a6->x = v22;
  if ( v22 < 0 )
  {
    *(_DWORD *)v10 = -(unsigned __int16)-(__int16)v22;
    x_high = -((unsigned int)-v24->x >> 16);
  }
  else
  {
    *(_DWORD *)v10 = (unsigned __int16)v22;
    x_high = HIWORD(v24->x);
  }
  v26 = v50 * v23;
  v24->x = x_high;
  v24->y = v26;
  if ( v26 < 0 )
  {
    *((_DWORD *)v10 + 1) = -(unsigned __int16)-(__int16)v26;
    y_high = -((unsigned int)-v24->y >> 16);
  }
  else
  {
    *((_DWORD *)v10 + 1) = (unsigned __int16)v26;
    y_high = HIWORD(v24->y);
  }
  v24->y = y_high;
  if ( v13 )
  {
    v24->x += GetDwmDependentMetric(76LL, 0LL, v20, v21);
    v24->y += GetDwmDependentMetric(77LL, 0LL, v28, v29);
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    LogicalToPhysicalDPIPoint(v24, v24, 0LL, 0LL);
    v30 = EngMulDiv(v24->x - *(_DWORD *)(gpsi + 2184LL), 0xFFFF, *(_DWORD *)(gpsi + 2192LL));
    y = v24->y;
    a = v30;
    v50 = EngMulDiv(y - *(_DWORD *)(gpsi + 2188LL), 0xFFFF, *(_DWORD *)(gpsi + 2196LL));
  }
  idyRemainder = 0;
  idxRemainder = 0;
  if ( !a9 || (v12 & 0x20) != 0 )
  {
    AcquireMagInputLock();
    v32 = MagInputTransform();
    if ( v32 && PtInRect((_DWORD *)(v32 + 16), (unsigned __int64)*v24) )
      MagnificationTransformPoint(v33, v24);
    _InterlockedExchange64(&gpMagInputLock, 0LL);
  }
  *((_DWORD *)&gaptMouse + 6 * gptInd) = a | 0xFFFF0000;
  *((_DWORD *)&gaptMouse + 6 * gptInd + 1) = v50 | 0xFFFF0000;
  *((_DWORD *)&gaptMouse + 6 * gptInd + 2) = v11;
  *((_QWORD *)&gaptMouse + 3 * gptInd + 2) = a5;
  v34 = (int *)gptInd;
  v35 = gptInd + 1;
LABEL_47:
  *v34 = v35 & 0x3F;
}
