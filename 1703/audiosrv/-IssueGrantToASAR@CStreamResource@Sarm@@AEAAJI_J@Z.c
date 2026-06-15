/*
 * XREFs of ?IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x1800C5FE8
 * Callers:
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x1800C667C (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5730 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Sarm::CStreamResource::IssueGrantToASAR(Sarm::CStreamResource *this, unsigned int a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  const GUID *v12; // r8
  const GUID *v13; // r9
  unsigned int v15; // [rsp+30h] [rbp-89h] BYREF
  int v16; // [rsp+38h] [rbp-81h] BYREF
  _QWORD *v17; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-59h] BYREF
  char *v20; // [rsp+80h] [rbp-39h]
  int v21; // [rsp+88h] [rbp-31h]
  int v22; // [rsp+8Ch] [rbp-2Dh]
  char *v23; // [rsp+90h] [rbp-29h]
  int v24; // [rsp+98h] [rbp-21h]
  int v25; // [rsp+9Ch] [rbp-1Dh]
  unsigned int *v26; // [rsp+A0h] [rbp-19h]
  int v27; // [rsp+A8h] [rbp-11h]
  int v28; // [rsp+ACh] [rbp-Dh]
  _QWORD *v29; // [rsp+B0h] [rbp-9h]
  int v30; // [rsp+B8h] [rbp-1h]
  int v31; // [rsp+BCh] [rbp+3h]
  int *v32; // [rsp+C0h] [rbp+7h]
  int v33; // [rsp+C8h] [rbp+Fh]
  int v34; // [rsp+CCh] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v18[1] = -2LL;
  v15 = a2;
  v5 = *(_QWORD *)this;
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xFD,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0104LL);
  v17 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v5 + 120LL))(v5, &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 256LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_13;
  }
  v9 = v17;
  if ( v17 )
  {
    v10 = *v17;
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(v10 + 64))(v9, v11, v15, a3);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 260LL;
      goto LABEL_9;
    }
    if ( (unsigned int)dword_18012A220 > 4 )
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
      TlgWrite((TraceLoggingHProvider)&dword_18012A220, &unk_1800FAB32, v12, v13, 7u, &pData);
    }
    v7 = 0;
  }
  else
  {
    v7 = -2005139195;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x101,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0105LL);
  }
LABEL_13:
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)&v17);
  return v7;
}
