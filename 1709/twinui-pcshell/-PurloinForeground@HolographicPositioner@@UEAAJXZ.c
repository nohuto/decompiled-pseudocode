/*
 * XREFs of ?PurloinForeground@HolographicPositioner@@UEAAJXZ @ 0x1800FC8D0
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800FB940 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x180094E40 (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 *     ?GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z @ 0x1800CE24C (-GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z.c)
 *     ?PurloinForeground@HolographicPositionerTelemetry@@SAXXZ @ 0x1800F9D70 (-PurloinForeground@HolographicPositionerTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::PurloinForeground(HolographicPositioner *this)
{
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v2; // rdx
  enum Windows::Internal::Shell::Holographic::UserInputContext *v3; // rdx
  int UserDisplayContext; // ebx
  __int64 v5; // rdx
  bool v7; // bl
  HWND ForegroundWindow; // r9
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v18; // [rsp+78h] [rbp+38h] BYREF
  int v19; // [rsp+80h] [rbp+40h] BYREF
  int v20; // [rsp+88h] [rbp+48h] BYREF

  v16[1] = -2LL;
  HolographicPositionerTelemetry::PurloinForeground();
  v18 = 0;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserDisplayContext(
                         (Windows::Internal::Shell::Holographic *)&v18,
                         v2);
  if ( UserDisplayContext < 0 )
  {
    v5 = 913LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)UserDisplayContext);
    return (unsigned int)UserDisplayContext;
  }
  v19 = 0;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserInputContext(
                         (Windows::Internal::Shell::Holographic *)&v19,
                         v3);
  if ( UserDisplayContext < 0 )
  {
    v5 = 916LL;
    goto LABEL_3;
  }
  if ( !v18 && !v19 )
  {
    v7 = 0;
    ForegroundWindow = GetForegroundWindow();
    v16[0] = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, HWND, _QWORD *))(**((_QWORD **)this + 10) + 48LL))(
           *((_QWORD *)this + 10),
           ForegroundWindow,
           v16) >= 0 )
    {
      v14 = 0LL;
      v15 = 0LL;
      if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))v16[0])(
             v16[0],
             &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
             &v15) >= 0
        && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, &v14) >= 0 )
      {
        v20 = 0;
        if ( (*(int (__fastcall **)(__int64, const wchar_t *, int *))(*(_QWORD *)v14 + 88LL))(
               v14,
               L"Microsoft.Windows.HolographicFirstRun_cw5n1h2txyewy!App",
               &v20) >= 0 )
          v7 = v20 != 0;
      }
      v9 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v10 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    v11 = v16[0];
    if ( v16[0] )
    {
      v16[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( !v7 )
    {
      UserDisplayContext = -2147024891;
      v12 = 942LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)UserDisplayContext);
      return (unsigned int)UserDisplayContext;
    }
  }
  v13 = *((_QWORD *)this + 14);
  if ( !v13 )
  {
    UserDisplayContext = -2147467261;
    v12 = 946LL;
    goto LABEL_22;
  }
  UserDisplayContext = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
  if ( UserDisplayContext < 0 )
  {
    v5 = 947LL;
    goto LABEL_3;
  }
  return 0LL;
}
