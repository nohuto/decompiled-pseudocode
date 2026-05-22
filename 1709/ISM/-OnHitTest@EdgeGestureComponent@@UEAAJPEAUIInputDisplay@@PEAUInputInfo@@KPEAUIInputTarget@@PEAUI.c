/*
 * XREFs of ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x18002A330
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SplashHitTest@EdgeGestureComponent@@AEAA_NKKPEAI@Z @ 0x18002AAC0 (-SplashHitTest@EdgeGestureComponent@@AEAA_NKKPEAI@Z.c)
 *     ?EnsureEdgeThresholds@EdgeGestureComponent@@AEAAXXZ @ 0x18002ABC0 (-EnsureEdgeThresholds@EdgeGestureComponent@@AEAAXXZ.c)
 *     ?OnHitTest@CShellEdgyImpl@@QEAA_NKKPEAK0@Z @ 0x18002BFE4 (-OnHitTest@CShellEdgyImpl@@QEAA_NKKPEAK0@Z.c)
 *     ?Reset@CShellEdgyImpl@@QEAAXXZ @ 0x18002C078 (-Reset@CShellEdgyImpl@@QEAAXXZ.c)
 *     ?Create@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@_KPEAXPEAPEAV1@@Z @ 0x18002CE3C (-Create@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@_KPEAXPEAPEAV1@@Z.c)
 *     ?UpdateInputTarget@EdgeGestureTarget@@QEAAJ_KPEAX@Z @ 0x18002D03C (-UpdateInputTarget@EdgeGestureTarget@@QEAAJ_KPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EdgeGestureComponent::OnHitTest(
        EdgeGestureComponent *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        __int64 a4,
        struct IInputTarget *a5,
        struct InputTargetingDecision *a6)
{
  int v9; // ebx
  __int64 v10; // r14
  int v11; // r13d
  unsigned int v12; // r15d
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // ebx
  unsigned int v19; // edi
  const char *v20; // r9
  int v21; // eax
  void *v22; // r12
  HANDLE CurrentProcess; // rbx
  HANDLE v24; // rax
  __int64 v25; // rcx
  int v26; // edx
  int v27; // r9d
  int v28; // eax
  _QWORD *v29; // rbx
  EdgeGestureTarget *v30; // rcx
  void *v31; // r8
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned int v36; // [rsp+40h] [rbp-30h]
  int v37; // [rsp+44h] [rbp-2Ch] BYREF
  _QWORD v38[2]; // [rsp+48h] [rbp-28h] BYREF
  int v39; // [rsp+58h] [rbp-18h]
  __int64 v40; // [rsp+60h] [rbp-10h]
  int v41; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v38[1] = -2LL;
  v9 = 0;
  v36 = 0;
  v10 = 0LL;
  v40 = 0LL;
  v11 = 0;
  v39 = 0;
  v41 = 0;
  EdgeGestureComponent::EnsureEdgeThresholds(this);
  v12 = 0;
  if ( (*(_DWORD *)a3 & 0x88) != 8 )
    goto LABEL_42;
  if ( a2 != *((struct IInputDisplay **)this + 10) )
  {
    v13 = (*(__int64 (__fastcall **)(struct IInputDisplay *, _QWORD *, int *))(*(_QWORD *)a2 + 32LL))(a2, v38, &v37);
    v12 = v13;
    if ( v13 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_42:
        CShellEdgyImpl::Reset((EdgeGestureComponent *)((char *)this + 200));
        goto LABEL_43;
      }
      v15 = 179;
LABEL_6:
      McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, v15, v13);
      goto LABEL_42;
    }
    if ( *((_DWORD *)this + 9) != v37 || *((_DWORD *)this + 8) != LODWORD(v38[0]) )
      goto LABEL_42;
  }
  v16 = 0LL;
  if ( !*((_DWORD *)a3 + 12) )
    goto LABEL_42;
  do
  {
    if ( (*((_BYTE *)a3 + 48 * v16 + 60) & 2) != 0 )
    {
      if ( (unsigned int)++v9 > 1 )
        goto LABEL_42;
      v17 = (unsigned int)v16;
      v36 = v16;
    }
    else
    {
      v17 = v36;
    }
    v16 = (unsigned int)(v16 + 1);
  }
  while ( (unsigned int)v16 < *((_DWORD *)a3 + 12) );
  if ( v9 != 1 )
    goto LABEL_42;
  v18 = *((_DWORD *)a3 + 12 * v17 + 17);
  v19 = *((_DWORD *)a3 + 12 * v17 + 18);
  if ( CShellEdgyImpl::OnHitTest((void **)this + 25, v18, v19, (unsigned int *)this + 15, (unsigned int *)this + 16) )
  {
    if ( !*((_QWORD *)this + 25) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xE7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\edgege"
                 "sturecomponent.cpp",
        v20);
      __debugbreak();
    }
    v38[0] = 0LL;
    v21 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, _QWORD *))a5)(
            a5,
            &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
            v38);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xF1,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\edgege"
                 "sturecomponent.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
    v22 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v38[0] + 80LL))(v38[0]);
    if ( !v22
      || (CurrentProcess = GetCurrentProcess(),
          v24 = GetCurrentProcess(),
          !DuplicateHandle(v24, v22, CurrentProcess, (LPHANDLE)this + 13, 0, 0, 2u)) )
    {
      *((_QWORD *)this + 13) = 0LL;
    }
    *((_QWORD *)this + 12) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v38[0] + 72LL))(v38[0]);
    v25 = v38[0];
    if ( v38[0] )
    {
      v38[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
  }
  else
  {
    v26 = (v18 < *((_DWORD *)this + 13) ? 4 : 0) | 8;
    if ( v18 < *((_DWORD *)this + 8) - *((_DWORD *)this + 14) )
      v26 = v18 < *((_DWORD *)this + 13) ? 4 : 0;
    v27 = v26 | 1;
    if ( v19 >= *((_DWORD *)this + 11) )
      v27 = v26;
    v28 = v27 | 2;
    if ( v19 < *((_DWORD *)this + 9) - *((_DWORD *)this + 12) )
      v28 = v27;
    if ( !v28 || !EdgeGestureComponent::SplashHitTest(this, v18, v19, 0LL) )
      goto LABEL_42;
  }
  v29 = (_QWORD *)((char *)this + 88);
  v30 = (EdgeGestureTarget *)*((_QWORD *)this + 11);
  v31 = (void *)*((_QWORD *)this + 13);
  v32 = *((_QWORD *)this + 12);
  if ( v30 )
  {
    EdgeGestureTarget::UpdateInputTarget(v30, v32, v31);
  }
  else
  {
    v13 = EdgeGestureTarget::Create(this, v32, v31, (struct EdgeGestureTarget **)this + 11);
    v12 = v13;
    if ( v13 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_42;
      v15 = 293;
      goto LABEL_6;
    }
  }
  v11 = 2;
  v39 = 2;
  v33 = *v29 + 8LL;
  v10 = v33 & -(__int64)(*v29 != 0LL);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v33 & -(__int64)(*v29 != 0LL));
  v40 = v10;
  v41 = 0;
  if ( !v10 )
    goto LABEL_42;
LABEL_43:
  *(_DWORD *)a6 = v11;
  if ( *((_QWORD *)a6 + 1) != v10 )
  {
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v34 = *((_QWORD *)a6 + 1);
    *((_QWORD *)a6 + 1) = v10;
    if ( v34 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  *((_DWORD *)a6 + 4) = 0;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v12;
}
