/*
 * XREFs of ?OnHitTest@GestureTargetingComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x180013940
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Create@GestureTargetingTarget@@SAJPEAVGestureTargetingComponent@@PEAUIInputTarget@@PEAPEAV1@@Z @ 0x180014C74 (-Create@GestureTargetingTarget@@SAJPEAVGestureTargetingComponent@@PEAUIInputTarget@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GestureTargetingComponent::OnHitTest(
        GestureTargetingComponent *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        __int64 a4,
        struct IInputTarget *a5,
        struct InputTargetingDecision *a6)
{
  struct GestureTargetingTarget *v6; // rsi
  unsigned int v7; // r13d
  struct GestureTargetingTarget *v8; // r15
  int v9; // r12d
  struct IInputTarget *v10; // rbx
  char v11; // di
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct InputTargetingDecision *v22; // rbx
  __int64 v23; // rcx
  _QWORD v25[2]; // [rsp+30h] [rbp-30h] BYREF
  int v26; // [rsp+40h] [rbp-20h]
  struct IInputTarget *v27; // [rsp+48h] [rbp-18h]
  int v28; // [rsp+50h] [rbp-10h]
  struct GestureTargetingTarget *v29; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+50h] BYREF

  v29 = this;
  v25[1] = -2LL;
  v6 = this;
  v7 = 0;
  v8 = 0LL;
  v27 = 0LL;
  v28 = 0;
  v9 = 1;
  if ( !*((_BYTE *)this + 40) || (*(_DWORD *)a3 & 0x80) != 0 || (*(_DWORD *)a3 & 2) != 0 )
  {
    v9 = 0;
    v26 = 0;
  }
  else
  {
    v30 = 0LL;
    if ( !a6 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 4, 426, 87);
      goto LABEL_7;
    }
    v10 = a5;
    if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a5)(
           a5,
           &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
           &v30) < 0 )
      goto LABEL_38;
    if ( !v30 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 4, 435, 255);
LABEL_7:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v30 + 64LL))(v30)
      && GestureTargetingComponent::s_pfnMTCallback )
    {
      v11 = 0;
      v25[0] = 0LL;
      if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, _QWORD *))v10)(
             v10,
             &GUID_e87fc714_114e_43a7_a95e_1e76656cf895,
             v25) >= 0 )
      {
        v13 = v25[0];
        if ( !v25[0] )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, LODWORD(v25[0]) + 4, 455, 255);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v14 = v30;
        v15 = *(_QWORD *)v25[0];
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 80LL))(v30);
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 72LL))(v14);
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v15 + 40))(v13, v17, v16);
        v10 = a5;
        v6 = v29;
      }
      v26 = 1;
      if ( v11 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v10 + 8LL))(v10);
        v8 = v10;
        v27 = v10;
      }
      else
      {
        v29 = 0LL;
        v18 = GestureTargetingTarget::Create(v6, v10, &v29);
        v7 = v18;
        if ( v18 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 4, 488, v18);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v8 = v29;
        if ( v29 )
          (*(void (__fastcall **)(struct GestureTargetingTarget *))(*(_QWORD *)v29 + 8LL))(v29);
        v27 = v8;
        if ( v8 )
          (*(void (__fastcall **)(struct GestureTargetingTarget *))(*(_QWORD *)v8 + 16LL))(v8);
      }
      v20 = v25[0];
      if ( v25[0] )
      {
        v25[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    else
    {
LABEL_38:
      v26 = 0;
      v9 = 0;
    }
    v21 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  v22 = a6;
  *(_DWORD *)a6 = v9;
  if ( *((struct GestureTargetingTarget **)v22 + 1) != v8 )
  {
    if ( v8 )
      (*(void (__fastcall **)(struct GestureTargetingTarget *))(*(_QWORD *)v8 + 8LL))(v8);
    v23 = *((_QWORD *)v22 + 1);
    *((_QWORD *)v22 + 1) = v8;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  *((_DWORD *)v22 + 4) = 0;
  if ( v8 )
    (*(void (__fastcall **)(struct GestureTargetingTarget *))(*(_QWORD *)v8 + 16LL))(v8);
  return v7;
}
