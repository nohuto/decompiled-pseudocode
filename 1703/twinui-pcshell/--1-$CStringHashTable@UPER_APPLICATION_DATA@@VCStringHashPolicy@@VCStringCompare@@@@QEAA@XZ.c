/*
 * XREFs of ??1?$CStringHashTable@UPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ @ 0x180016700
 * Callers:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180007D1C (--1CApplicationManager@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStringHashTable<PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare>::~CStringHashTable<PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare>(
        __int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  __int64 j; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 k; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(a1 + 16) + 48 * i;
      if ( *(_DWORD *)v3 == 1 )
        CoTaskMemFree(*(LPVOID *)(v3 + 8));
    }
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 4); j = (unsigned int)(j + 1) )
    {
      v5 = *(_QWORD *)(a1 + 16) + 48 * j;
      if ( *(_DWORD *)v5 == 1 )
      {
        *(_DWORD *)v5 = 2;
        v6 = *(_QWORD *)(v5 + 16);
        if ( v6 )
        {
          *(_QWORD *)(v5 + 16) = 0LL;
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
      v8 = *(_QWORD *)(a1 + 16) + 48 * k;
      if ( *(_DWORD *)v8 == 1 )
      {
        *(_DWORD *)v8 = 2;
        v9 = *(_QWORD *)(v8 + 16);
        if ( v9 )
        {
          *(_QWORD *)(v8 + 16) = 0LL;
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
