/*
 * XREFs of Controller_StopTimeTrackingForHandle @ 0x1C0012488
 * Callers:
 *     Controller_EvtDeviceFileClose @ 0x1C0007060 (Controller_EvtDeviceFileClose.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0013F40 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     McTemplateK0pptqqqq @ 0x1C0007738 (McTemplateK0pptqqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0015C5C (WPP_RECORDER_SF_qq.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
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
  __int64 v17; // r8
  int v18; // r9d
  __int64 v20; // [rsp+28h] [rbp-50h]
  __int64 v21; // [rsp+30h] [rbp-48h]

  v3 = a1 + 536;
  v5 = 0;
  v8 = 0LL;
  DynamicLock_Acquire(*(_QWORD *)(a1 + 544));
  v9 = *(_QWORD *)(v3 + 24);
  for ( i = 0; ; ++i )
  {
    if ( i >= (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 112))(
                WdfDriverGlobals,
                v9) )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(a1 + 72),
        v11,
        4,
        283,
        (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
        a2,
        *(_QWORD *)(v3 + 24));
      DynamicLock_Release(*(_QWORD *)(v3 + 8));
      v16 = -1073741811;
      goto LABEL_9;
    }
    if ( (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 144))(
           WdfDriverGlobals,
           v9,
           i) == a2 )
      break;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C004E3E0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 128))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 24),
    a2);
  v12 = WdfFunctions_01015;
  *(_BYTE *)(v8 + 40) = 0;
  if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(v12 + 112))(
          WdfDriverGlobals,
          *(_QWORD *)(v3 + 24)) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01015 + 1144))(
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
  DynamicLock_Release(*(_QWORD *)(v3 + 8));
  v16 = 0;
LABEL_9:
  if ( v8 )
  {
    v5 = *(_BYTE *)(v8 + 52);
    v17 = *(unsigned int *)(v8 + 44);
    v18 = *(_DWORD *)(v8 + 48);
  }
  else
  {
    v17 = 0LL;
    v18 = 0;
  }
  ++*(_DWORD *)(a1 + 692);
  *(_DWORD *)(a1 + 696) += v17;
  *(_DWORD *)(a1 + 700) += v18;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x400) != 0 )
  {
    LODWORD(v21) = v5;
    LODWORD(v20) = a3;
    McTemplateK0pptqqqq((unsigned int)v5, a3, v17, *(_QWORD *)(a1 + 8), a2, v20, v21, v16, v17, v18);
  }
  return v16;
}
