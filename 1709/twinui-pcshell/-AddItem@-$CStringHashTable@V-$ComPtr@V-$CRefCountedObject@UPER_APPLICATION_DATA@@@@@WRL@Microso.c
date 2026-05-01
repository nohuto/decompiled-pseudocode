/*
 * XREFs of ?AddItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBGAEBV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x1800174C4
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18001114C (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1800186A0 (-_RehashTable@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WR.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x18001877C (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@W.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare>::AddItem(
        __int64 a1,
        __int64 *a2,
        LPVOID *a3)
{
  signed int v3; // ebx
  unsigned __int64 v7; // r9
  HLOCAL v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  _DWORD *v11; // rbx
  __int64 v13; // rcx

  v3 = 0;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v7 = *(unsigned int *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( is_mul_ok(v7, 0x18uLL) )
    {
      v8 = LocalAlloc(0x40u, 24 * v7);
      *(_QWORD *)(a1 + 16) = v8;
      v3 = v8 == 0LL ? 0x8007000E : 0;
    }
    else
    {
      v3 = -2147024362;
    }
  }
  if ( v3 < 0 )
    goto LABEL_13;
  v9 = *(unsigned int *)(a1 + 4);
  if ( *(_DWORD *)a1 <= *(_DWORD *)(a1 + 4) >> 1 )
  {
    if ( *(_DWORD *)(a1 + 8) <= (unsigned int)v9 >> 2 )
      goto LABEL_10;
  }
  else
  {
    v9 = (unsigned int)(2 * v9 - 1);
  }
  v3 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
         a1,
         v9);
LABEL_10:
  if ( v3 < 0 )
  {
LABEL_13:
    CoTaskMemFree(*a3);
    return (unsigned int)v3;
  }
  v10 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
          *(_QWORD *)(a1 + 16),
          *(unsigned int *)(a1 + 4),
          a3);
  v11 = (_DWORD *)v10;
  if ( *(_DWORD *)v10 == 1 )
  {
    v3 = -2147024809;
    goto LABEL_13;
  }
  if ( *(_DWORD *)v10 == 2 )
    --*(_DWORD *)(a1 + 8);
  *(_QWORD *)(v10 + 8) = *a3;
  v13 = *a2;
  *(_QWORD *)(v10 + 16) = *a2;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  *v11 = 1;
  ++*(_DWORD *)a1;
  return 0;
}
