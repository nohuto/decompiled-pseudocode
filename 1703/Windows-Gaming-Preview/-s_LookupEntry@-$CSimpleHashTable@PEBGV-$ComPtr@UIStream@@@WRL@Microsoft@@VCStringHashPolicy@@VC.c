/*
 * XREFs of ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x1800273A0
 * Callers:
 *     ?SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV?$ComPtr@UIStream@@@WRL@Microsoft@@@Z @ 0x18002574C (-SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV-$ComPtr@UI.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEBGAEBV?$ComPtr@UIStream@@@WRL@Microsoft@@PEAV234@@Z @ 0x180027008 (-_AddUpdateItem@-$CSimpleHashTable@PEBGV-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@V.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x180027150 (-_RehashTable@-$CSimpleHashTable@PEBGV-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
        __int64 a1,
        unsigned int a2,
        LPCWCH *a3)
{
  LPCWCH v3; // r11
  __int64 v4; // r9
  unsigned int v8; // r10d
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  int v11; // edx
  unsigned int v12; // edx
  int v13; // edi
  unsigned int v14; // ebx
  int v15; // eax

  v3 = *a3;
  v4 = -1LL;
  v8 = 314159269;
  do
    ++v4;
  while ( v3[v4] );
  v9 = 0LL;
  v10 = 2 * v4;
  if ( v10 )
  {
    do
    {
      v11 = *((unsigned __int8 *)v3 + v9++);
      v8 ^= (v8 >> 2) + 2080 * v8 + v11;
    }
    while ( v9 < v10 );
  }
  v12 = (v8 & 0x7FFFFFFF) % a2;
  v13 = -1;
  while ( 1 )
  {
    v14 = v12;
    v15 = *(_DWORD *)(a1 + 24LL * v12);
    if ( v15 != 2 || v13 != -1 )
      break;
    v13 = v12;
LABEL_10:
    if ( v15 == 1 && CompareStringOrdinal(*(LPCWCH *)(a1 + 24LL * v12 + 8), -1, *a3, -1, 0) == 2 )
      return a1 + 24LL * v14;
    v12 = (v14 + 1) % a2;
  }
  if ( v15 )
    goto LABEL_10;
  if ( v13 != -1 )
    v14 = v13;
  return a1 + 24LL * v14;
}
