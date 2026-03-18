/*
 * XREFs of ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0039CCC
 * Callers:
 *     GenerateMouseMove @ 0x1C0037560 (GenerateMouseMove.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C003AC60 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0039698 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ApiSetEditionUpdateCursorAsync @ 0x1C0039F9C (ApiSetEditionUpdateCursorAsync.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C003A6EC (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MoveMouseWindowManagement(_DWORD *a1, __int64 a2)
{
  char v2; // r14
  _DWORD *v3; // rsi
  CInputThread *v4; // rdi
  int v5; // ebx
  bool v6; // di
  struct tagPOINT v7[4]; // [rsp+20h] [rbp-39h] BYREF
  struct tagPOINT v8; // [rsp+40h] [rbp-19h] BYREF

  v2 = a2;
  v3 = a1;
  if ( a1[4] != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v6 = 1;
  if ( (v2 & 4) == 0 )
  {
    v4 = gpInputThread;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    v5 = *((_DWORD *)v4 + 4);
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    if ( v5 == 2 )
      v6 = 0;
  }
  if ( (v2 & 1) != 0 )
  {
    *(_QWORD *)(v3 + 25) = *((_QWORD *)gpsi + 620);
    v3[27] = 18;
    a1 = gpsi;
    *((_QWORD *)gpsi + 619) = 0LL;
    *((struct tagPOINT *)v3 + 305) = gptCursorAsync;
    *((_QWORD *)v3 + 306) = 0LL;
  }
  if ( (v2 & 2) != 0 )
  {
    if ( gpqCursor )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    RIMLockExclusive(v3 + 716);
    *((_BYTE *)v3 + 2880) = 1;
    *((_QWORD *)v3 + 359) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 716, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    memset(v7, 0, 24);
    ((void (__fastcall *)(struct tagPOINT *, struct tagPOINT *, __int64, __int64))CMouseProcessor::MouseInputDataEx::MouseInputDataEx)(
      &v8,
      v7,
      4LL,
      2304LL);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v7);
    CMouseProcessor::SynthesizeMouse((CMouseProcessor *)v3, (struct tagPOINT)&v8, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v7);
  }
  else
  {
    ApiSetEditionUpdateCursorAsync(a1);
  }
}
