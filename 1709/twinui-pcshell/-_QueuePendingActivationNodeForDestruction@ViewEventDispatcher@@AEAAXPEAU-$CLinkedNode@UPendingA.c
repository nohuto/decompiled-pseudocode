/*
 * XREFs of ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x180125C94
 * Callers:
 *     ?RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z @ 0x180121AC0 (-RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z.c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180125704 (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     ?_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z @ 0x180125E6C (-_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??$PendingActivationRemove@AEA_KPEBGAEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG0@Z @ 0x180129BB0 (--$PendingActivationRemove@AEA_KPEBGAEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_QueuePendingActivationNodeForDestruction(struct IUnknownVtbl *a1, __int64 a2)
{
  ULONG (__stdcall **p_AddRef)(IUnknown *); // r8
  ULONG (__stdcall *v5)(IUnknown *); // rax
  ULONG (__stdcall *v6)(IUnknown *); // rcx
  _QWORD *v7; // rdx
  ULONG (__stdcall *v8)(IUnknown *); // rax
  struct IUnknownVtbl *v9; // r14
  int QueryInterface; // ebp
  IUnknown *v11; // rdi
  IUnknown *v12; // rax
  IUnknown *v13; // rbx
  struct IUnknownVtbl *v15; // [rsp+40h] [rbp-38h] BYREF
  PCWSTR StringRawBuffer; // [rsp+80h] [rbp+8h] BYREF
  struct IUnknownVtbl *v17; // [rsp+88h] [rbp+10h]
  __int64 v18; // [rsp+90h] [rbp+18h]
  IUnknown *v19; // [rsp+98h] [rbp+20h]

  p_AddRef = &a1[23].AddRef;
  v5 = 0LL;
  while ( 1 )
  {
    if ( v5 )
    {
      v5 = *(ULONG (__stdcall **)(IUnknown *))v5;
    }
    else
    {
      if ( a1 == (struct IUnknownVtbl *)-560LL )
        break;
      v5 = *p_AddRef;
    }
    if ( !v5 )
      break;
    if ( v5 == (ULONG (__stdcall *)(IUnknown *))a2 )
    {
      v6 = *p_AddRef;
      v7 = 0LL;
      while ( v6 )
      {
        if ( v6 == v5 )
        {
          v8 = *(ULONG (__stdcall **)(IUnknown *))v5;
          if ( v7 )
            *v7 = v8;
          else
            *p_AddRef = v8;
          goto LABEL_16;
        }
        v7 = v6;
        v6 = *(ULONG (__stdcall **)(IUnknown *))v6;
      }
      break;
    }
  }
LABEL_16:
  *(_QWORD *)a2 = a1[23].Release;
  a1[23].Release = (ULONG (__stdcall *)(IUnknown *))a2;
  --a1[23].QueryInterface;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 16), 0LL);
  ViewManagerInteropTraceLogging::PendingActivationRemove<unsigned __int64 &,unsigned short const *,unsigned __int64 &>(
    a2 + 8,
    &StringRawBuffer,
    &a1[23]);
  v17 = a1;
  (*((void (__fastcall **)(struct IUnknownVtbl *))a1->QueryInterface + 1))(a1);
  v9 = a1;
  v15 = a1;
  (*((void (__fastcall **)(struct IUnknownVtbl *))a1->QueryInterface + 1))(a1);
  QueryInterface = (int)a1[12].QueryInterface;
  v11 = 0LL;
  v18 = 0LL;
  v12 = (IUnknown *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( v12 )
  {
    v12->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v12[1].lpVtbl) = 1;
    v12->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v13->lpVtbl = (struct IUnknownVtbl *)off_18020B898;
    v13[2].lpVtbl = a1;
    v13[3].lpVtbl = 0LL;
    if ( &v13[3] != (IUnknown *)&v15 )
    {
      v13[3].lpVtbl = a1;
      v9 = 0LL;
      v15 = 0LL;
    }
    v11 = v13;
  }
  v19 = v11;
  Windows::Internal::ComTaskPool::RunTask(3, 2u, QueryInterface, 0, v11, 0LL);
  if ( v11 )
    ((void (__fastcall *)(IUnknown *))v11->lpVtbl->Release)(v11);
  if ( v9 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v9->QueryInterface + 2))(v9);
  return (*((__int64 (__fastcall **)(struct IUnknownVtbl *))a1->QueryInterface + 2))(a1);
}
