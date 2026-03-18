/*
 * XREFs of Command_WdfEvtWatchdogTimerFunction @ 0x1C00046A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C0004020 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qLd @ 0x1C0005284 (WPP_RECORDER_SF_qLd.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C00058C8 (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C0005EB0 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C00062D8 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_WriteDoorbell @ 0x1C00064C8 (XilCommand_WriteDoorbell.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_IsControllerAccessible @ 0x1C0008A48 (Controller_IsControllerAccessible.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C0009748 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     Etw_CommandCompleteError @ 0x1C0035E50 (Etw_CommandCompleteError.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 *     XilCoreCommand_AbortCommandRing @ 0x1C003E49C (XilCoreCommand_AbortCommandRing.c)
 *     XilCoreCommand_QueryIsRingRunning @ 0x1C003E73C (XilCoreCommand_QueryIsRingRunning.c)
 */

__int64 **__fastcall Command_WdfEvtWatchdogTimerFunction(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char IsControllerAccessible; // r15
  char v4; // r13
  unsigned __int8 v5; // r12
  __int64 *v6; // rdi
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  __int64 ****v11; // rcx
  __int64 ***v12; // rax
  __int64 **v13; // rdx
  _QWORD *v14; // rdx
  char v16; // si
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  PWDF_DRIVER_GLOBALS v20; // rcx
  int v21; // edx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r8d
  int v26; // r9d
  __int64 *v27; // rcx
  __int64 **v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  _QWORD *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // edx
  int v35; // edx
  __int64 ****v36; // rcx
  __int64 ***v37; // rax
  __int64 **v38; // rdx
  _QWORD *v39; // rdx
  __int64 **result; // rax
  __int64 v41; // rdx
  __int64 *v42; // rdi
  __int64 *v43; // rax
  __int64 v44; // rcx
  int v45; // [rsp+20h] [rbp-40h]
  __int64 *v46; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v47; // [rsp+48h] [rbp-18h]
  _QWORD *i; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v49; // [rsp+58h] [rbp-8h]
  char v50; // [rsp+B0h] [rbp+50h] BYREF
  char v51; // [rsp+B8h] [rbp+58h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2568))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C004B228);
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 8) + 441LL) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\command.c",
      933LL);
  if ( !KeGetCurrentIrql() )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(v2 + 24),
      -10000000LL);
  IsControllerAccessible = Controller_IsControllerAccessible(*(_QWORD *)(v2 + 8));
  v4 = 0;
  v47 = &v46;
  v5 = 0;
  v46 = (__int64 *)&v46;
  DynamicLock_Acquire(*(_QWORD *)(v2 + 112));
  if ( !IsControllerAccessible )
    goto LABEL_16;
  if ( *(_DWORD *)(v2 + 36) != 1 )
    goto LABEL_76;
  v6 = *(__int64 **)(v2 + 80);
  if ( v6 == (__int64 *)(v2 + 80) )
    goto LABEL_76;
  if ( *(_BYTE *)(v2 + 136) )
    XilCommand_SendQueryIsRingRunningRequest(v2 + 136, &v50, &v51);
  else
    XilCoreCommand_QueryIsRingRunning(v2 + 168, &v50, &v51);
  v10 = *((_DWORD *)v6 + 14);
  if ( v10 > 0 )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
      v7,
      7,
      26,
      (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids,
      (char)v6,
      v10);
  }
  if ( v51 )
  {
    IsControllerAccessible = 0;
    v4 = 1;
LABEL_16:
    if ( *(_BYTE *)(v2 + 128) )
    {
      v11 = (__int64 ****)(v2 + 80);
      while ( 1 )
      {
        v12 = *v11;
        if ( *v11 == (__int64 ***)v11 )
          break;
        if ( v12[1] != (__int64 **)v11 || (v13 = *v12, (*v12)[1] != (__int64 *)v12) )
          __fastfail(3u);
        *v11 = (__int64 ***)v13;
        v13[1] = (__int64 *)v11;
        v14 = v47;
        if ( *v47 != (__int64 *)&v46 )
          __fastfail(3u);
        v12[1] = v47;
        *v12 = &v46;
        *v14 = v12;
        v47 = (__int64 **)v12;
      }
      v36 = (__int64 ****)(v2 + 96);
      while ( 1 )
      {
        v37 = *v36;
        if ( *v36 == (__int64 ***)v36 )
          break;
        if ( v37[1] != (__int64 **)v36 || (v38 = *v37, (*v37)[1] != (__int64 *)v37) )
          __fastfail(3u);
        *v36 = (__int64 ***)v38;
        v38[1] = (__int64 *)v36;
        v39 = v47;
        if ( *v47 != (__int64 *)&v46 )
          __fastfail(3u);
        v37[1] = v47;
        *v37 = &v46;
        *v39 = v37;
        v47 = (__int64 **)v37;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(v2 + 24),
      0LL);
    goto LABEL_76;
  }
  if ( *(_BYTE *)(v2 + 121) )
  {
    if ( (*(_DWORD *)(v2 + 124))-- == 1 )
    {
      v16 = 0;
      v17 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL);
      if ( v50 )
      {
        WPP_RECORDER_SF_(v17, 2u, 7u, 0x1Bu, (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids);
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)(v2 + 8),
          0,
          0,
          4096,
          (__int64)"Command abort timed out, command ring still running, resetting the controller",
          *(_QWORD *)(v2 + 72) + 16LL * *(unsigned int *)(v2 + 44),
          0LL);
        v18 = WdfFunctions_01023;
        v19 = *(_QWORD *)(v2 + 24);
        v20 = WdfDriverGlobals;
        *(_BYTE *)(v2 + 121) = 0;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v18 + 2560))(v20, v19, 0LL);
        *(_DWORD *)(v2 + 36) = 2;
        v16 = 1;
        v5 = *((_BYTE *)v6 + 62) & 1;
        goto LABEL_77;
      }
      WPP_RECORDER_SF_(v17, 2u, 7u, 0x1Cu, (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids);
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD *)(v2 + 8),
        0,
        0,
        0x2000,
        (__int64)"Command abort timed out; stopped event not received, but command ring is stopped; Assuming abort finished.",
        *(_QWORD *)(v2 + 72) + 16LL * *(unsigned int *)(v2 + 44),
        0LL);
      v22 = *(_QWORD *)(v2 + 8);
      *(_BYTE *)(v2 + 121) = 0;
      v23 = *((_DWORD *)v6 + 14);
      v24 = *(_QWORD *)(v22 + 72);
      switch ( v23 )
      {
        case 0:
          LOBYTE(v21) = 2;
          WPP_RECORDER_SF_d(v24, v21, 7, 31, (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids, 0);
          v27 = (__int64 *)*v6;
          if ( *(__int64 **)(*v6 + 8) != v6 || (v28 = (__int64 **)v6[1], *v28 != v6) )
            __fastfail(3u);
          *v28 = v27;
          v27[1] = (__int64)v28;
          v29 = (unsigned int)(*(_DWORD *)(v2 + 44) + 1);
          *(_DWORD *)(v2 + 44) = v29;
          if ( (_DWORD)v29 == *(_DWORD *)(v2 + 48) )
          {
            *(_DWORD *)(v2 + 44) = 0;
            v29 = 0LL;
          }
          XilCommand_AdvanceCommandRingControlDequeuePointer(v2, v29);
          goto LABEL_39;
        case 5:
          v26 = 30;
          LOBYTE(v21) = 2;
          break;
        case 10:
          v26 = 29;
          LOBYTE(v21) = 4;
          break;
        default:
          LOBYTE(v21) = 2;
          WPP_RECORDER_SF_d(v24, v21, 7, 32, (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids, v23);
LABEL_39:
          if ( *(_QWORD *)(v2 + 80) != v2 + 80 )
          {
            WPP_RECORDER_SF_(
              *(_QWORD *)(v2 + 16),
              4u,
              7u,
              0x21u,
              (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids);
            XilCommand_WriteDoorbell(v2);
          }
          v30 = *(_QWORD *)(v2 + 96);
          if ( v30 != v2 + 96 )
          {
            i = *(_QWORD **)(v2 + 96);
            v49 = *(_QWORD **)(v2 + 104);
            *(_QWORD *)(v30 + 8) = &i;
            *v49 = &i;
            *(_QWORD *)(v2 + 104) = v2 + 96;
            *(_QWORD *)(v2 + 96) = v2 + 96;
            goto LABEL_44;
          }
          v31 = &i;
          v49 = &i;
          for ( i = &i; v31 != &i; v31 = i )
          {
            if ( (_QWORD **)v31[1] != &i || (v32 = *v31, *(_QWORD **)(*v31 + 8LL) != v31) )
              __fastfail(3u);
            i = (_QWORD *)*v31;
            *(_QWORD *)(v32 + 8) = &i;
            Command_InternalSendCommand(v2, (__int64)v31, v25);
LABEL_44:
            ;
          }
          if ( v6 )
          {
            DynamicLock_Release(*(_QWORD *)(v2 + 112));
            *((_BYTE *)v6 + 60) = 25;
            Etw_CommandCompleteError(v33, v2, v6, 2LL);
            ((void (__fastcall *)(__int64 *, __int64))v6[5])(v6, 2LL);
            DynamicLock_Acquire(*(_QWORD *)(v2 + 112));
          }
          goto LABEL_77;
      }
      WPP_RECORDER_SF_d(v24, v21, 7, v26, (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids, v23);
      v6 = 0LL;
      goto LABEL_39;
    }
LABEL_76:
    v16 = 0;
    goto LABEL_77;
  }
  v34 = --*((_DWORD *)v6 + 14);
  if ( v34 != 5 && v34 )
    goto LABEL_76;
  if ( v50 == 1 )
  {
    WPP_RECORDER_SF_qLd(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
      v34,
      v8,
      v9,
      v45,
      (char)v6,
      (unsigned __int16)*((_DWORD *)v6 + 9) >> 10,
      v34);
    v35 = (unsigned __int8)HIBYTE(*((_WORD *)v6 + 18)) >> 2;
    if ( v35 != 11 || (*((_DWORD *)v6 + 9) & 0x200) != 0 )
    {
      LOBYTE(v35) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
        v35,
        7,
        35,
        (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids,
        5,
        (*((_DWORD *)v6 + 9) & 0x200) != 0,
        (unsigned __int8)HIBYTE(*((_WORD *)v6 + 18)) >> 2);
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD *)(v2 + 8),
        0,
        0,
        0x4000,
        (__int64)"A command timed out, aborting command next",
        (__int64)(v6 + 3),
        0LL);
    }
    *(_BYTE *)(v2 + 121) = 1;
    *(_DWORD *)(v2 + 124) = 5;
    if ( *(_BYTE *)(v2 + 136) )
      XilCommand_SendAbortRingCommandRequest(v2 + 136);
    else
      XilCoreCommand_AbortCommandRing(v2 + 168);
    goto LABEL_76;
  }
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
    2u,
    7u,
    0x24u,
    (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(v2 + 24),
    0LL);
  v16 = 1;
  *(_DWORD *)(v2 + 36) = 2;
  if ( (*((_BYTE *)v6 + 62) & 1) != 0 )
    v5 = 1;
