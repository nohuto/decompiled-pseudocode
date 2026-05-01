/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9___ @ 0x1802EB698
 * Callers:
 *     ?Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z @ 0x1802EC470 (-Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAA@XZ @ 0x1802970DC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  unsigned int v9; // ebx

  *a4 = 0LL;
  v4 = 0LL;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>(v6);
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v8;
    *v8 = off_18034A050;
    v8[3] = 0LL;
    v7 = v8;
    v8 = 0LL;
  }
  if ( v8 )
    operator delete(v8);
  v9 = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
  {
    v9 = (**v4)(v4, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a4);
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  }
  return v9;
}
