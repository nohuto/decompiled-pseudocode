/*
 * XREFs of ?NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801ACB70
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180082BA8 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceInfo::NotifyInvalidResource(
        CCompositionSurfaceInfo *this,
        const struct IDeviceResource *a2)
{
  int i; // ebx
  __int64 v5; // rcx

  CCompositionSurfaceInfo::CBindInfo::Reset((CCompositionSurfaceInfo *)((char *)this + 32));
  for ( i = *((_DWORD *)this + 92); i > 0; --i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 43) + 8LL * (unsigned int)(i - 1));
    (*(void (__fastcall **)(__int64, const struct IDeviceResource *))(*(_QWORD *)v5 + 16LL))(v5, a2);
  }
}
