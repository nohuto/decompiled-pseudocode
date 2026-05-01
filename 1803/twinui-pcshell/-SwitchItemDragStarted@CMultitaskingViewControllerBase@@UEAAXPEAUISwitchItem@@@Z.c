/*
 * XREFs of ?SwitchItemDragStarted@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x18028D410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewControllerBase::SwitchItemDragStarted(
        CMultitaskingViewControllerBase *this,
        struct ISwitchItem *a2)
{
  char v4; // al
  __int64 v5; // rbx
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  CWinRTApplicationView *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(CMultitaskingViewControllerBase *))(*(_QWORD *)this + 32LL))(this);
  if ( *((_QWORD *)this + 6) )
  {
    if ( (v4 & 2) != 0 )
    {
      v8 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
      (**(void (__fastcall ***)(struct ISwitchItem *, GUID *, __int64 *))a2)(
        a2,
        &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
        &v8);
      v5 = v8;
      v6 = *((_QWORD *)this + 6);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)this + 7);
      v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, CWinRTApplicationView **))(*(_QWORD *)v5 + 24LL))(v5, &v9);
      (*(void (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v6 + 32LL))(v6, *v7, (char *)this + 56);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    }
  }
}
