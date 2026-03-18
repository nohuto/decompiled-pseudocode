/*
 * XREFs of ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0130B20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01309C4 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131458 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x1C0138EDC (APISetEditionGetMouseWheelRoutingMode.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  int MouseWheelRoutingMode; // r8d
  unsigned int v5; // ecx
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+3Ch] [rbp-Ch]

  MouseWheelRoutingMode = 2;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 8) != 0 )
    goto LABEL_8;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 80LL) == 34 || CMouseProcessor::AppCompatWheelRoutingRequested(this) )
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
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 3u, 0xAu, 0x23u, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
    return;
  }
LABEL_8:
  v6 = *(_QWORD *)a2;
  v7 = MouseWheelRoutingMode;
  v5 = *(unsigned __int16 *)(v6 + 16);
  LOWORD(v5) = ~(_WORD)v5;
  v8 = (v5 >> 10) & 1;
  CMouseProcessor::ProcessMouseWheel(this, (const struct CMouseProcessor::CWheelEvent *)&v6);
}
