/*
 * XREFs of ?GetHitTestAttributes@CWheelEvent@CMouseProcessor@@QEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x1C013477C
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01354D0 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CWheelEvent::GetHitTestAttributes(_DWORD *a1, __int64 a2)
{
  __int16 v3; // di
  __int64 result; // rax

  v3 = *(_WORD *)(*(_QWORD *)a1 + 18LL);
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  result = (((v3 >> 15) & 0xFFFFFFFE) + 3) | 4;
  if ( a1[3] != 1 )
    return ((v3 >> 15) & 0xFFFFFFFE) + 3;
  return result;
}
