/*
 * XREFs of ?Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@Z @ 0x1C0134B78
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0134A74 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C003A6B4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(
        CMouseProcessor::MouseInputDataEx *this,
        const struct _MouseProcessorData *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int16 v6; // cx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp+8h]

  if ( *(_WORD *)this == 0xFFFF )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( (*((_BYTE *)this + 2) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 0x10000LL) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  if ( (*((_BYTE *)a2 + 12) & 1) != 0 )
  {
    v6 = *((_WORD *)this + 1) | 1;
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    v7 = *((_DWORD *)a2 + 2);
    *((_WORD *)this + 1) = v6;
    *((_DWORD *)this + 4) = v7;
    if ( (*((_BYTE *)a2 + 12) & 2) != 0 )
      *((_WORD *)this + 1) = v6 | 2;
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 4LL) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  }
  else
  {
    if ( (*((_DWORD *)a2 + 5) & 0x10) == 0 )
      goto LABEL_15;
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 14) |= 4u;
  }
  *((_DWORD *)this + 14) &= ~8u;
LABEL_15:
  HIDWORD(v11) = *((_DWORD *)a2 + 4);
  LODWORD(v11) = 2;
  *((_QWORD *)this + 8) = v11;
  v10 = *((_DWORD *)a2 + 5);
  if ( (v10 & 2) != 0 )
  {
    *((_DWORD *)this + 14) |= 0x800u;
    v10 = *((_DWORD *)a2 + 5);
  }
  if ( (v10 & 4) != 0 )
  {
    *((_DWORD *)this + 14) |= 2u;
    v10 = *((_DWORD *)a2 + 5);
  }
  if ( (v10 & 0x20) != 0 )
  {
    *((_DWORD *)this + 14) |= 0x2000u;
    v10 = *((_DWORD *)a2 + 5);
  }
  if ( (v10 & 0x40) != 0 )
    *((_DWORD *)this + 14) |= 0x8000u;
}
