/*
 * XREFs of ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0013B30
 * Callers:
 *     SynthesizeMouseInput @ 0x1C0012330 (SynthesizeMouseInput.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C00140EC (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     SynthesizeMouseInputWithNextPreview @ 0x1C012E480 (SynthesizeMouseInputWithNextPreview.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01307E8 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C0130894 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C0130918 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0130BCC (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C001638C (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0130FD0 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 */

void __fastcall CMouseProcessor::SynthesizeMouse(
        CMouseProcessor *this,
        struct tagPOINT a2,
        struct _MOUSE_INPUT_DATA *a3)
{
  int v3; // eax
  int v7; // edx
  char v8; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(*(_QWORD *)&a2 + 56LL);
  if ( (v3 & 0x200) == 0
    || (v3 & 4) != 0
    || (v3 & 0x10000) != 0
    || *((_DWORD *)this + 60) != (unsigned int)PsGetCurrentThreadId()
    || (*(_BYTE *)(*(_QWORD *)&a2 + 2LL) & 1) != 0
    || (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::HandleMouseInterceptWorker)(this, a2) != 1 )
  {
    CMouseProcessor::ProcessMouseInputData(
      this,
      (struct CMouseProcessor::MouseInputDataEx *)&v8,
      a2,
      *(const struct _MOUSE_INPUT_DATA **)&gptCursorAsync,
      (const struct tagUIPI_INFO_INT *)a3);
  }
  else
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v7, 10, 15, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
  }
}
