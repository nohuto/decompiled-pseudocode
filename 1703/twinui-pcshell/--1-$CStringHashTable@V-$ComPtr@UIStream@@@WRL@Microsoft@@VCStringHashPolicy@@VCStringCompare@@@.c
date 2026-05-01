/*
 * XREFs of ??1?$CStringHashTable@V?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ @ 0x18017F154
 * Callers:
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x18017E54C (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CStringHashTable@V?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAXXZ @ 0x18017F308 (-RemoveAll@-$CStringHashTable@V-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCo.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

HLOCAL __fastcall CStringHashTable<Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare>::~CStringHashTable<Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare>(
        __int64 a1)
{
  HLOCAL result; // rax
  __int64 i; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx

  result = (HLOCAL)CStringHashTable<Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare>::RemoveAll();
  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v4 + 24 * i) == 1 )
      {
        *(_DWORD *)(v4 + 24 * i) = 2;
        v5 = *(_QWORD *)(v4 + 24 * i + 16);
        if ( v5 )
        {
          *(_QWORD *)(v4 + 24 * i + 16) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        ++*(_DWORD *)(a1 + 8);
        --*(_DWORD *)a1;
      }
    }
    result = LocalFree(*(HLOCAL *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)a1 = 0;
  return result;
}
