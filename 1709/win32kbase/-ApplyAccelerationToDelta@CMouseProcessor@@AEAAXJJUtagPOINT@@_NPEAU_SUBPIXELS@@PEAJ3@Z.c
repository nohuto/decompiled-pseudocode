/*
 * XREFs of ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C0015EDC
 * Callers:
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0015FC8 (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C0131348 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     EngMulDiv @ 0x1C0059AB0 (EngMulDiv.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0059B98 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     MonitorFromMousePoint @ 0x1C005E770 (MonitorFromMousePoint.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C005EB60 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     rand @ 0x1C00A793C (rand.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C012E0FC (GetNormalizedMouseSensitivityFactor.c)
 */

void __fastcall CMouseProcessor::ApplyAccelerationToDelta(
        CMouseProcessor *this,
        int a2,
        int a3,
        struct tagPOINT a4,
        bool a5,
        struct _SUBPIXELS *a6,
        int *a7,
        int *a8)
{
  int v9; // r14d
  INT v10; // r15d
  __int64 v12; // rsi
  unsigned __int16 v13; // dx
  INT v14; // esi
  INT v15; // edi
  CDeviceAcceleration *v16; // rcx
  struct _SUBPIXELS *v17; // r9
  __int64 v18; // rax
  int NormalizedMouseSensitivityFactor; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // r8d
  int v23; // edx
  struct _SUBPIXELS *v24; // rcx
  int v25; // eax
  struct _SUBPIXELS *v26; // rbx
  char v27; // [rsp+20h] [rbp-10h] BYREF
  int v28; // [rsp+68h] [rbp+38h] BYREF
  int v29; // [rsp+70h] [rbp+40h] BYREF

  v29 = a3;
  v28 = a2;
  v9 = a3;
  v10 = a2;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    v12 = ((__int64 (__fastcall *)(_QWORD))MonitorFromMousePoint)(a4);
    if ( v12 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        v13 = *((_WORD *)gpsi + 4987);
      else
        v13 = 96;
      v14 = *(unsigned __int16 *)(v12 + 224);
      v15 = v13;
      v28 = EngMulDiv(v10, v14, v13);
      v10 = v28;
      v9 = EngMulDiv(v9, v14, v15);
      v29 = v9;
    }
  }
  if ( a5 && (*((_BYTE *)qword_1C0188098 + 112) || (qword_1C018EC78 & 0x8000000000LL) == 0) )
  {
    v16 = (CDeviceAcceleration *)qword_1C01880B0;
    v17 = (struct _SUBPIXELS *)&v27;
    goto LABEL_9;
  }
  v16 = qword_1C0188098;
  if ( *((_BYTE *)qword_1C0188098 + 112) )
  {
    v17 = a6;
LABEL_9:
    CDeviceAcceleration::Accelerate(v16, &v28, &v29, v17);
    v9 = v29;
    v10 = v28;
    goto LABEL_10;
  }
  v18 = ((__int64 (__fastcall *)(_QWORD))MonitorFromMousePoint)(a4);
  NormalizedMouseSensitivityFactor = GetNormalizedMouseSensitivityFactor(v18);
  if ( NormalizedMouseSensitivityFactor == 256 )
  {
    v25 = rand();
    v26 = a6;
    *(_DWORD *)a6 = v25 % 0x10000;
    *((_DWORD *)v26 + 1) = rand() % 0x10000;
  }
  else
  {
    if ( v10 )
    {
      v20 = *((_DWORD *)this + 61) + v10 * NormalizedMouseSensitivityFactor;
      v21 = v20 % 256;
      *((_DWORD *)this + 61) = v20 % 256;
      v10 = v20 / 256;
      if ( v20 < 0 && v21 > 0 )
      {
        v10 = v20 / 256 + 1;
        *((_DWORD *)this + 61) = v21 - 256;
      }
    }
    if ( v9 )
    {
      v22 = *((_DWORD *)this + 62) + v9 * NormalizedMouseSensitivityFactor;
      v23 = v22 % 256;
      *((_DWORD *)this + 62) = v22 % 256;
      v9 = v22 / 256;
      if ( v22 < 0 && v23 > 0 )
      {
        ++v9;
        *((_DWORD *)this + 62) = v23 - 256;
      }
    }
    v24 = a6;
    *(_DWORD *)a6 = *((_DWORD *)this + 61) << 8;
    *((_DWORD *)v24 + 1) = *((_DWORD *)this + 62) << 8;
  }
LABEL_10:
  *a7 = v10;
  *a8 = v9;
}
