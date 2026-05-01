/*
 * XREFs of ?AddItem@?$CStringHashTable@UPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBGAEBUPER_APPLICATION_DATA@@@Z @ 0x1800165A4
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180010B58 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?_RehashTable@?$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1800175B0 (-_RehashTable@-$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180017684 (-s_LookupEntry@-$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStringHashTable<PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare>::AddItem(
        __int64 a1,
        __int64 *a2,
        LPVOID *a3)
{
  signed int v3; // ebx
  unsigned __int64 v7; // r9
  HLOCAL v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v13; // rcx

  v3 = 0;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v7 = *(unsigned int *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( is_mul_ok(v7, 0x30uLL) )
    {
      v8 = LocalAlloc(0x40u, 48 * v7);
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
  v3 = CSimpleHashTable<unsigned short const *,PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
         a1,
         v9);
LABEL_10:
  if ( v3 < 0 )
  {
LABEL_13:
    CoTaskMemFree(*a3);
    return (unsigned int)v3;
  }
  v10 = CSimpleHashTable<unsigned short const *,PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
          *(_QWORD *)(a1 + 16),
          *(unsigned int *)(a1 + 4),
          a3);
  v11 = v10;
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
  *(_QWORD *)(v11 + 24) = a2[1];
  *(_BYTE *)(v11 + 32) = *((_BYTE *)a2 + 16);
  *(_BYTE *)(v11 + 33) = *((_BYTE *)a2 + 17);
  *(_BYTE *)(v11 + 34) = *((_BYTE *)a2 + 18);
  *(_BYTE *)(v11 + 35) = *((_BYTE *)a2 + 19);
  *(_BYTE *)(v11 + 36) = *((_BYTE *)a2 + 20);
  *(_BYTE *)(v11 + 37) = *((_BYTE *)a2 + 21);
  *(_BYTE *)(v11 + 38) = *((_BYTE *)a2 + 22);
  *(_BYTE *)(v11 + 39) = *((_BYTE *)a2 + 23);
  *(_BYTE *)(v11 + 40) = *((_BYTE *)a2 + 24);
  *(_BYTE *)(v11 + 41) = *((_BYTE *)a2 + 25);
  *(_BYTE *)(v11 + 42) = *((_BYTE *)a2 + 26);
  *(_BYTE *)(v11 + 43) = *((_BYTE *)a2 + 27);
  *(_BYTE *)(v11 + 44) = *((_BYTE *)a2 + 28);
  *(_DWORD *)v11 = 1;
  ++*(_DWORD *)a1;
  return 0;
}
