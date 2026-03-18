/*
 * XREFs of ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C00140EC
 * Callers:
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C0012D10 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 *     GenerateMouseMove @ 0x1C0013AA0 (GenerateMouseMove.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0013B30 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C00167A0 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ApiSetEditionUpdateCursorAsync @ 0x1C0016A4C (ApiSetEditionUpdateCursorAsync.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::MoveMouseWindowManagement(__int64 a1, char a2)
{
  __int64 v4; // rdi
  int v5; // ebx
  char v6; // di
  _BYTE v7[8]; // [rsp+20h] [rbp-98h] BYREF
  struct tagPOINT v8[3]; // [rsp+28h] [rbp-90h] BYREF
  struct tagPOINT v9; // [rsp+40h] [rbp-78h] BYREF

  if ( (a2 & 4) != 0
    || (v4 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v4, 0LL),
        v5 = *(_DWORD *)(v4 + 16),
        ExReleasePushLockSharedEx(v4, 0LL),
        KeLeaveCriticalRegion(),
        v6 = 0,
        v5 != 2) )
  {
    v6 = 1;
  }
  if ( (a2 & 1) != 0 )
  {
    *((_QWORD *)gpsi + 619) = 0LL;
    *((_WORD *)gpsi + 2480) = 0;
    *(struct tagPOINT *)(a1 + 2584) = gptCursorAsync;
    *(_QWORD *)(a1 + 2592) = 0LL;
  }
  if ( (a2 & 2) != 0 )
  {
    RIMLockExclusive(a1 + 3024);
    *(_BYTE *)(a1 + 3040) = 1;
    *(_QWORD *)(a1 + 3032) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 3024, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    memset(v8, 0, sizeof(v8));
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx(&v9, v8, 4LL, 2304LL);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v7);
    CMouseProcessor::SynthesizeMouse((CMouseProcessor *)a1, (struct tagPOINT)&v9, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v7);
  }
  else
  {
    ApiSetEditionUpdateCursorAsync();
  }
}
