/*
 * XREFs of ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004108
 * Callers:
 *     ?_com_issue_error@@YAXJ@Z @ 0x180004D30 (-_com_issue_error@@YAXJ@Z.c)
 *     ?AddThumbnailEventHandler@ThumbnailInteropDevice@@UEAAJPEAUIThumbnailEvents@@@Z @ 0x180166B50 (-AddThumbnailEventHandler@ThumbnailInteropDevice@@UEAAJPEAUIThumbnailEvents@@@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180003DD0 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::in1diag3::Throw_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // esi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  v6 = (unsigned int)a2;
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(0LL, (unsigned int)a4);
  wil::details::ReportFailure_Hr((__int64)this, v6, a3, 0LL, 0LL, retaddr, 0, v4);
}
