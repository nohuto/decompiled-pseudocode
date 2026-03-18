/*
 * XREFs of Command_WdfEvtWatchdogTimerFunction @ 0x1C000D8B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005F70 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C000D228 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000E29C (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLd @ 0x1C000E4FC (WPP_RECORDER_SF_qLd.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C000EAF0 (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C000F0AC (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C000F4E0 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_WriteDoorbell @ 0x1C000F6D0 (XilCommand_WriteDoorbell.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C00123D0 (Controller_SetControllerGone.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     Etw_CommandCompleteError @ 0x1C0038270 (Etw_CommandCompleteError.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 *     XilCoreCommand_AbortCommandRing @ 0x1C003FDEC (XilCoreCommand_AbortCommandRing.c)
 *     XilCoreCommand_QueryIsRingRunning @ 0x1C004002C (XilCoreCommand_QueryIsRingRunning.c)
 */

__int64 __fastcall Command_WdfEvtWatchdogTimerFunction(__int64 a1)
{
  __int64 v1; // rax
  char v2; // si
  __int64 v3; // rbx
  char IsControllerAccessible; // r15
  char v5; // r13
  unsigned __int8 v6; // r12
  int **v7; // r14
  int *v8; // rdi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rcx
  __int64 ***v12; // rax
  __int64 **v13; // rdx
  _QWORD *v14; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  PWDF_DRIVER_GLOBALS v18; // rcx
  int v19; // eax
  int v20; // r8d
  unsigned __int16 v21; // r9
  unsigned __int8 v22; // dl
  __int64 v23; // rcx
  int **v24; // rax
  int v25; // edx
  __int64 v26; // rdx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // edx
  unsigned int v31; // edx
  int v32; // edx
  __int64 v33; // rcx
  __int64 ***v34; // rax
  __int64 **v35; // rdx
  _QWORD *v36; // rdx
  __int64 v37; // rdx
  __int64 result; // rax
  __int64 *v39; // rdi
  __int64 *v40; // rax
  __int64 v41; // rcx
  int v42; // [rsp+20h] [rbp-40h]
  __int64 v43; // [rsp+28h] [rbp-38h]
  char v44; // [rsp+30h] [rbp-30h]
  __int64 *v45; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v46; // [rsp+48h] [rbp-18h]
  _QWORD *i; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v48; // [rsp+58h] [rbp-8h]
  char v49; // [rsp+B0h] [rbp+50h] BYREF
  char v50; // [rsp+B8h] [rbp+58h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2568))(WdfDriverGlobals, a1);
  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C004E228);
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 8) + 441LL) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\command.c",
      934LL);
  if ( !KeGetCurrentIrql() )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 24),
      -10000000LL);
  IsControllerAccessible = Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8));
  v5 = 0;
  v46 = &v45;
  v6 = 0;
  v45 = (__int64 *)&v45;
  DynamicLock_Acquire(*(_QWORD *)(v3 + 112));
  if ( !IsControllerAccessible )
    goto LABEL_16;
  if ( *(_DWORD *)(v3 + 36) != 1 )
    goto LABEL_79;
  v7 = (int **)(v3 + 80);
  if ( *v7 == (int *)v7 )
    goto LABEL_79;
  v8 = *v7;
  if ( *(_BYTE *)(v3 + 136) )
    XilCommand_SendQueryIsRingRunningRequest(v3 + 136, &v49, &v50);
  else
    XilCoreCommand_QueryIsRingRunning(v3 + 152, &v49, &v50);
  if ( v8[14] > 0 )
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      4u,
      7u,
      0x1Au,
      (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids);
  if ( v50 )
  {
    v5 = 1;
    IsControllerAccessible = 0;
LABEL_16:
    if ( *(_BYTE *)(v3 + 128) )
    {
      v11 = v3 + 80;
      while ( *(_QWORD *)v11 != v11 )
      {
        v12 = *(__int64 ****)v11;
        if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || (v13 = *v12, (*v12)[1] != (__int64 *)v12) )
          __fastfail(3u);
        *(_QWORD *)v11 = v13;
        v13[1] = (__int64 *)v11;
        v14 = v46;
        if ( *v46 != (__int64 *)&v45 )
          __fastfail(3u);
        v12[1] = v46;
        *v12 = &v45;
        *v14 = v12;
        v46 = (__int64 **)v12;
      }
      v33 = v3 + 96;
      while ( *(_QWORD *)v33 != v33 )
      {
        v34 = *(__int64 ****)v33;
        if ( *(_QWORD *)(*(_QWORD *)v33 + 8LL) != v33 || (v35 = *v34, (*v34)[1] != (__int64 *)v34) )
          __fastfail(3u);
        *(_QWORD *)v33 = v35;
        v35[1] = (__int64 *)v33;
        v36 = v46;
        if ( *v46 != (__int64 *)&v45 )
          __fastfail(3u);
        v34[1] = v46;
        *v34 = &v45;
        *v36 = v34;
        v46 = (__int64 **)v34;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 24),
      0LL);
    v2 = 0;
    goto LABEL_79;
  }
  if ( !*(_BYTE *)(v3 + 121) )
  {
    v30 = --v8[14];
    if ( v30 == 5 || !v30 )
    {
      if ( v49 == 1 )
      {
        WPP_RECORDER_SF_qLd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v30,
          v9,
          v10,
          v42,
          (char)v8,
          (unsigned __int16)v8[9] >> 10,
          v30);
        v31 = v8[9];
        if ( (unsigned __int8)HIBYTE(*((_WORD *)v8 + 18)) >> 2 != 11 || (v31 & 0x200) != 0 )
        {
          v32 = (v31 >> 9) & 1;
          v44 = v32;
          LOBYTE(v32) = 2;
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v32,
            7,
            35,
            (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids,
            5,
            v44,
            (unsigned __int8)HIBYTE(*((_WORD *)v8 + 18)) >> 2);
          Controller_HwVerifierBreakIfEnabled(
            *(_QWORD *)(v3 + 8),
            0,
            0,
            0x4000,
            (__int64)"A command timed out, aborting command next",
            (__int64)(v8 + 6),
            0LL);
        }
        *(_BYTE *)(v3 + 121) = 1;
        *(_DWORD *)(v3 + 124) = 5;
        if ( *(_BYTE *)(v3 + 136) )
          XilCommand_SendAbortRingCommandRequest(v3 + 136);
        else
          XilCoreCommand_AbortCommandRing(v3 + 152);
        v2 = 0;
      }
      else
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          2u,
          7u,
          0x24u,
          (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(v3 + 24),
          0LL);
        v2 = 1;
        *(_DWORD *)(v3 + 36) = 2;
        if ( (*((_BYTE *)v8 + 62) & 1) != 0 )
          v6 = 1;
      }
      goto LABEL_79;
    }
