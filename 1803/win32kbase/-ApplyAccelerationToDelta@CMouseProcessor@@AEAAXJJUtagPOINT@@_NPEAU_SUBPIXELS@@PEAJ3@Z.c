/*
 * XREFs of ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00390C8
 * Callers:
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0039174 (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C0134FB4 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C001F400 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C00554C8 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     MonitorFromMousePoint @ 0x1C00557F0 (MonitorFromMousePoint.c)
 *     EngMulDiv @ 0x1C0057F90 (EngMulDiv.c)
 *     rand @ 0x1C00744EC (rand.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C012E4A8 (GetNormalizedMouseSensitivityFactor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int16 v15; // dx
  INT v16; // esi
  INT v17; // edi
  CDeviceAcceleration *v18; // rcx
  struct _SUBPIXELS *v19; // r9
  __int64 v20; // rax
  int NormalizedMouseSensitivityFactor; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // r8d
  int v25; // edx
  struct _SUBPIXELS *v26; // rcx
  int v27; // eax
  struct _SUBPIXELS *v28; // rbx
  char v29; // [rsp+20h] [rbp-10h] BYREF
  int v30; // [rsp+68h] [rbp+38h] BYREF
  int v31; // [rsp+70h] [rbp+40h] BYREF

  v31 = a3;
  v30 = a2;
  v9 = a3;
  v10 = a2;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    if ( *((_DWORD *)this + 4) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
    v14 = ((__int64 (__fastcall *)(_QWORD))MonitorFromMousePoint)(a4);
    if ( v14 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        v15 = *((_WORD *)gpsi + 3499);
      else
        v15 = 96;
      v16 = *(unsigned __int16 *)(v14 + 224);
      v17 = v15;
      v30 = EngMulDiv(v10, v16, v15);
      v10 = v30;
      v9 = EngMulDiv(v9, v16, v17);
      v31 = v9;
    }
  }
  if ( a5 && (*((_BYTE *)qword_1C019AA88 + 112) || (qword_1C01A02B8 & 0x8000000000LL) == 0) )
  {
    v18 = (CDeviceAcceleration *)qword_1C019AAA0;
    v19 = (struct _SUBPIXELS *)&v29;
LABEL_15:
    CDeviceAcceleration::Accelerate(v18, &v30, &v31, v19);
    v9 = v31;
    v10 = v30;
    goto LABEL_27;
  }
  v18 = qword_1C019AA88;
  if ( *((_BYTE *)qword_1C019AA88 + 112) )
  {
    v19 = a6;
    goto LABEL_15;
  }
  v20 = ((__int64 (__fastcall *)(_QWORD))MonitorFromMousePoint)(a4);
  NormalizedMouseSensitivityFactor = GetNormalizedMouseSensitivityFactor(v20);
  if ( NormalizedMouseSensitivityFactor == 256 )
  {
    v27 = rand();
    v28 = a6;
    *(_DWORD *)a6 = v27 % 0x10000;
    *((_DWORD *)v28 + 1) = rand() % 0x10000;
  }
  else
  {
    if ( v10 )
    {
      v22 = *((_DWORD *)this + 23) + v10 * NormalizedMouseSensitivityFactor;
      v23 = v22 % 256;
      *((_DWORD *)this + 23) = v22 % 256;
      v10 = v22 / 256;
      if ( v22 < 0 && v23 > 0 )
      {
        v10 = v22 / 256 + 1;
        *((_DWORD *)this + 23) = v23 - 256;
      }
    }
    if ( v9 )
    {
      v24 = *((_DWORD *)this + 24) + v9 * NormalizedMouseSensitivityFactor;
      v25 = v24 % 256;
      *((_DWORD *)this + 24) = v24 % 256;
      v9 = v24 / 256;
      if ( v24 < 0 && v25 > 0 )
      {
        ++v9;
        *((_DWORD *)this + 24) = v25 - 256;
      }
    }
    v26 = a6;
    *(_DWORD *)a6 = *((_DWORD *)this + 23) << 8;
    *((_DWORD *)v26 + 1) = *((_DWORD *)this + 24) << 8;
  }
LABEL_27:
  *a7 = v10;
  *a8 = v9;
}
