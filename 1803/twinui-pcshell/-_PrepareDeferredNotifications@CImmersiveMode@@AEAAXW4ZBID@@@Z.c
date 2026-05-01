/*
 * XREFs of ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x1800268C8
 * Callers:
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180026D80 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCount@AgileCallbackArray@AgileRegistrationList@@UEAAJPEAI@Z @ 0x18001E9E0 (-GetCount@AgileCallbackArray@AgileRegistrationList@@UEAAJPEAI@Z.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18004E770 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CImmersiveMode::_PrepareDeferredNotifications(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int v5; // r12d
  struct IObjectArray *v6; // rbx
  int CallbackArray; // eax
  HRESULT (__stdcall *GetCount)(IObjectArray *, UINT *); // rax
  int v9; // eax
  _DWORD *v10; // rax
  _DWORD *v11; // rdi
  int v12; // ecx
  struct IObjectArray *v13; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+48h] BYREF
  _DWORD *v15; // [rsp+90h] [rbp+50h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 184) & -(__int64)(a1 != 0));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v4, 1LL);
  v6 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    CallbackArray = AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)(a1 + 296), &v13);
    v6 = v13;
    if ( CallbackArray >= 0 )
    {
      GetCount = v13->lpVtbl->GetCount;
      v9 = (char *)GetCount == (char *)AgileRegistrationList::AgileCallbackArray::GetCount
         ? AgileRegistrationList::AgileCallbackArray::GetCount((AgileRegistrationList::AgileCallbackArray *)v13, &v14)
         : ((__int64 (__fastcall *)(struct IObjectArray *, unsigned int *))GetCount)(v13, &v14);
      if ( v9 < 0 || !v14 )
      {
        Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v13);
        v6 = v13;
      }
    }
  }
  v10 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  v15 = v10;
  if ( v10 )
  {
    v12 = *(_DWORD *)(a1 + 248);
    *v10 = a2;
    v10[1] = v12;
    *((_QWORD *)v10 + 1) = v6;
    if ( v6 )
      ((void (__fastcall *)(struct IObjectArray *))v6->lpVtbl->AddRef)(v6);
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)(a1 + 352) = v11;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v13);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
}
