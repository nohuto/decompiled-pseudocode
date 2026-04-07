/*
 * XREFs of ?ReleaseHolographicDisplay@CAnalogCompositorManager@@AEAAXXZ @ 0x180073F64
 * Callers:
 *     ?EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ @ 0x18001036C (-EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ.c)
 *     _lambda_1fb07860902cf0495ca2b3e5f54263f5_::operator() @ 0x180072E0C (_lambda_1fb07860902cf0495ca2b3e5f54263f5_--operator().c)
 *     _lambda_f22d5cbf612beadeeb19a63fa8ca3a96_::operator() @ 0x180072F1C (_lambda_f22d5cbf612beadeeb19a63fa8ca3a96_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180073810 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180074A58 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CAnalogCompositorManager::ReleaseHolographicDisplay(CAnalogCompositorManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 112LL))(v2, *((_QWORD *)this + 11));
    if ( v3 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x157,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v3,
        v4);
      __debugbreak();
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((GUID *)this + 8) = GUID_NULL;
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)this + 112,
    -1LL);
}
