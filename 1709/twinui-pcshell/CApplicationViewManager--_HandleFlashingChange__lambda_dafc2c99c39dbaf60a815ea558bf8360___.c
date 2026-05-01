/*
 * XREFs of CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x180078310
 * Callers:
 *     ?HandleFlashingChangeForApplication@CApplicationViewManager@@UEAAXPEAUIImmersiveApplication@@H@Z @ 0x180076DB0 (-HandleFlashingChangeForApplication@CApplicationViewManager@@UEAAXPEAUIImmersiveApplication@@H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_73af3bb2f3d5c91ade250b7343a71e20_::__lambda_73af3bb2f3d5c91ade250b7343a71e20_ @ 0x1800786D4 (_lambda_73af3bb2f3d5c91ade250b7343a71e20_--__lambda_73af3bb2f3d5c91ade250b7343a71e20_.c)
 *     CreateAsyncCallbackWithLambda__lambda_73af3bb2f3d5c91ade250b7343a71e20___ @ 0x180078B4C (CreateAsyncCallbackWithLambda__lambda_73af3bb2f3d5c91ade250b7343a71e20___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___(
        __int64 a1,
        _QWORD *a2,
        int a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  int v9; // eax
  unsigned int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-40h]
  _QWORD v20[2]; // [rsp+38h] [rbp-28h] BYREF
  int v21; // [rsp+48h] [rbp-18h]
  __int64 v22; // [rsp+50h] [rbp-10h]
  __int64 v23; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v25; // [rsp+90h] [rbp+30h] BYREF
  _QWORD *v26; // [rsp+98h] [rbp+38h]
  __int64 v27; // [rsp+A8h] [rbp+48h] BYREF

  v26 = a2;
  v6 = *(_QWORD **)(a1 + 592);
  v19 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
    v27 = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v6)(
           v6,
           &GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b,
           &v27);
    v10 = v9;
    if ( v9 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
      v14 = *a2;
      v20[0] = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v20[1] = a2[1];
      v21 = a3;
      v22 = a1;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
      v23 = a1;
      CreateAsyncCallbackWithLambda__lambda_73af3bb2f3d5c91ade250b7343a71e20_(&v25, v20);
      lambda_73af3bb2f3d5c91ade250b7343a71e20_::__lambda_73af3bb2f3d5c91ade250b7343a71e20_(v20);
      v15 = v25;
      v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 24LL))(v27, v25);
      v10 = v16;
      if ( v16 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B2,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v16);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 228), 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 80) + 64LL))(a1 + 80, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v17 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v13 = v19;
      v12 = *v19;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2A3,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9);
      v11 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = *v6;
      v13 = v6;
    }
    (*(void (__fastcall **)(_QWORD *))(v12 + 16))(v13);
    v18 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A0,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8007000CLL);
    v7 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return 2147942412LL;
  }
}
