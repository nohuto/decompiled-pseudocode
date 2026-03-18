/*
 * XREFs of Command_HandleCommandCompletionEvent @ 0x1C0003908
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0016F88 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0003D70 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_InternalSendCommand @ 0x1C0004020 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qLLdd @ 0x1C0005150 (WPP_RECORDER_SF_qLLdd.c)
 *     WPP_RECORDER_SF_qxx @ 0x1C00056C4 (WPP_RECORDER_SF_qxx.c)
 *     XilCommand_GetCommandRingBufferLogicalAddress @ 0x1C0005D40 (XilCommand_GetCommandRingBufferLogicalAddress.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     Etw_CommandCompleteError @ 0x1C0035E50 (Etw_CommandCompleteError.c)
 *     McTemplateK0ppbqc @ 0x1C0036A08 (McTemplateK0ppbqc.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 **__fastcall Command_HandleCommandCompletionEvent(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 **result; // rax
  _QWORD *v6; // rdx
  int v7; // r9d
  __int64 *v8; // rsi
  __int64 *v9; // rdi
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r15
  int v13; // ecx
  int v14; // ecx
  __int64 **v15; // rcx
  __int64 ****v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 ***v20; // rdi
  int v21; // r8d
  __int64 *v22; // rdi
  __int64 *v23; // rax
  __int64 v24; // rcx
  void (__fastcall *v25)(__int64, __int64 *); // rax
  __int64 v26; // rcx
  int v27; // edx
  unsigned int v28; // esi
  int v29; // [rsp+20h] [rbp-40h]
  __int64 *v30; // [rsp+50h] [rbp-10h] BYREF
  __int64 **v31; // [rsp+58h] [rbp-8h]

  v2 = *(_BYTE *)(a2 + 11) == 24;
  v31 = &v30;
  v30 = (__int64 *)&v30;
  if ( v2 )
    return (__int64 **)Command_HandleCommandRingStoppedEvent();
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v8 = (__int64 *)(a1 + 80);
  v9 = *(__int64 **)(a1 + 80);
  if ( v9 == (__int64 *)(a1 + 80) )
    goto LABEL_30;
  v6 = *(_QWORD **)a2;
  while ( 1 )
  {
    v12 = XilCommand_GetCommandRingBufferLogicalAddress(a1, v6) + 16LL * *((unsigned int *)v9 + 5);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qxx(*(_QWORD *)(a1 + 16), v10, v11, v7, v29, (char)v9, v12, v10);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v10) = 5;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1 + 16),
        v10,
        7,
        42,
        (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids,
        *(_DWORD *)(a1 + 44),
        *(_DWORD *)(a1 + 40));
    }
    v6 = *(_QWORD **)a2;
    if ( *(_QWORD *)a2 == v12 )
      break;
    v9 = (__int64 *)*v9;
    if ( v9 == v8 )
      goto LABEL_30;
  }
  *((_DWORD *)v9 + 4) = 2;
  *((_BYTE *)v9 + 60) = *(_BYTE *)(a2 + 11);
  *((_DWORD *)v9 + 16) = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
  v13 = *(_DWORD *)(a2 + 12);
  if ( (v13 & 0xFC00) == 0x8400 )
    *((_BYTE *)v9 + 61) = HIBYTE(v13);
  if ( (*((_BYTE *)v9 + 62) & 2) != 0 )
    *(_OWORD *)(v9 + 3) = *(_OWORD *)a2;
LABEL_30:
  while ( 1 )
  {
    v20 = (__int64 ***)*v8;
    if ( (__int64 *)*v8 == v8 )
      break;
    if ( *((_DWORD *)v20 + 4) != 2 )
    {
      if ( v30 == (__int64 *)&v30 && !*(_BYTE *)(a1 + 120) )
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
      break;
    }
    v14 = *(_DWORD *)(a1 + 44) + 1;
    *(_DWORD *)(a1 + 44) = v14;
    if ( v14 == *(_DWORD *)(a1 + 48) )
    {
      *(_DWORD *)(a1 + 44) = 0;
      LOBYTE(v14) = 0;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v6) = 5;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1 + 16),
        (_DWORD)v6,
        7,
        43,
        (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids,
        v14,
        *(_DWORD *)(a1 + 40));
    }
    WPP_RECORDER_SF_qLLdd(
      *(_QWORD *)(a1 + 16),
      *(unsigned __int8 *)(a2 + 15),
      *(_DWORD *)(a2 + 12) & 1,
      v7,
      v29,
      (char)v20,
      (unsigned __int16)*((_DWORD *)v20 + 9) >> 10,
      *(_BYTE *)(a2 + 11),
      *(_BYTE *)(a2 + 12) & 1,
      *(_BYTE *)(a2 + 15));
    v15 = *v20;
    if ( (*v20)[1] != (__int64 *)v20 || (v16 = (__int64 ****)v20[1], *v16 != v20) )
      __fastfail(3u);
    *v16 = (__int64 ***)v15;
    v15[1] = (__int64 *)v16;
    v17 = v31;
    if ( *v31 != (__int64 *)&v30 )
      __fastfail(3u);
    v20[1] = v31;
    *v20 = &v30;
    *v17 = v20;
    v18 = (_QWORD *)(a1 + 96);
    v6 = *(_QWORD **)(a1 + 96);
    v31 = (__int64 **)v20;
    if ( v6 != (_QWORD *)(a1 + 96) )
    {
      if ( (_QWORD *)v6[1] != v18 || (v19 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
        __fastfail(3u);
      *v18 = v19;
      *(_QWORD *)(v19 + 8) = v18;
      Command_InternalSendCommand(a1);
    }
  }
  if ( (__int64 *)*v8 == v8 )
  {
    if ( *(_BYTE *)(a1 + 121) )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 4u, 7u, 0x2Eu, (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids);
    }
    else
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 5u, 7u, 0x2Du, (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 24),
        0LL);
    }
  }
  DynamicLock_Release(*(_QWORD *)(a1 + 112));
  while ( 1 )
  {
    v22 = v30;
    result = &v30;
    if ( v30 == (__int64 *)&v30 )
      break;
    if ( (__int64 **)v30[1] != &v30 || (v23 = (__int64 *)*v30, *(__int64 **)(*v30 + 8) != v30) )
      __fastfail(3u);
    v30 = (__int64 *)*v30;
    v23[1] = (__int64)&v30;
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
    if ( v24 )
    {
      v25 = *(void (__fastcall **)(__int64, __int64 *))(v24 + 24);
      if ( v25 )
        v25(v24, v22);
    }
    v26 = *((unsigned __int8 *)v22 + 60);
    v27 = *((unsigned __int8 *)v22 + 60) - 1;
    if ( *((_BYTE *)v22 + 60) == 1 )
    {
      v28 = 0;
    }
    else if ( *((_BYTE *)v22 + 60) == 25 )
    {
      LOBYTE(v27) = 4;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(a1 + 16),
        v27,
        7,
        47,
        (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids,
        (char)v22,
        (unsigned __int8)HIBYTE(*((_WORD *)v22 + 18)) >> 2);
      LOBYTE(v26) = *((_BYTE *)v22 + 60);
      v28 = 2;
    }
    else
    {
      v28 = 1;
    }
    if ( (_BYTE)v26 == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
        McTemplateK0ppbqc(
          v26,
          (unsigned int)&USBXHCI_ETW_EVENT_COMMAND_COMPLETE,
          v21,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          (char)v22,
          (__int64)(v22 + 3),
          v28,
          1);
    }
    else
    {
      Etw_CommandCompleteError(v26, a1, v22, v28);
    }
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22[5])(v22, v28, a2);
  }
  return result;
}
