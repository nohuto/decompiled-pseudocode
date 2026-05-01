/*
 * XREFs of ?_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ @ 0x18028D688
 * Callers:
 *     ?OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z @ 0x180284B70 (-OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z.c)
 *     ?DismissViewNoAnimate@CMultitaskingViewControllerBase@@UEAAXXZ @ 0x18028C8D0 (-DismissViewNoAnimate@CMultitaskingViewControllerBase@@UEAAXXZ.c)
 *     ?OnDisplayChange@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@@Z @ 0x18028CDB0 (-OnDisplayChange@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x18028C6C8 (--1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

void __fastcall CMultitaskingViewControllerBase::_DismissView(CMultitaskingViewControllerBase *this)
{
  __int64 v2; // rax
  __int64 v3[2]; // [rsp+28h] [rbp-10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  CMultitaskingViewControllerBase *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 24);
  v3[0] = 0LL;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v3);
  v3[0] = 0LL;
  *((_WORD *)this + 52) = 1;
  v2 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  v4 = v2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v3);
  CMultitaskingViewControllerBase::BatchDismissView::~BatchDismissView(&v5);
}
