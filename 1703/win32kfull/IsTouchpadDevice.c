/*
 * XREFs of IsTouchpadDevice @ 0x1C01B0D1C
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C0198870 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     HoldRimCompleteFrame @ 0x1C019AC00 (HoldRimCompleteFrame.c)
 *     ProcessTouchInputViaRim @ 0x1C01B0D54 (ProcessTouchInputViaRim.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01C8DDC (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01CA88C (xxxGeneratePointerInputMessages.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 */

_BOOL8 __fastcall IsTouchpadDevice(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _BOOL8 result; // rax

  v1 = HMValidateHandleNoSecure(a1, 19);
  result = 0;
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 472);
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 24) == 7 )
        return 1;
    }
  }
  return result;
}
