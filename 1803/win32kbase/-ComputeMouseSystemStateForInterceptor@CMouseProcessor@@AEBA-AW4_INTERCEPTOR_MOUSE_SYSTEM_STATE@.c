/*
 * XREFs of ?ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA?AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@@AEBVMouseInputDataEx@1@@Z @ 0x1C0134108
 * Callers:
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C0134FB4 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C003A6B4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C00656C4 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ComputeMouseSystemStateForInterceptor(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  unsigned __int16 v4; // bx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 result; // rax

  v3 = 0;
  v4 = *(_WORD *)(a2 + 4) & 0xF;
  if ( v4 && !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1024LL) )
  {
    if ( (v4 & 3) != 0 )
    {
      v7 = 1;
    }
    else
    {
      v4 >>= 2;
      v7 = 2;
      if ( !v4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
    }
    if ( anonymous_namespace_::IsMouseButtonSwapped(v7, (v4 & 2) != 0) )
      v3 = 1;
  }
  result = v3 | 2;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2736), 1, 1) )
    return v3;
  return result;
}
