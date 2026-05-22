/*
 * XREFs of ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x180013860
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180013740 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@@Z @ 0x180015318 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageS.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@Z@std@@@Z @ 0x1800154DC (-Initialize@-$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIM.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x1800156A0 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSe.c)
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x180016EBC (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::Initialize(
        Win32kInterop *this,
        struct IRawInputClient *a2,
        struct ISystemInputRouter *a3)
{
  struct IRawInputClient *v6; // rcx
  struct ISystemInputRouter *v7; // rcx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdi
  struct ICursorBroker *v13; // rcx
  struct ICursorBroker *v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-50h]
  __int64 (__fastcall **v18)(); // [rsp+28h] [rbp-48h] BYREF
  Win32kInterop *v19; // [rsp+30h] [rbp-40h]
  __int64 (__fastcall ***v20)(); // [rsp+60h] [rbp-10h]
  __int64 v21; // [rsp+90h] [rbp+20h] BYREF
  struct ICursorBroker *v22; // [rsp+98h] [rbp+28h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v6 = (struct IRawInputClient *)*((_QWORD *)this + 7);
  if ( v6 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = (struct IRawInputClient *)*((_QWORD *)this + 7);
    }
    *((_QWORD *)this + 7) = a2;
    if ( v6 )
      (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (struct ISystemInputRouter *)*((_QWORD *)this + 6);
  if ( v7 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)a3 + 8LL))(a3);
      v7 = (struct ISystemInputRouter *)*((_QWORD *)this + 6);
    }
    *((_QWORD *)this + 6) = a3;
    if ( v7 )
      (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_BYTE *)this + 40) = 0;
  v8 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = CoreUICreate(&v21);
  if ( v9 < 0 )
    goto LABEL_28;
  v18 = off_1800EB5B8;
  v19 = this;
  v20 = &v18;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)(), __int64))KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize)(
    (char *)this + 2024,
    &v21,
    5LL,
    &v18,
    -2LL);
  v18 = off_1800EB730;
  v19 = this;
  v20 = &v18;
  KernelInputConnection<_MIT_DEVICE_IDENTIFICATION_MESSAGE>::Initialize((char *)this + 2280, &v21, v10, &v18);
  v18 = off_1800EB698;
  v19 = this;
  v20 = &v18;
  KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>::Initialize((char *)this + 2408, &v21, v11, &v18);
  v18 = off_1800EB5E8;
  v19 = this;
  v20 = &v18;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)(), __int64))KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize)(
    (char *)this + 2152,
    &v21,
    8LL,
    &v18,
    v17);
  v12 = *((_QWORD *)this + 6);
  v13 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v9 = (*(__int64 (__fastcall **)(__int64, struct ICursorBroker **))(*(_QWORD *)v12 + 72LL))(v12, &v22);
  if ( v9 < 0 || (v9 = CursorNotificationProcessor::Initialize((Win32kInterop *)((char *)this + 1984), v22), v9 < 0) )
  {
LABEL_28:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)v9;
}
