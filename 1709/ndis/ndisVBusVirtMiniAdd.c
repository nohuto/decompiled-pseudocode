/*
 * XREFs of ndisVBusVirtMiniAdd @ 0x1C0075BB8
 * Callers:
 *     NdisIMVBusDeviceAdd @ 0x1C00E3F90 (NdisIMVBusDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisVBusVirtMiniAdd(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v7; // ebx

  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.Reserved) )
    return 3221225635LL;
  v7 = (**(__int64 (__fastcall ***)(__int64, __int64, __int64))&WPP_MAIN_CB.SectorSize)(a1, a2, a3);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.Reserved);
  return v7;
}
