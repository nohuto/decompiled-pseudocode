/*
 * XREFs of ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@@Z @ 0x18009F72C
 * Callers:
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x18009DA90 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB5C4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WGIController::RuntimeClassInitialize(
        WGIController *this,
        struct Windows::Gaming::Input::IRawGameController *a2,
        struct IRawInputClient *a3,
        struct IMessageSession *a4)
{
  unsigned int v8; // ebx
  int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int ActivationFactory; // eax
  void *v14; // rcx
  int v15; // r9d
  HRESULT v16; // eax
  HRESULT v17; // eax
  int *v18; // rsi
  int *v19; // r14
  int *v20; // r15
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  void *v23; // rax
  void *v24; // rcx
  void *v25; // rax
  void *v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // kr00_8
  void *v29; // rax
  void *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 (__fastcall ***v37)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v38; // rcx
  __int64 (__fastcall ***v39)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v41)(_QWORD, GUID *, char *); // [rsp+38h] [rbp-49h] BYREF
  __int64 (__fastcall ***v42)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-41h] BYREF
  __int64 v43; // [rsp+48h] [rbp-39h] BYREF
  __int64 v44; // [rsp+50h] [rbp-31h] BYREF
  __int64 v45; // [rsp+58h] [rbp-29h] BYREF
  __int64 v46; // [rsp+60h] [rbp-21h] BYREF
  __int64 v47; // [rsp+68h] [rbp-19h] BYREF
  __int64 v48; // [rsp+70h] [rbp-11h] BYREF
  _QWORD v49[2]; // [rsp+78h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+7h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+1Fh] BYREF

  v49[1] = -2LL;
  v42 = 0LL;
  v47 = 0LL;
  v41 = 0LL;
  v43 = 0LL;
  v49[0] = 0LL;
  v48 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  if ( !a2 )
  {
    v8 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_99;
    v9 = 274;
    goto LABEL_4;
  }
  if ( !a3 )
  {
    v8 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 275;
LABEL_4:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v9, 87);
      goto LABEL_99;
    }
    goto LABEL_99;
  }
  if ( a4 )
  {
    if ( *((struct Windows::Gaming::Input::IRawGameController **)this + 9) != a2 )
    {
      (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)a2 + 8LL))(a2);
      v10 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = a2;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( *((struct IRawInputClient **)this + 12) != a3 )
    {
      (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a3 + 8LL))(a3);
      v11 = *((_QWORD *)this + 12);
      *((_QWORD *)this + 12) = a3;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( *((struct IMessageSession **)this + 13) != a4 )
    {
      (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a4 + 8LL))(a4);
      v12 = *((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = a4;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    ActivationFactory = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))this + 9))(
                          *((_QWORD *)this + 9),
                          &GUID_1baf6522_5f64_42c5_8267_b9fe2215bfbd,
                          &v42);
    if ( ActivationFactory < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_24;
      v15 = 286;
      goto LABEL_23;
    }
    ActivationFactory = (**v42)(v42, &GUID_debcfefe_f763_4670_940b_57aae2b143ff, &v47);
    if ( ActivationFactory >= 0 )
    {
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v47 + 48LL))(
                            v47,
                            &v41);
      if ( ActivationFactory >= 0 )
      {
        ActivationFactory = (**v41)(v41, &GUID_c3542377_1ea7_4454_8deb_8aa6070db645, (char *)this + 64);
        if ( ActivationFactory >= 0 )
        {
          if ( (int)(**v41)(v41, &GUID_f6d99cef_3636_46f4_a0a9_00751df46bcb, (char *)&v43) < 0 )
          {
            if ( (int)(**v41)(v41, &GUID_075ddbfa_cc84_4137_8ce7_aa552fea8fe2, (char *)v49) >= 0
              || (int)(**v41)(v41, &GUID_ac104f57_79bd_4af3_9675_5e667484818b, (char *)&v48) >= 0 )
            {
              *((_DWORD *)this + 39) = 64;
            }
          }
          else
          {
            ActivationFactory = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v43 + 64LL))(
                                  v43,
                                  (char *)this + 136);
            if ( ActivationFactory < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                v15 = 297;
                goto LABEL_23;
              }
              goto LABEL_24;
            }
            *((_DWORD *)this + 39) = 196;
            ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 120LL))(v43, &v46);
            if ( ActivationFactory < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                v15 = 299;
                goto LABEL_23;
              }
              goto LABEL_24;
            }
            *(GUID *)&hstringHeader.Reserved.Reserved1 = GUID_GIP_MICROSOFT_XBOX_INPUT_IELITEGAMEPAD;
            ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *, char *))(*(_QWORD *)v46 + 120LL))(
                                  v46,
                                  &hstringHeader,
                                  (char *)this + 232);
            if ( ActivationFactory < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                v15 = 300;
                goto LABEL_23;
              }
              goto LABEL_24;
            }
          }
          string = 0LL;
          v16 = WindowsCreateStringReference(L"Windows.Gaming.Input.Gamepad", 0x1Cu, &hstringHeader, &string);
          if ( v16 < 0 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
            __debugbreak();
          }
          ActivationFactory = RoGetActivationFactory(string, &GUID_42676dc5_0856_47c4_9213_b395504c3a3c, &v45);
          string = 0LL;
          if ( ActivationFactory >= 0 )
          {
            ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v45 + 48LL))(
                                  v45,
                                  v42,
                                  (char *)this + 88);
            if ( ActivationFactory >= 0 )
            {
              string = 0LL;
              v17 = WindowsCreateStringReference(
                      L"Windows.Gaming.Input.UINavigationController",
                      0x2Bu,
                      &hstringHeader,
                      &string);
              if ( v17 < 0 )
              {
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
                __debugbreak();
              }
              ActivationFactory = RoGetActivationFactory(string, &GUID_e0cb28e3_b20b_4b0b_9ed4_f3d53cec0de4, &v44);
              if ( ActivationFactory >= 0 )
              {
                ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v44 + 48LL))(
                                      v44,
                                      v42,
                                      (char *)this + 80);
                if ( ActivationFactory >= 0 )
                {
                  v18 = (int *)((char *)this + 144);
                  ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 48LL))(
                                        *((_QWORD *)this + 9),
                                        (char *)this + 144);
                  if ( ActivationFactory >= 0 )
                  {
                    v19 = (int *)((char *)this + 148);
                    ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 56LL))(
                                          *((_QWORD *)this + 9),
                                          (char *)this + 148);
                    if ( ActivationFactory >= 0 )
                    {
                      v20 = (int *)((char *)this + 152);
                      ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 88LL))(
                                            *((_QWORD *)this + 9),
                                            (char *)this + 152);
                      v8 = ActivationFactory;
                      if ( ActivationFactory >= 0 )
                      {
                        if ( *v18 )
                        {
                          v21 = 2 * *v18;
                          v22 = 8 * v21;
                          if ( !is_mul_ok(v21, 8uLL) )
                            v22 = -1LL;
                          v23 = operator new[](v22, (const struct std::nothrow_t *)&std::nothrow);
                          v24 = (void *)*((_QWORD *)this + 14);
                          *((_QWORD *)this + 14) = v23;
                          if ( v24 )
                            operator delete(v24);
                          v14 = (void *)*((_QWORD *)this + 14);
                          if ( !v14 )
                          {
                            LOBYTE(ActivationFactory) = 14;
                            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                            {
                              v15 = 333;
                              goto LABEL_23;
                            }
                            goto LABEL_24;
                          }
                          memset(v14, 0, 16LL * *v18);
                        }
                        if ( *v19 )
                        {
                          v25 = operator new[](2 * *v19, (const struct std::nothrow_t *)&std::nothrow);
                          v26 = (void *)*((_QWORD *)this + 15);
                          *((_QWORD *)this + 15) = v25;
                          if ( v26 )
                            operator delete(v26);
                          v14 = (void *)*((_QWORD *)this + 15);
                          if ( !v14 )
                          {
                            LOBYTE(ActivationFactory) = 14;
                            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                            {
                              v15 = 340;
                              goto LABEL_23;
                            }
                            goto LABEL_24;
                          }
                          memset(v14, 0, 2LL * *v19);
                        }
                        if ( !*v20 )
                          goto LABEL_99;
                        v28 = 2 * *v20;
                        v27 = 4 * v28;
                        if ( !is_mul_ok(v28, 4uLL) )
                          v27 = -1LL;
                        v29 = operator new[](v27, (const struct std::nothrow_t *)&std::nothrow);
                        v30 = (void *)*((_QWORD *)this + 16);
                        *((_QWORD *)this + 16) = v29;
                        if ( v30 )
                          operator delete(v30);
                        v14 = (void *)*((_QWORD *)this + 16);
                        if ( v14 )
                        {
                          memset(v14, 0, 8LL * *v20);
                          goto LABEL_99;
                        }
                        LOBYTE(ActivationFactory) = 14;
                        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                        {
                          v15 = 347;
                          goto LABEL_23;
                        }
                        goto LABEL_24;
                      }
                      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                      {
                        v15 = 328;
                        goto LABEL_23;
                      }
                    }
                    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                    {
                      v15 = 327;
                      goto LABEL_23;
                    }
                  }
                  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                  {
                    v15 = 326;
                    goto LABEL_23;
                  }
                }
                else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                {
                  v15 = 319;
                  goto LABEL_23;
                }
              }
              else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                v15 = 318;
                goto LABEL_23;
              }
            }
            else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v15 = 317;
              goto LABEL_23;
            }
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v15 = 316;
            goto LABEL_23;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v15 = 289;
          goto LABEL_23;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v15 = 288;
        goto LABEL_23;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v15 = 287;
LABEL_23:
      McTemplateU0qqq((__int64)v14, &MinInput_Warning_CheckResult, 0, v15, ActivationFactory);
    }
LABEL_24:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v8 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 276;
    goto LABEL_4;
  }
LABEL_99:
  v31 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = v49[0];
  if ( v49[0] )
  {
    v49[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v36 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v41;
  if ( v41 )
  {
    v41 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v37)[2])(v37);
  }
  v38 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  v39 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v39)[2])(v39);
  }
  return v8;
}
