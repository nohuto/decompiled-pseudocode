/*
 * XREFs of ??1DataProviderProxy@@UEAA@XZ @ 0x1801695EC
 * Callers:
 *     ??_EDataProviderProxy@@UEAAPEAXI@Z @ 0x1801696C0 (--_EDataProviderProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Freenode@?$_List_buy@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x18016A090 (-_Freenode@-$_List_buy@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V-$allo.c)
 */

void __fastcall DataProviderProxy::~DataProviderProxy(DataProviderProxy *this)
{
  _QWORD *v2; // rdx
  _QWORD *i; // rax
  char *v4; // rcx
  char **v5; // rax
  char *v6; // rdx
  char *v7; // rcx
  char *v8; // rbx

  *(_QWORD *)this = &DataProviderProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 1) = &DataProviderProxy::`vftable'{for `IDataProviderProxy'};
  *((_DWORD *)this + 14) = 0;
  v2 = (_QWORD *)*((_QWORD *)this + 10);
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
    *(_QWORD *)(i[3] + 184LL) = 0LL;
  v4 = (char *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    std::_Deallocate(v4, (__int64)(*((_QWORD *)this + 14) - (_QWORD)v4) >> 3, 8uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  v5 = (char **)*((_QWORD *)this + 10);
  v6 = *v5;
  *v5 = (char *)v5;
  *(_QWORD *)(*((_QWORD *)this + 10) + 8LL) = *((_QWORD *)this + 10);
  v7 = (char *)*((_QWORD *)this + 10);
  *((_QWORD *)this + 11) = 0LL;
  if ( v6 != v7 )
  {
    do
    {
      v8 = *(char **)v6;
      std::_List_buy<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>::_Freenode();
      v7 = (char *)*((_QWORD *)this + 10);
      v6 = v8;
    }
    while ( v8 != v7 );
  }
  std::_Deallocate(v7, 1uLL, 0x20uLL);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 4);
}
