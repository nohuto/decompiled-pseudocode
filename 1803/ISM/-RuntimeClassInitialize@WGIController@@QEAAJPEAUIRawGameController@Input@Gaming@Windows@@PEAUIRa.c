/*
 * XREFs of ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@@Z @ 0x180078610
 * Callers:
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x180076CD0 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18005D838 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E2134 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WGIController::RuntimeClassInitialize(
        WGIController *this,
        struct Windows::Gaming::Input::IRawGameController *a2,
        struct IRawInputClient *a3,
        struct IMessageSession *a4)
{
  int ActivationFactory; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  HRESULT v12; // eax
  HRESULT v13; // eax
  int *v14; // rsi
  int *v15; // r14
  int *v16; // r15
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  void *v19; // rax
  void *v20; // rcx
  void *v21; // rax
  void *v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // kr00_8
  void *v25; // rax
  void *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 (__fastcall ***v33)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v34; // rcx
  __int64 (__fastcall ***v35)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v37)(_QWORD, GUID *, char *); // [rsp+28h] [rbp-49h] BYREF
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-41h] BYREF
  __int64 v39; // [rsp+38h] [rbp-39h] BYREF
  __int64 v40; // [rsp+40h] [rbp-31h] BYREF
  __int64 v41; // [rsp+48h] [rbp-29h] BYREF
  __int64 v42; // [rsp+50h] [rbp-21h] BYREF
  __int64 v43; // [rsp+58h] [rbp-19h] BYREF
  __int64 v44; // [rsp+60h] [rbp-11h] BYREF
  _QWORD v45[2]; // [rsp+68h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+7h] BYREF
  HSTRING string; // [rsp+90h] [rbp+1Fh] BYREF

  v45[1] = -2LL;
  v38 = 0LL;
  v43 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  v45[0] = 0LL;
  v44 = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  if ( !a2 || !a3 || !a4 )
  {
    ActivationFactory = -2147024809;
    goto LABEL_58;
  }
  if ( *((struct Windows::Gaming::Input::IRawGameController **)this + 9) != a2 )
  {
    (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)a2 + 8LL))(a2);
    v9 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = a2;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( *((struct IRawInputClient **)this + 12) != a3 )
  {
    (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a3 + 8LL))(a3);
    v10 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = a3;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( *((struct IMessageSession **)this + 13) != a4 )
  {
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a4 + 8LL))(a4);
    v11 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = a4;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  ActivationFactory = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))this + 9))(
                        *((_QWORD *)this + 9),
                        &GUID_1baf6522_5f64_42c5_8267_b9fe2215bfbd,
                        &v38);
  if ( ActivationFactory < 0 )
    goto LABEL_15;
  ActivationFactory = (**v38)(v38, &GUID_debcfefe_f763_4670_940b_57aae2b143ff, &v43);
  if ( ActivationFactory < 0 )
    goto LABEL_15;
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v43 + 48LL))(
                        v43,
                        &v37);
  if ( ActivationFactory < 0 )
    goto LABEL_15;
  ActivationFactory = (**v37)(v37, &GUID_c3542377_1ea7_4454_8deb_8aa6070db645, (char *)this + 64);
  if ( ActivationFactory < 0 )
    goto LABEL_15;
  if ( (int)(**v37)(v37, &GUID_f6d99cef_3636_46f4_a0a9_00751df46bcb, (char *)&v39) < 0 )
  {
    if ( (int)(**v37)(v37, &GUID_075ddbfa_cc84_4137_8ce7_aa552fea8fe2, (char *)v45) >= 0
      || (int)(**v37)(v37, &GUID_ac104f57_79bd_4af3_9675_5e667484818b, (char *)&v44) >= 0 )
    {
      *((_DWORD *)this + 39) = 64;
    }
  }
  else
  {
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v39 + 64LL))(v39, (char *)this + 136);
    if ( ActivationFactory < 0 )
      goto LABEL_15;
    *((_DWORD *)this + 39) = 196;
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v39 + 120LL))(v39, &v42);
    if ( ActivationFactory < 0 )
      goto LABEL_15;
    *(GUID *)&hstringHeader.Reserved.Reserved1 = GUID_GIP_MICROSOFT_XBOX_INPUT_IELITEGAMEPAD;
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *, char *))(*(_QWORD *)v42 + 120LL))(
                          v42,
                          &hstringHeader,
                          (char *)this + 232);
    if ( ActivationFactory < 0 )
      goto LABEL_15;
  }
  string = 0LL;
  v12 = WindowsCreateStringReference(L"Windows.Gaming.Input.Gamepad", 0x1Cu, &hstringHeader, &string);
  if ( v12 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_42676dc5_0856_47c4_9213_b395504c3a3c, &v41);
  string = 0LL;
  if ( ActivationFactory < 0 )
    goto LABEL_15;
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v41 + 48LL))(
                        v41,
                        v38,
                        (char *)this + 88);
  if ( ActivationFactory < 0 )
    goto LABEL_15;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"Windows.Gaming.Input.UINavigationController", 0x2Bu, &hstringHeader, &string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    JUMPOUT(0x180078C18LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_e0cb28e3_b20b_4b0b_9ed4_f3d53cec0de4, &v40);
  if ( ActivationFactory < 0 )
    goto LABEL_15;
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v40 + 48LL))(
                        v40,
                        v38,
                        (char *)this + 80);
  if ( ActivationFactory < 0 )
    goto LABEL_15;
  v14 = (int *)((char *)this + 144);
  ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 48LL))(
                        *((_QWORD *)this + 9),
                        (char *)this + 144);
  if ( ActivationFactory < 0 )
    goto LABEL_15;
  v15 = (int *)((char *)this + 148);
  ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 56LL))(
                        *((_QWORD *)this + 9),
                        (char *)this + 148);
  if ( ActivationFactory < 0 )
    goto LABEL_15;
  v16 = (int *)((char *)this + 152);
  ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 88LL))(
                        *((_QWORD *)this + 9),
                        (char *)this + 152);
  if ( ActivationFactory < 0 )
    goto LABEL_15;
  if ( *v14 )
  {
    v17 = 2 * *v14;
    v18 = 8 * v17;
    if ( !is_mul_ok(v17, 8uLL) )
      v18 = -1LL;
    v19 = operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
    v20 = (void *)*((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = v19;
    if ( v20 )
    {
      operator delete(v20);
      v19 = (void *)*((_QWORD *)this + 14);
    }
    if ( !v19 )
      goto LABEL_44;
    memset_0(v19, 0, 16LL * *v14);
  }
  if ( !*v15 )
  {
LABEL_51:
    if ( !*v16 )
      goto LABEL_58;
    v24 = 2 * *v16;
    v23 = 4 * v24;
    if ( !is_mul_ok(v24, 4uLL) )
      v23 = -1LL;
    v25 = operator new[](v23, (const struct std::nothrow_t *)&std::nothrow);
    v26 = (void *)*((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = v25;
    if ( v26 )
    {
      operator delete(v26);
      v25 = (void *)*((_QWORD *)this + 16);
    }
    if ( v25 )
    {
      memset_0(v25, 0, 8LL * *v16);
      goto LABEL_58;
    }
    goto LABEL_44;
  }
  v21 = operator new[](2 * *v15, (const struct std::nothrow_t *)&std::nothrow);
  v22 = (void *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = v21;
  if ( v22 )
  {
    operator delete(v22);
    v21 = (void *)*((_QWORD *)this + 15);
  }
  if ( v21 )
  {
    memset_0(v21, 0, 2LL * *v15);
    goto LABEL_51;
  }
LABEL_44:
  ActivationFactory = -2147024882;
LABEL_15:
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
LABEL_58:
  v27 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v30 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = v45[0];
  if ( v45[0] )
  {
    v45[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v37;
  if ( v37 )
  {
    v37 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v33)[2])(v33);
  }
  v34 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v35)[2])(v35);
  }
  return (unsigned int)ActivationFactory;
}
