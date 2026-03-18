/*
 * XREFs of Command_InternalSendCommand @ 0x1C000D228
 * Callers:
 *     Command_ControllerResetPostResetSuccess @ 0x1C000C8A8 (Command_ControllerResetPostResetSuccess.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000CADC (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C000CF74 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000D8B0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     McTemplateK0ppb @ 0x1C0007F10 (McTemplateK0ppb.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C000E5EC (WPP_RECORDER_SF_qLq.c)
 *     WPP_RECORDER_SF_qddd @ 0x1C000E6DC (WPP_RECORDER_SF_qddd.c)
 *     WPP_RECORDER_SF_qdqddd @ 0x1C000E7EC (WPP_RECORDER_SF_qdqddd.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C000F1B8 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     Etw_CommandWaitlisted @ 0x1C00382BC (Etw_CommandWaitlisted.c)
 *     XilCoreCommand_AddCommandTRBToRing @ 0x1C003FE34 (XilCoreCommand_AddCommandTRBToRing.c)
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
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // r10d
  _QWORD *v16; // rbp
  __int64 v17; // rcx
  BOOL v18; // ecx
  int v19; // eax
  __int64 v20; // rcx
  signed __int32 v21[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v22; // [rsp+20h] [rbp-68h]
  __int64 v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-58h]
  __int64 v25; // [rsp+38h] [rbp-50h]
  __int128 v26; // [rsp+60h] [rbp-28h]

  v5 = *(unsigned int *)(a1 + 36);
  if ( (unsigned int)(v5 - 2) <= 1 )
  {
    Etw_CommandWaitlisted(v5, a1, a2, 4LL);
    result = *(PDEVICE_OBJECT *)(a1 + 104);
    v8 = a1 + 96;
    if ( *(_QWORD *)&result->Type != v8 )
      __fastfail(3u);
    goto LABEL_37;
  }
  if ( *(_BYTE *)(a1 + 121) )
  {
    WPP_RECORDER_SF_qLq(
      *(_QWORD *)(a1 + 16),
      a2,
      (unsigned __int16)*(_DWORD *)(a2 + 36) >> 10,
      48,
      v22,
      a2,
      (unsigned __int16)*(_DWORD *)(a2 + 36) >> 10,
      *(_QWORD *)(a2 + 48));
    Etw_CommandWaitlisted(v6, a1, a2, 3LL);
    result = *(PDEVICE_OBJECT *)(a1 + 104);
    v8 = a1 + 96;
    if ( *(_QWORD *)&result->Type != v8 )
      __fastfail(3u);
LABEL_37:
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
    v26 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 272LL);
    if ( (v26 & 0x80000000) != 0 )
    {
      WPP_RECORDER_SF_qLq(
        *(_QWORD *)(a1 + 16),
        a2,
        a3,
        49,
        v22,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
        *(_QWORD *)(a2 + 48));
      Etw_CommandWaitlisted(v10, a1, a2, 2LL);
      result = *(PDEVICE_OBJECT *)(a1 + 104);
      v8 = a1 + 96;
      if ( *(_QWORD *)&result->Type != v8 )
        __fastfail(3u);
      goto LABEL_37;
    }
  }
  WPP_RECORDER_SF_qLq(
    *(_QWORD *)(a1 + 16),
    a2,
    a3,
    50,
    v22,
    a2,
    (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
    *(_QWORD *)(a2 + 48));
  *(_DWORD *)(a2 + 56) = 10;
  v13 = 0LL;
  v14 = *(unsigned int *)(a1 + 40);
  v15 = *(_DWORD *)(a1 + 44);
  if ( (_DWORD)v14 + 1 != *(_DWORD *)(a1 + 48) )
    v13 = (unsigned int)(v14 + 1);
  if ( (_DWORD)v13 == v15 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qddd(*(_QWORD *)(a1 + 16), v14, v13, v12, v22, a2, v14, v15, v13);
    *(_DWORD *)(a2 + 16) = 0;
    Etw_CommandWaitlisted(v11, a1, a2, 1LL);
    result = *(PDEVICE_OBJECT *)(a1 + 104);
    v8 = a1 + 96;
    if ( *(_QWORD *)&result->Type != v8 )
      __fastfail(3u);
    goto LABEL_37;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qdqddd(
      *(_QWORD *)(a1 + 16),
      v14,
      v13,
      v12,
      v22,
      a2,
      v14,
      *(_BYTE *)(a1 + 72) + 16 * v14,
      v15,
      *(_DWORD *)(a1 + 64),
      v13);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
    McTemplateK0ppb(v11, v14, v13, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a2, a2 + 24);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a2 + 36) & 0xFFFFFFFE | (*(_DWORD *)(a1 + 64) != 1);
  *(_OWORD *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 40)) = *(_OWORD *)(a2 + 24);
  if ( *(_BYTE *)(a1 + 136) )
    XilCommand_SendAddCommandCRBToRingRequest(a1 + 136, a2);
  else
    XilCoreCommand_AddCommandTRBToRing(a1 + 152);
  *(_BYTE *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 40) + 12) ^= 1u;
  _InterlockedOr(v21, 0);
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
  v17 = *(unsigned int *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 40) == (_DWORD)v17 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 72) + 16 * v17 + 12) ^= 1u;
    _InterlockedOr(v21, 0);
    v18 = *(_DWORD *)(a1 + 64) != 1;
    *(_DWORD *)(a1 + 64) = v18;
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v19 = *(_DWORD *)(a1 + 48);
      LODWORD(v25) = v18;
      v20 = *(_QWORD *)(a1 + 16);
      LODWORD(v24) = v19;
      LODWORD(v23) = *(_DWORD *)(a1 + 40);
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_ddd(
                                 v20,
                                 5u,
                                 7u,
                                 0x35u,
                                 (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids,
                                 v23,
                                 v24,
                                 v25);
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
  if ( v16 == v9 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 5u, 7u, 0x36u, (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids);
    return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
                             WdfDriverGlobals,
                             *(_QWORD *)(a1 + 24),
                             -10000000LL);
  }
  return result;
}
