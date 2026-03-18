/*
 * XREFs of SecureDmaEnabler_FreeCommonBufferPage @ 0x1C00601E8
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0040638 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C0040A50 (XilCoreCommonBuffer_FreeUnusedResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SecureDmaEnabler_FreeCommonBufferPage(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(
           WdfDriverGlobals,
           *(_QWORD *)(a2 + 16));
}
