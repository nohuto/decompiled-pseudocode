/*
 * XREFs of ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x180032D08
 * Callers:
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180032540 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18002564C (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CImmersiveMode::_PrepareDeferredNotifications(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  int v5; // r15d
  struct IObjectArray *v6; // rbx
  int CallbackArray; // eax
  struct IObjectArray *v8; // rcx
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  int v11; // ecx
  struct IObjectArray *v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+78h] [rbp+10h] BYREF
  _DWORD *v14; // [rsp+80h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 192) & -(__int64)(a1 != 0));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v6 = 0LL;
  v12 = 0LL;
  if ( a2 )
  {
    CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 304), &v12);
    v6 = v12;
    if ( CallbackArray >= 0
      && (((int (__fastcall *)(struct IObjectArray *, int *))v12->lpVtbl->GetCount)(v12, &v13) < 0 || !v13) )
    {
      v8 = v6;
      v6 = 0LL;
      v12 = 0LL;
      ((void (__fastcall *)(struct IObjectArray *))v8->lpVtbl->Release)(v8);
    }
  }
  v9 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v14 = v9;
  if ( v9 )
  {
    v11 = *(_DWORD *)(a1 + 256);
    *v9 = a2;
    v9[1] = v11;
    *((_QWORD *)v9 + 1) = v6;
    if ( v6 )
      ((void (__fastcall *)(struct IObjectArray *))v6->lpVtbl->AddRef)(v6);
  }
  else
  {
    v10 = 0LL;
  }
  *(_QWORD *)(a1 + 360) = v10;
  if ( v6 )
    ((void (__fastcall *)(struct IObjectArray *))v6->lpVtbl->Release)(v6);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
}
