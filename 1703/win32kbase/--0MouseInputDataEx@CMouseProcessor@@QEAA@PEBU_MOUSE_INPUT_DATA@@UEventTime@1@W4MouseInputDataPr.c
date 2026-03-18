/*
 * XREFs of ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@K@Z @ 0x1C0080CE4
 * Callers:
 *     SynthesizeMouseInput @ 0x1C0084220 (SynthesizeMouseInput.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C009A08C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01314CC (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::MouseInputDataEx::MouseInputDataEx(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        int a4,
        __int128 *a5,
        int a6)
{
  __int128 v6; // xmm0

  *(_OWORD *)(a1 + 40) = *a3;
  *(_DWORD *)(a1 + 56) = a4;
  v6 = *a5;
  *(_DWORD *)(a1 + 60) = a6;
  *(_DWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 68) = 0;
  *(_OWORD *)(a1 + 24) = v6;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  if ( !*(_DWORD *)(a1 + 12) && !*(_DWORD *)(a1 + 16) )
    *(_DWORD *)(a1 + 56) |= 8u;
  return a1;
}
