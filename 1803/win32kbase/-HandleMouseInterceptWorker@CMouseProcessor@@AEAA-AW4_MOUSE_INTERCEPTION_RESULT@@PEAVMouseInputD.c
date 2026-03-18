/*
 * XREFs of ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0134A74
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0039698 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01351B4 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C003A6B4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0133EB4 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C0134870 (-GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEP.c)
 *     ?Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@Z @ 0x1C0134B78 (-Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C0134FB4 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 */

__int64 __fastcall CMouseProcessor::HandleMouseInterceptWorker(
        __int64 a1,
        const struct CMouseProcessor::MouseInputDataEx *a2)
{
  __int64 v2; // rsi
  bool v6; // zf
  char v7; // al
  unsigned int v8; // edi
  _BYTE v9[20]; // [rsp+20h] [rbp-58h] BYREF
  int v10; // [rsp+34h] [rbp-44h]
  _BYTE v11[56]; // [rsp+38h] [rbp-40h] BYREF
  int v12; // [rsp+80h] [rbp+8h] BYREF

  v2 = a1 + 2744;
  if ( !CMouseProcessor::MouseInterceptState::GetInterceptStateAndBehavior(
          (CMouseProcessor::MouseInterceptState *)(a1 + 2744),
          (enum _MOUSE_PREINTERCEPT_BEHAVIOR *)&v12) )
    return 0LL;
  v6 = !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 8LL);
  v7 = v12;
  if ( !v6 )
    v7 = v12 & 0xFE;
  CMouseProcessor::PrepareDataForIntercept((CMouseProcessor *)a1, a2, v7 & 1, (struct _MouseInterceptorData *)v11);
  v8 = CMouseProcessor::MouseInterceptState::CallInterceptor(v2, (__int64)v11, (__int64)v9);
  if ( v8 == 2 )
  {
    if ( (dword_1C01AA54C & 1) == 0 )
      dword_1C01AA54C |= 1u;
    v10 &= 0x76u;
    CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(a2, (const struct _MouseProcessorData *)v9);
  }
  return v8;
}
