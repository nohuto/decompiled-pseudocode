/*
 * XREFs of ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C002B970
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0025B70 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     McTemplateK0pqq @ 0x1C002783C (McTemplateK0pqq.c)
 */

void __fastcall DxgkPowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pqq((__int64)this, &Dxgk_PowerRuntimeComponentActiveCallback, a3, this, a2, 1);
  DXGADAPTER::PowerRuntimeComponentActiveCallback(this, a2, 1, a4);
}
