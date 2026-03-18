/*
 * XREFs of Command_InternalSendCommand @ 0x1C0004020
 * Callers:
 *     Command_ControllerResetPostResetSuccess @ 0x1C0003424 (Command_ControllerResetPostResetSuccess.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0003908 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0003D70 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C00046A0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C0005374 (WPP_RECORDER_SF_qLq.c)
 *     WPP_RECORDER_SF_qddd @ 0x1C0005464 (WPP_RECORDER_SF_qddd.c)
 *     WPP_RECORDER_SF_qdqddd @ 0x1C0005574 (WPP_RECORDER_SF_qdqddd.c)
 *     XilCommand_AddCommandCRBToRing @ 0x1C0005878 (XilCommand_AddCommandCRBToRing.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     Etw_CommandWaitlisted @ 0x1C0035E9C (Etw_CommandWaitlisted.c)
 *     McTemplateK0ppb @ 0x1C00368E4 (McTemplateK0ppb.c)
 */

PDEVICE_OBJECT __fastcall Command_InternalSendCommand(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  PDEVICE_OBJECT result; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r9d
  int v13; // edx
  int v14; // r8d
  int v15; // r10d
  _QWORD *v16; // rbp
  unsigned int v17; // ecx
  int v18; // edx
  BOOL v19; // ecx
  signed __int32 v20[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+20h] [rbp-68h]
  __int128 v22; // [rsp+60h] [rbp-28h]

  v5 = *(unsigned int *)(a1 + 36);
  if ( (unsigned int)(v5 - 2) <= 1 )
  {
    Etw_CommandWaitlisted(v5, a1, a2, 4LL);
    result = *(PDEVICE_OBJECT *)(a1 + 104);
    v8 = a1 + 96;
    if ( *(_QWORD *)&result->Type != v8 )
      __fastfail(3u);
    goto LABEL_34;
  }
  if ( *(_BYTE *)(a1 + 121) )
  {
    WPP_RECORDER_SF_qLq(
      *(_QWORD *)(a1 + 16),
      a2,
      (unsigned __int16)*(_DWORD *)(a2 + 36) >> 10,
      48,
      v21,
      a2,
      (unsigned __int16)*(_DWORD *)(a2 + 36) >> 10,
      *(_QWORD *)(a2 + 48));
    Etw_CommandWaitlisted(v6, a1, a2, 3LL);
    result = *(PDEVICE_OBJECT *)(a1 + 104);
    v8 = a1 + 96;
    if ( *(_QWORD *)&result->Type != v8 )
      __fastfail(3u);
LABEL_34:
    *(_QWORD *)a2 = v8;
    *(_QWORD *)(a2 + 8) = result;
    *(_QWORD *)&result->Type = a2;
    *(_QWORD *)(v8 + 8) = a2;
    return result;
  }
  if ( (_DWORD)v5 == 4 )
    return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, 3LL, 0LL);
  v9 = (_QWORD *)(a1 + 80);
  if ( (_QWORD *)*v9 != v9 )
  {
    v22 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 272LL);
    if ( (v22 & 0x80000000) != 0 )
    {
      WPP_RECORDER_SF_qLq(
        *(_QWORD *)(a1 + 16),
        a2,
        a3,
        49,
        v21,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
        *(_QWORD *)(a2 + 48));
      Etw_CommandWaitlisted(v10, a1, a2, 2LL);
      result = *(PDEVICE_OBJECT *)(a1 + 104);
      v8 = a1 + 96;
      if ( *(_QWORD *)&result->Type != v8 )
        __fastfail(3u);
      goto LABEL_34;
    }
  }
  WPP_RECORDER_SF_qLq(
    *(_QWORD *)(a1 + 16),
    a2,
    a3,
    50,
    v21,
    a2,
    (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
    *(_QWORD *)(a2 + 48));
  *(_DWORD *)(a2 + 56) = 10;
  v13 = 0;
  v14 = *(_DWORD *)(a1 + 40);
  v15 = *(_DWORD *)(a1 + 44);
  if ( v14 + 1 != *(_DWORD *)(a1 + 48) )
    v13 = v14 + 1;
  if ( v13 == v15 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qddd(*(_QWORD *)(a1 + 16), v13, v14, v12, v21, a2, v14, v15, v13);
    *(_DWORD *)(a2 + 16) = 0;
    Etw_CommandWaitlisted(v11, a1, a2, 1LL);
    result = *(PDEVICE_OBJECT *)(a1 + 104);
    v8 = a1 + 96;
    if ( *(_QWORD *)&result->Type != v8 )
      __fastfail(3u);
    goto LABEL_34;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qdqddd(
      *(_QWORD *)(a1 + 16),
      v13,
      v14,
      v12,
      v21,
      a2,
      v14,
      *(_BYTE *)(a1 + 72) + 16 * v14,
      v15,
      *(_DWORD *)(a1 + 64),
      v13);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
    McTemplateK0ppb(v11, v13, v14, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a2, a2 + 24);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a2 + 36) & 0xFFFFFFFE | (*(_DWORD *)(a1 + 64) != 1);
  *(_OWORD *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 40)) = *(_OWORD *)(a2 + 24);
  XilCommand_AddCommandCRBToRing(a1, a2);
  *(_BYTE *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 40) + 12) ^= 1u;
  _InterlockedOr(v20, 0);
  *(_DWORD *)(a2 + 16) = 1;
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 40);
  result = *(PDEVICE_OBJECT *)(a1 + 88);
  v16 = (_QWORD *)*v9;
  if ( *(_QWORD **)&result->Type != v9 )
    __fastfail(3u);
  *(_QWORD *)a2 = v9;
  *(_QWORD *)(a2 + 8) = result;
  *(_QWORD *)&result->Type = a2;
  *(_QWORD *)(a1 + 88) = a2;
  ++*(_DWORD *)(a1 + 40);
  v17 = *(_DWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 40) == v17 )
  {
    v18 = 2 * v17;
    *(_BYTE *)(*(_QWORD *)(a1 + 72) + 16LL * v17 + 12) ^= 1u;
    _InterlockedOr(v20, 0);
    v19 = *(_DWORD *)(a1 + 64) != 1;
    *(_DWORD *)(a1 + 64) = v19;
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v18) = 5;
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_ddL(
                                 *(_QWORD *)(a1 + 16),
                                 v18,
                                 7,
                                 53,
                                 (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids,
                                 *(_DWORD *)(a1 + 40),
                                 *(_DWORD *)(a1 + 48),
                                 v19);
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
  if ( v16 == v9 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 5u, 7u, 0x36u, (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids);
    return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
                             WdfDriverGlobals,
                             *(_QWORD *)(a1 + 24),
                             -10000000LL);
  }
  return result;
}
