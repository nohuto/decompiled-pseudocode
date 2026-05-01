/*
 * XREFs of ??_E?$CAnimationCallbackHandler@V_lambda_e855345159ffcf8e8cf911d9c3e7f6ed_@@V_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_@@@DCompThumbnailHelpers@@UEAAPEAXI@Z @ 0x1802F0870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall DCompThumbnailHelpers::CAnimationCallbackHandler<_lambda_e855345159ffcf8e8cf911d9c3e7f6ed_,_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_>::`vector deleting destructor'(
        __int64 *Block,
        char a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 5);
  v4 = Block[3];
  if ( v4 )
  {
    Block[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
