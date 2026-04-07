/*
 * XREFs of _anonymous_namespace_::GetCbsSession @ 0x180073610
 * Callers:
 *     ?EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ @ 0x18001036C (-EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ.c)
 *     _anonymous_namespace_::FodWaiter @ 0x180073570 (_anonymous_namespace_--FodWaiter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180073810 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180074B18 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

LPVOID *__fastcall anonymous_namespace_::GetCbsSession(LPVOID *ppv)
{
  HRESULT Instance; // eax
  int v3; // eax
  int ppva; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *ppv = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(ppv);
  Instance = CoCreateInstance(
               &GUID_752073a1_23f2_4396_85f0_8fdb879ed0ed,
               0LL,
               0x15u,
               &GUID_9c7e3cf3_4c97_4d36_bdeb_e3093c228c22,
               ppv);
  if ( Instance >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *))(*(_QWORD *)*ppv + 24LL))(
           *ppv,
           48LL,
           L"FodInstaller");
    if ( v3 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x35,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v3,
        0);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(ppv);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x33,
      (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)Instance,
      ppva);
  }
  return ppv;
}
