/*
 * XREFs of ?_FindExistingItem@SwitchItemCollection@@AEAA?AV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18027A38C
 * Callers:
 *     ?GetItemForView@SwitchItemCollection@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x180279BB0 (-GetItemForView@SwitchItemCollection@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x18027A488 (-_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18027A4FC (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x18027A5A0 (-_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

CWinRTApplicationView **__fastcall SwitchItemCollection::_FindExistingItem(
        __int64 a1,
        CWinRTApplicationView **a2,
        __int64 a3)
{
  int v3; // esi
  CWinRTApplicationView **v6; // rbx
  CWinRTApplicationView **v7; // r15
  bool v8; // r14
  CWinRTApplicationView *v9; // rbx
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  CWinRTApplicationView *v12; // [rsp+58h] [rbp+38h] BYREF

  v3 = 0;
  LODWORD(v11) = 0;
  *a2 = 0LL;
  v6 = *(CWinRTApplicationView ***)(a1 + 24);
  v7 = &v6[*(_QWORD *)(a1 + 32)];
  while ( v6 != v7 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v8 = 0;
    if ( (**(int (__fastcall ***)(CWinRTApplicationView *, GUID *, __int64 *))*v6)(
           *v6,
           &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
           &v11) >= 0 )
    {
      v3 |= 1u;
      if ( *(_QWORD *)(*(__int64 (__fastcall **)(__int64, CWinRTApplicationView **))(*(_QWORD *)v11 + 24LL))(v11, &v12) == a3 )
        v8 = 1;
    }
    if ( (v3 & 1) != 0 )
    {
      v3 &= ~1u;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
    }
    if ( v8 )
    {
      v9 = *v6;
      if ( *a2 != v9 )
      {
        v12 = v9;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v12);
        v12 = *a2;
        *a2 = v9;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      return a2;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    ++v6;
  }
  return a2;
}
