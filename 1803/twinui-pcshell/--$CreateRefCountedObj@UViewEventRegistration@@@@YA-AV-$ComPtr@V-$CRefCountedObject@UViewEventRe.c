/*
 * XREFs of ??$CreateRefCountedObj@UViewEventRegistration@@@@YA?AV?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@XZ @ 0x1801C66D8
 * Callers:
 *     ?RegisterForViewEventsWithOptions@ViewEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1801CC950 (-RegisterForViewEventsWithOptions@ViewEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWr.c)
 *     ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1801D7E10 (-RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIView.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

__int64 *__fastcall CreateRefCountedObj<ViewEventRegistration>(__int64 *a1)
{
  char *v2; // rax
  _QWORD *v3; // rdi

  v2 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2 + 8, 0, 0x28uLL);
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[4] = 0LL;
    *((_DWORD *)v3 + 12) = 0;
    *v3 = &CRefCountedObject<ViewEventRegistration>::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = (__int64)v3;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1);
  return a1;
}
