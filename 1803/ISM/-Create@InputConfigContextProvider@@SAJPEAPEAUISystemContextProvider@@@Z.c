/*
 * XREFs of ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x1800903A4
 * Callers:
 *     ?Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180037C10 (-Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180039C20 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18000819C (--4-$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F2BC (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800163CC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ??0InputConfigContextProvider@@IEAA@XZ @ 0x1800901CC (--0InputConfigContextProvider@@IEAA@XZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputConfigContextProvider::Create(struct ISystemContextProvider **a1)
{
  int v2; // r14d
  struct SystemContextProvider *v3; // rcx
  InputConfigContextProvider *v4; // rax
  InputConfigContextProvider *v5; // rbx
  InputConfigContextProvider *v6; // rsi
  __int64 *v7; // r12
  __int64 v8; // rcx
  _QWORD *v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _QWORD *v19; // rdx
  _QWORD v21[7]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD *v22; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  if ( !a1 )
    return (unsigned int)-2147024809;
  v2 = 0;
  v3 = SystemContextProvider::s_pContextProvider;
  if ( SystemContextProvider::s_pContextProvider )
    goto LABEL_25;
  v4 = (InputConfigContextProvider *)malloc(0x110uLL);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0x110uLL);
  if ( v5 )
    v6 = InputConfigContextProvider::InputConfigContextProvider(v5);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = (__int64 *)((char *)v6 + 88);
    v8 = *((_QWORD *)v6 + 11);
    if ( v8 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v2 = CoreUICreate((char *)v6 + 88);
    if ( v2 >= 0 )
    {
      v21[0] = off_1800F1590;
      v21[1] = v6;
      v22 = v21;
      v9 = (_QWORD *)((char *)v6 + 96);
      std::function<void (_MIT_KEYBOARD_INPUT_MESSAGE const *)>::operator=((__int64)v6 + 160, (__int64)v21);
      v10 = *v7;
      v11 = *((_QWORD *)v6 + 12);
      if ( v11 )
      {
        *v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, __int64))(*(_QWORD *)v10 + 64LL))(
              v10,
              L"Kernel\\MIT\\InputPort",
              (__int64)v6 + 96);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x20,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
          (const char *)(unsigned int)v12);
        __debugbreak();
      }
      LOBYTE(v13) = 1;
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v9 + 32LL))(*v9, v13);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x34,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
          (const char *)(unsigned int)v14);
        __debugbreak();
      }
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        (_QWORD *)v6 + 13,
        *v7);
      v15 = *v7;
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        (_QWORD *)v6 + 13,
        *((_QWORD *)v6 + 13));
      v16 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), __int64, _QWORD, __int64))(*(_QWORD *)v15 + 80LL))(
              v15,
              KernelInputConnection<_MIT_INPUT_CONFIG_MESSAGE>::s_OnKernelInputEventStatic,
              (__int64)v6 + 96,
              *v9,
              (__int64)v6 + 112);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3C,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)*v7 + 112LL))(
              *v7,
              *((_QWORD *)v6 + 14),
              (__int64)v6 + 120);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x40,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
          (const char *)(unsigned int)v17);
        __debugbreak();
      }
      v18 = MITCoreMsgKOpenConnectionTo(7LL, (char *)v6 + 120);
      if ( v18 < 0 )
      {
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x45,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
          (const char *)(unsigned int)v18);
        JUMPOUT(0x180090688LL);
      }
      if ( v22 )
      {
        v19 = v21;
        LOBYTE(v19) = v22 != v21;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v22 + 32LL))(v22, v19);
      }
    }
    if ( v2 < 0 )
      goto LABEL_26;
    v3 = v6;
    SystemContextProvider::s_pContextProvider = v6;
LABEL_25:
    (*(void (__fastcall **)(struct SystemContextProvider *))(*(_QWORD *)v3 + 8LL))(v3);
    *a1 = SystemContextProvider::s_pContextProvider;
    return (unsigned int)v2;
  }
  v2 = -2147024882;
LABEL_26:
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v6 + 1) + 24LL))((__int64)v6 + 8, 1LL);
  return (unsigned int)v2;
}
