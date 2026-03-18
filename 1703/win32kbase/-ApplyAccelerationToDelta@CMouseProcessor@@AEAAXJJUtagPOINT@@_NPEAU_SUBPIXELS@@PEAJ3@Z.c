/*
 * XREFs of ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C004704C
 * Callers:
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0047130 (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C0131CB4 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EngMulDiv @ 0x1C0049E60 (EngMulDiv.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C0071D20 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     rand @ 0x1C009DC2C (rand.c)
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
  int v9; // esi
  INT v10; // r14d
  __int64 v12; // rbx
  unsigned __int16 v13; // dx
  INT v14; // edi
  INT v15; // ebx
  CDeviceAcceleration *v16; // rcx
  struct _SUBPIXELS *v17; // r9
  int v18; // r8d
  int v19; // ecx
  int v20; // edx
  int v21; // r8d
  int v22; // edx
  struct _SUBPIXELS *v23; // rcx
  int v24; // eax
  struct _SUBPIXELS *v25; // rbx
  char v26; // [rsp+20h] [rbp-10h] BYREF
  int v27; // [rsp+68h] [rbp+38h] BYREF
  int v28; // [rsp+70h] [rbp+40h] BYREF

  v28 = a3;
  v27 = a2;
  v9 = a3;
  v10 = a2;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD))_MonitorFromPoint)(a4, 32LL);
    if ( v12 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        v13 = *((_WORD *)gpsi + 4339);
      else
        v13 = 96;
      v14 = v13;
      v15 = *(unsigned __int16 *)(*(_QWORD *)(v12 + 40) + 128LL);
      v27 = EngMulDiv(v10, v15, v13);
      v10 = v27;
      v9 = EngMulDiv(v9, v15, v14);
      v28 = v9;
    }
  }
  v16 = qword_1C0186098;
  if ( a5 && (*((_BYTE *)qword_1C0186098 + 112) || (qword_1C018A108 & 0x8000000000LL) == 0) )
  {
    v16 = (CDeviceAcceleration *)qword_1C01860B0;
    v17 = (struct _SUBPIXELS *)&v26;
    goto LABEL_9;
  }
  if ( *((_BYTE *)qword_1C0186098 + 112) )
  {
    v17 = a6;
LABEL_9:
    CDeviceAcceleration::Accelerate(v16, &v27, &v28, v17);
    v9 = v28;
    v10 = v27;
    goto LABEL_10;
  }
  v18 = *((_DWORD *)qword_1C0186098 + 27);
  if ( *((_DWORD *)qword_1C0186098 + 24) == *((_DWORD *)qword_1C0186098 + 26) )
  {
    v24 = rand();
    v25 = a6;
    *(_DWORD *)a6 = v24 % 0x10000;
    *((_DWORD *)v25 + 1) = rand() % 0x10000;
  }
  else
  {
    if ( v10 )
    {
      v19 = *((_DWORD *)this + 55) + v10 * v18;
      v20 = v19 % 256;
      *((_DWORD *)this + 55) = v19 % 256;
      v10 = v19 / 256;
      if ( v19 < 0 && v20 > 0 )
      {
        v10 = v19 / 256 + 1;
        *((_DWORD *)this + 55) = v20 - 256;
      }
    }
    if ( v9 )
    {
      v21 = *((_DWORD *)this + 56) + v9 * v18;
      v22 = v21 % 256;
      *((_DWORD *)this + 56) = v21 % 256;
      v9 = v21 / 256;
      if ( v21 < 0 && v22 > 0 )
      {
        ++v9;
        *((_DWORD *)this + 56) = v22 - 256;
      }
    }
    v23 = a6;
    *(_DWORD *)a6 = *((_DWORD *)this + 55) << 8;
    *((_DWORD *)v23 + 1) = *((_DWORD *)this + 56) << 8;
  }
LABEL_10:
  *a7 = v10;
  *a8 = v9;
}
