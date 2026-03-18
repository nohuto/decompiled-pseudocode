/*
 * XREFs of Controller_DetectFrameMicroframeBoundary @ 0x1C0007804
 * Callers:
 *     Controller_Start @ 0x1C0009800 (Controller_Start.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x1C000A3E0 (Controller_TimeSyncStartTrackingWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Controller_GetFrameNumber @ 0x1C0007EBC (Controller_GetFrameNumber.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_DetectFrameMicroframeBoundary(__int64 a1)
{
  unsigned int v1; // r15d
  unsigned int v3; // r14d
  bool v4; // zf
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  LARGE_INTEGER v8; // rbx
  int FrameNumber; // eax
  int v10; // r12d
  LARGE_INTEGER v11; // rdi
  __int64 v12; // rbx
  char v13; // cl
  _QWORD *v14; // rdx
  void (__fastcall *v15)(PWDF_DRIVER_GLOBALS, _QWORD, char (__fastcall *)(__int64, __int64 *), _QWORD *); // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  int Ulong; // eax
  __int64 v19; // rcx
  int v21; // [rsp+30h] [rbp-48h] BYREF
  int v22; // [rsp+34h] [rbp-44h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-40h] BYREF
  KIRQL NewIrql[8]; // [rsp+40h] [rbp-38h]
  __int64 v25; // [rsp+48h] [rbp-30h]
  _QWORD v26[2]; // [rsp+50h] [rbp-28h] BYREF
  int v27; // [rsp+60h] [rbp-18h]
  int v28; // [rsp+64h] [rbp-14h]
  int v29; // [rsp+68h] [rbp-10h]
  int v30; // [rsp+C8h] [rbp+50h] BYREF
  int v31; // [rsp+D0h] [rbp+58h] BYREF
  int v32; // [rsp+D8h] [rbp+60h] BYREF

  v1 = 0;
  v25 = a1 + 552;
  v30 = 0;
  v31 = 0;
  *(_QWORD *)NewIrql = KeGetCurrentIrql();
  KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = 1;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 )
      NewIrql[0] = KfRaiseIrql(2u);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( v3 == 1 )
      v6 = 100 * PerformanceFrequency.QuadPart;
    else
      v6 = 10 * PerformanceFrequency.QuadPart;
    v7 = v6 / 1000;
    Controller_GetFrameNumber(a1, 0LL, &v32, &v21);
    do
    {
      v8 = KeQueryPerformanceCounter(0LL);
      FrameNumber = Controller_GetFrameNumber(a1, 0LL, &v30, &v31);
      v10 = v31;
      v22 = FrameNumber;
    }
    while ( v8.QuadPart - PerformanceCounter.QuadPart <= v7 && v32 == v30 && v21 == v31 );
    v11 = KeQueryPerformanceCounter(0LL);
    v12 = 1000000 * (v11.QuadPart - v8.QuadPart) / PerformanceFrequency.QuadPart;
    if ( v3 == 2 )
      KeLowerIrql(NewIrql[0]);
    if ( (v32 != v30 || v21 != v10) && v12 <= 10 )
      break;
    v4 = ++v3 == 2;
    if ( v3 > 2 )
    {
      v13 = 0;
      goto LABEL_19;
    }
  }
  v13 = 1;
LABEL_19:
  v14 = *(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL);
  if ( v13 )
  {
    v28 = v30;
    v26[0] = v25;
    v27 = v22;
    v15 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, char (__fastcall *)(__int64, __int64 *), _QWORD *))(WdfFunctions_01023 + 1144);
    v26[1] = v11.QuadPart;
    v29 = v10;
    v15(WdfDriverGlobals, *v14, Interrupter_SetBusEdgeInformationRoutineWithIsrSync, v26);
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 1144))(
      WdfDriverGlobals,
      *v14,
      Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
      a1 + 552);
    DynamicLock_Acquire(*(_QWORD *)(a1 + 560));
    v16 = *(_QWORD *)(a1 + 88);
    v17 = *(_QWORD *)(v16 + 32);
    Ulong = XilRegister_ReadUlong(v16, v17);
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v17, Ulong & 0xFFFFFBFF);
    v19 = *(_QWORD *)(a1 + 560);
    *(_BYTE *)(a1 + 552) = 0;
    DynamicLock_Release(v19);
    return (unsigned int)-1073741823;
  }
  return v1;
}
