/*
 * XREFs of ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180009EE8
 * Callers:
 *     ??0TestCommandHost@@AEAA@XZ @ 0x180009C84 (--0TestCommandHost@@AEAA@XZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009B58 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800488DC (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18004890C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TestCommandHost::CreateEndpointToReceiveMessages(TestCommandHost *this)
{
  int v2; // eax
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  char v12; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v11 = 0LL;
  v12 = 0;
  v2 = InputSecurityDescriptor::QueryDescriptor(&v11, 8LL, c_wszMessagePortNames);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x68,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = *(_QWORD *)this;
  v4 = (_QWORD *)((char *)this + 16);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v3 + 48LL))(
         v3,
         v11,
         L"System\\Input\\TestCommandsPort",
         (char *)this + 16);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x6D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, int (*)(void *, const void *, int), TestCommandHost *, _QWORD, char *))(**(_QWORD **)this + 80LL))(
         *(_QWORD *)this,
         TestCommandHost::OnCoreMessageStatic,
         this,
         *v4,
         (char *)this + 24);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x73,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v14 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)this + 24LL))(*(_QWORD *)this, &v14);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x77,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v14 + 40LL))(
         v14,
         L"System\\Input\\TestCommandsEndpoint",
         *((_QWORD *)this + 3),
         1LL);
  if ( v9 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v9);
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v11);
}
