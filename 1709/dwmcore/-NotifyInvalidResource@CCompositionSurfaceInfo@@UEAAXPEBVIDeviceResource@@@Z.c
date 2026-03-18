/*
 * XREFs of ?NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x18017C7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180076684 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceInfo::NotifyInvalidResource(
        CCompositionSurfaceInfo *this,
        const struct IDeviceResource *a2)
{
  int i; // ebx
  __int64 v5; // rcx

  CCompositionSurfaceInfo::CBindInfo::Reset((CCompositionSurfaceInfo *)((char *)this + 32));
  for ( i = *((_DWORD *)this + 88); i > 0; --i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(i - 1));
    (*(void (__fastcall **)(__int64, const struct IDeviceResource *))(*(_QWORD *)v5 + 16LL))(v5, a2);
  }
}
