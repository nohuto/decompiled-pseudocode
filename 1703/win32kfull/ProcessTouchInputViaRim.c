/*
 * XREFs of ProcessTouchInputViaRim @ 0x1C01B0D54
 * Callers:
 *     ProcessHidInputViaRim @ 0x1C01A821C (ProcessHidInputViaRim.c)
 * Callees:
 *     HoldRimCompleteFrame @ 0x1C019AC00 (HoldRimCompleteFrame.c)
 *     IsTouchpadDevice @ 0x1C01B0D1C (IsTouchpadDevice.c)
 *     xxxDoTouchpadProcessing @ 0x1C01B13B8 (xxxDoTouchpadProcessing.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01CA88C (xxxGeneratePointerInputMessages.c)
 */

struct tagPOINTERHOLDINGFRAME *__fastcall ProcessTouchInputViaRim(void *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct tagPOINTERHOLDINGFRAME *result; // rax

  if ( !IsTouchpadDevice((unsigned __int64)a1) )
    return (struct tagPOINTERHOLDINGFRAME *)xxxGeneratePointerInputMessages(a1);
  result = HoldRimCompleteFrame(a2, v4, v5);
  if ( result )
    return (struct tagPOINTERHOLDINGFRAME *)xxxDoTouchpadProcessing(a1);
  return result;
}
