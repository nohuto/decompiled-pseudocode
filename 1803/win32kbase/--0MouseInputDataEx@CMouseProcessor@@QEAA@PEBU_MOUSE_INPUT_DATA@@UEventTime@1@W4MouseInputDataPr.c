/*
 * XREFs of ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C003A424
 * Callers:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C003A6EC (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     SynthesizeMouseInput @ 0x1C00675A0 (SynthesizeMouseInput.c)
 *     SynthesizeMouseInputWithNextPreview @ 0x1C012EA60 (SynthesizeMouseInputWithNextPreview.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0134314 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01351B4 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::MouseInputDataEx::MouseInputDataEx(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        int a4,
        _OWORD *a5,
        _QWORD *a6)
{
  *(_OWORD *)(a1 + 40) = *a3;
  *(_DWORD *)(a1 + 56) = a4;
  *(_OWORD *)(a1 + 24) = *a5;
  *(_DWORD *)(a1 + 60) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  if ( !*(_DWORD *)(a1 + 12) && !*(_DWORD *)(a1 + 16) )
    *(_DWORD *)(a1 + 56) |= 8u;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 == 1 || *(_DWORD *)a6 == 2 )
      *(_QWORD *)(a1 + 64) = *a6;
    else
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(*(_DWORD *)a6 - 1), a6);
  }
  return a1;
}
