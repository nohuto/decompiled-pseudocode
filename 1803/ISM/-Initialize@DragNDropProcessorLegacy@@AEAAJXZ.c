/*
 * XREFs of ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x1800B1E90
 * Callers:
 *     ?Create@DragNDropProcessorLegacy@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x1800B2144 (-Create@DragNDropProcessorLegacy@@SAJAEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PE.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800163CC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003A84C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003A87C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessorLegacy::Initialize(DragNDropProcessorLegacy *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  const char *v5; // r9
  __int64 v6; // rdx
  int Descriptor; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // r14
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int EndpointHost; // eax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v23; // [rsp+38h] [rbp-30h] BYREF
  char v24; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreate(v2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( !*v2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x39,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      v5);
LABEL_22:
    wil::details::in1diag3::FailFast_Hr(
      v8,
      (void *)0x44,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)Descriptor);
    __debugbreak();
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 5,
    *v2);
  v23 = 0LL;
  v24 = 0;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v23, v6, (__int64)c_wszMessagePortNames);
  v8 = retaddr;
  if ( Descriptor < 0 )
    goto LABEL_22;
  v9 = *v2;
  v10 = (_QWORD *)((char *)this + 56);
  v11 = *((_QWORD *)this + 7);
  if ( v11 )
  {
    *v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v9 + 56LL))(v9, v23, (char *)this + 56);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v13 = *v2;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 5,
    *((_QWORD *)this + 5));
  v14 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(_QWORD *, const void *, int), DragNDropProcessorLegacy *, _QWORD, char *))(*(_QWORD *)v13 + 80LL))(
          v13,
          DragNDropProcessorLegacy::MessageProc,
          this,
          *v10,
          (char *)this + 48);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v15 = *((_QWORD *)this + 9);
  if ( v15 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 8);
  if ( v16 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  EndpointHost = CoreUICallCreateEndpointHost(*v2, (char *)this + 64, (char *)this + 72);
  if ( EndpointHost < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)EndpointHost);
LABEL_26:
    wil::details::in1diag3::FailFast_Hr(
      v19,
      (void *)0x5B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v26 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 24LL))(*v2, &v26);
  v19 = retaddr;
  if ( v18 < 0 )
    goto LABEL_26;
  v20 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v26 + 40LL))(
          v26,
          L"System\\Input\\DragNDrop",
          *((_QWORD *)this + 6),
          1LL);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x60,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v20);
    JUMPOUT(0x1800B2140LL);
  }
  v21 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v23);
  return 0LL;
}
