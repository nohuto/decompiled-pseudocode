/*
 * XREFs of ?DpiAcpiEventCallback@@YAXPEAXK@Z @ 0x1C00424D0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

void __fastcall DpiAcpiEventCallback(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_q((__int64)DeviceObject, &EventACPIEvent, a3, a2);
  DpiAcpiCallAcpiEventHandler(DeviceObject, DxgkAcpiEvent, a2, 0LL);
}
