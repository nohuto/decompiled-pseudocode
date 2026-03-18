/*
 * XREFs of ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@@Z @ 0x1C0137D6C
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAA?AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z @ 0x1C0134D64 (-DoTPMouseProcessing@CPTPEngine@@AEAA-AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z.c)
 * Callees:
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C0137DE0 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 */

void __fastcall CPTPEngine::SendMouseDownAtPoint(
        CPTPEngine *this,
        __int64 a2,
        unsigned int a3,
        int a4,
        struct tagPOINT a5)
{
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(this, 1LL, a5, a3);
  *((_DWORD *)this + 800) = 1;
  *((_DWORD *)this + 801) = 4;
  *((_DWORD *)this + 802) = a4;
  *(struct tagPOINT *)((char *)this + 3212) = a5;
  CBasePTPEngine::SendTimerOutput(this, 0LL);
}
