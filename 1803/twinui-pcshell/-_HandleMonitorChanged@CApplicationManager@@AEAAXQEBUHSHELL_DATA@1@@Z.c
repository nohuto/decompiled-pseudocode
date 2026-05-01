/*
 * XREFs of ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18003D440
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??_E?$CTaskWrapper@V_lambda_379fb6251cfae0942258739af0295e77_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800037F0 (--_E-$CTaskWrapper@V_lambda_379fb6251cfae0942258739af0295e77_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$CTaskWrapper@V_lambda_c35d5355421e51b91e1b7dc40faf7951_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18001D470 (--_G-$CTaskWrapper@V_lambda_c35d5355421e51b91e1b7dc40faf7951_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_E?$CTaskWrapper@V_lambda_d190757c23000f52f2ae5d43357c90b2_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18001DA30 (--_E-$CTaskWrapper@V_lambda_d190757c23000f52f2ae5d43357c90b2_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z @ 0x18003AF78 (--_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18003D1C4 (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x180046490 (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 *     ?IsApplicationForeground@CImmersiveApp@@UEBA_NXZ @ 0x180049870 (-IsApplicationForeground@CImmersiveApp@@UEBA_NXZ.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x18004C6F0 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??_E?$CTaskWrapper@V_lambda_212ff9793df855e45456e1ed2b184a0d_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180054700 (--_E-$CTaskWrapper@V_lambda_212ff9793df855e45456e1ed2b184a0d_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??_E?$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800547E0 (--_E-$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800F12F0 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18010FAA0 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=18
void __fastcall CApplicationManager::_HandleMonitorChanged(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *a2)
{
  const struct CApplicationManager::HSHELL_DATA *v2; // r13
  __int64 v4; // r15
  PSRWLOCK v5; // rbx
  PVOID Ptr; // rdi
  PVOID v7; // r12
  unsigned int v8; // r13d
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rsi
  void (*v13)(void); // rax
  Windows::Internal::ComTaskPool::TaskData *v14; // rdx
  int v15; // r13d
  Windows::Internal::ComTaskPool::TaskData *v16; // r15
  Windows::Internal::ComTaskPool::TaskData *v17; // rsi
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rsi
  void (__fastcall *v21)(__int64); // rax
  void (__fastcall *v22)(struct Microsoft::WRL::Details::ModuleBase *, Windows::Internal::ComTaskPool::TaskData *, __int64); // rax
  __int64 (__fastcall *v23)(void *); // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct Microsoft::WRL::Details::ModuleBase *v28; // rcx
  int v29; // eax
  HWND v30; // rdi
  HWND v31; // rbx
  char v32; // al
  struct IImmersiveMonitor *v33; // rcx
  __int64 v34; // r15
  __int64 v35; // r12
  __int64 v36; // rdi
  __int64 v37; // rbx
  int v38; // esi
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // eax
  int (__fastcall ***v42)(_QWORD, GUID *, CImmersiveApp **); // rcx
  void (__fastcall *v43)(CImmersiveApp *, struct IImmersiveMonitor *, _DWORD *, __int64); // rax
  bool (__fastcall *v44)(CImmersiveApp *__hidden); // rax
  struct IImmersiveMonitor *v46; // rcx
  CImmersiveApp *v47; // rcx
  __int64 v48; // rbx
  Windows::Internal::ComTaskPool::TaskData **v49; // [rsp+28h] [rbp-D8h]
  __int64 *v50; // [rsp+30h] [rbp-D0h]
  CImmersiveApp *v51; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp-B8h]
  __int64 v53; // [rsp+50h] [rbp-B0h] BYREF
  struct IObjectArray *v54; // [rsp+58h] [rbp-A8h] BYREF
  struct ISyncIAMEventHandler *v55; // [rsp+60h] [rbp-A0h] BYREF
  struct ISyncIAMEventHandler *v56; // [rsp+68h] [rbp-98h] BYREF
  struct IObjectArray *v57; // [rsp+70h] [rbp-90h] BYREF
  struct IImmersiveMonitor *v58; // [rsp+78h] [rbp-88h] BYREF
  Windows::Internal::ComTaskPool::TaskData *v59[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  PVOID v61; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v62[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v63[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-40h]
  _QWORD *v66; // [rsp+C8h] [rbp-38h]
  _QWORD *v67; // [rsp+D0h] [rbp-30h]
  __int64 v68; // [rsp+D8h] [rbp-28h]
  __int64 v69; // [rsp+E0h] [rbp-20h]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  __int64 v71; // [rsp+F0h] [rbp-10h]
  __int64 v72; // [rsp+F8h] [rbp-8h]
  __int64 v73; // [rsp+100h] [rbp+0h]
  struct IImmersiveMonitor *v75; // [rsp+160h] [rbp+60h] BYREF
  struct IImmersiveMonitor *v76; // [rsp+168h] [rbp+68h] BYREF

  v68 = -2LL;
  v2 = a2;
  v4 = *((_QWORD *)a2 + 1);
  v69 = v4;
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  v61 = Ptr;
  if ( !Ptr )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v61);
    goto LABEL_78;
  }
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
  v7 = Ptr;
  v63[0] = Ptr;
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
  v63[1] = v4;
  v8 = (unsigned int)v5[15].Ptr;
  v9 = 0LL;
  v66 = 0LL;
  v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v10;
  if ( v10 )
  {
    *v10 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
    *((_DWORD *)v10 + 3) = 1;
    *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v13 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
      if ( (char *)v13 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        Ptr = v61;
        v7 = (PVOID)v63[0];
      }
      else
      {
        v13();
      }
    }
    *v12 = off_18031E9C0;
    v14 = 0LL;
    v12[2] = 0LL;
    if ( v12 + 2 != v63 )
    {
      v12[2] = Ptr;
      v7 = 0LL;
      v63[0] = 0LL;
    }
    v12[3] = v4;
    v9 = v12;
    v66 = v12;
  }
  else
  {
    v14 = 0LL;
  }
  v67 = v9;
  if ( v9 )
  {
    v70 = 0LL;
    hObject = 0LL;
    v60 = 0LL;
    *(_OWORD *)v59 = 0LL;
    AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    v50 = &v60;
    v49 = v59;
    v15 = Windows::Internal::ComTaskPool::s_QueuePoolTaskUnderLock(0LL, 0LL, 2LL, v8);
    ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    v16 = v59[0];
    v14 = v59[0];
    v17 = v59[1];
    if ( v59[0] )
    {
      v18 = (_QWORD *)((char *)v59[0] + 24);
      v16 = (Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)v59[0] + 3);
      v59[0] = v16;
      *v18 = 0LL;
      if ( v17 == v14 )
        v17 = 0LL;
      v59[1] = v17;
    }
    if ( v14 )
    {
      do
      {
        Windows::Internal::ComTaskPool::TaskData::`scalar deleting destructor'(v14);
        v14 = v16;
        if ( v16 )
        {
          v19 = (_QWORD *)((char *)v16 + 24);
          v16 = (Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)v16 + 3);
          v11 = 0LL;
          *v19 = 0LL;
          if ( v17 == v14 )
            v17 = 0LL;
          v59[1] = v17;
        }
      }
      while ( v14 );
      v59[0] = v16;
    }
    v20 = v60;
    if ( v15 >= 0 && v60 )
    {
      if ( WaitForSingleObject(*(HANDLE *)(v60 + 56), 0xFFFFFFFF) == -1 )
        ResultFromKnownLastError();
      if ( (*(_BYTE *)(v20 + 132) & 2) == 0 )
      {
        CloseHandle(*(HANDLE *)(v20 + 56));
        *(_QWORD *)(v20 + 56) = 0LL;
      }
    }
    if ( hObject )
    {
      AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
      if ( !Windows::Internal::ComTaskPool::s_hEventCache )
      {
        Windows::Internal::ComTaskPool::s_hEventCache = hObject;
        hObject = 0LL;
      }
      ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
      if ( hObject )
        CloseHandle(hObject);
    }
    if ( v20 )
    {
      v60 = 0LL;
      v21 = *(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL);
      if ( (char *)v21 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v20);
      else
        v21(v20);
    }
  }
  if ( v9 )
  {
    v67 = 0LL;
    v22 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, Windows::Internal::ComTaskPool::TaskData *, __int64))(*v9 + 16LL);
    if ( (char *)v22 != (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
    {
      v28 = (struct Microsoft::WRL::Details::ModuleBase *)v9;
      goto LABEL_72;
    }
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference(
            (Microsoft::WRL::Details *)((char *)v9 + 12),
            (volatile int *)v14) )
    {
      v23 = *(__int64 (__fastcall **)(void *))(*v9 + 32LL);
      if ( (char *)v23 == (char *)Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_323d14d606b14d2939124d398e1f4aa2_>::`scalar deleting destructor' )
      {
        v24 = v9[2];
        if ( v24 )
        {
          v9[2] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
        *((_DWORD *)v9 + 3) = -1073741823;
        operator delete(v9, (const struct std::nothrow_t *)0x20);
LABEL_68:
        v28 = Microsoft::WRL::Details::ModuleBase::module_;
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
        {
          v22 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, Windows::Internal::ComTaskPool::TaskData *, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
          v14 = (Windows::Internal::ComTaskPool::TaskData *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount;
          if ( (char *)v22 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
          {
            _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
            Ptr = v61;
            v7 = (PVOID)v63[0];
            goto LABEL_73;
          }
LABEL_72:
          v22(v28, v14, v11);
          goto LABEL_73;
        }
        goto LABEL_73;
      }
      if ( (char *)v23 == (char *)Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_33ae1f57d3bf46c1270e08142e9d9c0c_>::`vector deleting destructor' )
      {
        v25 = v9[3];
        if ( v25 )
        {
          v9[3] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
      else
      {
        if ( (char *)v23 != (char *)Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_ac4863598604ec72e89080dc7a8a9967_>::`vector deleting destructor' )
        {
          if ( (char *)v23 == (char *)Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_d190757c23000f52f2ae5d43357c90b2_>::`vector deleting destructor' )
          {
            Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_d190757c23000f52f2ae5d43357c90b2_>::`vector deleting destructor'(
              v9,
              1);
          }
          else if ( v23 == Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_212ff9793df855e45456e1ed2b184a0d_>::`vector deleting destructor' )
          {
            Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_212ff9793df855e45456e1ed2b184a0d_>::`vector deleting destructor'(v9);
          }
          else if ( (char *)v23 == (char *)Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c35d5355421e51b91e1b7dc40faf7951_>::`scalar deleting destructor' )
          {
            Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c35d5355421e51b91e1b7dc40faf7951_>::`scalar deleting destructor'(
              v9,
              1);
          }
          else if ( v23 == Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::`vector deleting destructor' )
          {
            Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::`vector deleting destructor'(v9);
          }
          else if ( (char *)v23 == (char *)Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_379fb6251cfae0942258739af0295e77_>::`vector deleting destructor' )
          {
            Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_379fb6251cfae0942258739af0295e77_>::`vector deleting destructor'(
              v9,
              1);
          }
          else
          {
            ((void (__fastcall *)(_QWORD *, __int64))v23)(v9, 1LL);
          }
          goto LABEL_68;
        }
        v26 = v9[4];
        if ( v26 )
        {
          v9[4] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        v27 = v9[2];
        if ( v27 )
        {
          v9[2] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
      *((_DWORD *)v9 + 3) = -1073741823;
      operator delete(v9, (const struct std::nothrow_t *)0x28);
      goto LABEL_68;
    }
  }
LABEL_73:
  if ( v7 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  v2 = a2;
LABEL_78:
  v29 = *((_DWORD *)v2 + 4);
  if ( v29 == 1 )
  {
    v30 = (HWND)*((_QWORD *)v2 + 1);
    v31 = v30;
    if ( *((_QWORD *)v2 + 5) )
      v31 = (HWND)*((_QWORD *)v2 + 5);
    v75 = 0LL;
    if ( GetShellWindow() != v31
      && !(unsigned int)GetPropW(v31, L"MultimonitorActivationException")
      && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 93) + 24LL))(*((_QWORD *)this + 93)) != v31 )
    {
      (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *, struct IImmersiveMonitor **, Windows::Internal::ComTaskPool::TaskData **, __int64 *))(**((_QWORD **)this + 69) + 88LL))(
        *((_QWORD *)this + 69),
        v31,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        &v75,
        v49,
        v50);
    }
    v32 = (*(__int64 (__fastcall **)(_QWORD, HWND, struct IImmersiveMonitor *))(**((_QWORD **)this + 66) + 32LL))(
            *((_QWORD *)this + 66),
            v30,
            v75);
    v33 = v75;
    if ( v32 && v75 )
    {
      CApplicationManager::_TryPresentDesktopExperience(this, v30, 2, v75);
      v33 = v75;
    }
    if ( v33 )
    {
      v75 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v33 + 16LL))(v33);
    }
  }
  else if ( v29 == 2 )
  {
    if ( (unsigned int)IsShellFrameWindow(*((_QWORD *)v2 + 1)) )
    {
      v34 = *((_QWORD *)v2 + 1);
      v51 = 0LL;
      v71 = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      if ( *((_QWORD *)this + 79) )
      {
        v72 = 0LL;
        while ( 1 )
        {
          v37 = *(_QWORD *)(*((_QWORD *)this + 78) + 8 * v36);
          v73 = v37;
          if ( v37 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
          v38 = -1;
          v53 = 0LL;
          if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v37)(
                 v37,
                 &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                 &v53) >= 0 )
          {
            v64 = v34;
            v65 = 0LL;
            v38 = ((*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v53 + 296LL))(
                     v53,
                     &v64,
                     2LL) != 0)
                - 1;
            v39 = v65;
            if ( v65 )
            {
              v65 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
            }
          }
          v40 = v53;
          if ( v53 )
          {
            v53 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
          if ( !v38 )
            break;
          if ( (unsigned __int64)++v36 >= *((_QWORD *)this + 79) )
            goto LABEL_103;
        }
        v35 = v36;
        v41 = 0;
      }
      else
      {
LABEL_103:
        v41 = -2147319765;
      }
      if ( v41 >= 0 )
      {
        v42 = *(int (__fastcall ****)(_QWORD, GUID *, CImmersiveApp **))(*((_QWORD *)this + 78) + 8 * v35);
        if ( (**v42)(v42, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v51) >= 0 )
        {
          v76 = 0LL;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **, Windows::Internal::ComTaskPool::TaskData **, __int64 *))(**((_QWORD **)this + 69) + 88LL))(
                 *((_QWORD *)this + 69),
                 *((_QWORD *)v2 + 1),
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &v76,
                 v49,
                 v50) >= 0 )
          {
            v62[0] = *((_DWORD *)this + 206);
            v62[1] = 0;
            v43 = *(void (__fastcall **)(CImmersiveApp *, struct IImmersiveMonitor *, _DWORD *, __int64))(*(_QWORD *)v51 + 456LL);
            if ( (char *)v43 == (char *)CImmersiveApp::SetMonitorInternal )
              CImmersiveApp::SetMonitorInternal(v51, v76, v62, 4LL);
            else
              v43(v51, v76, v62, 4LL);
            v44 = *(bool (__fastcall **)(CImmersiveApp *__hidden))(*(_QWORD *)v51 + 416LL);
            if ( v44 == CImmersiveApp::IsApplicationForeground ? CImmersiveApp::IsApplicationForeground(v51) : v44(v51) )
            {
              v55 = 0LL;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v55);
              if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(this, &v55) >= 0 )
              {
                v54 = 0LL;
                Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v54);
                if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(this, v76, &v54) >= 0 )
                  (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, char *, _QWORD, _DWORD, int, int))(*(_QWORD *)v55 + 24LL))(
                    v55,
                    v54,
                    (char *)this + 248,
                    0LL,
                    *((_DWORD *)v2 + 6),
                    2,
                    0xFFFF);
                Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v54);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v55);
            }
          }
          v46 = v76;
          if ( v76 )
          {
            v76 = 0LL;
            (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v46 + 16LL))(v46);
          }
        }
      }
      v47 = v51;
      if ( v51 )
      {
        v51 = 0LL;
        (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v47 + 16LL))(v47);
      }
    }
  }
  else if ( *((_QWORD *)v2 + 1) == *((_QWORD *)this + 95) )
  {
    v58 = 0LL;
    v48 = *((_QWORD *)this + 69);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v58);
    if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **, Windows::Internal::ComTaskPool::TaskData **, __int64 *))(*(_QWORD *)v48 + 88LL))(
           v48,
           *((_QWORD *)v2 + 1),
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &v58,
           v49,
           v50) >= 0 )
    {
      v57 = 0LL;
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v57);
      if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(this, v58, &v57) >= 0 )
      {
        v56 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56);
        if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(this, &v56) >= 0 )
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, char *, _QWORD, _DWORD, int, int))(*(_QWORD *)v56 + 24LL))(
            v56,
            v57,
            (char *)this + 248,
            0LL,
            *((_DWORD *)v2 + 6),
            2,
            0xFFFF);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56);
      }
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v57);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v58);
  }
}
