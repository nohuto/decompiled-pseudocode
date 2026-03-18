/*
 * XREFs of imp_WdfWdmDriverGetWdfDriverHandle @ 0x1C007AAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

WDFDRIVER__ *__fastcall imp_WdfWdmDriverGetWdfDriverHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject)
{
  __int64 v2; // rax
  __int16 v3; // cx
  WDFDRIVER__ *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !DriverObject )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v2 = *(_QWORD *)IoGetDriverObjectExtension(DriverObject, FxDriver::GetFxDriver);
  v3 = *(_WORD *)(v2 + 10);
  result = (WDFDRIVER__ *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v3 )
    return 0LL;
  return result;
}
