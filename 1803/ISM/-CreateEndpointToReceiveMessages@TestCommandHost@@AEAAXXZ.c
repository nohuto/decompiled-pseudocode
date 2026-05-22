/*
 * XREFs of ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180009D18
 * Callers:
 *     ??0TestCommandHost@@AEAA@XZ @ 0x1800099B8 (--0TestCommandHost@@AEAA@XZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009880 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003A84C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003A87C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TestCommandHost::CreateEndpointToReceiveMessages(TestCommandHost *this, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // [rsp+38h] [rbp-20h] BYREF
  char v14; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v13 = 0LL;
  v14 = 0;
  v3 = InputSecurityDescriptor::QueryDescriptor(&v13, a2, c_wszMessagePortNames);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x68,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = *(_QWORD *)this;
  v5 = (_QWORD *)((char *)this + 16);
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v4 + 48LL))(
         v4,
         v13,
         L"System\\Input\\TestCommandsPort",
         (char *)this + 16);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x6D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, int (*)(void *, const void *, int), TestCommandHost *, _QWORD, char *))(**(_QWORD **)this + 80LL))(
         *(_QWORD *)this,
         TestCommandHost::OnCoreMessageStatic,
         this,
         *v5,
         (char *)this + 24);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x73,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v8);
LABEL_14:
    wil::details::in1diag3::_Throw_Hr(
      v10,
      (void *)0x77,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v16 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)this + 24LL))(*(_QWORD *)this, &v16);
  v10 = retaddr;
  if ( v9 < 0 )
    goto LABEL_14;
  v11 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v16 + 40LL))(
          v16,
          L"System\\Input\\TestCommandsEndpoint",
          *((_QWORD *)this + 3),
          1LL);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v13);
}
