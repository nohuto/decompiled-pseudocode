/*
 * XREFs of ??1?$CAutoMemPtr@UDesktopVisibilityChangeListener@CImmersiveMode@@@@QEAA@XZ @ 0x180030B94
 * Callers:
 *     _CImmersiveMode::RegisterForDesktopVisibilityChanges_::_1_::dtor$1 @ 0x1801991FA (_CImmersiveMode--RegisterForDesktopVisibilityChanges_--_1_--dtor$1.c)
 * Callees:
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x180025614 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAutoMemPtr<CImmersiveMode::DesktopVisibilityChangeListener>::~CAutoMemPtr<CImmersiveMode::DesktopVisibilityChangeListener>(
        unsigned int **a1)
{
  unsigned int *v1; // rbx
  unsigned int v2; // edi

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    v2 = *v1;
    if ( *v1 )
    {
      if ( (int)GlobalInterfaceTable::s_Retrieve() >= 0 )
        ((void (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->RevokeInterfaceFromGlobal)(
          GlobalInterfaceTable::s_pGlobalInterfaceTable,
          v2);
    }
    operator delete(v1);
  }
}
