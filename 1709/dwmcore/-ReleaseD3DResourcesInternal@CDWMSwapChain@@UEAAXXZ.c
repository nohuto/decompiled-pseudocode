/*
 * XREFs of ?ReleaseD3DResourcesInternal@CDWMSwapChain@@UEAAXXZ @ 0x1801B0730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMSwapChain::ReleaseD3DResourcesInternal(CDWMSwapChain *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 52);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 52) = 0LL;
  }
}
