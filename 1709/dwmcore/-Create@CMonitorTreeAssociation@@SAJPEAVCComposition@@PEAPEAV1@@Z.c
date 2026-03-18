/*
 * XREFs of ?Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180130200
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180128180 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMonitorTreeAssociation::Create(struct CComposition *a1, struct CMonitorTreeAssociation **a2)
{
  struct CMonitorTreeAssociation *v4; // rax
  struct CMonitorTreeAssociation *v5; // rbx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct CMonitorTreeAssociation *)WPF::ProcessHeapImpl::AllocClear(0x38uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *(_QWORD *)v4 = &CMILRefCountBase::`vftable';
  *(_QWORD *)v4 = &CMonitorTreeAssociation::`vftable';
  *((_DWORD *)v4 + 2) = 0;
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_DWORD *)v4 + 10) = 0;
  *((_QWORD *)v4 + 6) = a1;
  (**(void (__fastcall ***)(void *))v4)(v4);
  *a2 = v5;
  ReleaseInterfaceNoNULL<CPolygon>(0LL);
  return 0LL;
}
