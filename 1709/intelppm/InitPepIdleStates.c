/*
 * XREFs of InitPepIdleStates @ 0x1C0031724
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0021204 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C0027694 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C0027898 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C003214C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0032360 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C00326D0 (PepNotifyReportCStates.c)
 */

__int64 __fastcall InitPepIdleStates(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  PWDF_DRIVER_GLOBALS v6; // rcx
  __int64 v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  if ( (*(_DWORD *)(a1 + 264) & 0x300LL) != 0 )
  {
    v2 = PepNotifyReportCStates(a1);
    if ( v2 < 0 )
    {
      v9 = v2;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xAu,
        (__int64)&WPP_b760b6f0545f3d05f6b30f6b447f552a_Traceguids,
        v9);
    }
  }
  v11 = 0LL;
  v10 = 0LL;
  v3 = -1073741823;
  if ( (*(_QWORD *)(a1 + 264) & 0x200000200LL) != 0 )
  {
    v4 = PepNotifyQueryProcessorIdleStatesV2(a1, &v10);
    v3 = v4;
    if ( v4 >= 0 )
      goto LABEL_10;
    LODWORD(v8) = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_b760b6f0545f3d05f6b30f6b447f552a_Traceguids,
      v8);
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFDFFFFFDFFuLL;
  }
  if ( (*(_QWORD *)(a1 + 264) & 0x100000100LL) != 0 )
  {
    v5 = PepNotifyQueryProcessorIdleStates(a1, &v11);
    v3 = v5;
    if ( v5 < 0 )
    {
      LODWORD(v8) = v5;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xCu,
        (__int64)&WPP_b760b6f0545f3d05f6b30f6b447f552a_Traceguids,
        v8);
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFEFFFFFEFFuLL;
    }
  }
LABEL_10:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00195E0,
    0LL);
  v6 = WdfDriverGlobals;
  *(_QWORD *)(a1 + 1120) = v10;
  *(_QWORD *)(a1 + 1112) = v11;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(v6, qword_1C00195E0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  ProcLibTraceGetProcessorIdleStatesV2(a1, 0);
  ProcLibTraceGetProcessorIdleStates(a1, 0);
  return v3;
}
