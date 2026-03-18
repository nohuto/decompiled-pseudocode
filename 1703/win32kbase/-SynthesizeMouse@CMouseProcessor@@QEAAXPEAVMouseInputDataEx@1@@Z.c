/*
 * XREFs of ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@@Z @ 0x1C00476F8
 * Callers:
 *     SynthesizeMouseInput @ 0x1C0084220 (SynthesizeMouseInput.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01314CC (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0047480 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C013194C (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 */

void __fastcall CMouseProcessor::SynthesizeMouse(CMouseProcessor *this, struct tagPOINT a2)
{
  int v2; // eax
  int v5; // edx
  struct tagPOINT v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(*(_QWORD *)&a2 + 56LL);
  if ( (v2 & 0x200) == 0
    || (v2 & 4) != 0
    || (v2 & 0x10000) != 0
    || *((_DWORD *)this + 54) != (unsigned int)PsGetCurrentThreadId()
    || (*(_BYTE *)(*(_QWORD *)&a2 + 2LL) & 1) != 0
    || (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::HandleMouseInterceptWorker)(this, a2) != 1 )
  {
    CMouseProcessor::ProcessMouseInputData(this, &v6, a2, *(const struct _MOUSE_INPUT_DATA **)&gptCursorAsync, 0LL, 0LL);
  }
  else
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v5, 10, 15, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
  }
}
