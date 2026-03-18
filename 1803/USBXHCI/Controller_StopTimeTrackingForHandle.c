/*
 * XREFs of Controller_StopTimeTrackingForHandle @ 0x1C0009B90
 * Callers:
 *     Controller_EvtDeviceFileClose @ 0x1C0007AC0 (Controller_EvtDeviceFileClose.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C000B690 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pptqqqq @ 0x1C000D2A0 (McTemplateK0pptqqqq.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E8FC (WPP_RECORDER_SF_qq.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_StopTimeTrackingForHandle(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r14
  char v5; // si
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int i; // ebx
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  int Ulong; // eax
  unsigned int v16; // ebx
  int v17; // r8d
  int v18; // r9d

  v3 = a1 + 552;
  v5 = 0;
  v8 = 0LL;
  DynamicLock_Acquire(*(_QWORD *)(a1 + 560));
  v9 = *(_QWORD *)(v3 + 24);
  for ( i = 0; ; ++i )
  {
    if ( i >= (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 112))(
                WdfDriverGlobals,
                v9) )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(a1 + 72),
        v11,
        4,
        285,
        (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
        a2,
        *(_QWORD *)(v3 + 24));
      v16 = -1073741811;
      goto LABEL_9;
    }
    if ( (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 144))(
           WdfDriverGlobals,
           v9,
           i) == a2 )
      break;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C004B3E0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 128))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 24),
    a2);
  v12 = WdfFunctions_01023;
  *(_BYTE *)(v8 + 40) = 0;
  if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(v12 + 112))(
          WdfDriverGlobals,
          *(_QWORD *)(v3 + 24)) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 1144))(
      WdfDriverGlobals,
      **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
      Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
      v3);
    v13 = *(_QWORD *)(a1 + 88);
    v14 = *(_QWORD *)(v13 + 32);
    Ulong = XilRegister_ReadUlong(v13, v14);
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v14, Ulong & 0xFFFFFBFF);
    *(_BYTE *)v3 = 0;
  }
  v16 = 0;
LABEL_9:
  DynamicLock_Release(*(_QWORD *)(v3 + 8));
  if ( v8 )
  {
    v5 = *(_BYTE *)(v8 + 52);
    v17 = *(_DWORD *)(v8 + 44);
    v18 = *(_DWORD *)(v8 + 48);
  }
  else
  {
    v17 = 0;
    v18 = 0;
  }
  ++*(_DWORD *)(a1 + 708);
  *(_DWORD *)(a1 + 712) += v17;
  *(_DWORD *)(a1 + 716) += v18;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x1000) != 0 )
    McTemplateK0pptqqqq(v5, a3, v17, *(_QWORD *)(a1 + 8), a2, a3, v5, v16, v17, v18);
  return v16;
}
