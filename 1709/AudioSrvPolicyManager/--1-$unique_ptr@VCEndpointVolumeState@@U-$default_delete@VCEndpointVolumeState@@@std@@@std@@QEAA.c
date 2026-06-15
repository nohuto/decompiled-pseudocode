/*
 * XREFs of ??1?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA@XZ @ 0x18002583C
 * Callers:
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::dtor$3 @ 0x18002915F (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::unique_ptr<CEndpointVolumeState>::~unique_ptr<CEndpointVolumeState>(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *(_BYTE *)(v1 + 24) )
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v1 + 16) + 240LL))(*(_QWORD *)(v1 + 16), v1 + 32);
    v2 = *(_QWORD *)(v1 + 16);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    operator delete((void *)v1, (const struct std::nothrow_t *)0x30);
  }
}
