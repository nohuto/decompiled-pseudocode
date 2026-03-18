/*
 * XREFs of Controller_DetectFrameMicroframeBoundary @ 0x1C00106F8
 * Callers:
 *     Controller_Start @ 0x1C0006440 (Controller_Start.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x1C0012CE0 (Controller_TimeSyncStartTrackingWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_GetFrameNumber @ 0x1C0010C5C (Controller_GetFrameNumber.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_DetectFrameMicroframeBoundary(__int64 a1)
{
  unsigned int v1; // r12d
  unsigned int v3; // r14d
  bool v4; // zf
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  LARGE_INTEGER v8; // rdi
  int FrameNumber; // eax
  int v10; // r13d
  LARGE_INTEGER v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rbx
  int Ulong; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v19; // [rsp+30h] [rbp-48h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-40h] BYREF
  KIRQL NewIrql[8]; // [rsp+40h] [rbp-38h]
  _QWORD v22[2]; // [rsp+48h] [rbp-30h] BYREF
  int v23; // [rsp+58h] [rbp-20h]
  int v24; // [rsp+5Ch] [rbp-1Ch]
  int v25; // [rsp+60h] [rbp-18h]
  int v26; // [rsp+C0h] [rbp+48h] BYREF
  int v27; // [rsp+C8h] [rbp+50h] BYREF
  int v28; // [rsp+D0h] [rbp+58h] BYREF
  int v29; // [rsp+D8h] [rbp+60h] BYREF

  v1 = 0;
  v26 = 0;
  v27 = 0;
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
    Controller_GetFrameNumber(a1, 0LL, &v28, &v29);
    do
    {
      v8 = KeQueryPerformanceCounter(0LL);
      FrameNumber = Controller_GetFrameNumber(a1, 0LL, &v26, &v27);
      v10 = v27;
      v19 = FrameNumber;
    }
    while ( v8.QuadPart - PerformanceCounter.QuadPart <= v7 && v28 == v26 && v29 == v27 );
    v11 = KeQueryPerformanceCounter(0LL);
    v12 = 1000000 * (v11.QuadPart - v8.QuadPart) / PerformanceFrequency.QuadPart;
    if ( v3 == 2 )
      KeLowerIrql(NewIrql[0]);
    if ( (v28 != v26 || v29 != v10) && v12 <= 10 )
      break;
    v4 = ++v3 == 2;
    if ( v3 > 2 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01015 + 1144))(
        WdfDriverGlobals,
        **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
        Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
        a1 + 536);
      DynamicLock_Acquire(*(_QWORD *)(a1 + 544));
      v13 = *(_QWORD *)(a1 + 88);
      v14 = *(_QWORD *)(v13 + 32);
      Ulong = XilRegister_ReadUlong(v13, v14);
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v14, Ulong & 0xFFFFFBFF);
      v16 = *(_QWORD *)(a1 + 544);
      *(_BYTE *)(a1 + 536) = 0;
      DynamicLock_Release(v16);
      return (unsigned int)-1073741823;
    }
  }
  v24 = v26;
  v22[0] = a1 + 536;
  v23 = v19;
  v17 = *(_QWORD *)(a1 + 128);
  v22[1] = v11.QuadPart;
  v25 = v10;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, char (__fastcall *)(__int64, __int64 *), _QWORD *))(WdfFunctions_01015 + 1144))(
    WdfDriverGlobals,
    **(_QWORD **)(v17 + 40),
    Interrupter_SetBusEdgeInformationRoutineWithIsrSync,
    v22);
  return v1;
}
