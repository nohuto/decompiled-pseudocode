/*
 * XREFs of ?EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAW4InputBufferingDecision@@@Z @ 0x18002C0E0
 * Callers:
 *     ?OnDeliverInput@EdgeGestureTarget@@UEAAJPEAUInputInfo@@PEAW4InputBufferingDecision@@@Z @ 0x18002D2E0 (-OnDeliverInput@EdgeGestureTarget@@UEAAJPEAUInputInfo@@PEAW4InputBufferingDecision@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     McTemplateU0qqqq @ 0x180005A78 (McTemplateU0qqqq.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0qqqqqq @ 0x180012E48 (McTemplateU0qqqqqq.c)
 *     ?Create@GestureTargetingComponent@@SAJPEAPEAV1@@Z @ 0x18001316C (-Create@GestureTargetingComponent@@SAJPEAPEAV1@@Z.c)
 *     ?Create@GestureTargetingTarget@@SAJPEAVGestureTargetingComponent@@PEAUIInputTarget@@PEAPEAV1@@Z @ 0x180014C74 (-Create@GestureTargetingTarget@@SAJPEAVGestureTargetingComponent@@PEAUIInputTarget@@PEAPEAV1@@Z.c)
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEAXPEAUEdgyConfiguration@@PEAPEAX@Z @ 0x18002B5BC (-GetCandidateConfiguration@Edges@@QEAA_NPEAXPEAUEdgyConfiguration@@PEAPEAX@Z.c)
 *     ?Create@CShellEdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z @ 0x18002C768 (-Create@CShellEdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShellEdgyImpl::EnsureInputTargeting(CShellEdgyImpl *this, enum InputBufferingDecision *a2)
{
  unsigned int v4; // edi
  int v5; // r13d
  unsigned int v6; // r12d
  struct IInputTarget *v7; // rcx
  void *v8; // rdx
  char CandidateConfiguration; // al
  char v10; // r14
  const char *v11; // r9
  unsigned __int8 v12; // r15
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  struct IInputTarget *v17; // rcx
  __int64 v18; // rax
  struct IInputTarget *v19; // rcx
  struct IInputTarget *v20; // rbx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  struct IInputTarget *v25; // rcx
  struct IInputTarget *v26; // rcx
  _DWORD v28[10]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  struct IInputTarget *v30; // [rsp+B0h] [rbp+40h] BYREF
  struct IInputTarget *v31; // [rsp+B8h] [rbp+48h] BYREF

  v4 = 0;
  v5 = 0;
  *(_DWORD *)a2 = 0;
  v6 = 0;
  memset(v28, 0, sizeof(v28));
  v8 = (void *)*((_QWORD *)this + 1);
  if ( v8 )
    CandidateConfiguration = Edges::GetCandidateConfiguration(
                               (CShellEdgyImpl *)((char *)this + 88),
                               v8,
                               (struct EdgyConfiguration *)v28,
                               0LL);
  else
    CandidateConfiguration = 0;
  v10 = 1;
  v11 = (const char *)v28[3];
  if ( CandidateConfiguration && v28[3] == *((_DWORD *)this + 2) )
  {
    v12 = 1;
    if ( v28[4] == 1 )
    {
      v5 = 1;
      *(_DWORD *)a2 = 3;
      v6 = (unsigned int)v11;
    }
  }
  else
  {
    v12 = 0;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    McTemplateU0qqqqqq(v12, &MinInput_CShellEdgy_RoutingDetermined, 13, (int)v11, v12, v5, *(_DWORD *)a2, v6);
  if ( !v12 )
    goto LABEL_49;
  if ( !v6 )
  {
LABEL_48:
    *((_DWORD *)this + 4) = v5;
    goto LABEL_49;
  }
  if ( v5 != 1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1AF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledgyimpl.cpp",
      v11);
    __debugbreak();
  }
  if ( *(_DWORD *)a2 != 3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1B0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledgyimpl.cpp",
      v11);
    __debugbreak();
  }
  v31 = 0LL;
  v30 = 0LL;
  if ( !*((_QWORD *)this + 14) )
  {
    v13 = GestureTargetingComponent::Create((struct GestureTargetingComponent **)this + 14);
    v4 = v13;
    if ( v13 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 445, v13);
      v7 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v7 + 16LL))(v7);
      }
      goto LABEL_49;
    }
  }
  v15 = CShellEdgyInputTarget::Create(&v31);
  v4 = v15;
  if ( v15 >= 0 )
  {
    v19 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = v31;
    v21 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, struct IInputTarget **))v31)(
            v31,
            &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
            &v30);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x1C4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledgyimpl.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
    v22 = (*(__int64 (__fastcall **)(struct IInputTarget *, _QWORD))(*(_QWORD *)v30 + 104LL))(v30, v6);
    if ( v22 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x1C6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledgyimpl.cpp",
        (const char *)(unsigned int)v22);
      __debugbreak();
    }
    if ( !*((_QWORD *)this + 15) )
    {
      v23 = GestureTargetingTarget::Create(
              *((struct GestureTargetingComponent **)this + 14),
              v20,
              (struct GestureTargetingTarget **)this + 15);
      v4 = v23;
      if ( v23 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v24, &MinInput_Warning_CheckResult, 0, 461, v23);
        v25 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v25 + 16LL))(v25);
        }
        v18 = *(_QWORD *)v20;
        goto LABEL_31;
      }
    }
    v26 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v26 + 16LL))(v26);
    }
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v20 + 16LL))(v20);
    goto LABEL_48;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v16, &MinInput_Warning_CheckResult, 0, 448, v15);
  v17 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v7 = v31;
  if ( v31 )
  {
    v18 = *(_QWORD *)v31;
LABEL_31:
    (*(void (**)(void))(v18 + 16))();
  }
LABEL_49:
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
  {
    if ( !*((_QWORD *)this + 1) || *((_DWORD *)this + 4) != 1 )
      v10 = 0;
    McTemplateU0qqqq((__int64)v7, &MinInput_CShellEdgy_EnsuredInputTargeting, 13, *((_DWORD *)this + 2), v10, v4);
  }
  return v4;
}
