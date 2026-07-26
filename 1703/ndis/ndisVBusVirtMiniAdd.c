/*
 * XREFs of ndisVBusVirtMiniAdd @ 0x1C0074048
 * Callers:
 *     NdisIMVBusDeviceAdd @ 0x1C00D9F70 (NdisIMVBusDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisVBusVirtMiniAdd(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v7; // ebx

  if ( !ExAcquireRundownProtection(&RunRef) )
    return 3221225635LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))ProviderDispatch)(a1, a2, a3);
  ExReleaseRundownProtection(&RunRef);
  return v7;
}
