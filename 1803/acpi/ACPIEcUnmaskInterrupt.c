/*
 * XREFs of ACPIEcUnmaskInterrupt @ 0x1C0021BF8
 * Callers:
 *     ACPIEcGpioDpcRoutine @ 0x1C00218F0 (ACPIEcGpioDpcRoutine.c)
 *     ACPIEcServiceDevice @ 0x1C00228D0 (ACPIEcServiceDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     ACPIVectorEnable @ 0x1C003FC10 (ACPIVectorEnable.c)
 */

__int64 __fastcall ACPIEcUnmaskInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 805) )
    return HalPrivateDispatchTable[61](*(unsigned int *)(a1 + 900), 2LL);
  else
    return ACPIVectorEnable(0LL, *(_QWORD *)(a1 + 72));
}
