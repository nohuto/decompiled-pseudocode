/*
 * XREFs of ?SendHomeEvent@MPCSixDofProcessor@@AEAAXXZ @ 0x18004E66C
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004DC58 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIGesturesPriv@Internal@Mirage@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIGesturesPriv@Internal@Mirage@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180039ED4 (--$ActivateInstance@V-$ComPtr@UIGesturesPriv@Internal@Mirage@Windows@@@WRL@Microsoft@@@Foundatio.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSixDofProcessor::SendHomeEvent(MPCSixDofProcessor *this)
{
  HRESULT v2; // eax
  int v3; // eax
  DWORD v4; // [rsp+40h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-30h] BYREF
  HSTRING string; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !byte_18010F3D1 )
  {
    v4 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\DWM",
      L"DisableBloomFor6dof",
      0x10u,
      0LL,
      &dword_18010F3D8,
      &v4);
    byte_18010F3D1 = 1;
  }
  if ( !dword_18010F3D8 )
  {
    if ( !*((_QWORD *)this + 131) )
    {
      string = 0LL;
      v2 = WindowsCreateStringReference(L"Windows.Mirage.Internal.GesturesPriv", 0x24u, &hstringHeader, &string);
      if ( v2 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
        __debugbreak();
      }
      v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Mirage::Internal::IGesturesPriv>>(
             (__int64)string,
             (__int64 *)this + 131);
      if ( v3 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x181,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
          (const char *)(unsigned int)v3);
        __debugbreak();
      }
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 131) + 88LL))(*((_QWORD *)this + 131), 0LL);
  }
}
