/*
 * XREFs of ?Release@DXGVMBUSCHANNEL@@QEAAJXZ @ 0x1C01E5728
 * Callers:
 *     ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1EPEAPEAV1@@Z @ 0x1C01E4D60 (-Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1EPEAPEAV1@@Z.c)
 *     ?UnregisterAsSubscriber@DXGCHANNELENDPOINTPROXY@@MEAAJXZ @ 0x1C01E57F0 (-UnregisterAsSubscriber@DXGCHANNELENDPOINTPROXY@@MEAAJXZ.c)
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C01E67DC (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::Release(DXGVMBUSCHANNEL *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (**(void (__fastcall ***)(DXGVMBUSCHANNEL *, __int64))this)(this, 1LL);
  return v1;
}
