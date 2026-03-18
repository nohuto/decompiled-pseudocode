/*
 * XREFs of ??1DataSourceProxy@@UEAA@XZ @ 0x18016B090
 * Callers:
 *     ??_GDataSourceProxy@@UEAAPEAXI@Z @ 0x18016B200 (--_GDataSourceProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x180034B54 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall DataSourceProxy::~DataSourceProxy(DataSourceProxy *this)
{
  CWeakReferenceBase **v2; // rsi
  CWeakReferenceBase **i; // rbx
  CWeakReferenceBase *v4; // rcx
  __int64 v5; // rax
  char *v6; // rcx
  char *v7; // rcx
  char **v8; // rax
  char *v9; // r9
  char *v10; // rcx
  char *v11; // rbx

  *(_QWORD *)this = &DataSourceProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &DataSourceProxy::`vftable'{for `IDataSourceProxy'};
  v2 = (CWeakReferenceBase **)*((_QWORD *)this + 25);
  for ( i = (CWeakReferenceBase **)*((_QWORD *)this + 24); i != v2; ++i )
  {
    v4 = *i;
    v5 = *((_QWORD *)*i + 1);
    if ( v5 )
    {
      *(_BYTE *)(v5 + 72) &= ~1u;
      *(_QWORD *)(v5 + 56) = 0LL;
      *(_QWORD *)(v5 + 64) = 0LL;
      v4 = *i;
    }
    CWeakReferenceBase::Release(v4);
  }
  *((_QWORD *)this + 25) = *((_QWORD *)this + 24);
  *((_QWORD *)this + 23) = 0LL;
  v6 = (char *)*((_QWORD *)this + 24);
  if ( v6 )
  {
    std::_Deallocate(v6, (__int64)(*((_QWORD *)this + 26) - (_QWORD)v6) >> 3, 8uLL);
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 152);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 120);
  v7 = (char *)*((_QWORD *)this + 10);
  if ( v7 )
  {
    std::_Deallocate(v7, (__int64)(*((_QWORD *)this + 12) - (_QWORD)v7) >> 3, 8uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  v8 = (char **)*((_QWORD *)this + 8);
  v9 = *v8;
  *v8 = (char *)v8;
  *(_QWORD *)(*((_QWORD *)this + 8) + 8LL) = *((_QWORD *)this + 8);
  v10 = (char *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 9) = 0LL;
  if ( v9 != v10 )
  {
    do
    {
      v11 = *(char **)v9;
      std::_Deallocate(v9, 1uLL, 0x18uLL);
      v10 = (char *)*((_QWORD *)this + 8);
      v9 = v11;
    }
    while ( v11 != v10 );
  }
  std::_Deallocate(v10, 1uLL, 0x18uLL);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 4);
}
