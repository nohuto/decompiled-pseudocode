/*
 * XREFs of Controller_Start @ 0x1C0006440
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0006190 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_InternalReset @ 0x1C0011414 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_I @ 0x1C0006B4C (WPP_RECORDER_SF_I.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C00106F8 (Controller_DetectFrameMicroframeBoundary.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C005DDE8 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall Controller_Start(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // rcx
  unsigned int *v4; // r14
  int *v5; // r15
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  _DWORD *v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // ebx
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // ebp
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  ULONGLONG v20; // rsi
  ULONGLONG v21; // r12
  int v22; // r14d
  int v23; // r8d
  __int64 v24; // rcx
  int v25; // ebx
  int v26; // r9d
  unsigned __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // ebp
  __int64 v31; // rbx
  int v33; // ebp
  ULONGLONG v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  int Ulong; // eax
  signed __int32 v38[8]; // [rsp+0h] [rbp-98h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-78h]
  unsigned __int64 v40; // [rsp+28h] [rbp-70h]
  int v41; // [rsp+30h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-60h] BYREF
  int v43; // [rsp+A0h] [rbp+8h] BYREF
  int v44; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v45; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v46; // [rsp+B8h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a1 + 441) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      3479LL);
  v2 = 0LL;
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x6Fu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
  if ( !Controller_IsControllerAccessible(a1) )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 88);
  v4 = *(unsigned int **)(v3 + 32);
  v5 = (int *)(v4 + 1);
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 8) + 441LL) )
  {
    Register_ReadSecureMmio(v3, (_DWORD)v4 + 4, 2, 1, &v43);
    LOBYTE(v6) = v43;
  }
  else
  {
    v6 = *v5;
  }
  if ( (v6 & 1) == 0 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0x70u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
    return 3221225666LL;
  }
  v7 = *(_QWORD *)(a1 + 88);
  v8 = *(_QWORD *)(v7 + 8);
  v9 = (_DWORD *)(*(_QWORD *)(v7 + 32) + 20LL);
  v44 = 2;
  if ( *(_BYTE *)(v8 + 441) )
  {
    Register_WriteSecureMmio(v7, v9, 2LL, &v44);
  }
  else
  {
    *v9 = 2;
    _InterlockedOr(v38, 0);
  }
  v10 = *(_QWORD *)(a1 + 88);
  if ( *(_BYTE *)(*(_QWORD *)(v10 + 8) + 441LL) )
  {
    Register_ReadSecureMmio(v10, (int)v4, 2, 1, &v45);
    v11 = v45;
  }
  else
  {
    v11 = *v4;
  }
  v12 = v11 | 5;
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 108LL);
  if ( (v13 & 2) != 0 )
    v14 = 0x2000;
  else
    v14 = 0;
  v15 = v14 | v12 & 0xFFFFDFFF;
  if ( (v13 & 0x50) == 0x50 )
    v16 = 0x4000;
  else
    v16 = 0;
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x71u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v18 = *(_QWORD *)(a1 + 88);
  v19 = v16 | v15 & 0xFFFFBFFF;
  v20 = 0LL;
  v21 = UnbiasedInterruptTime;
  v46 = v19;
  if ( *(_BYTE *)(*(_QWORD *)(v18 + 8) + 441LL) )
  {
    Register_WriteSecureMmio(v18, v4, 2LL, &v46);
  }
  else
  {
    *v4 = v19;
    _InterlockedOr(v38, 0);
  }
  v22 = 0;
  while ( 1 )
  {
    KeStallExecutionProcessor(0x64u);
    v24 = *(_QWORD *)(a1 + 88);
    if ( *(_BYTE *)(*(_QWORD *)(v24 + 8) + 441LL) )
    {
      Register_ReadSecureMmio(v24, (int)v5, 2, 1, &v41);
      LOBYTE(v25) = v41;
    }
    else
    {
      v25 = *v5;
    }
    if ( (v25 & 1) == 0 )
      break;
    if ( (unsigned int)++v22 >= 0x32 )
      goto LABEL_21;
  }
  v20 = KeQueryUnbiasedInterruptTime();
LABEL_21:
  if ( (v25 & 1) != 0 )
  {
    v2 = ExAllocateTimer(&Controller_HighResTimerCompletion, &Event, 4LL);
    if ( !v2 )
      return 3221225626LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v33 = 0;
    while ( 1 )
    {
      ExSetTimer(v2, -50000LL, 0LL, 0LL);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      LOBYTE(v25) = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v5);
      if ( (v25 & 1) == 0 )
        break;
      if ( (unsigned int)++v33 >= 7 )
        goto LABEL_22;
    }
    v20 = KeQueryUnbiasedInterruptTime();
  }
LABEL_22:
  if ( (v25 & 1) != 0 )
  {
    v34 = KeQueryUnbiasedInterruptTime();
    v26 = 114;
    v27 = (v34 - v21) / 0x2710;
    v40 = v27;
    LOBYTE(v27) = 2;
  }
  else
  {
    v26 = 115;
    v27 = (v20 - v21) / 0xA;
    v40 = v27;
    LOBYTE(v27) = 4;
  }
  WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v27, v23, v26, (_DWORD)Timeout, v40);
  v28 = *(_QWORD *)(a1 + 544);
  if ( *(_DWORD *)v28 == 1 )
  {
    if ( KeGetCurrentIrql() )
      Debug_FreAssertMsg(
        "Code Path Requires Passive Level",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
        88LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(v28 + 8),
      0LL);
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      *(_QWORD *)(v28 + 8));
  }
  v29 = WdfFunctions_01015;
  ++*(_DWORD *)(a1 + 552);
  v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(v29 + 112))(WdfDriverGlobals, *(_QWORD *)(a1 + 560));
  if ( v30 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01015 + 1144))(
      WdfDriverGlobals,
      **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
      Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
      a1 + 536);
    v35 = *(_QWORD *)(a1 + 88);
    v36 = *(_QWORD *)(v35 + 32);
    Ulong = XilRegister_ReadUlong(v35, v36);
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v36, Ulong | 0x400u);
    *(_BYTE *)(a1 + 536) = 1;
  }
  v31 = *(_QWORD *)(a1 + 544);
  if ( *(_DWORD *)v31 == 1 )
  {
    if ( KeGetCurrentIrql() )
      Debug_FreAssertMsg(
        "Code Path Requires Passive Level",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
        107LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(v31 + 8));
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      *(_QWORD *)(v31 + 8));
  }
  if ( v30 )
    Controller_DetectFrameMicroframeBoundary(a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 296),
    -50000000LL);
  if ( v2 )
    ExDeleteTimer(v2, 0LL, 0LL, 0LL);
  return 0LL;
}
