/*
 * XREFs of Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2_____lambda_595b6875358bb48b4963d1a32745e1c2___ @ 0x180141CF4
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1801408E0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2___::XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2___ @ 0x180141E3C (XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2___--XamlExplorerH.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2_____lambda_595b6875358bb48b4963d1a32745e1c2___(
        __int64 *a1,
        __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdi

  *a1 = 0LL;
  v4 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2___::XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2___(
           v4,
           a2);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
