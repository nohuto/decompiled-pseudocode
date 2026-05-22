/*
 * XREFs of ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18002A6A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureEdgeThresholds@EdgeGestureComponent@@AEAAXXZ @ 0x18002ABC0 (-EnsureEdgeThresholds@EdgeGestureComponent@@AEAAXXZ.c)
 *     ?OnHitTest@CShellEdgyImpl@@QEAA_NKKPEAK0@Z @ 0x18002BFE4 (-OnHitTest@CShellEdgyImpl@@QEAA_NKKPEAK0@Z.c)
 *     ?Reset@CShellEdgyImpl@@QEAAXXZ @ 0x18002C078 (-Reset@CShellEdgyImpl@@QEAAXXZ.c)
 *     ?Create@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@_KPEAXPEAPEAV1@@Z @ 0x18002CE3C (-Create@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@_KPEAXPEAPEAV1@@Z.c)
 *     ?UpdateInputTarget@EdgeGestureTarget@@QEAAJ_KPEAX@Z @ 0x18002D03C (-UpdateInputTarget@EdgeGestureTarget@@QEAAJ_KPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgeGestureComponent::OnHitTest(
        EdgeGestureComponent *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v7; // esi
  unsigned int v8; // r13d
  __int64 *v9; // r14
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  const char *v15; // r9
  struct InputContext *v16; // r13
  int v17; // eax
  void *v18; // r15
  void **v19; // rsi
  HANDLE CurrentProcess; // rbx
  HANDLE v21; // rax
  unsigned __int64 v22; // rax
  EdgeGestureTarget *v23; // rcx
  void *v24; // r8
  int v25; // eax
  __int64 v26; // rcx
  int v27; // r9d
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rcx
  _QWORD v34[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v36; // [rsp+90h] [rbp+40h] BYREF
  struct InputContext *v37; // [rsp+A0h] [rbp+50h]
  int v38; // [rsp+A8h] [rbp+58h] BYREF

  v37 = a3;
  v34[1] = -2LL;
  v7 = 0;
  v8 = 0;
  *(_DWORD *)a4 = 0;
  v9 = (__int64 *)((char *)a4 + 8);
  v10 = *((_QWORD *)a4 + 1);
  if ( v10 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  EdgeGestureComponent::EnsureEdgeThresholds((EdgeGestureComponent *)((char *)this - 8));
  v11 = 0;
  if ( (*(_DWORD *)a2 & 0x88) == 8 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, int *, int *))(**((_QWORD **)v37 + 1) + 32LL))(
            *((_QWORD *)v37 + 1),
            &v36,
            &v38);
    v11 = v12;
    if ( v12 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 354, v12);
      goto LABEL_42;
    }
    *((_DWORD *)this + 6) = v36;
    *((_DWORD *)this + 7) = v38;
    v14 = 0LL;
    if ( *((_DWORD *)a2 + 12) )
    {
      do
      {
        if ( (*((_BYTE *)a2 + 48 * v14 + 60) & 2) != 0 )
        {
          if ( (unsigned int)++v7 > 1 )
            goto LABEL_42;
          v8 = v14;
        }
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < *((_DWORD *)a2 + 12) );
      if ( v7 == 1 )
      {
        if ( CShellEdgyImpl::OnHitTest(
               (void **)this + 24,
               *((_DWORD *)a2 + 12 * v8 + 17),
               *((_DWORD *)a2 + 12 * v8 + 18),
               (unsigned int *)this + 13,
               (unsigned int *)this + 14) )
        {
          if ( !*((_QWORD *)this + 24) )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x192,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\"
                       "edgegesturecomponent.cpp",
              v15);
            __debugbreak();
          }
          v34[0] = 0LL;
          v16 = v37;
          v17 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))v37)(
                  *(_QWORD *)v37,
                  &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
                  v34);
          if ( v17 < 0 )
          {
            wil::details::in1diag3::_FailFast_Hr(
              retaddr,
              (void *)0x19A,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\"
                       "edgegesturecomponent.cpp",
              (const char *)(unsigned int)v17);
            __debugbreak();
          }
          v18 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v34[0] + 80LL))(v34[0]);
          if ( !v18
            || (v19 = (void **)((char *)this + 96),
                CurrentProcess = GetCurrentProcess(),
                v21 = GetCurrentProcess(),
                !DuplicateHandle(v21, v18, CurrentProcess, (LPHANDLE)this + 12, 0, 0, 2u)) )
          {
            v19 = (void **)((char *)this + 96);
            *((_QWORD *)this + 12) = 0LL;
          }
          v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v34[0] + 72LL))(v34[0]);
          *((_QWORD *)this + 11) = v22;
          v23 = (EdgeGestureTarget *)*((_QWORD *)this + 10);
          v24 = *v19;
          if ( v23 )
          {
            EdgeGestureTarget::UpdateInputTarget(v23, v22, v24);
          }
          else
          {
            v25 = EdgeGestureTarget::Create(
                    (EdgeGestureComponent *)((char *)this - 8),
                    v22,
                    v24,
                    (struct EdgeGestureTarget **)this + 10);
            v11 = v25;
            if ( v25 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                goto LABEL_26;
              v27 = 441;
              goto LABEL_25;
            }
          }
          v29 = *v9;
          if ( *v9 )
          {
            *v9 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
          v25 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 10))(
                  *((_QWORD *)this + 10),
                  &GUID_00000000_0000_0000_c000_000000000046,
                  v9);
          v11 = v25;
          if ( v25 >= 0 )
          {
            *(_DWORD *)a4 = 1;
            v30 = *((_QWORD *)v16 + 1);
            if ( *((_QWORD *)this + 9) != v30 )
            {
              if ( v30 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30 + 8LL))(*((_QWORD *)v16 + 1));
              v31 = *((_QWORD *)this + 9);
              *((_QWORD *)this + 9) = v30;
              if ( v31 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
            }
            goto LABEL_26;
          }
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          {
LABEL_26:
            v28 = v34[0];
            if ( v34[0] )
            {
              v34[0] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            }
            goto LABEL_42;
          }
          v27 = 448;
LABEL_25:
          McTemplateU0qqq(v26, &MinInput_Warning_CheckResult, 0, v27, v25);
          goto LABEL_26;
        }
        v32 = *v9;
        if ( *v9 )
        {
          *v9 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        }
        *(_DWORD *)a4 = 0;
      }
    }
  }
LABEL_42:
  if ( !*v9 || !*(_DWORD *)a4 )
    CShellEdgyImpl::Reset((EdgeGestureComponent *)((char *)this + 192));
  return v11;
}
