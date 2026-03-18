/*
 * XREFs of Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C000C190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C00034FC (Command_D0EntryPostInterruptsEnabled.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 *     Controller_Start @ 0x1C0009800 (Controller_Start.c)
 *     McTemplateK0pqqh @ 0x1C000D3D8 (McTemplateK0pqqh.c)
 *     McTemplateK0pqqq @ 0x1C000D46C (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C00182B4 (WPP_RECORDER_SF_qdd.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0019C90 (RootHub_DetectAndAcknowledgePortResume.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0036F04 (Wmi_CreateControllerCapabilities.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  int v6; // edx
  int v7; // r8d
  unsigned int Arg2; // r14d
  int v9; // eax
  int v10; // edx
  __int64 v11; // r8
  unsigned int v12; // edi
  int v13; // r9d
  struct _MCGEN_TRACE_CONTEXT *v14; // rcx
  const GUID *v15; // r8
  __int64 v16; // rbp
  unsigned int i; // edi
  __int64 Arg3; // [rsp+30h] [rbp-28h]

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004B408)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3104))(WdfDriverGlobals, a1);
  Arg2 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh(
      *(unsigned __int8 *)(v4 + 396),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_START,
      v7,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 396));
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_qdd(
    *(_QWORD *)(v4 + 72),
    v6,
    4,
    71,
    (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
    a1,
    a2,
    *(_DWORD *)(v4 + 348));
  LODWORD(Arg3) = a2;
  WPP_RECORDER_SF_qd(
    *(_QWORD *)(v4 + 72),
    4u,
    4u,
    0x75u,
    (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
    v4,
    Arg3);
  v9 = Controller_Start(v4);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = 72;
LABEL_5:
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 72), v10, 4, v13, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v9);
    goto LABEL_13;
  }
  v16 = *(_QWORD *)(v4 + 152);
  for ( i = 1; i <= *(_DWORD *)(v16 + 16); ++i )
  {
    LOBYTE(v11) = 1;
    RootHub_DetectAndAcknowledgePortResume(v16, i, v11);
  }
  v9 = Command_D0EntryPostInterruptsEnabled(*(_QWORD *)(v4 + 144), a2);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = 74;
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(v4 + 272) & 0x10) != 0 )
  {
    v12 = -1073741637;
    WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), 2u, 4u, 0x4Bu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
  }
  else
  {
    Wmi_CreateControllerCapabilities(*(_QWORD *)(v4 + 160));
  }
LABEL_13:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq(
      v14,
      &USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_COMPLETE,
      v15,
      *(const void **)(v4 + 8),
      a2,
      Arg2,
      v12);
  return v12;
}
