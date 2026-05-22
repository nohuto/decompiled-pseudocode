/*
 * XREFs of ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180024DBC
 * Callers:
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x18002508C (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800488DC (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18004890C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::Initialize(DWMCursorBroker *this)
{
  int Device3; // eax
  __int64 v3; // rcx
  const char *v4; // r9
  unsigned int v5; // edi
  int v6; // r9d
  __int64 v7; // rcx
  __int64 *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  _QWORD *v11; // r15
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r9d
  _QWORD *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v21; // [rsp+48h] [rbp-40h] BYREF
  char v22; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v24; // [rsp+98h] [rbp+10h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+18h]

  v21 = 0LL;
  v22 = 0;
  v24 = 0;
  v25 = 0LL;
  Device3 = InputSecurityDescriptor::QueryDescriptor(&v21, 8LL, L"System\\Input\\CursorBrokerPort");
  v5 = Device3;
  if ( Device3 >= 0 )
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
    if ( !*(_BYTE *)ISMTestMode::s_instance )
    {
      v7 = *((_QWORD *)this + 5);
      if ( v7 )
      {
        *((_QWORD *)this + 5) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      Device3 = DCompositionCreateDevice3(0LL, &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3, (char *)this + 40);
      v5 = Device3;
      if ( Device3 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_41;
        v6 = 69;
        goto LABEL_4;
      }
    }
    v8 = (__int64 *)((char *)this + 1288);
    v9 = *((_QWORD *)this + 161);
    if ( v9 )
    {
      *v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    Device3 = CoreUICreate((char *)this + 1288);
    v5 = Device3;
    if ( Device3 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_41;
      v6 = 72;
      goto LABEL_4;
    }
    v10 = *v8;
    v11 = (_QWORD *)((char *)this + 1312);
    v12 = *((_QWORD *)this + 164);
    if ( v12 )
    {
      *v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v10 + 48LL))(
            v10,
            v21,
            L"System\\Input\\CursorBrokerPort",
            (char *)this + 1312);
    if ( v13 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_24;
      v15 = 77;
      goto LABEL_23;
    }
    v16 = (_QWORD *)((char *)this + 1296);
    v17 = *((_QWORD *)this + 162);
    if ( v17 )
    {
      *v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    Device3 = CoreUIFactoryCreate((char *)this + 1296);
    v5 = Device3;
    if ( Device3 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_41;
      v6 = 79;
      goto LABEL_4;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v16 + 24LL))(
            *v16,
            &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a,
            &v24);
    if ( v13 >= 0 )
    {
      v18 = *v16;
      v19 = *((_QWORD *)this + 163);
      if ( v19 )
      {
        *((_QWORD *)this + 163) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      v13 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)v18 + 32LL))(
              v18,
              (char *)this + 16,
              0LL,
              v24,
              L"System\\Input\\CursorBrokerEndpoint",
              *v11,
              (char *)this + 1304);
      v5 = v13;
      if ( v13 >= 0 )
      {
        *((_DWORD *)this + 372) = 3;
        goto LABEL_41;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v15 = 91;
        goto LABEL_23;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v15 = 83;
LABEL_23:
      McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, v15, v13);
    }
LABEL_24:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v6 = 64;
LABEL_4:
    McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 0, v6, Device3);
  }
LABEL_41:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v21);
  return v5;
}
