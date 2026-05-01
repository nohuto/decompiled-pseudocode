/*
 * XREFs of ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180031B50
 * Callers:
 *     ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180051D30 (-ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@P.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x180031A34 (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 *     ?get_AppUserModelId@ViewWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18004FCB0 (-get_AppUserModelId@ViewWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetWindow@ViewWrapperBase@@UEAAPEAUHWND__@@XZ @ 0x180050B10 (-GetWindow@ViewWrapperBase@@UEAAPEAUHWND__@@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008F428 (--4-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrope.c)
 *     ?Step@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ @ 0x180092668 (-Step@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ.c)
 *     ??4?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180092A88 (--4-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_eaf4aa4ef6c2d6c3d4158ecad1bd325c___ @ 0x180093070 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_eaf4aa4ef6c2d6c3d4158ecad1bd325c___.c)
 *     ?GetPendingActivationTaskCompletionTimeout@ViewEventDispatcher@@CAKXZ @ 0x180093180 (-GetPendingActivationTaskCompletionTimeout@ViewEventDispatcher@@CAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ??$PendingActivationAdd@AEA_KPEBGAEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG0@Z @ 0x180093E94 (--$PendingActivationAdd@AEA_KPEBGAEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG0@Z.c)
 *     ?SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@AEBU_GUID@@@Z @ 0x180094374 (-SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 *     ?GetNavigationRequestId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEA_K@Z @ 0x1800958C8 (-GetNavigationRequestId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHel.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??_G?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z @ 0x1800FACCC (--_G-$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z.c)
 *     ??$DroppedPendingActivation@PEBG@ViewManagerInteropTelemetry@@SAX$$QEAPEBG@Z @ 0x1801C6754 (--$DroppedPendingActivation@PEBG@ViewManagerInteropTelemetry@@SAX$$QEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall ViewEventDispatcher::QueuePendingActivation(
        RTL_SRWLOCK *this,
        struct IViewWrapperInternal *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        char a4)
{
  char *v8; // rax
  char *v9; // rbx
  unsigned __int64 *v10; // r8
  int NavigationRequestId; // eax
  unsigned int v12; // edi
  HSTRING *v13; // rdx
  __int64 (__fastcall *v14)(ViewWrapperBase *__hidden, HSTRING *); // rax
  int AppUserModelId; // eax
  PVOID Ptr; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  const struct _GUID *v19; // r8
  HWND (__fastcall *v20)(ViewWrapperBase *__hidden); // rax
  HWND Window; // rax
  HWND v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  unsigned int PendingActivationTaskCompletionTimeout; // eax
  int v27; // edx
  int v28; // ecx
  RTL_SRWLOCK *v29; // rcx
  RTL_SRWLOCK *i; // rdx
  unsigned __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rcx
  int ppv; // [rsp+28h] [rbp-49h]
  LPVOID *ppva; // [rsp+28h] [rbp-49h]
  PCWSTR StringRawBuffer; // [rsp+38h] [rbp-39h] BYREF
  LPVOID v39; // [rsp+40h] [rbp-31h] BYREF
  DWORD dwProcessId; // [rsp+48h] [rbp-29h] BYREF
  __int64 v41; // [rsp+50h] [rbp-21h] BYREF
  __int64 v42; // [rsp+58h] [rbp-19h] BYREF
  char *v43; // [rsp+60h] [rbp-11h]
  __int64 v44; // [rsp+68h] [rbp-9h]
  GUID v45; // [rsp+70h] [rbp-1h] BYREF
  __int64 v46; // [rsp+80h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v44 = -2LL;
  v8 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v8 + 1) = 0LL;
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  v43 = v9;
  if ( v9 )
  {
    *(_QWORD *)v9 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::operator=(v9 + 32, a3);
    v42 = *((_QWORD *)v9 + 4);
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v42);
    NavigationRequestId = Windows::Internal::Shell::Desktop::ViewManagerInterop::GetNavigationRequestId(
                            (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v42,
                            (struct Windows::Internal::ShellHelpers::PropertySetHelper *)(v9 + 8),
                            v10);
    v12 = NavigationRequestId;
    if ( NavigationRequestId < 0 )
    {
      v32 = (unsigned int)NavigationRequestId;
      v33 = 3234LL;
    }
    else
    {
      v13 = (HSTRING *)(v9 + 16);
      v14 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, HSTRING *))(*(_QWORD *)a2 + 56LL);
      if ( v14 == ViewWrapperBase::get_AppUserModelId )
        AppUserModelId = ViewWrapperBase::get_AppUserModelId(a2, v13);
      else
        AppUserModelId = v14(a2, v13);
      v12 = AppUserModelId;
      if ( AppUserModelId >= 0 )
      {
        v41 = 0LL;
        Ptr = this[63].Ptr;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
        if ( (*(int (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)Ptr + 48LL))(Ptr, &v41) >= 0 )
        {
          v45 = GUID_NULL;
          if ( (*(int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v41 + 32LL))(v41, &v45) >= 0 )
            Windows::Internal::Shell::Desktop::ViewManagerInterop::SetActivationVirtualDesktopId(
              (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v42,
              (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v45,
              v19);
        }
        if ( a4 )
        {
          AcquireSRWLockShared(this + 37);
          StringRawBuffer = (PCWSTR)&this[37];
          v20 = *(HWND (__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)a2 + 648LL);
          if ( v20 == ViewWrapperBase::GetWindow )
            Window = ViewWrapperBase::GetWindow(a2);
          else
            Window = v20(a2);
          v22 = Window;
          if ( this != (RTL_SRWLOCK *)-296LL )
            ReleaseSRWLockShared(this + 37);
          v39 = 0LL;
          dwProcessId = 0;
          if ( GetWindowThreadProcessId(v22, &dwProcessId) )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v39);
            if ( CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &v39) >= 0
              && (*(int (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)v39 + 24LL))(v39, dwProcessId, 0x100000LL) >= 0 )
            {
              Microsoft::WRL::ComPtr<IOSTaskCompletion>::operator=(v9 + 24, &v39);
              LOBYTE(v23) = 3;
              wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v24, v23);
              v25 = *((_QWORD *)v9 + 1);
              StringRawBuffer = (PCWSTR)this;
              Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(&StringRawBuffer);
              *(_QWORD *)&v45.Data1 = this;
              *(_QWORD *)v45.Data4 = this;
              Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(v45.Data4);
              v46 = v25;
              PendingActivationTaskCompletionTimeout = ViewEventDispatcher::GetPendingActivationTaskCompletionTimeout();
              Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_eaf4aa4ef6c2d6c3d4158ecad1bd325c___(
                v28,
                v27,
                this[36].Ptr,
                PendingActivationTaskCompletionTimeout,
                (__int64)ppva,
                (__int64)&v45);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v45.Data4);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&StringRawBuffer);
            }
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v39);
        }
        LOBYTE(v17) = 3;
        wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v18, v17);
        AcquireSRWLockExclusive(this + 37);
        v39 = &this[37];
        v29 = this + 70;
        for ( i = (RTL_SRWLOCK *)this[70].Ptr; i; i = (RTL_SRWLOCK *)i->Ptr )
          v29 = i;
        v29->Ptr = v9;
        ++this[69].Ptr;
        StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)v9 + 2), 0LL);
        ViewManagerInteropTraceLogging::PendingActivationAdd<unsigned __int64 &,unsigned short const *,unsigned __int64 &>(
          v9 + 8,
          &StringRawBuffer,
          &this[69]);
        v9 = 0LL;
        v43 = 0LL;
        while ( this[69].Ptr > (PVOID)0x80 )
        {
          v45 = (GUID)(unsigned __int64)&this[70];
          if ( !(unsigned int)CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Step(&v45) )
            break;
          v34 = *(_QWORD *)v45.Data4;
          v35 = *(_QWORD *)v45.Data4 + 8LL;
          if ( !*(_QWORD *)v45.Data4 )
            v35 = 0LL;
          StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v35 + 8), 0LL);
          ViewManagerInteropTelemetry::DroppedPendingActivation<unsigned short const *>(&StringRawBuffer);
          ViewEventDispatcher::_QueuePendingActivationNodeForDestruction((__int64)this, v34);
        }
        if ( this != (RTL_SRWLOCK *)-296LL )
          ReleaseSRWLockExclusive(this + 37);
        v12 = 0;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
        goto LABEL_27;
      }
      v32 = (unsigned int)AppUserModelId;
      v33 = 3237LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v32,
      ppv);
LABEL_27:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
    goto LABEL_28;
  }
  v12 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC99,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)0x8007000ELL,
    ppv);
LABEL_28:
  if ( v9 )
    CLinkedNode<ViewEventDispatcher::PendingActivationData>::`scalar deleting destructor'(v9);
  return v12;
}
