/*
 * XREFs of std::_Find_if_unchecked_std::shared_ptr_KBViewInfo__const_____ptr64__lambda_42a747e7d0186b6968b291f71e865691___ @ 0x18023B4F8
 * Callers:
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18023D32C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@She.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F78A0 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD **__fastcall std::_Find_if_unchecked_std::shared_ptr_KBViewInfo__const_____ptr64__lambda_42a747e7d0186b6968b291f71e865691___(
        _QWORD **a1,
        _QWORD **a2,
        __int64 a3)
{
  _QWORD **i; // rdi
  bool v6; // si
  int v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  for ( i = a1; i != a2; i += 2 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
      *i,
      &v10);
    v9 = 0;
    v8 = 0;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 48LL))(v10, &v9);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 48LL))(a3, &v8);
    v6 = !*((_BYTE *)*i + 32) && v9 == v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( v6 )
      break;
  }
  return i;
}
