/*
 * XREFs of ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x18000EED8
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x18000EC74 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x180010E88 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSe.c)
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x1800125FC (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Win32kInterop::Initialize(
        Win32kInterop *this,
        struct IRawInputClient *a2,
        struct ISystemInputRouter *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r9d
  unsigned int v16; // edi
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r9d
  struct ICursorBroker *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 (__fastcall **v24)(); // [rsp+38h] [rbp-48h] BYREF
  Win32kInterop *v25; // [rsp+40h] [rbp-40h]
  __int64 (__fastcall ***v26)(); // [rsp+70h] [rbp-10h]
  struct ICursorBroker *v27; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v29; // [rsp+C0h] [rbp+40h] BYREF

  v28 = 0LL;
  v29 = 0LL;
  if ( *((struct IRawInputClient **)this + 8) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = a2;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( *((struct ISystemInputRouter **)this + 7) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)a3 + 8LL))(a3);
    v7 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = a3;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_BYTE *)this + 48) = 0;
  v8 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = CoreUICreate(&v28);
  if ( v9 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 261, v9);
    if ( IsDebuggerPresent() )
      __debugbreak();
    goto LABEL_18;
  }
  v27 = this;
  v24 = off_1800D33A0;
  v25 = this;
  v26 = &v24;
  KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize((char *)this + 216, &v28, 4LL, &v24);
  if ( gbIsRunningWithCShell )
  {
    v27 = this;
    v24 = off_1800D3410;
    v25 = this;
    v26 = &v24;
    KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize((char *)this + 344, &v28, 7LL, &v24);
  }
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 7);
  v12 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = (**v11)(v11, &GUID_fb9e888a_e52b_424f_8fab_f05676d1b357, &v29);
  if ( v13 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_27;
    v15 = 287;
    goto LABEL_26;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v29 + 56LL))(v29, 2LL, (char *)this + 8);
  v16 = v13;
  if ( v13 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    {
LABEL_27:
      if ( IsDebuggerPresent() )
        __debugbreak();
LABEL_18:
      __fastfail(7u);
    }
    v15 = 291;
LABEL_26:
    McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, v15, v13);
    goto LABEL_27;
  }
  if ( (gdwMitConfig & 1) != 0 )
  {
    v27 = 0LL;
    v17 = (*(__int64 (__fastcall **)(_QWORD, struct ICursorBroker **))(**((_QWORD **)this + 7) + 80LL))(
            *((_QWORD *)this + 7),
            &v27);
    if ( v17 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_41;
      v19 = 297;
      goto LABEL_40;
    }
    v17 = CursorNotificationProcessor::Initialize((Win32kInterop *)((char *)this + 176), v27);
    v16 = v17;
    if ( v17 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_41;
      v19 = 298;
LABEL_40:
      McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, v19, v17);
LABEL_41:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v20 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  v21 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v16;
}
