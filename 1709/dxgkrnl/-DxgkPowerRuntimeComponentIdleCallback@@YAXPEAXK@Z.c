/*
 * XREFs of ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C00237A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C001EC80 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     McTemplateK0pqq @ 0x1C0020624 (McTemplateK0pqq.c)
 */

void __fastcall DxgkPowerRuntimeComponentIdleCallback(DXGADAPTER *this, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pqq((__int64)this, &Dxgk_PowerRuntimeComponentActiveCallback, a3, this, a2, 0);
  DXGADAPTER::PowerRuntimeComponentActiveCallback(this, a2, 0, a4);
  PoFxCompleteIdleCondition(*((_QWORD *)this + 294), a2);
}
