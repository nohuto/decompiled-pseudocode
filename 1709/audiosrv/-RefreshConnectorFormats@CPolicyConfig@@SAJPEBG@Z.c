/*
 * XREFs of ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x180086718
 * Callers:
 *     std::_Func_impl__lambda_a8192ba8e11c189ab16d0f21d8e90bb9__std::allocator_int__void_::_Do_call @ 0x1800358E0 (std--_Func_impl__lambda_a8192ba8e11c189ab16d0f21d8e90bb9__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800837A8 (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x18008767C (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B76E4 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::RefreshConnectorFormats(const unsigned __int16 *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct IMMDevice *v4; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v5; // edx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v8; // [rsp+58h] [rbp+10h] BYREF
  CEndpointCharacteristics *v9; // [rsp+60h] [rbp+18h] BYREF
  struct IMMDevice *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  v2 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a1,
         0LL,
         &v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = (struct IMMDevice *)*((_QWORD *)v9 + 2);
    v10 = v4;
    ((void (__fastcall *)(struct IMMDevice *))v4->lpVtbl->AddRef)(v4);
    ((void (__fastcall *)(struct IMMDevice *, int *))v4->lpVtbl->GetState)(v4, &v8);
    if ( v8 != 4 )
    {
      CPolicyConfig::DisconnectHelper(v4);
      CEndpointCharacteristics::RefreshDefaultConnectorFormats(v9, v5);
      CPolicyConfig::SetDeviceFormat(g_PolicyConfig, v4, 0LL);
      (*(void (__fastcall **)(CPolicyConfig *, const unsigned __int16 *))(*(_QWORD *)g_PolicyConfig + 40LL))(
        g_PolicyConfig,
        a1);
    }
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xE4B,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v2);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v9);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
  return v3;
}
