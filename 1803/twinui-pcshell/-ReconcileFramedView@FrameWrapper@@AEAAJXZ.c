/*
 * XREFs of ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x18013362C
 * Callers:
 *     ?PrepareFrameForDestroy@FrameWrapper@@UEAAJXZ @ 0x1801332D0 (-PrepareFrameForDestroy@FrameWrapper@@UEAAJXZ.c)
 *     ?PresentFramedView@FrameWrapper@@UEAAJXZ @ 0x1801333B0 (-PresentFramedView@FrameWrapper@@UEAAJXZ.c)
 *     ?SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z @ 0x180133910 (-SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSystemVisual@FrameWrapper@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180133F90 (-SetSystemVisual@FrameWrapper@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIFramedViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFramedViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F78DC (--$As@UIFramedViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 */

__int64 __fastcall FrameWrapper::ReconcileFramedView(FrameWrapper *this)
{
  _QWORD *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = (_QWORD *)((char *)this + 72);
  if ( *v2
    && (int)Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<IFramedViewWrapper>(
              v2,
              &v7) >= 0
    && (v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, *((_QWORD *)this + 8)),
        v4 = v3,
        v3 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14A,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v3);
  }
  else
  {
    v4 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return v4;
}
