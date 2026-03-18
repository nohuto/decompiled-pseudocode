/*
 * XREFs of xxxGeneratePointerInputMessages @ 0x1C01CA88C
 * Callers:
 *     ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01AE190 (-xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXKPEAH@Z @ 0x1C01AEDF0 (-xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ProcessTouchInputViaRim @ 0x1C01B0D54 (ProcessTouchInputViaRim.c)
 *     xxxDoTouchpadProcessing @ 0x1C01B13B8 (xxxDoTouchpadProcessing.c)
 * Callees:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C0198870 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     IsTouchpadDevice @ 0x1C01B0D1C (IsTouchpadDevice.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01C8DDC (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 *     ?Enabled@PalmRejection@@YAHXZ @ 0x1C01D3C40 (-Enabled@PalmRejection@@YAHXZ.c)
 *     ?ProcessInput@PalmRejection@@YAHPEAX@Z @ 0x1C01D3CC4 (-ProcessInput@PalmRejection@@YAHPEAX@Z.c)
 */

__int64 __fastcall xxxGeneratePointerInputMessages(PointerFrameList *a1, void *a2, void *a3, unsigned int a4)
{
  unsigned int v5; // ebp
  __int64 result; // rax
  const struct tagPOINTERINPUTFRAME *v8; // rbx
  _QWORD *v9; // rdx
  PalmRejection *v10; // rcx
  __int64 v11; // rax
  void *v12; // rdx

  v5 = (unsigned int)a3;
  result = (__int64)PointerFrameList::CommitAndReferenceFrame(a1, a2, a3);
  v8 = (const struct tagPOINTERINPUTFRAME *)result;
  if ( result )
  {
    v9 = (_QWORD *)(result + 16);
    v10 = (PalmRejection *)(gptiCurrent + 1008LL);
    v11 = *(_QWORD *)(gptiCurrent + 1008LL);
    if ( *(_QWORD *)(v11 + 8) != gptiCurrent + 1008LL )
      __fastfail(3u);
    *v9 = v11;
    v9[1] = v10;
    *(_QWORD *)(v11 + 8) = v9;
    *(_QWORD *)v10 = v9;
    if ( !(unsigned int)PalmRejection::Enabled(v10)
      || IsTouchpadDevice((unsigned __int64)a1)
      || (unsigned int)PalmRejection::ProcessInput(v8, v12) )
    {
      return xxxProcessEdgyAndGeneratePointerMessages((__int64)a1, v8, v5, a4);
    }
    else
    {
      return 1LL;
    }
  }
  return result;
}
