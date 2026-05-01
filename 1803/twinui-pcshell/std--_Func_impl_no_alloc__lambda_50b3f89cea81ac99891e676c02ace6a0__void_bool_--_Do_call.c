/*
 * XREFs of std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call @ 0x18003A320
 * Callers:
 *     ?ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z @ 0x1800363D0 (-ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z.c)
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18004EF60 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?VisibilityChanged@ViewWrapperBase@@UEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180051350 (-VisibilityChanged@ViewWrapperBase@@UEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?v_OnViewVisibilityChanged@UAPViewWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18005B330 (-v_OnViewVisibilityChanged@UAPViewWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18005B694 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x18008E184 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c999dea8893325250a33bf4039428575___ @ 0x18000F0BC (Windows--Internal--ComTaskPool--QueueTask__lambda_c999dea8893325250a33bf4039428575___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_33ae1f57d3bf46c1270e08142e9d9c0c___ @ 0x18003A420 (Windows--Internal--ComTaskPool--QueueTask__lambda_33ae1f57d3bf46c1270e08142e9d9c0c___.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call(
        __int64 a1,
        char *a2)
{
  char v2; // si
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *a2 && !*(_BYTE *)(v3 + 509) )
  {
    *(_BYTE *)(v3 + 509) = 1;
    v10 = *(_QWORD *)(v3 + 264);
    Windows::Internal::ComTaskPool::QueueTask__lambda_c999dea8893325250a33bf4039428575___(
      a1,
      (__int64)a2,
      *(_DWORD *)(v3 + 184),
      &v10);
  }
  if ( v3 )
  {
    v4 = v3 + 32;
    v10 = v3 + 32;
    v5 = v3 + 32;
    if ( v3 == -32 )
      goto LABEL_8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v3 + 32);
  }
  else
  {
    v4 = 0LL;
    v10 = 0LL;
  }
  v5 = v4;
LABEL_8:
  v7 = v3;
  v8 = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v9 = v2;
  ((void (__fastcall *)(__int64, char *, _QWORD, __int64 *, __int64))Windows::Internal::ComTaskPool::QueueTask__lambda_33ae1f57d3bf46c1270e08142e9d9c0c___)(
    a1,
    a2,
    *(unsigned int *)(v3 + 184),
    &v7,
    -2LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
}
