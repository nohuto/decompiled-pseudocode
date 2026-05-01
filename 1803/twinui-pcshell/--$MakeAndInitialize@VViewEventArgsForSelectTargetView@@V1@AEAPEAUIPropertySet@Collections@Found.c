/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForSelectTargetView@@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800041E0
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000428C (-InternalRelease@-$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0ViewEventArgsForSelectTargetView@@QEAA@XZ @ 0x180004550 (--0ViewEventArgsForSelectTargetView@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008F428 (--4-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrope.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForSelectTargetView,ViewEventArgsForSelectTargetView,Windows::Foundation::Collections::IPropertySet * &>(
        ViewEventArgsForSelectTargetView **a1,
        __int64 *a2)
{
  unsigned int v2; // ebx
  ViewEventArgsForSelectTargetView *v5; // rax
  ViewEventArgsForSelectTargetView *v6; // rax
  __int64 v7; // rdx
  ViewEventArgsForSelectTargetView *v8; // rdi
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  ViewEventArgsForSelectTargetView *v12; // [rsp+40h] [rbp+8h] BYREF
  ViewEventArgsForSelectTargetView *v13; // [rsp+50h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v5 = (ViewEventArgsForSelectTargetView *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v5;
  if ( v5 )
  {
    v6 = ViewEventArgsForSelectTargetView::ViewEventArgsForSelectTargetView(v5);
    v7 = *a2;
    v8 = v6;
    v12 = v6;
    *((_DWORD *)v6 + 12) = 1;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::operator=((char *)v6 + 56, v7);
    v9 = *((_QWORD *)v8 + 11);
    while ( v9 >= 0 )
    {
      if ( (_DWORD)v9 != 0x7FFFFFFF )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 11, v9 + 1, v9);
        if ( v10 != v9 )
          continue;
      }
      goto LABEL_9;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v9 + 16));
LABEL_9:
    *a1 = v8;
    Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::InternalRelease(&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
