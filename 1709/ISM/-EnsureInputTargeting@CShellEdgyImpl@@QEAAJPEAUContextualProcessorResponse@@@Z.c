/*
 * XREFs of ?EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x18002C460
 * Callers:
 *     ?OnContextualInput@EdgeGestureTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18002D470 (-OnContextualInput@EdgeGestureTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProces.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     McTemplateU0qqqq @ 0x180005A78 (McTemplateU0qqqq.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0qqqqqq @ 0x180012E48 (McTemplateU0qqqqqq.c)
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEAXPEAUEdgyConfiguration@@PEAPEAX@Z @ 0x18002B5BC (-GetCandidateConfiguration@Edges@@QEAA_NPEAXPEAUEdgyConfiguration@@PEAPEAX@Z.c)
 *     ?Create@CShellEdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z @ 0x18002C768 (-Create@CShellEdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShellEdgyImpl::EnsureInputTargeting(CShellEdgyImpl *this, struct ContextualProcessorResponse *a2)
{
  unsigned int v4; // r15d
  int v5; // r12d
  unsigned int v6; // r13d
  struct IInputTarget *v7; // rcx
  void *v8; // rdx
  char CandidateConfiguration; // al
  char v10; // di
  const char *v11; // r9
  unsigned __int8 v12; // bl
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct IInputTarget *v17; // rbx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _DWORD v23[10]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v25; // [rsp+B0h] [rbp+40h] BYREF
  struct IInputTarget *v26; // [rsp+B8h] [rbp+48h] BYREF

  v4 = 0;
  v5 = 0;
  *(_DWORD *)a2 = 0;
  v6 = 0;
  memset(v23, 0, sizeof(v23));
  v8 = (void *)*((_QWORD *)this + 1);
  if ( v8 )
    CandidateConfiguration = Edges::GetCandidateConfiguration(
                               (CShellEdgyImpl *)((char *)this + 88),
                               v8,
                               (struct EdgyConfiguration *)v23,
                               0LL);
  else
    CandidateConfiguration = 0;
  v10 = 1;
  v11 = (const char *)v23[3];
  if ( CandidateConfiguration && v23[3] == *((_DWORD *)this + 2) )
  {
    v12 = 1;
    if ( v23[4] == 1 )
    {
      v5 = 1;
      *(_DWORD *)a2 = 2;
      v6 = (unsigned int)v11;
    }
  }
  else
  {
    v12 = 0;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    McTemplateU0qqqqqq(v12, &MinInput_CShellEdgy_RoutingDetermined, 13, (int)v11, v12, v5, *(_DWORD *)a2, v6);
  if ( v12 )
  {
    if ( v6 )
    {
      if ( v5 != 1 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1F0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledgyimpl.cpp",
          v11);
        __debugbreak();
      }
      if ( *(_DWORD *)a2 != 2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1F1,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledgyimpl.cpp",
          v11);
        __debugbreak();
      }
      v26 = 0LL;
      v25 = 0LL;
      v13 = CShellEdgyInputTarget::Create(&v26);
      v4 = v13;
      if ( v13 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 508, v13);
        v15 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        v7 = v26;
        if ( v26 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v26 + 16LL))(v26);
        goto LABEL_37;
      }
      v16 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      v17 = v26;
      v18 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))v26)(
              v26,
              &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
              &v25);
      if ( v18 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x200,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledgyimpl.cpp",
          (const char *)(unsigned int)v18);
        __debugbreak();
      }
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 104LL))(v25, v6);
      if ( v19 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x202,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledgyimpl.cpp",
          (const char *)(unsigned int)v19);
        __debugbreak();
      }
      if ( *((struct IInputTarget **)a2 + 2) != v17 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v17 + 8LL))(v17);
        v20 = *((_QWORD *)a2 + 2);
        *((_QWORD *)a2 + 2) = v17;
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v21 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    *((_DWORD *)this + 4) = v5;
  }
LABEL_37:
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
  {
    if ( !*((_QWORD *)this + 1) || *((_DWORD *)this + 4) != 1 )
      v10 = 0;
    McTemplateU0qqqq((__int64)v7, &MinInput_CShellEdgy_EnsuredInputTargeting, 13, *((_DWORD *)this + 2), v10, v4);
  }
  return v4;
}
