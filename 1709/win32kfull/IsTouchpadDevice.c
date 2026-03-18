/*
 * XREFs of IsTouchpadDevice @ 0x1C01B410C
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01A43A0 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     HoldRimCompleteFrame @ 0x1C01A68DC (HoldRimCompleteFrame.c)
 *     ProcessTouchInputViaRim @ 0x1C01B4144 (ProcessTouchInputViaRim.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01CD24C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01CECD0 (xxxGeneratePointerInputMessages.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

_BOOL8 __fastcall IsTouchpadDevice(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  _BOOL8 result; // rax

  LOBYTE(a2) = 19;
  v4 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  result = 0;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 472);
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 24) == 7 )
        return 1;
    }
  }
  return result;
}
