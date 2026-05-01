/*
 * XREFs of ?ClearRetryPropertyTables@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ @ 0x180193260
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGPEAUITileInfo@@UIconLoadingInputs@1@PEAUIconData@1@@Z @ 0x18017DB2C (-GetIconData@ImmersiveIcons@@YAJPEBGPEAUITileInfo@@UIconLoadingInputs@1@PEAUIconData@1@@Z.c)
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NPEAUITileInfo@@AEBUIconData@1@1PEAPEAUHBITMAP__@@@Z @ 0x18017E5F0 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NPEAUITileInfo@@AEBUIconData@1@1PEAPEAUHBITMAP.c)
 * Callees:
 *     ?RemoveAll@?$CStringHashTable@V?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAXXZ @ 0x18017F308 (-RemoveAll@-$CStringHashTable@V-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCo.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::ClearRetryPropertyTables(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this)
{
  unsigned int i; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 j; // rdi
  __int64 v6; // rax
  __int64 k; // rcx
  __int64 v8; // rax

  CStringHashTable<Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare>::RemoveAll((__int64)this + 24);
  if ( *((_QWORD *)this + 2) )
  {
    for ( i = 0; i < *((_DWORD *)this + 1); ++i )
    {
      v3 = *((_QWORD *)this + 2) + 16LL * i;
      if ( *(_DWORD *)v3 == 1 )
      {
        *(_DWORD *)v3 = 2;
        v4 = *(_QWORD *)(v3 + 8);
        if ( v4 )
        {
          *(_QWORD *)(v3 + 8) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
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
      v6 = *((_QWORD *)this + 8);
      if ( *(_DWORD *)(v6 + 24 * j) == 1 )
        CoTaskMemFree(*(LPVOID *)(v6 + 24 * j + 8));
    }
    if ( *((_QWORD *)this + 8) )
    {
      for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 13); k = (unsigned int)(k + 1) )
      {
        v8 = *((_QWORD *)this + 8);
        if ( *(_DWORD *)(v8 + 24 * k) == 1 )
        {
          *(_DWORD *)(v8 + 24 * k) = 2;
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