LABEL_77:
  result = (__int64 **)DynamicLock_Release(*(_QWORD *)(v2 + 112));
  if ( !IsControllerAccessible )
  {
    if ( v4 == 1 )
    {
      LOBYTE(v41) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v2 + 8), v41);
    }
    while ( 1 )
    {
      v42 = v46;
      result = &v46;
      if ( v46 == (__int64 *)&v46 )
        break;
      if ( (__int64 **)v46[1] != &v46 || (v43 = (__int64 *)*v46, *(__int64 **)(*v46 + 8) != v46) )
        __fastfail(3u);
      v46 = (__int64 *)*v46;
      v43[1] = (__int64)&v46;
      LOBYTE(v41) = 4;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
        v41,
        7,
        37,
        (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids,
        (char)v42,
        (unsigned __int8)HIBYTE(*((_WORD *)v42 + 18)) >> 2);
      Etw_CommandCompleteError(v44, v2, v42, 3LL);
      ((void (__fastcall *)(__int64 *, __int64))v42[5])(v42, 3LL);
    }
  }
  if ( v16 == 1 )
    return (__int64 **)Controller_ReportFatalError(*(_QWORD *)(v2 + 8), (v5 ^ 1u) + 1, 4105, 0, 0LL, 0LL);
  return result;
}
