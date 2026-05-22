/*
 * XREFs of ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180089A14
 * Callers:
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x180089C3C (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003A84C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003A87C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::Initialize(DWMCursorBroker *this, __int64 a2)
{
  int Descriptor; // edi
  const char *v4; // r9
  __int64 v5; // rcx
  __int64 *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdi
  _QWORD *v9; // r15
  __int64 v10; // rcx
  _QWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v16; // [rsp+48h] [rbp-40h] BYREF
  char v17; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v19; // [rsp+98h] [rbp+10h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+18h]

  v16 = 0LL;
  v17 = 0;
  v19 = 0;
  v20 = 0LL;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v16, a2, (__int64)L"System\\Input\\CursorBrokerPort");
  if ( Descriptor >= 0 )
  {
    if ( !ISMTestMode::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x20,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
        v4);
      __debugbreak();
    }
    if ( *(_BYTE *)ISMTestMode::s_instance )
      goto LABEL_28;
    v5 = *((_QWORD *)this + 4);
    if ( v5 )
    {
      *((_QWORD *)this + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    Descriptor = DCompositionCreateDevice3(0LL, &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3, (char *)this + 32);
    if ( Descriptor >= 0 )
    {
LABEL_28:
      v6 = (__int64 *)((char *)this + 1280);
      v7 = *((_QWORD *)this + 160);
      if ( v7 )
      {
        *v6 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      Descriptor = CoreUICreate((char *)this + 1280);
      if ( Descriptor >= 0 )
      {
        v8 = *v6;
        v9 = (_QWORD *)((char *)this + 1304);
        v10 = *((_QWORD *)this + 163);
        if ( v10 )
        {
          *v9 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        Descriptor = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v8 + 48LL))(
                       v8,
                       v16,
                       L"System\\Input\\CursorBrokerPort",
                       (char *)this + 1304);
        if ( Descriptor < 0 )
        {
LABEL_13:
          if ( IsDebuggerPresent() )
            __debugbreak();
          RaiseFailFastException(0LL, 0LL, 0);
          goto LABEL_24;
        }
        v11 = (_QWORD *)((char *)this + 1288);
        v12 = *((_QWORD *)this + 161);
        if ( v12 )
        {
          *v11 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        Descriptor = CoreUIFactoryCreate((char *)this + 1288);
        if ( Descriptor >= 0 )
        {
          Descriptor = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v11 + 24LL))(
                         *v11,
                         &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a,
                         &v19);
          if ( Descriptor >= 0 )
          {
            v13 = *v11;
            v14 = *((_QWORD *)this + 162);
            if ( v14 )
            {
              *((_QWORD *)this + 162) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            }
            Descriptor = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)v13 + 32LL))(
                           v13,
                           (char *)this + 8,
                           0LL,
                           v19,
                           L"System\\Input\\CursorBrokerEndpoint",
                           *v9,
                           (char *)this + 1296);
            if ( Descriptor >= 0 )
            {
              *((_DWORD *)this + 370) = 3;
              goto LABEL_24;
            }
          }
          goto LABEL_13;
        }
      }
    }
  }
LABEL_24:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v16);
  return (unsigned int)Descriptor;
}
