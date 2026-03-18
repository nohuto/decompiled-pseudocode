/*
 * XREFs of ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@@Z @ 0x1C013704C
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0133D7C (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 * Callees:
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C01370C0 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 *     ?SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z @ 0x1C013723C (-SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z.c)
 */

void __fastcall CPTPEngine::SendMouseDownAtPoint(
        struct tagPOINT *this,
        __int64 a2,
        unsigned int a3,
        LONG a4,
        struct tagPOINT a5)
{
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(this, 1LL, a5, a3);
  this[407].y = 1;
  this[408].x = 4;
  this[408].y = a4;
  this[409] = a5;
  CBasePTPEngine::SendTimerOutput(this, 0LL);
}
