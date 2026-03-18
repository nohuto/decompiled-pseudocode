/*
 * XREFs of ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C003AA38
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0037C94 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0036ED4 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0036FA4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall QHelper::SetMouseMovePoint(
        QHelper *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3)
{
  __int64 Queue; // rbx
  __int64 v6; // rdx
  int v7; // eax

  Queue = CInputDest::GetQueue(this, 0LL);
  if ( Queue )
  {
    if ( (((unsigned __int16)(*((_DWORD *)a2 + 2) >> 8) ^ (unsigned __int16)((unsigned int)CInputDest::GetDpiAwarenessContext(this) >> 8)) & 0x1FF) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(511LL, v6);
    v7 = *((_DWORD *)a2 + 2);
    *(_QWORD *)(Queue + 184) = *(_QWORD *)a2;
    *(_DWORD *)(Queue + 192) = v7;
  }
}
