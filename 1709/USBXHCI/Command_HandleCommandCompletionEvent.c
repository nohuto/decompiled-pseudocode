/*
 * XREFs of Command_HandleCommandCompletionEvent @ 0x1C000CADC
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001DE94 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     McTemplateK0ppbqc @ 0x1C0008034 (McTemplateK0ppbqc.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C000CF74 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_InternalSendCommand @ 0x1C000D228 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000E29C (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLLdd @ 0x1C000E3C8 (WPP_RECORDER_SF_qLLdd.c)
 *     WPP_RECORDER_SF_qxx @ 0x1C000E93C (WPP_RECORDER_SF_qxx.c)
 *     XilCommand_GetCommandRingBufferLogicalAddress @ 0x1C000EF3C (XilCommand_GetCommandRingBufferLogicalAddress.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     Etw_CommandCompleteError @ 0x1C0038270 (Etw_CommandCompleteError.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 */

__int64 **__fastcall Command_HandleCommandCompletionEvent(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 **result; // rax
  int v6; // r9d
  __int64 *v7; // r14
  __int64 *v8; // rdi
  void *v9; // rdx
  int v10; // r8d
  __int64 v11; // r15
  __int64 ***v12; // rdi
  int v13; // ecx
  __int64 **v14; // rcx
  __int64 ****v15; // rax
  _QWORD *v16; // rax
  __int64 **v17; // rax
  __int64 *v18; // rdx
  __int64 *v19; // rcx
  int v20; // edx
  __int64 v21; // r8
  __int64 *v22; // rdi
  __int64 *v23; // rax
  __int64 v24; // rcx
  void (__fastcall *v25)(__int64, __int64 *); // rax
  __int64 v26; // rcx
  unsigned int v27; // r14d
  int v28; // [rsp+20h] [rbp-40h]
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int64 v30; // [rsp+38h] [rbp-28h]
  __int64 *v31; // [rsp+50h] [rbp-10h] BYREF
  __int64 **v32; // [rsp+58h] [rbp-8h]

  v2 = *(_BYTE *)(a2 + 11) == 24;
  v32 = &v31;
  v31 = (__int64 *)&v31;
  if ( v2 )
    return (__int64 **)Command_HandleCommandRingStoppedEvent();
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v7 = (__int64 *)(a1 + 80);
  v8 = *(__int64 **)(a1 + 80);
  if ( v8 != (__int64 *)(a1 + 80) )
  {
    while ( 1 )
    {
      v11 = XilCommand_GetCommandRingBufferLogicalAddress(a1, &WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids)
          + 16LL * *((unsigned int *)v8 + 5);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_qxx(*(_QWORD *)(a1 + 16), (_DWORD)v9, v10, v6, v28, (char)v8, v11, *(_QWORD *)a2);
        v9 = &WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids;
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(*(_QWORD *)(a1 + 16), 5u, 7u, 0x2Au, (__int64)v9);
      if ( *(_QWORD *)a2 == v11 )
        break;
      v8 = (__int64 *)*v8;
      if ( v8 == v7 )
        goto LABEL_16;
    }
    *((_DWORD *)v8 + 4) = 2;
    *((_BYTE *)v8 + 60) = *(_BYTE *)(a2 + 11);
    *((_DWORD *)v8 + 16) = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
    if ( (*(_DWORD *)(a2 + 12) & 0xFC00) == 0x8400 )
      *((_BYTE *)v8 + 61) = *(_BYTE *)(a2 + 15);
    if ( (*((_BYTE *)v8 + 62) & 2) != 0 )
      *(_OWORD *)(v8 + 3) = *(_OWORD *)a2;
  }
LABEL_16:
  v12 = (__int64 ***)*v7;
  if ( (__int64 *)*v7 != v7 )
  {
    while ( *((_DWORD *)v12 + 4) == 2 )
    {
      v13 = ++*(_DWORD *)(a1 + 44);
      if ( v13 == *(_DWORD *)(a1 + 48) )
        v13 = 0;
      *(_DWORD *)(a1 + 44) = v13;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(a1 + 16),
          5u,
          7u,
          0x2Bu,
          (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids);
      WPP_RECORDER_SF_qLLdd(
        *(_QWORD *)(a1 + 16),
        *(unsigned __int8 *)(a2 + 15),
        *(_DWORD *)(a2 + 12) & 1,
        v6,
        v28,
        (char)v12,
        (unsigned __int16)*((_DWORD *)v12 + 9) >> 10,
        *(_BYTE *)(a2 + 11),
        *(_BYTE *)(a2 + 12) & 1,
        *(_BYTE *)(a2 + 15));
      v14 = *v12;
      if ( (*v12)[1] != (__int64 *)v12 || (v15 = (__int64 ****)v12[1], *v15 != v12) )
        __fastfail(3u);
      *v15 = (__int64 ***)v14;
      v14[1] = (__int64 *)v15;
      v16 = v32;
      if ( *v32 != (__int64 *)&v31 )
        __fastfail(3u);
      v12[1] = v32;
      *v12 = &v31;
      *v16 = v12;
      v17 = (__int64 **)(a1 + 96);
      v32 = (__int64 **)v12;
      if ( *v17 != (__int64 *)v17 )
      {
        v18 = *v17;
        if ( (__int64 **)(*v17)[1] != v17 || (v19 = (__int64 *)*v18, *(__int64 **)(*v18 + 8) != v18) )
          __fastfail(3u);
        *v17 = v19;
        v19[1] = (__int64)v17;
        Command_InternalSendCommand(a1);
      }
      v12 = (__int64 ***)*v7;
      if ( (__int64 *)*v7 == v7 )
        goto LABEL_37;
    }
    if ( v31 == (__int64 *)&v31 && !*(_BYTE *)(a1 + 120) )
    {
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD *)(a1 + 8),
        0,
        0,
        0x10000,
        (__int64)"Controller completed a command out of order",
        *(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 44),
        a2);
      Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 0, 4114, 0, 0LL, 0LL);
      *(_BYTE *)(a1 + 120) = 1;
    }
  }
