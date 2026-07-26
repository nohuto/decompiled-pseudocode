/*
 * XREFs of ndisVBusVirtMiniRemove @ 0x1C00740B8
 * Callers:
 *     NdisIMVBusDeviceRemove @ 0x1C00DA010 (NdisIMVBusDeviceRemove.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisVBusVirtMiniRemove(__int64 a1, __int64 a2)
{
  unsigned int v5; // ebx

  if ( !ExAcquireRundownProtection(&RunRef) )
    return 3221225635LL;
  v5 = (*((__int64 (__fastcall **)(__int64, __int64))ProviderDispatch + 1))(a1, a2);
  ExReleaseRundownProtection(&RunRef);
  return v5;
}
