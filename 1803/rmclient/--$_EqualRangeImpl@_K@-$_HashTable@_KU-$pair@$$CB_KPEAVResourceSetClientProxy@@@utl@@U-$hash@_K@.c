/*
 * XREFs of ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@1@2AEA_K@Z @ 0x18000DA54
 * Callers:
 *     ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x18000EB5C (-LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_S.c)
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z @ 0x18000F024 (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_EqualRangeImpl<unsigned __int64>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 *a6)
{
  _QWORD *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r11
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 *result; // rax

  v6 = (_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v7 = *a3;
    v8 = 1LL;
    v9 = (0xC4CEB9FE1A85EC53uLL
        * ((0xFF51AFD7ED558CCDuLL * (*a3 ^ ((unsigned __int64)*a3 >> 33))) ^ ((0xFF51AFD7ED558CCDuLL
                                                                             * (*a3 ^ ((unsigned __int64)*a3 >> 33))) >> 33))) ^ ((0xC4CEB9FE1A85EC53uLL * ((0xFF51AFD7ED558CCDuLL * (*a3 ^ ((unsigned __int64)*a3 >> 33))) ^ ((0xFF51AFD7ED558CCDuLL * (*a3 ^ ((unsigned __int64)*a3 >> 33))) >> 33))) >> 33);
    v10 = *(_QWORD *)(a1 + 16) + 16 * (v9 & ((8LL << *(_BYTE *)(a1 + 32)) - 1));
    v11 = *(_QWORD **)v10;
    if ( *(_QWORD *)v10 )
    {
      while ( v11 != **(_QWORD ***)(v10 + 8) )
      {
        if ( v11[2] >= v9 )
        {
          if ( v11[2] > v9 )
            break;
          if ( v7 == v11[3] )
          {
            *a4 = v11;
            v6 = (_QWORD *)*v11;
            goto LABEL_10;
          }
        }
        v11 = (_QWORD *)*v11;
      }
    }
  }
  *a4 = v6;
  v8 = 0LL;
LABEL_10:
  *a5 = v6;
  result = a6;
  *a6 = v8;
  return result;
}