LABEL_78:
    v2 = 0;
    goto LABEL_79;
  }
  if ( (*(_DWORD *)(v3 + 124))-- != 1 )
    goto LABEL_78;
  v2 = 0;
  if ( v49 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      7u,
      0x1Bu,
      (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(v3 + 8),
      0,
      0,
      4096,
      (__int64)"Command abort timed out, command ring still running, resetting the controller",
      *(_QWORD *)(v3 + 72) + 16LL * *(unsigned int *)(v3 + 44),
      0LL);
    v16 = WdfFunctions_01015;
    v17 = *(_QWORD *)(v3 + 24);
    v18 = WdfDriverGlobals;
    *(_BYTE *)(v3 + 121) = 0;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v16 + 2560))(v18, v17, 0LL);
    *(_DWORD *)(v3 + 36) = 2;
    v2 = 1;
    v6 = *((_BYTE *)v8 + 62) & 1;
    goto LABEL_79;
  }
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    2u,
    7u,
    0x1Cu,
    (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids);
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD *)(v3 + 8),
    0,
    0,
    0x2000,
    (__int64)"Command abort timed out; stopped event not received, but command ring is stopped; Assuming abort finished.",
    *(_QWORD *)(v3 + 72) + 16LL * *(unsigned int *)(v3 + 44),
    0LL);
  *(_BYTE *)(v3 + 121) = 0;
  v19 = v8[14];
  switch ( v19 )
  {
    case 0:
      LODWORD(v43) = 0;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2u,
        7u,
        0x1Fu,
        (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids,
        v43);
      v23 = *(_QWORD *)v8;
      if ( *(int **)(*(_QWORD *)v8 + 8LL) != v8 || (v24 = (int **)*((_QWORD *)v8 + 1), *v24 != v8) )
        __fastfail(3u);
      *v24 = (int *)v23;
      *(_QWORD *)(v23 + 8) = v24;
      v25 = ++*(_DWORD *)(v3 + 44);
      if ( v25 == *(_DWORD *)(v3 + 48) )
        v25 = 0;
      *(_DWORD *)(v3 + 44) = v25;
      XilCommand_AdvanceCommandRingControlDequeuePointer(v3);
      goto LABEL_39;
    case 5:
      v21 = 30;
      v22 = 2;
      goto LABEL_32;
    case 10:
      v21 = 29;
      v22 = 4;
LABEL_32:
      LODWORD(v43) = v8[14];
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v22,
        7u,
        v21,
        (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids,
        v43);
      v8 = 0LL;
      goto LABEL_39;
  }
  LODWORD(v43) = v8[14];
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    2u,
    7u,
    0x20u,
    (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids,
    v43);
