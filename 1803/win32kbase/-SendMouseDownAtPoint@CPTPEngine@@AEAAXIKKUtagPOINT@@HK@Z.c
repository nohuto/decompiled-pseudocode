/*
 * XREFs of ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@HK@Z @ 0x1C013B2D4
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0136D8C (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0137F18 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z @ 0x1C013AE00 (-Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z.c)
 * Callees:
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C013B384 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 *     ?SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z @ 0x1C013B600 (-SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z.c)
 */

void __fastcall CPTPEngine::SendMouseDownAtPoint(
        struct tagPOINT *this,
        int a2,
        __int64 a3,
        LONG a4,
        struct tagPOINT a5,
        LONG a6,
        LONG a7)
{
  int v10; // edi
  __int64 v11; // rdx

  if ( a2 == 2 )
  {
    v10 = 4;
  }
  else
  {
    v10 = 16;
    if ( a2 != 8 )
      return;
  }
  v11 = 1LL;
  if ( a2 != 2 )
    v11 = 3LL;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(this, v11, a5);
  this[409].x = a6;
  this[410].y = a7;
  this[408].y = 1;
  this[409].y = v10;
  this[410].x = a4;
  this[411] = a5;
  CBasePTPEngine::SendTimerOutput(this, 0LL);
}
