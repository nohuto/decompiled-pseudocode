/*
 * XREFs of ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18016BC14
 * Callers:
 *     ?UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z @ 0x180154D74 (-UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x180034B54 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?ReaderUnregistered@DataProviderProxy@@QEAAXXZ @ 0x180169DA0 (-ReaderUnregistered@DataProviderProxy@@QEAAXXZ.c)
 */

__int64 __fastcall DataSourceProxy::UnregisterReader(DataSourceProxy *this, CComposition **a2)
{
  CWeakReferenceBase **v3; // rax
  CWeakReferenceBase **v4; // rbx
  CWeakReferenceBase *v5; // rsi
  CWeakReferenceBase *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( ((*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    v7 = 0LL;
    CComposition::GetWeakReferenceBase(a2[2], (struct CResource *)a2, &v7);
    v3 = (CWeakReferenceBase **)*((_QWORD *)this + 25);
    v4 = (CWeakReferenceBase **)*((_QWORD *)this + 24);
    v5 = v7;
    while ( v4 != v3 && *v4 != v7 )
      ++v4;
    if ( v4 != v3 )
    {
      CWeakReferenceBase::Release(*v4);
      memmove(v4, v4 + 1, *((_QWORD *)this + 25) - (_QWORD)(v4 + 1));
      *((_QWORD *)this + 25) -= 8LL;
      DataProviderProxy::ReaderUnregistered(*((DataProviderProxy **)this + 23));
    }
    CWeakReferenceBase::Release(v5);
  }
  return 0LL;
}