LABEL_37:
  if ( (__int64 *)*v7 == v7 )
  {
    if ( *(_BYTE *)(a1 + 121) )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 4u, 7u, 0x2Eu, (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids);
    }
    else
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 5u, 7u, 0x2Du, (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 24),
        0LL);
    }
  }
  DynamicLock_Release(*(_QWORD *)(a1 + 112));
  while ( 1 )
  {
    v22 = v31;
    result = &v31;
    if ( v31 == (__int64 *)&v31 )
      break;
    if ( (__int64 **)v31[1] != &v31 || (v23 = (__int64 *)*v31, *(__int64 **)(*v31 + 8) != v31) )
      __fastfail(3u);
    v31 = (__int64 *)*v31;
    v23[1] = (__int64)&v31;
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
    if ( v24 )
    {
      v25 = *(void (__fastcall **)(__int64, __int64 *))(v24 + 24);
      if ( v25 )
        v25(v24, v22);
    }
    v26 = (unsigned int)*((unsigned __int8 *)v22 + 60) - 1;
    if ( *((_BYTE *)v22 + 60) == 1 )
    {
      v27 = 0;
    }
    else if ( *((_BYTE *)v22 + 60) == 25 )
    {
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(a1 + 16),
        v20,
        7,
        47,
        (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids,
        (char)v22,
        (unsigned __int8)HIBYTE(*((_WORD *)v22 + 18)) >> 2);
      v27 = 2;
    }
    else
    {
      v27 = 1;
    }
    if ( *((_BYTE *)v22 + 60) == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
      {
        LOBYTE(v30) = 1;
        LODWORD(v29) = v27;
        McTemplateK0ppbqc(
          v26,
          &USBXHCI_ETW_EVENT_COMMAND_COMPLETE,
          v21,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          v22,
          v22 + 3,
          v29,
          v30);
      }
    }
    else
    {
      Etw_CommandCompleteError(v26, a1, v22, v27);
    }
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22[5])(v22, v27, a2);
  }
  return result;
}
