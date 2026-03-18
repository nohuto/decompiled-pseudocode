/*
 * XREFs of SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback @ 0x1C00603C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     SecureDmaEnabler_Unmap @ 0x1C003F910 (SecureDmaEnabler_Unmap.c)
 */

_QWORD *__fastcall SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       a1,
                       off_1C004E458);
  if ( *((_DWORD *)result + 24) )
    return SecureDmaEnabler_Unmap(result[3], result + 11);
  return result;
}
