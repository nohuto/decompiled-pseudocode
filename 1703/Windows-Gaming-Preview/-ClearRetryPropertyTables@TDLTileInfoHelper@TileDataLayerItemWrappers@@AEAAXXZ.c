/*
 * XREFs of ?ClearRetryPropertyTables@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ @ 0x1800258B8
 * Callers:
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x180004F14 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@_N2@Z @ 0x1800251A8 (-CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualE.c)
 * Callees:
 *     ??1HashBucket@?$CSimpleHashTable@KV?$ComPtr@UITilePropertyInfo@@@WRL@Microsoft@@V?$CDefaultHashPolicy@K@@V?$CDefaultKeyCompare@K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAA@XZ @ 0x180004C04 (--1HashBucket@-$CSimpleHashTable@KV-$ComPtr@UITilePropertyInfo@@@WRL@Microsoft@@V-$CDefaultHashP.c)
 *     ?RemoveAll@?$CStringHashTable@V?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAXXZ @ 0x180004D20 (-RemoveAll@-$CStringHashTable@V-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCo.c)
 */

void __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::ClearRetryPropertyTables(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this)
{
  unsigned int i; // edi
  _DWORD *v3; // rcx
  __int64 j; // rdi
  __int64 v5; // rax
  __int64 k; // rcx
  __int64 v7; // rax

  CStringHashTable<Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare>::RemoveAll((__int64)this + 24);
  if ( *((_QWORD *)this + 2) )
  {
    for ( i = 0; i < *((_DWORD *)this + 1); ++i )
    {
      v3 = (_DWORD *)(*((_QWORD *)this + 2) + 16LL * i);
      if ( *v3 == 1 )
      {
        CSimpleHashTable<unsigned long,Microsoft::WRL::ComPtr<ITilePropertyInfo>,CDefaultHashPolicy<unsigned long>,CDefaultKeyCompare<unsigned long>,CDefaultResizePolicy,CDefaultRehashPolicy>::HashBucket::~HashBucket((__int64)v3);
        ++*((_DWORD *)this + 2);
        --*(_DWORD *)this;
      }
    }
    LocalFree(*((HLOCAL *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_DWORD *)this = 0;
  if ( *((_QWORD *)this + 8) )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 13); j = (unsigned int)(j + 1) )
    {
      v5 = *((_QWORD *)this + 8);
      if ( *(_DWORD *)(v5 + 24 * j) == 1 )
        CoTaskMemFree(*(LPVOID *)(v5 + 24 * j + 8));
    }
    if ( *((_QWORD *)this + 8) )
    {
      for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 13); k = (unsigned int)(k + 1) )
      {
        v7 = *((_QWORD *)this + 8);
        if ( *(_DWORD *)(v7 + 24 * k) == 1 )
        {
          *(_DWORD *)(v7 + 24 * k) = 2;
          ++*((_DWORD *)this + 14);
          --*((_DWORD *)this + 12);
        }
      }
      LocalFree(*((HLOCAL *)this + 8));
      *((_QWORD *)this + 8) = 0LL;
    }
  }
  *((_DWORD *)this + 12) = 0;
}
