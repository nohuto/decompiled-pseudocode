/*
 * XREFs of ??0ThumbnailInteropVisual@@QEAA@PEAUIThumbnailDeviceInternal@@PEAUIThumbnailFactoryInternal@@PEAUHWND__@@PEAURect@Foundation@Windows@@PEAUICompositor@Composition@UI@6@USize@56@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18016950C
 * Callers:
 *     ??$Make@VThumbnailInteropVisual@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@7@AEAUSize@67@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VThumbnailInteropVisual@@@12@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@9@AEAUSize@89@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18016A528 (--$Make@VThumbnailInteropVisual@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryIntern.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateThumbnail@ThumbnailInteropVisual@@AEAA?AUThumbnailData@@PEAUICompositor@Composition@UI@Windows@@PEAUIThumbnailDeviceInternal@@PEAUHWND__@@PEAURect@Foundation@6@USize@Foundation@6@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180169C24 (-CreateThumbnail@ThumbnailInteropVisual@@AEAA-AUThumbnailData@@PEAUICompositor@Composition@UI@Wi.c)
 *     ??$com_query@UIDCompositionDesktopDevicePartner@@AEAPEAUICompositor@Composition@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UIDCompositionDesktopDevicePartner@@Uerr_exception_policy@wil@@@0@AEAPEAUICompositor@Composition@UI@Windows@@@Z @ 0x18016A0F8 (--$com_query@UIDCompositionDesktopDevicePartner@@AEAPEAUICompositor@Composition@UI@Windows@@@wil.c)
 *     ??$query@UIVisual@Composition@UI@Windows@@@?$com_ptr_t@UISpriteVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18016A148 (--$query@UIVisual@Composition@UI@Windows@@@-$com_ptr_t@UISpriteVisual@Composition@UI@Windows@@Ue.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
RTL_SRWLOCK *__fastcall ThumbnailInteropVisual::ThumbnailInteropVisual(
        RTL_SRWLOCK *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  HTHUMBNAIL *p_Ptr; // rsi
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  void **v16; // rax
  void *v17; // rdx
  PVOID Ptr; // rcx
  HTHUMBNAIL v19; // r12
  HTHUMBNAIL v20; // r15
  DWORD LastError; // ebx
  void *v22; // rax
  PVOID v23; // rcx
  PVOID v24; // rbx
  __int64 v26; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v27[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v28; // [rsp+60h] [rbp-20h] BYREF
  int v29; // [rsp+68h] [rbp-18h]
  HTHUMBNAIL hThumbnailId; // [rsp+70h] [rbp-10h] BYREF
  void *v31; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v27[1] = -2LL;
  a1[3].Ptr = (PVOID)1;
  a1->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::IDuplicateVisual,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Internal::ComposableShell::IDuplicateVisual'};
  a1[1].Ptr = &SolidColorVisual::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  a1->Ptr = &ThumbnailInteropVisual::`vftable'{for `Windows::Internal::ComposableShell::IDuplicateVisual'};
  a1[1].Ptr = &SolidColorVisual::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
  p_Ptr = &a1[4].Ptr;
  a1[4].Ptr = 0LL;
  a1[5].Ptr = 0LL;
  a1[6].Ptr = 0LL;
  a1[7].Ptr = 0LL;
  a1[8].Ptr = 0LL;
  InitializeSRWLock(a1 + 9);
  InitializeSRWLock(a1 + 10);
  v28 = *(_QWORD *)a8;
  v29 = a8[2];
  ThumbnailInteropVisual::CreateThumbnail(v13, &hThumbnailId, a6, a2, a4, a5, a7, &v28);
  wil::com_query<IDCompositionDesktopDevicePartner,Windows::UI::Composition::ICompositor * &>(v27, &a6);
  v26 = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v27[0] + 48LL))(v27[0], &v26);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\visual.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v15 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD, _QWORD))(*(_QWORD *)v26 + 128LL))(v26, v31, 0LL, 0LL);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\visual.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  v16 = (void **)wil::com_ptr_t<Windows::UI::Composition::ISpriteVisual,wil::err_exception_policy>::query<Windows::UI::Composition::IVisual>(
                   &v26,
                   &a8);
  v17 = *v16;
  *v16 = 0LL;
  Ptr = a1[6].Ptr;
  a1[6].Ptr = v17;
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  if ( a8 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a8 + 16LL))(a8);
  if ( p_Ptr != &hThumbnailId )
  {
    v19 = hThumbnailId;
    v20 = *p_Ptr;
    if ( (char *)*p_Ptr - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      LastError = GetLastError();
      DwmUnregisterThumbnail(v20);
      SetLastError(LastError);
    }
    *p_Ptr = v19;
    hThumbnailId = 0LL;
  }
  v22 = v31;
  v31 = 0LL;
  v23 = a1[5].Ptr;
  a1[5].Ptr = v22;
  if ( v23 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v23 + 16LL))(v23);
  v24 = a1[7].Ptr;
  a1[7].Ptr = a3;
  if ( a3 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v24 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v24 + 16LL))(v24);
  (*(void (__fastcall **)(PVOID, HTHUMBNAIL))(*(_QWORD *)a1[7].Ptr + 24LL))(a1[7].Ptr, *p_Ptr);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v27[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
  if ( v31 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v31 + 16LL))(v31);
  if ( (char *)hThumbnailId - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    DwmUnregisterThumbnail(hThumbnailId);
  return a1;
}
