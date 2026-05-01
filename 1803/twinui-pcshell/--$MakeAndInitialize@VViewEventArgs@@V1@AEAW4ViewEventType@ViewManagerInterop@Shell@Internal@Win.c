/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgs@@V1@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgs@@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x1800872D0
 * Callers:
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18003220C (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1801D7774 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VViewEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x180087388 (-InternalRelease@-$ComPtr@VViewEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0ViewEventArgs@@QEAA@XZ @ 0x1800874DC (--0ViewEventArgs@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008F428 (--4-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrope.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgs,ViewEventArgs,enum Windows::Internal::Shell::ViewManagerInterop::ViewEventType &,Windows::Foundation::Collections::IPropertySet * &>(
        ViewEventArgs **a1,
        int *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  ViewEventArgs *v7; // rax
  ViewEventArgs *v8; // rax
  int v9; // ecx
  ViewEventArgs *v10; // rdi
  __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  ViewEventArgs *v15; // [rsp+40h] [rbp+8h] BYREF
  ViewEventArgs *v16; // [rsp+58h] [rbp+20h]

  v3 = 0;
  *a1 = 0LL;
  v7 = (ViewEventArgs *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v7;
  if ( v7 )
  {
    v8 = ViewEventArgs::ViewEventArgs(v7);
    v9 = *a2;
    v10 = v8;
    v11 = *a3;
    v15 = v8;
    *((_DWORD *)v8 + 12) = v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::operator=((char *)v8 + 56, v11);
    v12 = *((_QWORD *)v10 + 10);
    while ( v12 >= 0 )
    {
      if ( (_DWORD)v12 != 0x7FFFFFFF )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 10, v12 + 1, v12);
        if ( v13 != v12 )
          continue;
      }
      goto LABEL_9;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v12 + 16));
LABEL_9:
    *a1 = v10;
    Microsoft::WRL::ComPtr<ViewEventArgs>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
