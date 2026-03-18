/*
 * XREFs of ??1DataProviderManager@@EEAA@XZ @ 0x180152F04
 * Callers:
 *     ??_GDataProviderManager@@EEAAPEAXI@Z @ 0x180153090 (--_GDataProviderManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180153A54 (-InternalRelease@-$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Freenode@?$_List_buy@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x18016A090 (-_Freenode@-$_List_buy@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V-$allo.c)
 */

void __fastcall DataProviderManager::~DataProviderManager(DataProviderManager *this)
{
  _QWORD *v2; // rcx
  _QWORD *i; // rax
  char *v4; // rcx
  char **v5; // rax
  char *v6; // rdx
  char *v7; // rcx
  char *v8; // rbx
  __int64 v9; // rcx

  *(_QWORD *)this = &DataProviderManager::`vftable';
  v2 = (_QWORD *)*((_QWORD *)this + 7);
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
    *(_QWORD *)(i[3] + 64LL) = 0LL;
  v4 = (char *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    std::_Deallocate(v4, (__int64)(*((_QWORD *)this + 11) - (_QWORD)v4) >> 3, 8uLL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  v5 = (char **)*((_QWORD *)this + 7);
  v6 = *v5;
  *v5 = (char *)v5;
  *(_QWORD *)(*((_QWORD *)this + 7) + 8LL) = *((_QWORD *)this + 7);
  *((_QWORD *)this + 8) = 0LL;
  v7 = (char *)*((_QWORD *)this + 7);
  if ( v6 != v7 )
  {
    do
    {
      v8 = *(char **)v6;
      std::_List_buy<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>::_Freenode();
      v7 = (char *)*((_QWORD *)this + 7);
      v6 = v8;
    }
    while ( v8 != v7 );
  }
  std::_Deallocate(v7, 1uLL, 0x20uLL);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<DataProviderRegistrarConnection>::InternalRelease((char *)this + 32);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  v9 = *((_QWORD *)this + 2);
  if ( v9 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
