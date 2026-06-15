/*
 * XREFs of ?IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x1800C4CD0
 * Callers:
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x1800C526C (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C4500 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Sarm::CStreamResource::IssueGrantToASAR(Sarm::CStreamResource *this, unsigned int a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // eax
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int v15; // [rsp+30h] [rbp-79h] BYREF
  int v16; // [rsp+38h] [rbp-71h] BYREF
  _QWORD *v17; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  char *v20; // [rsp+80h] [rbp-29h]
  int v21; // [rsp+88h] [rbp-21h]
  int v22; // [rsp+8Ch] [rbp-1Dh]
  char *v23; // [rsp+90h] [rbp-19h]
  int v24; // [rsp+98h] [rbp-11h]
  int v25; // [rsp+9Ch] [rbp-Dh]
  unsigned int *v26; // [rsp+A0h] [rbp-9h]
  int v27; // [rsp+A8h] [rbp-1h]
  int v28; // [rsp+ACh] [rbp+3h]
  _QWORD *v29; // [rsp+B0h] [rbp+7h]
  int v30; // [rsp+B8h] [rbp+Fh]
  int v31; // [rsp+BCh] [rbp+13h]
  int *v32; // [rsp+C0h] [rbp+17h]
  int v33; // [rsp+C8h] [rbp+1Fh]
  int v34; // [rsp+CCh] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v18[1] = -2LL;
  v15 = a2;
  v5 = *(_QWORD *)this;
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xF9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0104LL);
  v17 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v5 + 128LL))(v5, &v17);
  v9 = v6;
  if ( v6 < 0 )
  {
    v10 = 252LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_14;
  }
  v11 = v17;
  if ( v17 )
  {
    if ( (*((_DWORD *)this + 12) & 0x800000) != 0 )
    {
      v12 = *v17;
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this);
      v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(v12 + 64))(v11, v13, v15, a3);
      v9 = v6;
      if ( v6 < 0 )
      {
        v10 = 258LL;
        goto LABEL_10;
      }
    }
    if ( (unsigned int)dword_18014A370 > 4 )
    {
      v20 = (char *)this + 40;
      v21 = 8;
      v22 = 0;
      v23 = (char *)this + 16;
      v24 = 16;
      v25 = 0;
      v26 = &v15;
      v27 = 4;
      v28 = 0;
      v18[0] = a3;
      v29 = v18;
      v30 = 8;
      v31 = 0;
      v16 = *((_DWORD *)this + 13);
      v32 = &v16;
      v33 = 4;
      v34 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18014A370, &unk_18011134C, v7, v8, 7u, &pData);
    }
    v9 = 0;
  }
  else
  {
    v9 = -2005139195;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0105LL);
  }
LABEL_14:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
  return v9;
}
