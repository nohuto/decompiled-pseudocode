/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___ @ 0x1802EFFC4
 * Callers:
 *     ?AnimateMinimizedSwitchItem@MultitaskingViewInvocationAnimationCoordinator@@MEAAXPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180297120 (-AnimateMinimizedSwitchItem@MultitaskingViewInvocationAnimationCoordinator@@MEAAXPEAUISwitchItem.c)
 *     ?BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ @ 0x180298090 (-BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ.c)
 *     ?AnimateMinimizedSwitchItem@MultitaskingViewDismissalAnimationCoordinator@@MEAAXPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180299820 (-AnimateMinimizedSwitchItem@MultitaskingViewDismissalAnimationCoordinator@@MEAAXPEAUISwitchItemE.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802F3BD0 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAA@XZ @ 0x1802970DC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // rbx
  unsigned int v10; // ebx

  *a4 = 0LL;
  v4 = 0LL;
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>(v7);
    *v9 = off_18034A478;
    v9[3] = a3;
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    v8 = v9;
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v9;
    v9 = 0LL;
  }
  if ( v9 )
    operator delete(v9);
  v10 = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    v10 = (**v4)(v4, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a4);
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  }
  return v10;
}
