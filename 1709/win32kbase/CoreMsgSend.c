/*
 * XREFs of CoreMsgSend @ 0x1C0011904
 * Callers:
 *     UserCoreMsgSend @ 0x1C00101D0 (UserCoreMsgSend.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C0011784 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00133EC (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0015008 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     SendCursorManagementNotification @ 0x1C005DE24 (SendCursorManagementNotification.c)
 *     Broadcast @ 0x1C0061734 (Broadcast.c)
 *     NtMITCoreMsgKSend @ 0x1C00E61F0 (NtMITCoreMsgKSend.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011D520 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C01283B8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C00119B4 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0011D60 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall CoreMsgSend(void *a1, char a2, const void *a3, const GUID *a4)
{
  unsigned int v4; // r14d
  unsigned int v8; // ebx
  const GUID *v9; // r9
  char v11[8]; // [rsp+30h] [rbp-39h] BYREF
  char v12; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  _QWORD *v15; // [rsp+70h] [rbp+7h]
  int v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+7Ch] [rbp+13h]
  char *v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+8Ch] [rbp+23h]

  v4 = (unsigned int)a4;
  v11[0] = 0;
  v12 = a2;
  v13[0] = a1;
  if ( dword_1C0188C40 > 5u )
  {
    v17 = 0;
    v20 = 0;
    v15 = v13;
    v18 = &v12;
    v16 = 8;
    v19 = 1;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188C40, &unk_1C016BF74, 0LL, a4, 4u, &pData);
  }
  CoreMessagingK::EntryLock::Acquire(v11, 4LL);
  v8 = CoreMessagingK::ServerPorts::Send(a1, a2, a3, v4);
  LODWORD(v13[0]) = v8;
  if ( dword_1C0188C40 > 5u )
  {
    v17 = 0;
    v15 = v13;
    v16 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188C40, &unk_1C016BF4C, 0LL, v9, 3u, &pData);
  }
  if ( v11[0] )
    KeReleaseMutex(Mutex, 0);
  return v8;
}
