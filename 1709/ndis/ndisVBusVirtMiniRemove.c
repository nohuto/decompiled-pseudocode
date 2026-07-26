/*
 * XREFs of ndisVBusVirtMiniRemove @ 0x1C0075C28
 * Callers:
 *     NdisIMVBusDeviceRemove @ 0x1C00E4030 (NdisIMVBusDeviceRemove.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisVBusVirtMiniRemove(__int64 a1, __int64 a2)
{
  unsigned int v5; // ebx

  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.Reserved) )
    return 3221225635LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)&WPP_MAIN_CB.SectorSize + 8LL))(a1, a2);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.Reserved);
  return v5;
}
