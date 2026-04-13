/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_8aa6e88ffb2d8e00ca23303a2713a5ed__0__std::allocator_std::_Func_class_bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18009C600
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?push_back@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAX$$QEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x18009B368 (-push_back@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Tar.c)
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z @ 0x18009C830 (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall std::_Func_impl_std::_Callable_obj__lambda_8aa6e88ffb2d8e00ca23303a2713a5ed__0__std::allocator_std::_Func_class_bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, _QWORD *))
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  const wchar_t *StringRawBuffer; // rax
  unsigned __int64 v9; // rax
  HSTRING string; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v12[2]; // [rsp+28h] [rbp-58h] BYREF
  void *v13[3]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v12[1] = -2LL;
  v3 = *a2;
  v12[0] = 0LL;
  v4 = (**v3)(v3, &GUID_9be3b1e0_66b3_4cf5_b034_7d2a2db8132a, v12);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_9;
  }
  v5 = v12[0];
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v5 + 56LL))(v5, &string);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0xC1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x18009C746LL);
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v9 = CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(
         (CreativeFramework::TargetedContentLayoutHelpers::Tile *)v13,
         StringRawBuffer);
  std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::push_back(
    (unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 64LL),
    v9);
  if ( v14 >= 8 )
    operator delete(v13[0]);
  v14 = 7LL;
  v13[2] = 0LL;
  LOWORD(v13[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  return 1;
}
