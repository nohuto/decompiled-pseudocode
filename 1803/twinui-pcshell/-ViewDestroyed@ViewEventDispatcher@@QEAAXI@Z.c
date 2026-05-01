/*
 * XREFs of ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x180035B2C
 * Callers:
 *     ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x180057030 (-OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$As@UIViewWrapperInternal@@@?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180003F2C (--$As@UIViewWrapperInternal@@@-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180031E9C (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180032188 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800324F4 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x1800325CC (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this @ 0x18003A410 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Delete_this.c)
 *     ?GetViewInstanceId@ViewWrapperBase@@UEAAIXZ @ 0x1800514C0 (-GetViewInstanceId@ViewWrapperBase@@UEAAIXZ.c)
 *     ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x180052D20 (-ViewDestroyed@ViewWrapperBase@@UEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@?$CTSimpleFixedArray@UPendingViewData@ViewEventDispatcher@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEBAJAEBVPendingDataFinderByViewInstanceId@ViewEventDispatcher@@AEBUPendingViewData@2@PEA_K_K@Z @ 0x180095568 (--$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@-$CTSimpleFixedArray@UPending.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180095D7C (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ViewEventDispatcher::ViewDestroyed(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // rdi
  ViewWrapperBase *v5; // rcx
  __int64 (*v6)(void); // rax
  unsigned int ViewInstanceId; // eax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  __int64 v10; // r8
  bool v11; // si
  __int64 v12; // rdx
  void (__fastcall *v13)(_QWORD *, __int64); // rax
  __int64 v14; // rcx
  void (*v15)(void); // rax
  char v16; // r12
  int v17; // eax
  int MatchingViewEventRegistration; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rbx
  int v21; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v22; // [rsp+30h] [rbp-C8h] BYREF
  ViewWrapperBase *v23; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v25[3]; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v26[4]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v27[7]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD *v28; // [rsp+B8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v26[2] = -2LL;
  try
  {
    v23 = 0LL;
    v20 = 0LL;
    v24 = 0LL;
    v4 = this + 37;
    AcquireSRWLockExclusive(this + 37);
    v25[1] = (__int64)v4;
    v25[0] = 0LL;
    v9 = 0LL;
    v22 = 0LL;
    v8 = 0LL;
    v16 = 1;
    while ( (PVOID)v8 < this[47].Ptr )
    {
      v5 = (ViewWrapperBase *)*((_QWORD *)this[46].Ptr + v8);
      v6 = *(__int64 (**)(void))(*(_QWORD *)v5 + 592LL);
      if ( (char *)v6 == (char *)ViewWrapperBase::GetViewInstanceId )
        ViewInstanceId = ViewWrapperBase::GetViewInstanceId(v5);
      else
        ViewInstanceId = v6();
      if ( ViewInstanceId == a2 )
      {
        v9 = v8;
        v22 = v8;
        goto LABEL_8;
      }
      ++v8;
    }
    v16 = 0;
LABEL_8:
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v25);
    if ( v16 )
    {
      v17 = Microsoft::WRL::ComPtr<IViewWrapperInternal>::As<IViewWrapperInternal>(
              (_QWORD *)this[46].Ptr + v9,
              (__int64)&v23);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x295,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v17,
          v21);
      }
      else
      {
        ViewEventDispatcher::_RemoveValidView((ViewEventDispatcher *)this, v9);
        Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(&v24);
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(
                                          (__int64)this,
                                          v23,
                                          &v24);
        v19 = retaddr;
        if ( MatchingViewEventRegistration >= 0 )
        {
          v20 = v24;
          goto LABEL_10;
        }
      }
      wil::details::in1diag3::Throw_Hr(
        v19,
        (void *)0x298,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)MatchingViewEventRegistration,
        v21);
    }
    else
    {
      v26[1] = 0LL;
      v25[2] = 0LL;
      v26[0] = 0LL;
      LODWORD(v25[0]) = a2;
      v9 = (unsigned __int64)&this[54];
      v11 = (int)CTSimpleFixedArray<ViewEventDispatcher::PendingViewData,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>>::FindEx<ViewEventDispatcher::PendingDataFinderByViewInstanceId>(
                   &this[54],
                   v25,
                   v10,
                   &v22) >= 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26);
      if ( !v11 )
      {
LABEL_10:
        v27[0] = off_180323650;
        v28 = v27;
        ViewEventDispatcher::_ForEachComponent((ViewEventDispatcher *)this, a2, (__int64)v27);
        if ( v28 )
        {
          LOBYTE(v12) = v28 != v27;
          v13 = *(void (__fastcall **)(_QWORD *, __int64))(*v28 + 32LL);
          if ( (char *)v13 == (char *)std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this )
            std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this(v28, v12);
          else
            v13(v28, v12);
        }
        if ( v4 )
          ReleaseSRWLockExclusive(v4);
        if ( v20 )
        {
          v14 = *(_QWORD *)(v20 + 32);
          v22 = v14;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          ViewEventDispatcher::_RaiseViewEvent((__int64)this, (__int64)v23, 4u, (__int64 *)&v22);
          v15 = *(void (**)(void))(*(_QWORD *)v23 + 712LL);
          if ( (char *)v15 == (char *)ViewWrapperBase::ViewDestroyed )
            ViewWrapperBase::ViewDestroyed(v23);
          else
            v15();
        }
        Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(&v24);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v23);
        return;
      }
    }
    CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
      v9,
      v22);
    goto LABEL_10;
  }
  catch ( ... )
  {
  }
}
