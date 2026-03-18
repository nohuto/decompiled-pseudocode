/*
 * XREFs of ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0134040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C0133E58 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01354D0 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x1C013D20C (APISetEditionGetMouseWheelRoutingMode.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v4; // rdx
  int MouseWheelRoutingMode; // ebx
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+38h] [rbp-10h]
  int v10; // [rsp+3Ch] [rbp-Ch]

  v4 = *(_QWORD *)a2;
  MouseWheelRoutingMode = 2;
  if ( (*(_DWORD *)(v4 + 88) & 8) == 0 )
  {
    if ( *(_DWORD *)(v4 + 80) == 34 || CMouseProcessor::AppCompatWheelRoutingRequested(this) )
    {
      MouseWheelRoutingMode = 0;
    }
    else
    {
      MouseWheelRoutingMode = APISetEditionGetMouseWheelRoutingMode();
      if ( MouseWheelRoutingMode )
        goto LABEL_8;
    }
    if ( !gpqForeground )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        3u,
        0xAu,
        0x23u,
        (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
      return;
    }
  }
LABEL_8:
  v6 = *(_QWORD *)a2;
  if ( (*(_WORD *)(*(_QWORD *)a2 + 16LL) & 0xC00) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, 3072LL);
    v6 = *(_QWORD *)a2;
  }
  v7 = *(unsigned __int16 *)(v6 + 16);
  LOWORD(v7) = ~(_WORD)v7;
  v8 = v6;
  v9 = MouseWheelRoutingMode;
  v10 = (v7 >> 10) & 1;
  CMouseProcessor::ProcessMouseWheel(this, (const struct CMouseProcessor::CWheelEvent *)&v8);
}
