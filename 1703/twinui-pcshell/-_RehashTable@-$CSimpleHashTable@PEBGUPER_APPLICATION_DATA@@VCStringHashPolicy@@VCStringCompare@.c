/*
 * XREFs of ?_RehashTable@?$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1800175B0
 * Callers:
 *     ?AddItem@?$CStringHashTable@UPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBGAEBUPER_APPLICATION_DATA@@@Z @ 0x1800165A4 (-AddItem@-$CStringHashTable@UPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJA.c)
 * Callees:
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180017684 (-s_LookupEntry@-$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare.c)
 */

__int64 __fastcall CSimpleHashTable<unsigned short const *,PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v4; // edi
  HLOCAL v5; // r14
  __int64 i; // rbp
  _OWORD *v7; // rsi
  _OWORD *v8; // rax

  if ( is_mul_ok(a2, 0x30uLL) )
  {
    v5 = LocalAlloc(0x40u, 48LL * a2);
    v4 = v5 == 0LL ? 0x8007000E : 0;
    if ( v5 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
      {
        v7 = (_OWORD *)(*(_QWORD *)(a1 + 16) + 48 * i);
        if ( *(_DWORD *)v7 == 1 )
        {
          v8 = (_OWORD *)CSimpleHashTable<unsigned short const *,PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                           v5,
                           a2,
                           (char *)v7 + 8);
          *v8 = *v7;
          v8[1] = v7[1];
          v8[2] = v7[2];
        }
      }
      LocalFree(*(HLOCAL *)(a1 + 16));
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = v5;
      *(_DWORD *)(a1 + 4) = a2;
    }
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v4;
}
