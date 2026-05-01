/*
 * XREFs of ??1?$unique_ptr@VCortanaPositionerSelector@Cortana@TwinUI@@U?$default_delete@VCortanaPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1800BE4B8
 * Callers:
 *     ?GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18009BD30 (-GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspec.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wistd::unique_ptr<TwinUI::Cortana::CortanaPositionerSelector,wistd::default_delete<TwinUI::Cortana::CortanaPositionerSelector>>::~unique_ptr<TwinUI::Cortana::CortanaPositionerSelector,wistd::default_delete<TwinUI::Cortana::CortanaPositionerSelector>>(
        _QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = v1[5];
    if ( v2 )
    {
      v1[5] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    v3 = v1[4];
    if ( v3 )
    {
      v1[4] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    v4 = v1[2];
    if ( v4 )
    {
      v1[2] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = v1[1];
    if ( v5 )
    {
      v1[1] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    operator delete(v1);
  }
}
