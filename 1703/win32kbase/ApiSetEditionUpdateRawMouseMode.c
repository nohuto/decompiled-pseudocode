/*
 * XREFs of ApiSetEditionUpdateRawMouseMode @ 0x1C00452F8
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXPEBU_InputDeviceHandle@@AEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@_N@Z @ 0x1C0045AC0 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXPEBU_InputDeviceHandle@@AEBVCInputDes.c)
 *     zzzDestroyQueue @ 0x1C004A190 (zzzDestroyQueue.c)
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetEditionUpdateRawMouseMode(__int64 a1)
{
  __int64 result; // rax

  result = IsEditionUpdateRawMouseModeSupported();
  if ( (int)result >= 0 )
    return EditionUpdateRawMouseMode(a1);
  return result;
}
