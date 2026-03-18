/*
 * XREFs of ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C0002B8C
 * Callers:
 *     VidSchiControlVSync @ 0x1C006BAE8 (VidSchiControlVSync.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt(DXGADAPTER *this, enum _DXGK_INTERRUPT_TYPE a2)
{
  return ((__int64 (__fastcall *)(DXGADAPTER *, __int64))DxgCoreInterface[12])(this, 3LL);
}
