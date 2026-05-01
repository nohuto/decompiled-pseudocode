/*
 * XREFs of ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800036F0
 * Callers:
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18003220C (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180032FD0 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1801D7774 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77_____lambda_379fb6251cfae0942258739af0295e77___ @ 0x180003874 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___--CTaskW.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _lambda_379fb6251cfae0942258739af0295e77_::__lambda_379fb6251cfae0942258739af0295e77_ @ 0x180003924 (_lambda_379fb6251cfae0942258739af0295e77_--__lambda_379fb6251cfae0942258739af0295e77_.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 */

void __fastcall ConnectedStandbyHelper::HandleViewCreated(
        ConnectedStandbyHelper *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  __int64 v2; // r8
  signed __int32 v5; // eax
  __int64 v6; // r14
  volatile signed __int32 *v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rbx
  void *v10; // rax
  _QWORD pExceptionObject[3]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-28h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v13; // [rsp+60h] [rbp-10h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v14; // [rsp+90h] [rbp+20h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+30h] BYREF

  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
  {
LABEL_11:
    pExceptionObject[1] = 0LL;
    pExceptionObject[2] = 0LL;
    pExceptionObject[0] = &std::bad_weak_ptr::`vftable';
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v5 = *(_DWORD *)(v2 + 8);
    if ( !v5 )
      goto LABEL_11;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v5 + 1, v5) );
  v6 = *(_QWORD *)this;
  v7 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  v14 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v14);
  v12[0] = this;
  if ( v7 )
    _InterlockedIncrement(v7 + 2);
  v12[1] = v6;
  v12[2] = v7;
  v13 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v13);
  v8 = *((_DWORD *)this + 4);
  v9 = 0LL;
  v10 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
    v9 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77_____lambda_379fb6251cfae0942258739af0295e77___(
           v10,
           v12);
  v15 = v9;
  Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, v8);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v15);
  lambda_379fb6251cfae0942258739af0295e77_::__lambda_379fb6251cfae0942258739af0295e77_(v12);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v14);
  if ( v7 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
}
