/*
 * XREFs of ?SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV?$ComPtr@UIStream@@@WRL@Microsoft@@@Z @ 0x18002574C
 * Callers:
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001D2B0 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 *     ?ClearShellPropertyStream@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBG@Z @ 0x180025A08 (-ClearShellPropertyStream@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEBGAEBV?$ComPtr@UIStream@@@WRL@Microsoft@@PEAV234@@Z @ 0x180027008 (-_AddUpdateItem@-$CSimpleHashTable@PEBGV-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@V.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x1800273A0 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VC.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::SetAndRecordShellProperty(
        __int64 a1,
        const WCHAR *a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  __int64 v7; // r9
  HRESULT updated; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  signed int v12; // edx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPWSTR ppwsz; // [rsp+50h] [rbp+8h] BYREF
  const WCHAR *v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  v4 = *(_QWORD *)(a1 + 64);
  v7 = v4 == 0 ? 0x8002802B : 0;
  if ( v4 )
    LODWORD(v7) = *(_DWORD *)CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                               v4,
                               *(unsigned int *)(a1 + 52),
                               &v16,
                               v7) != 1
                ? 0x8002802B
                : 0;
  if ( (int)v7 >= 0 )
  {
    updated = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FF,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)updated;
  }
  updated = (*(__int64 (__fastcall **)(_QWORD, const WCHAR *, _QWORD))(**(_QWORD **)(a1 + 72) + 104LL))(
              *(_QWORD *)(a1 + 72),
              a2,
              *a3);
  if ( updated < 0 )
  {
    v10 = 1026LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  v11 = *(_QWORD *)(a1 + 40);
  v12 = v11 == 0 ? 0x8002802B : 0;
  if ( v11 )
    v12 = *(_DWORD *)CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                       v11,
                       *(unsigned int *)(a1 + 28),
                       &v16,
                       v9) != 1
        ? 0x8002802B
        : 0;
  if ( v12 < 0 )
  {
    ppwsz = 0LL;
    updated = SHStrDupW(a2, &ppwsz);
    if ( updated >= 0 )
    {
      updated = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
                  a1 + 24,
                  1LL,
                  &ppwsz,
                  a3);
      if ( updated >= 0 )
        return 0LL;
      CoTaskMemFree(ppwsz);
    }
    v10 = 1033LL;
    goto LABEL_16;
  }
  updated = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
              a1 + 24,
              0LL,
              &v16,
              a3);
  if ( updated < 0 )
  {
    v10 = 1029LL;
    goto LABEL_16;
  }
  return 0LL;
}
