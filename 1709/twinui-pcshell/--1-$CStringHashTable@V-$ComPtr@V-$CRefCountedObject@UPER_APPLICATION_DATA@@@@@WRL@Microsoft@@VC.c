/*
 * XREFs of ??1?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ @ 0x1800175C4
 * Callers:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180007E1C (--1CApplicationManager@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare>::~CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare>(
        __int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // rax
  __int64 j; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 k; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v3 + 24 * i) == 1 )
        CoTaskMemFree(*(LPVOID *)(v3 + 24 * i + 8));
    }
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 4); j = (unsigned int)(j + 1) )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v5 + 24 * j) == 1 )
      {
        *(_DWORD *)(v5 + 24 * j) = 2;
        v6 = *(_QWORD *)(v5 + 24 * j + 16);
        if ( v6 )
        {
          *(_QWORD *)(v5 + 24 * j + 16) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        ++*(_DWORD *)(a1 + 8);
        --*(_DWORD *)a1;
      }
    }
    LocalFree(*(HLOCAL *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)a1 = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( k = 0LL; (unsigned int)k < *(_DWORD *)(a1 + 4); k = (unsigned int)(k + 1) )
    {
      v8 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v8 + 24 * k) == 1 )
      {
        *(_DWORD *)(v8 + 24 * k) = 2;
        v9 = *(_QWORD *)(v8 + 24 * k + 16);
        if ( v9 )
        {
          *(_QWORD *)(v8 + 24 * k + 16) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        ++*(_DWORD *)(a1 + 8);
        --*(_DWORD *)a1;
      }
    }
    LocalFree(*(HLOCAL *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
