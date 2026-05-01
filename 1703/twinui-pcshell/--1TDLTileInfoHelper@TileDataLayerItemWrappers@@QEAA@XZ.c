/*
 * XREFs of ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x18017E54C
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGPEAUITileInfo@@UIconLoadingInputs@1@PEAUIconData@1@@Z @ 0x18017DB2C (-GetIconData@ImmersiveIcons@@YAJPEBGPEAUITileInfo@@UIconLoadingInputs@1@PEAUIconData@1@@Z.c)
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NPEAUITileInfo@@AEBUIconData@1@1PEAPEAUHBITMAP__@@@Z @ 0x18017E5F0 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NPEAUITileInfo@@AEBUIconData@1@1PEAPEAUHBITMAP.c)
 * Callees:
 *     ??1?$CStringHashTable@HVCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ @ 0x18017F090 (--1-$CStringHashTable@HVCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ.c)
 *     ??1?$CStringHashTable@V?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ @ 0x18017F154 (--1-$CStringHashTable@V-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this)
{
  __int64 v2; // rcx
  unsigned int i; // edi
  __int64 v4; // rax
  __int64 v5; // rcx

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  CStringHashTable<int,CStringHashPolicy,CStringCompare>::~CStringHashTable<int,CStringHashPolicy,CStringCompare>((char *)this + 48);
  CStringHashTable<Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare>::~CStringHashTable<Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare>((char *)this + 24);
  if ( *((_QWORD *)this + 2) )
  {
    for ( i = 0; i < *((_DWORD *)this + 1); ++i )
    {
      v4 = *((_QWORD *)this + 2) + 16LL * i;
      if ( *(_DWORD *)v4 == 1 )
      {
        *(_DWORD *)v4 = 2;
        v5 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          *(_QWORD *)(v4 + 8) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        ++*((_DWORD *)this + 2);
        --*(_DWORD *)this;
      }
    }
    LocalFree(*((HLOCAL *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_DWORD *)this = 0;
}
