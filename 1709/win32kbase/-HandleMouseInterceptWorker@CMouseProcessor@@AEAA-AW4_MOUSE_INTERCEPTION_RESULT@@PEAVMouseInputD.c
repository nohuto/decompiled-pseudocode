/*
 * XREFs of ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0130FD0
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0013B30 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00A538C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C008B948 (-GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEP.c)
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0130A20 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@Z @ 0x1C0131084 (-Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C0131348 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 */

__int64 __fastcall CMouseProcessor::HandleMouseInterceptWorker(
        __int64 a1,
        const struct CMouseProcessor::MouseInputDataEx *a2)
{
  __int64 v2; // rsi
  char v6; // al
  unsigned int v7; // r10d
  _BYTE v8[20]; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+34h] [rbp-44h]
  _BYTE v10[56]; // [rsp+38h] [rbp-40h] BYREF
  int v11; // [rsp+80h] [rbp+8h] BYREF

  v2 = a1 + 2904;
  if ( !CMouseProcessor::MouseInterceptState::GetInterceptStateAndBehavior(
          (CMouseProcessor::MouseInterceptState *)(a1 + 2904),
          (enum _MOUSE_PREINTERCEPT_BEHAVIOR *)&v11) )
    return 0LL;
  v6 = v11;
  if ( (*((_DWORD *)a2 + 14) & 8) != 0 )
    v6 = v11 & 0xFE;
  CMouseProcessor::PrepareDataForIntercept((CMouseProcessor *)a1, a2, v6 & 1, (struct _MouseInterceptorData *)v10);
  v7 = CMouseProcessor::MouseInterceptState::CallInterceptor(v2, (__int64)v10, (__int64)v8);
  if ( v7 == 2 )
  {
    if ( (dword_1C0198998 & 1) == 0 )
      dword_1C0198998 |= 1u;
    v9 &= 0x76u;
    CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(a2, (const struct _MouseProcessorData *)v8);
  }
  return v7;
}