LABEL_39:
  if ( *v7 != (int *)v7 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v3 + 16), 4u, 7u, 0x21u, (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids);
    XilCommand_WriteDoorbell(v3);
  }
  v26 = *(_QWORD *)(v3 + 96);
  if ( v26 != v3 + 96 )
  {
    i = *(_QWORD **)(v3 + 96);
    v48 = *(_QWORD **)(v3 + 104);
    *(_QWORD *)(v26 + 8) = &i;
    *v48 = &i;
    *(_QWORD *)(v3 + 104) = v3 + 96;
    *(_QWORD *)(v3 + 96) = v3 + 96;
    goto LABEL_44;
  }
  v27 = &i;
  v48 = &i;
  for ( i = &i; v27 != &i; v27 = i )
  {
    if ( (_QWORD **)v27[1] != &i || (v28 = *v27, *(_QWORD **)(*v27 + 8LL) != v27) )
      __fastfail(3u);
    i = (_QWORD *)*v27;
    *(_QWORD *)(v28 + 8) = &i;
    Command_InternalSendCommand(v3, (__int64)v27, v20);
LABEL_44:
    ;
  }
  if ( v8 )
  {
    DynamicLock_Release(*(_QWORD *)(v3 + 112));
    *((_BYTE *)v8 + 60) = 25;
    Etw_CommandCompleteError(v29, v3, v8, 2LL);
    (*((void (__fastcall **)(int *, __int64))v8 + 5))(v8, 2LL);
    DynamicLock_Acquire(*(_QWORD *)(v3 + 112));
  }
LABEL_79:
  DynamicLock_Release(*(_QWORD *)(v3 + 112));
  result = 0LL;
  if ( !IsControllerAccessible )
  {
    if ( v5 == 1 )
    {
      LOBYTE(v37) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v37);
    }
    while ( 1 )
    {
      v39 = v45;
      if ( v45 == (__int64 *)&v45 )
        break;
      if ( (__int64 **)v45[1] != &v45 || (v40 = (__int64 *)*v45, *(__int64 **)(*v45 + 8) != v45) )
        __fastfail(3u);
      v45 = (__int64 *)*v45;
      v40[1] = (__int64)&v45;
      LOBYTE(v37) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v37,
        7,
        37,
        (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids,
        (char)v39,
        (unsigned __int8)HIBYTE(*((_WORD *)v39 + 18)) >> 2);
      Etw_CommandCompleteError(v41, v3, v39, 3LL);
      ((void (__fastcall *)(__int64 *, __int64))v39[5])(v39, 3LL);
    }
    result = 0LL;
  }
  if ( v2 == 1 )
    return Controller_ReportFatalError(*(_QWORD *)(v3 + 8), (v6 ^ 1u) + 1, 4105, 0, 0LL, 0LL);
  return result;
}
