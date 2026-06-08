/*
 * XREFs of AcpiTStateNotifyWorker @ 0x1C002ED70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0003834 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0007950 (ProcLibTraceProcessorSpecificEvent.c)
 *     FireWmiEvent @ 0x1C00099F8 (FireWmiEvent.c)
 *     ProcLibCapChange @ 0x1C0020AD0 (ProcLibCapChange.c)
 *     AcpiEval_TPC @ 0x1C002DAB0 (AcpiEval_TPC.c)
 */

__int64 __fastcall AcpiTStateNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  char v3; // si
  __int64 v4; // rdi
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  IoFreeWorkItem(a2);
  v4 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v4 + 264) & 0x3000000) != 0 )
  {
    if ( (int)AcpiEval_TPC(*(_QWORD *)(a1 + 64), (unsigned int *)&v6) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001A5D8,
        0LL);
      v3 = 1;
      ProcLibCapChange(v4, *(_DWORD *)(v4 + 432), v6, 0x64u);
      ((void (__fastcall *)(__int64))qword_1C001A980)(v4);
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x50u,
      (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
  }
  v6 = *(_DWORD *)(v4 + 480);
  ProcLibTraceProcessorSpecificEvent(v4, &PPM_ETW_NOTIFY_82, 4, (__int64)&v6);
  result = FireWmiEvent((_QWORD *)(v4 + 664), v4 + 480);
  if ( v3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
             WdfDriverGlobals,
             qword_1C001A5D8);
  return result;
}
