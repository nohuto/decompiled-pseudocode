/*
 * XREFs of ?ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x18027C0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z @ 0x18027CFB4 (-_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z.c)
 *     ?_RegisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z @ 0x18027D11C (-_RegisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x180286AA8 (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 */

void __fastcall SwitchItemFilteredCollection::ItemAdded(
        SwitchItemFilteredCollection *this,
        struct IObservableObjectArray *a2,
        struct IObservableItem *a3)
{
  SwitchItemFilteredCollection *v3; // rsi
  int v6; // ebx
  __int64 v7; // r8
  struct IObservableItem *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (SwitchItemFilteredCollection *)((char *)this - 144);
  if ( *((_BYTE *)this + 104) )
    SwitchItemFilteredCollection::_RegisterItemForTitleChanges((SwitchItemFilteredCollection *)((char *)this - 144), a3);
  if ( SwitchItemFilteredCollection::_ItemMeetsFilterCriteria(v3, a3) )
  {
    v6 = *((_DWORD *)this + 27);
    v8 = a3;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v8);
    v7 = 2LL;
    if ( v6 <= 0 )
      v7 = 0LL;
    ObservableObjectArray::_AddItem(v3, &v8, v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
}
