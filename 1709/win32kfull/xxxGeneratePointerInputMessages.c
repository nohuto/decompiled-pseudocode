/*
 * XREFs of xxxGeneratePointerInputMessages @ 0x1C01CECD0
 * Callers:
 *     ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01B14D8 (-xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXKPEAH@Z @ 0x1C01B217C (-xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ProcessTouchInputViaRim @ 0x1C01B4144 (ProcessTouchInputViaRim.c)
 *     xxxDoTouchpadProcessing @ 0x1C01B47C0 (xxxDoTouchpadProcessing.c)
 * Callees:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01A43A0 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     IsTouchpadDevice @ 0x1C01B410C (IsTouchpadDevice.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01CD24C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 *     ?Enabled@PalmRejection@@YAHXZ @ 0x1C01DFFE8 (-Enabled@PalmRejection@@YAHXZ.c)
 *     ?ProcessInput@PalmRejection@@YAHPEAX@Z @ 0x1C01E006C (-ProcessInput@PalmRejection@@YAHPEAX@Z.c)
 */

__int64 __fastcall xxxGeneratePointerInputMessages(PointerFrameList *a1, void *a2, void *a3)
{
  unsigned int v3; // esi
  __int64 result; // rax
  const struct tagPOINTERINPUTFRAME *v6; // rbx
  _QWORD *v7; // rdx
  PalmRejection *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rdx

  v3 = (unsigned int)a3;
  result = (__int64)PointerFrameList::CommitAndReferenceFrame(a1, a2, a3);
  v6 = (const struct tagPOINTERINPUTFRAME *)result;
  if ( result )
  {
    v7 = (_QWORD *)(result + 16);
    v8 = (PalmRejection *)(gptiCurrent + 1096LL);
    v9 = *(_QWORD *)(gptiCurrent + 1096LL);
    if ( *(_QWORD *)(v9 + 8) != gptiCurrent + 1096LL )
      __fastfail(3u);
    *v7 = v9;
    v7[1] = v8;
    *(_QWORD *)(v9 + 8) = v7;
    *(_QWORD *)v8 = v7;
    if ( !(unsigned int)PalmRejection::Enabled(v8)
      || IsTouchpadDevice((unsigned __int64)a1, v10, v11, v12)
      || (unsigned int)PalmRejection::ProcessInput(v6, v13) )
    {
      return xxxProcessEdgyAndGeneratePointerMessages((__int64)a1, v6, v3, v12);
    }
    else
    {
      return 1LL;
    }
  }
  return result;
}
