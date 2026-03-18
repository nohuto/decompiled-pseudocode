/*
 * XREFs of SecureDmaEnabler_FreeCommonBufferPage @ 0x1C005D5E8
 * Callers:
 *     CommonBuffer_ReleaseSecureBuffer @ 0x1C0002354 (CommonBuffer_ReleaseSecureBuffer.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C003ED48 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C003F15C (XilCoreCommonBuffer_FreeUnusedResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SecureDmaEnabler_FreeCommonBufferPage(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1664))(
           WdfDriverGlobals,
           *(_QWORD *)(a2 + 16));
}
