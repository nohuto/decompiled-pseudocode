/*
 * XREFs of ?_FindKey@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@2@AEB_K_KPEAPEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x18000E23C
 * Callers:
 *     ?_EmplaceImpl@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x18000E15C (-_EmplaceImpl@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800077D0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_InitBuckets@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x18000E344 (-_InitBuckets@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equ.c)
 */

char __fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_FindKey(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  char v5; // di
  _QWORD *i; // rbx
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // r10
  void *v12; // r10
  bool v13; // zf
  __int64 v14; // r10
  char result; // al

  v5 = 0;
  i = 0LL;
  v9 = *(_QWORD *)(a1 + 16);
  v10 = 8LL << *(_BYTE *)(a1 + 32);
  v11 = a4 & (v10 - 1);
  if ( v9 )
  {
    if ( *(_QWORD *)(v9 + 16 * v11) )
    {
      if ( a2 && a2 != (_QWORD *)a1 && ((v10 - 1) & a2[2]) == v11 )
      {
        for ( i = a2; i != *(_QWORD **)(v9 + 16 * v11); i = (_QWORD *)i[1] )
        {
          if ( a4 > i[2] )
            break;
        }
      }
      else
      {
        i = *(_QWORD **)(v9 + 16 * v11);
      }
      while ( i != **(_QWORD ***)(v9 + 16 * v11 + 8) )
      {
        if ( i[2] >= a4 )
        {
          if ( i[2] > a4 )
            break;
          if ( *a3 == i[3] )
          {
            v5 = 1;
            break;
          }
        }
        i = (_QWORD *)*i;
      }
    }
  }
  else
  {
    if ( v10 > 0xFFFFFFFFFFFFFFFLL )
      v12 = 0LL;
    else
      v12 = operator new(16 * v10, (const struct std::nothrow_t *)&unk_180012430);
    *(_QWORD *)(a1 + 16) = v12;
    v13 = v12 == 0LL;
    if ( v12 )
    {
      utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_InitBuckets(a1);
      v13 = v14 == 0;
    }
    v5 = v13;
  }
  result = v5;
  *a5 = i;
  return result;
}
