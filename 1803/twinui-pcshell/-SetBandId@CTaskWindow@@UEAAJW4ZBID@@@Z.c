/*
 * XREFs of ?SetBandId@CTaskWindow@@UEAAJW4ZBID@@@Z @ 0x180047DF0
 * Callers:
 *     _lambda_8e77f3627fbb508724cf2b62e627d849_::operator() @ 0x180010D50 (_lambda_8e77f3627fbb508724cf2b62e627d849_--operator().c)
 * Callees:
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     ?SetWindowBand@ViewWrapperBase@@UEAAJK@Z @ 0x18004FA40 (-SetWindowBand@ViewWrapperBase@@UEAAJK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::SetBandId(_DWORD *a1, unsigned int a2)
{
  int (*v4)(ViewWrapperBase *__hidden, unsigned int); // rax
  __int64 (__fastcall *v5)(CTaskWindow *); // rax
  HWND NativeWindow; // rax
  HANDLE PropW; // r10
  __int64 (__fastcall *v8)(CTaskWindow *); // rax
  HWND v9; // rax
  HANDLE v10; // r10
  ViewWrapperBase *v11; // rcx
  ViewWrapperBase *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, ViewWrapperBase **))a1 + 6))(
    *((_QWORD *)a1 + 6),
    &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
    &v13);
  v4 = *(int (**)(ViewWrapperBase *__hidden, unsigned int))(*(_QWORD *)v13 + 40LL);
  if ( v4 == ViewWrapperBase::SetWindowBand )
    ViewWrapperBase::SetWindowBand(v13, a2);
  else
    ((void (__fastcall *)(ViewWrapperBase *, _QWORD))v4)(v13, a2);
  v5 = *(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)a1 + 32LL);
  if ( v5 == CTaskWindow::GetNativeWindow )
    NativeWindow = (HWND)CTaskWindow::GetNativeWindow((CTaskWindow *)a1);
  else
    NativeWindow = (HWND)v5((CTaskWindow *)a1);
  PropW = GetPropW(NativeWindow, L"{1CADE38A-8C26-4D73-A0D7-3ADE69F02A94}");
  if ( PropW )
    (*(void (__fastcall **)(PVOID, HANDLE, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                          + 32LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      PropW,
      0LL,
      a2);
  v8 = *(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)a1 + 32LL);
  if ( v8 == CTaskWindow::GetNativeWindow )
    v9 = (HWND)CTaskWindow::GetNativeWindow((CTaskWindow *)a1);
  else
    v9 = (HWND)v8((CTaskWindow *)a1);
  v10 = GetPropW(v9, L"{A086F28F-D579-49B1-9117-F2A3AC324349}");
  if ( v10 )
    (*(void (__fastcall **)(PVOID, HANDLE, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                          + 32LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      v10,
      0LL,
      a2);
  a1[11] = a2 - 8;
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0LL;
}
