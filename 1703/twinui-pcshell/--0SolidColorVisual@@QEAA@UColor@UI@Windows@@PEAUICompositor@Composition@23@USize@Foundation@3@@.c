/*
 * XREFs of ??0SolidColorVisual@@QEAA@UColor@UI@Windows@@PEAUICompositor@Composition@23@USize@Foundation@3@@Z @ 0x18016A72C
 * Callers:
 *     ??$Make@VSolidColorVisual@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@34@AEAUSize@Foundation@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSolidColorVisual@@@12@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@56@AEAUSize@Foundation@6@@Z @ 0x18016AAEC (--$Make@VSolidColorVisual@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@34@AEAUSize@Foun.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIVisual@Composition@UI@Windows@@@?$com_ptr_t@UISpriteVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18016A148 (--$query@UIVisual@Composition@UI@Windows@@@-$com_ptr_t@UISpriteVisual@Composition@UI@Windows@@Ue.c)
 *     ??$query@UICompositionBrush@Composition@UI@Windows@@@?$com_ptr_t@UICompositionColorBrush@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UICompositionBrush@Composition@UI@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18016AA4C (--$query@UICompositionBrush@Composition@UI@Windows@@@-$com_ptr_t@UICompositionColorBrush@Composi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall SolidColorVisual::SolidColorVisual(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  int v11; // eax
  __m128 v12; // xmm6
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h]
  _QWORD v19[3]; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF

  v19[1] = -2LL;
  v18 = a4;
  a1[3] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::IDuplicateVisual,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Internal::ComposableShell::IDuplicateVisual'};
  a1[1] = &SolidColorVisual::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *a1 = &SolidColorVisual::`vftable'{for `Windows::Internal::ComposableShell::IDuplicateVisual'};
  a1[1] = &SolidColorVisual::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
  a1[4] = 0LL;
  v17 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a3 + 64LL))(a3, a2, &v17);
  if ( v7 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\solidcolorvisual.cpp",
      (const char *)(unsigned int)v7);
  v16 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 176LL))(a3, &v16);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1A,
      (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\solidcolorvisual.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = v16;
  v10 = (_QWORD *)wil::com_ptr_t<Windows::UI::Composition::ICompositionColorBrush,wil::err_exception_policy>::query<Windows::UI::Composition::ICompositionBrush>(
                    &v17,
                    v19);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 56LL))(v9, *v10);
  if ( v11 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\solidcolorvisual.cpp",
      (const char *)(unsigned int)v11);
  if ( v19[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19[0] + 16LL))(v19[0]);
  v12 = (__m128)HIDWORD(v18);
  wil::com_ptr_t<Windows::UI::Composition::ISpriteVisual,wil::err_exception_policy>::query<Windows::UI::Composition::IVisual>(
    &v16,
    (__int64)&v21);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 288LL))(
    v21,
    _mm_unpacklo_ps((__m128)(unsigned int)v18, v12).m128_u64[0]);
  v13 = a1[4];
  v14 = v21;
  a1[4] = v21;
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v14 = v21;
  }
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = v21;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return a1;
}
