/*
 * XREFs of ?_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z @ 0x18027CFB4
 * Callers:
 *     ?ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x18027C0B0 (-ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x18027CE60 (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall SwitchItemFilteredCollection::_ItemMeetsFilterCriteria(
        struct IUnknown **this,
        struct IObservableItem *a2)
{
  bool v3; // di
  CWinRTApplicationView *v5; // rbx
  struct IUnknown *v6; // rcx
  const WCHAR *v7; // rbx
  LPCWSTR *v8; // rax
  struct IUnknown *v10; // [rsp+68h] [rbp+38h] BYREF
  __int64 v11; // [rsp+70h] [rbp+40h] BYREF
  CWinRTApplicationView *v12; // [rsp+78h] [rbp+48h] BYREF

  v11 = 0LL;
  v3 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  if ( (**(int (__fastcall ***)(struct IObservableItem *, GUID *, __int64 *))a2)(
         a2,
         &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
         &v11) >= 0 )
  {
    (*(void (__fastcall **)(__int64, CWinRTApplicationView **))(*(_QWORD *)v11 + 24LL))(v11, &v12);
    v3 = 1;
    if ( this[25] )
    {
      v5 = v12;
      v10 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v10);
      if ( (*(int (__fastcall **)(CWinRTApplicationView *, struct IUnknown **))(*(_QWORD *)v5 + 80LL))(v5, &v10) >= 0 )
        v3 = (unsigned int)SHIsSameObject(v10, this[25]) != 0;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v10);
      if ( !v3 )
        goto LABEL_15;
    }
    v6 = this[26];
    if ( v6 )
    {
      if ( ((int (__fastcall *)(struct IUnknown *, CWinRTApplicationView *, struct IUnknown **))v6->lpVtbl[1].QueryInterface)(
             v6,
             v12,
             &v10) >= 0
        && (_DWORD)v10 )
      {
        v3 = 1;
        goto LABEL_12;
      }
      v3 = 0;
    }
    if ( !v3 )
    {
LABEL_15:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
      goto LABEL_16;
    }
LABEL_12:
    v7 = (const WCHAR *)this[28];
    if ( v7 && *v7 )
    {
      v8 = (LPCWSTR *)(*(__int64 (__fastcall **)(struct IObservableItem *))(*(_QWORD *)a2 + 24LL))(a2);
      v3 = FindStringOrdinal(0x400000u, *v8, -1, v7, -1, 1) >= 0;
    }
    goto LABEL_15;
  }
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v3;
}
