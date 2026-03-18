/*
 * XREFs of ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0131420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01312C8 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131DC4 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x1C0139B7C (APISetEditionGetMouseWheelRoutingMode.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  const struct CMouseProcessor::CMouseEvent *v2; // rdi
  int MouseWheelRoutingMode; // r8d
  unsigned int v5; // ecx
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+3Ch] [rbp-Ch]

  v2 = a2;
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
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_(
      *((_QWORD *)this + 1),
      (_DWORD)a2,
      10,
      35,
      (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
    return;
  }
LABEL_8:
  v6 = *(_QWORD *)v2;
  v7 = MouseWheelRoutingMode;
  v5 = *(unsigned __int16 *)(v6 + 16);
  LOWORD(v5) = ~(_WORD)v5;
  v8 = (v5 >> 10) & 1;
  CMouseProcessor::ProcessMouseWheel(this, (const struct CMouseProcessor::CWheelEvent *)&v6);
}
