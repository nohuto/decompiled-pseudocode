/*
 * XREFs of ?GetRootThumbnail@CMultitaskingViewFrame@@UEAAJPEAPEAUIDCompThumbnail@@@Z @ 0x180282280
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIFrameElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFrameElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802807DC (--$As@UIFrameElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

__int64 __fastcall CMultitaskingViewFrame::GetRootThumbnail(CMultitaskingViewFrame *this, struct IDCompThumbnail **a2)
{
  _QWORD *v2; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (_QWORD *)((char *)this + 2504);
  if ( *v2 )
  {
    v9 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IFrameElement>(v2, &v9);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, struct IDCompThumbnail **))(*(_QWORD *)v9 + 40LL))(v9, a2);
      v4 = v5;
      if ( v5 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
        return v4;
      }
      v6 = 697LL;
    }
    else
    {
      v6 = 696LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_8;
  }
  v4 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B5,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
    (const char *)0x8007139FLL);
  return v4;
}
