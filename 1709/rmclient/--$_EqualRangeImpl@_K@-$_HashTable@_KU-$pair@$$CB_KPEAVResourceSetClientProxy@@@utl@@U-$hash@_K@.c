/*
 * XREFs of ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18000DA68
 * Callers:
 *     ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x18000ED0C (-LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_S.c)
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z @ 0x18000F264 (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_EqualRangeImpl<unsigned __int64>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v7; // r11
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 16) )
  {
    v7 = *a3;
    v8 = (0xC4CEB9FE1A85EC53uLL
        * ((0xFF51AFD7ED558CCDuLL * (*a3 ^ ((unsigned __int64)*a3 >> 33))) ^ ((0xFF51AFD7ED558CCDuLL
                                                                             * (*a3 ^ ((unsigned __int64)*a3 >> 33))) >> 33))) ^ ((0xC4CEB9FE1A85EC53uLL * ((0xFF51AFD7ED558CCDuLL * (*a3 ^ ((unsigned __int64)*a3 >> 33))) ^ ((0xFF51AFD7ED558CCDuLL * (*a3 ^ ((unsigned __int64)*a3 >> 33))) >> 33))) >> 33);
    v9 = *(_QWORD *)(a1 + 16) + 16 * (v8 & ((8LL << *(_BYTE *)(a1 + 32)) - 1));
    v10 = *(_QWORD **)v9;
    if ( *(_QWORD *)v9 )
    {
      while ( v10 != **(_QWORD ***)(v9 + 8) )
      {
        if ( v10[2] >= v8 )
        {
          if ( v10[2] > v8 )
            break;
          if ( v7 == v10[3] )
          {
            *a4 = v10;
            *a5 = *v10;
            result = a6;
            *a6 = 1LL;
            return result;
          }
        }
        v10 = (_QWORD *)*v10;
      }
    }
  }
  *a4 = a1;
  *a5 = a1;
  result = a6;
  *a6 = 0LL;
  return result;
}
