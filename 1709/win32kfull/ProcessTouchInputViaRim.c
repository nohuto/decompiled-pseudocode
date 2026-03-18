/*
 * XREFs of ProcessTouchInputViaRim @ 0x1C01B4144
 * Callers:
 *     ProcessHidInputViaRim @ 0x1C01AB5BC (ProcessHidInputViaRim.c)
 * Callees:
 *     HoldRimCompleteFrame @ 0x1C01A68DC (HoldRimCompleteFrame.c)
 *     IsTouchpadDevice @ 0x1C01B410C (IsTouchpadDevice.c)
 *     xxxDoTouchpadProcessing @ 0x1C01B47C0 (xxxDoTouchpadProcessing.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01CECD0 (xxxGeneratePointerInputMessages.c)
 */

struct tagPOINTERHOLDINGFRAME *__fastcall ProcessTouchInputViaRim(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  struct tagPOINTERHOLDINGFRAME *result; // rax

  if ( !IsTouchpadDevice((unsigned __int64)a1, a2, a3, a4) )
    return (struct tagPOINTERHOLDINGFRAME *)xxxGeneratePointerInputMessages(a1);
  result = HoldRimCompleteFrame(a2, v6, v7);
  if ( result )
    return (struct tagPOINTERHOLDINGFRAME *)xxxDoTouchpadProcessing(a1);
  return result;
}
