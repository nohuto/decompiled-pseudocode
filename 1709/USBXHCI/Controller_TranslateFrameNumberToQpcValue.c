/*
 * XREFs of Controller_TranslateFrameNumberToQpcValue @ 0x1C0012E84
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0013140 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_GetFrameNumber @ 0x1C0010C5C (Controller_GetFrameNumber.c)
 *     Controller_GetQpcValueForFrameMicroFrameBoundary @ 0x1C0010DA4 (Controller_GetQpcValueForFrameMicroFrameBoundary.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00152C4 (WPP_RECORDER_SF_dddd.c)
 */

__int64 __fastcall Controller_TranslateFrameNumberToQpcValue(__int64 a1, LARGE_INTEGER *a2)
{
  __int64 v3; // rbx
  KIRQL v5; // si
  int FrameNumber; // eax
  int HighPart; // r8d
  int v8; // r9d
  int v9; // r11d
  __int64 QpcValueForFrameMicroFrameBoundary; // rax
  int v11; // edx
  union _LARGE_INTEGER v12; // rcx
  unsigned int v13; // ebx
  int LowPart; // r11d
  int v15; // r14d
  int v16; // r8d
  unsigned int v17; // r9d
  int v18; // r9d
  char v20; // [rsp+38h] [rbp-61h]
  char v21; // [rsp+40h] [rbp-59h]
  union _LARGE_INTEGER v22; // [rsp+60h] [rbp-39h] BYREF
  __int64 v23; // [rsp+68h] [rbp-31h] BYREF
  __int64 v24; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v25[3]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v26[12]; // [rsp+90h] [rbp-9h] BYREF
  char v27; // [rsp+100h] [rbp+67h] BYREF
  int v28; // [rsp+108h] [rbp+6Fh] BYREF
  int v29; // [rsp+110h] [rbp+77h] BYREF
  char v30; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = a1 + 536;
  v26[0] = a1 + 536;
  v26[1] = &v27;
  v26[2] = &v24;
  v26[3] = &v29;
  v26[4] = &v30;
  v26[5] = &v28;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), _QWORD *))(WdfFunctions_01015 + 1144))(
    WdfDriverGlobals,
    **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
    Interrupter_QueryBusEdgeInformationRoutineWithIsrSync,
    v26);
  v25[1] = &v23;
  v25[0] = v3;
  v25[2] = &v22;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, char (__fastcall *)(__int64, _QWORD **), _QWORD *))(WdfFunctions_01015 + 1144))(
    WdfDriverGlobals,
    **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
    Interrupter_ReadAccumulatedQpcAndFrameDataForTimeSync,
    v25);
  v5 = KfRaiseIrql(2u);
  FrameNumber = Controller_GetFrameNumber(a1, 0, (unsigned int *)&a2[6], &a2[6].HighPart);
  HighPart = a2[6].HighPart;
  v8 = v28;
  v9 = v29;
  a2[7].LowPart = FrameNumber;
  if ( HighPart + 8 * FrameNumber < (unsigned int)(v8 + 8 * v9) )
  {
    a2[5] = KeQueryPerformanceCounter(0LL);
    goto LABEL_11;
  }
  QpcValueForFrameMicroFrameBoundary = Controller_GetQpcValueForFrameMicroFrameBoundary(
                                         v22,
                                         FrameNumber,
                                         HighPart,
                                         FrameNumber,
                                         HighPart,
                                         v27,
                                         v24,
                                         v9,
                                         v8,
                                         v23,
                                         v22.QuadPart,
                                         &a2[4]);
  v12.QuadPart = a2[1].LowPart;
  v13 = 0;
  a2[5].QuadPart = QpcValueForFrameMicroFrameBoundary;
  if ( __PAIR64__(a2[1].HighPart, v12.LowPart) )
  {
    LowPart = a2[7].LowPart;
    v15 = a2[6].HighPart;
    v16 = a2[1].HighPart;
    v17 = v16 + 8 * v12.LowPart;
    if ( v15 + 8 * LowPart >= v17 )
    {
      v11 = v28;
      if ( v17 >= v28 + 8 * v29 )
      {
        a2[2].QuadPart = Controller_GetQpcValueForFrameMicroFrameBoundary(
                           v12,
                           LowPart,
                           v15,
                           v12.LowPart,
                           v16,
                           v27,
                           v24,
                           v29,
                           v28,
                           v23,
                           v22.QuadPart,
                           &a2[4]);
        goto LABEL_12;
      }
      v21 = v28;
      v18 = 286;
      v20 = v29;
    }
    else
    {
      v21 = a2[6].HighPart;
      v18 = 285;
      v20 = a2[7].LowPart;
    }
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(a1 + 72),
      v11,
      4,
      v18,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      v12.QuadPart,
      v16,
      v20,
      v21);
LABEL_11:
    v13 = -1073741811;
    goto LABEL_12;
  }
  a2[2].QuadPart = 0LL;
LABEL_12:
  KeLowerIrql(v5);
  return v13;
}
