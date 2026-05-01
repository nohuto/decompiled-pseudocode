/*
 * XREFs of ?CreateChainLinkTo@ApplicationViewBackedViewHostItem@@UEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BB9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateOrGetModalLink@ApplicationViewBackedViewHostItem@@UEAAJPEAPEAUIModalLink@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BBAE0 (-CreateOrGetModalLink@ApplicationViewBackedViewHostItem@@UEAAJPEAPEAUIModalLink@Holographic@Shel.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationViewBackedViewHostItem::CreateChainLinkTo(
        ApplicationViewBackedViewHostItem *this,
        struct Windows::Internal::Shell::Holographic::IViewHostItem *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int ModalLink; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Internal::Shell::Holographic::IModalLink *v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Holographic::IViewHostItem *, __int64 *))(*(_QWORD *)a2 + 176LL))(
         a2,
         &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    ModalLink = ApplicationViewBackedViewHostItem::CreateOrGetModalLink(this, &v9);
    v5 = ModalLink;
    if ( ModalLink >= 0 )
    {
      (*(void (__fastcall **)(__int64, struct Windows::Internal::Shell::Holographic::IModalLink *))(*(_QWORD *)v10 + 48LL))(
        v10,
        v9);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)ModalLink);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v5;
}
