/*
 * XREFs of ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0046180
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0045DB0 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseMove(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  const struct CMouseProcessor::CMouseEvent *v2; // rbx
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+38h] [rbp-10h]

  v2 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_(*((_QWORD *)this + 1), (_DWORD)a2, 10, 38, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
  v4 = *(_QWORD *)v2;
  v6 = 0;
  v5 = v4;
  CMouseProcessor::ProcessMouseMove(this, (const struct CMouseProcessor::CMoveEvent *)&v5);
}
