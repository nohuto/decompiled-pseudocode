/*
 * XREFs of ?CIAMSpecialWindow_CreateInstance@@YAJQEBUSPECIAL_WINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x18002E4F8
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180010124 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x18002E1AC (-InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIAMSpecialWindow_CreateInstance(
        const struct SPECIAL_WINDOW_INIT_DATA *a1,
        const struct _GUID *a2,
        void **a3)
{
  CIAMSpecialWindowBase *v5; // rax
  CIAMSpecialWindowBase *v6; // rbx
  int v7; // edi
  __int64 v8; // rax
  CIAMSpecialWindowBase *v10; // [rsp+38h] [rbp+10h]

  *a3 = 0LL;
  v10 = 0LL;
  v5 = (CIAMSpecialWindowBase *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    *((_QWORD *)v5 + 2) = 0LL;
    *((_DWORD *)v5 + 6) = 0;
    *(_QWORD *)v5 = &CIAMSpecialWindowBase::`vftable';
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_DWORD *)v5 + 13) = 1;
    *(_QWORD *)v5 = &CIAMSpecialWindow::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &CIAMSpecialWindow::`vftable';
    v7 = CIAMSpecialWindowBase::InitializeSpecialWindow(v6, a1);
    v8 = *(_QWORD *)v6;
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(CIAMSpecialWindowBase *))(v8 + 8))(v6);
      v10 = v6;
      (*(void (__fastcall **)(CIAMSpecialWindowBase *))(*(_QWORD *)v6 + 16LL))(v6);
      v7 = 0;
    }
    else
    {
      (*(void (__fastcall **)(CIAMSpecialWindowBase *))(v8 + 16))(v6);
    }
    if ( v7 >= 0 )
      v7 = (**(__int64 (__fastcall ***)(CIAMSpecialWindowBase *, GUID *, void **))v10)(
             v10,
             &GUID_fdcff85f_e2e4_4465_a2c5_810d6ec0ffee,
             a3);
  }
  else
  {
    v7 = -2147024882;
  }
  if ( v10 )
    (*(void (__fastcall **)(CIAMSpecialWindowBase *))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v7;
}
