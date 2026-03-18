/*
 * XREFs of ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C011AFAC
 * Callers:
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C0110198 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1C011AF54 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C011F76C (WPP_RECORDER_SF_L.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::SetDelegateActionInt(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // eax
  int v7; // eax
  int v8; // eax

  switch ( a3 )
  {
    case 1:
      *(_DWORD *)(a2 + 432) |= 1u;
      break;
    case 2:
      *(_DWORD *)(a2 + 432) |= 2u;
      break;
    case 3:
      *(_DWORD *)(a2 + 432) |= 4u;
      break;
    default:
      v4 = (unsigned int)(a3 - 4);
      if ( a3 == 4 )
      {
        v8 = *(_DWORD *)(a2 + 432);
        if ( (v8 & 4) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v4);
          v8 = *(_DWORD *)(a2 + 432);
        }
        if ( (v8 & 0x20) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v4);
          v8 = *(_DWORD *)(a2 + 432);
        }
        if ( (v8 & 8) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v4);
          v8 = *(_DWORD *)(a2 + 432);
        }
        v7 = v8 | 8;
      }
      else
      {
        v5 = (unsigned int)(a3 - 5);
        if ( a3 == 5 )
        {
          *(_DWORD *)(a2 + 432) |= 0x10u;
          return;
        }
        if ( a3 != 6 )
        {
          WPP_RECORDER_SF_L(*(_QWORD *)(a1 + 8), v5, a3, 300);
          return;
        }
        v6 = *(_DWORD *)(a2 + 432);
        if ( (v6 & 0x20) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v5);
          v6 = *(_DWORD *)(a2 + 432);
        }
        v7 = v6 | 0x20;
      }
      *(_DWORD *)(a2 + 432) = v7;
      break;
  }
}
