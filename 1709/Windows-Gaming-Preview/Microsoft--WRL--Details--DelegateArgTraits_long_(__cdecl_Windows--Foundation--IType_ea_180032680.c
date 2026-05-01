/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::UnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64__Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____ptr64___::_)(WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_aef633c7e7a39241655d515b2f17cdcc___1_WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____ptr64_::Invoke @ 0x180032680
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800142F0 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::UnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64__Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____ptr64___::___WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_aef633c7e7a39241655d515b2f17cdcc___1_WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____ptr64_::Invoke(
        __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v15 = 0LL;
  v2 = *(_QWORD *)(a1 + 72);
  if ( !v2 )
    return 0;
  v3 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
         v2,
         &GUID_735924d3_811f_4494_b69c_c641a0c61543,
         &v15);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( v15 )
    {
      v6 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 80) + 176LL);
      EnterCriticalSection(v6);
      v7 = *(_QWORD *)(a1 + 80);
      v8 = *(_QWORD *)(v7 + 216);
      if ( v8 )
      {
        *(_QWORD *)(v7 + 216) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      v9 = *(_QWORD *)(a1 + 80);
      v10 = *(_QWORD *)(v9 + 224);
      if ( v10 )
      {
        *(_QWORD *)(v9 + 224) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( v6 )
        LeaveCriticalSection(v6);
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 232LL);
      if ( v11 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, v15);
      v12 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v4 = 0;
      goto LABEL_17;
    }
    return 0;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x21A,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v3);
  v5 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
LABEL_17:
  if ( v4 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v4);
  return (unsigned int)v4;
}
