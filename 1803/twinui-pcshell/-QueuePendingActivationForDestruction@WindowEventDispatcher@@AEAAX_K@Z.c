/*
 * XREFs of ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x1801D7550
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1801D70E4 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?RemovePendingActivation@WindowEventDispatcher@@UEAAJ_K@Z @ 0x1801D83F0 (-RemovePendingActivation@WindowEventDispatcher@@UEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_394f447e3cb7383e15c0434f11a7d111_____lambda_394f447e3cb7383e15c0434f11a7d111___ @ 0x1801D1374 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_394f447e3cb73.c)
 *     ??$_Buynode@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@?$_List_buy@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@1@PEAU21@0AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801D1D04 (--$_Buynode@AEBV-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@.c)
 *     ?erase@?$list@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801DA94C (-erase@-$list@V-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall WindowEventDispatcher::QueuePendingActivationForDestruction(WindowEventDispatcher *this, __int64 a2)
{
  char *v3; // rsi
  _QWORD *v4; // rax
  _QWORD *i; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  __int64 *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // edi
  struct Windows::Internal::IComPoolTask **v13; // rax
  struct Windows::Internal::IComPoolTask *v14; // rbx
  __int64 v15; // rcx
  WindowEventDispatcher *v16; // [rsp+38h] [rbp-18h] BYREF
  CWinRTApplicationView *v17[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+20h] BYREF
  CWinRTApplicationView *v19; // [rsp+80h] [rbp+30h] BYREF
  struct Windows::Internal::IComPoolTask *v20; // [rsp+88h] [rbp+38h] BYREF

  v3 = (char *)this + 496;
  v4 = (_QWORD *)*((_QWORD *)this + 62);
  for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
  {
    v6 = (_QWORD *)i[2];
    if ( v6[1] == a2 )
    {
      v18 = i[2];
      if ( v6 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
      std::list<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::erase(
        v3,
        &v19,
        i);
      v7 = *((_QWORD *)this + 64);
      v8 = *(__int64 **)(v7 + 8);
      v10 = std::_List_buy<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::_Buynode<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy> const &>(
              v9,
              v7,
              (__int64)v8,
              &v18);
      v11 = *((_QWORD *)this + 65);
      if ( v11 == 0xAAAAAAAAAAAAAA9LL )
        std::_Xlength_error("list<T> too long");
      *((_QWORD *)this + 65) = v11 + 1;
      *(_QWORD *)(v7 + 8) = v10;
      *v8 = v10;
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v18);
      break;
    }
  }
  v19 = this;
  Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)&v19);
  v16 = this;
  v17[0] = this;
  Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)v17);
  v12 = *((_DWORD *)this + 123);
  v13 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_394f447e3cb7383e15c0434f11a7d111_____lambda_394f447e3cb7383e15c0434f11a7d111___(
                                                     &v18,
                                                     &v16);
  v14 = *v13;
  v20 = *v13;
  *v13 = 0LL;
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  Windows::Internal::ComTaskPool::RunTask(3u, 2u, v12, 0, v14, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((void **)&v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
}
