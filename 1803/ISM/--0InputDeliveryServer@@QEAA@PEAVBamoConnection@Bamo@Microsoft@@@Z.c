/*
 * XREFs of ??0InputDeliveryServer@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z @ 0x180023514
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z @ 0x180022894 (--0InputSystem@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18000819C (--4-$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBamoConnection@Bamo@2@@Z @ 0x18000AD9C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBamoConnection@Bamo@2@@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F2BC (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800163CC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x1800190B8 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
InputDeliveryServer *__fastcall InputDeliveryServer::InputDeliveryServer(
        InputDeliveryServer *this,
        struct Microsoft::Bamo::BamoConnection *a2)
{
  _QWORD *v3; // rbx
  __int64 *v4; // r14
  struct IViewHierarchy *ViewHierarchy; // rax
  struct IViewHierarchy *v6; // rbx
  struct IViewHierarchy *v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r15
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _QWORD *v21; // rdx
  _QWORD v23[7]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD *v24; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  *(_QWORD *)this = &BamoInputDeliveryServerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &InputDeliveryServer::`vftable'{for `IInputDeliveryServerPrincipal'};
  v3 = (_QWORD *)((char *)this + 16);
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((InputDeliveryServer *)((char *)this + 16), a2);
  *v3 = &BamoImpl::BamoInputDeliveryServerPrincipalImpl::`vftable';
  *(_QWORD *)this = &InputDeliveryServer::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &InputDeliveryServer::`vftable'{for `IInputDeliveryServerPrincipal'};
  v4 = (__int64 *)((char *)this + 56);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  ViewHierarchy = ISMStatics::GetViewHierarchy();
  v6 = ViewHierarchy;
  v7 = (struct IViewHierarchy *)*((_QWORD *)this + 11);
  if ( v7 != ViewHierarchy )
  {
    if ( ViewHierarchy )
    {
      (*(void (__fastcall **)(struct IViewHierarchy *))(*(_QWORD *)ViewHierarchy + 8LL))(ViewHierarchy);
      v7 = (struct IViewHierarchy *)*((_QWORD *)this + 11);
    }
    *((_QWORD *)this + 11) = v6;
    if ( v7 )
      (*(void (__fastcall **)(struct IViewHierarchy *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (_QWORD *)((char *)this + 104);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  v9 = *v4;
  if ( *v4 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = CoreUICreate((char *)this + 56);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_20;
  }
  v23[0] = off_1800EC5A0;
  v23[1] = this;
  v24 = v23;
  std::function<void (_MIT_KEYBOARD_INPUT_MESSAGE const *)>::operator=((__int64)this + 168, (__int64)v23);
  v11 = *v4;
  v12 = *v8;
  if ( *v8 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, char *))(*(_QWORD *)v11 + 64LL))(
          v11,
          L"Kernel\\MIT\\InputPort",
          (char *)this + 104);
  v15 = retaddr;
  if ( v13 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::FailFast_Hr(
      v15,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  LOBYTE(v14) = 1;
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v8 + 32LL))(*v8, v14);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 14,
    *v4);
  v17 = *v4;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 14,
    *((_QWORD *)this + 14));
  v18 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), char *, _QWORD, char *))(*(_QWORD *)v17 + 80LL))(
          v17,
          KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>::s_OnKernelInputEventStatic,
          (char *)this + 104,
          *v8,
          (char *)this + 120);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)*v4 + 112LL))(
          *v4,
          *((_QWORD *)this + 15),
          (char *)this + 128);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
  v20 = MITCoreMsgKOpenConnectionTo(4LL, (char *)this + 128);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::_FailFast_NtStatus(
      retaddr,
      (void *)0x45,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      (const char *)(unsigned int)v20);
    JUMPOUT(0x180023803LL);
  }
  if ( v24 )
  {
    v21 = v23;
    LOBYTE(v21) = v24 != v23;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v24 + 32LL))(v24, v21);
  }
  return this;
}
