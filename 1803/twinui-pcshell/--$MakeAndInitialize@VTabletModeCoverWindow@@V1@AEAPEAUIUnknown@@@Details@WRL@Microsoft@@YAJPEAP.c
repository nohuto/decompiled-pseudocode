/*
 * XREFs of ??$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeCoverWindow@@AEAPEAUIUnknown@@@Z @ 0x1802E1550
 * Callers:
 *     ?CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E1944 (-CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TabletModeCoverWindow@@QEAA@XZ @ 0x1802E15D8 (--0TabletModeCoverWindow@@QEAA@XZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@@UISwitchItem@@UISwitchItemInternal@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E24CC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E24CC.c)
 *     ?InternalRelease@?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x1802E24D8 (-InternalRelease@-$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z @ 0x1802E2630 (-RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModeCoverWindow,TabletModeCoverWindow,IUnknown * &>(
        TabletModeCoverWindow **a1,
        IUnknown **a2)
{
  TabletModeCoverWindow *v4; // rax
  int v5; // ebx
  TabletModeCoverWindow *v6; // rax
  IUnknown *v7; // rdx
  TabletModeCoverWindow *v8; // rdi
  TabletModeCoverWindow *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (TabletModeCoverWindow *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = TabletModeCoverWindow::TabletModeCoverWindow(v4);
    v7 = *a2;
    v8 = v6;
    v10 = v6;
    v5 = TabletModeCoverWindow::RuntimeClassInitialize(v6, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableItem,ISwitchItem,ISwitchItemInternal>::InternalAddRef(v8);
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
