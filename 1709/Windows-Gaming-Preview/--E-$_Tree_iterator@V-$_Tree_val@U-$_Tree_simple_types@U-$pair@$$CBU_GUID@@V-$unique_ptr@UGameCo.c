/*
 * XREFs of ??E?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x18001B4E4
 * Callers:
 *     _lambda_e55ccab858df802f1f19496ef6f8fbee_::operator() @ 0x18001ADAC (_lambda_e55ccab858df802f1f19496ef6f8fbee_--operator().c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>>>::operator++(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 **v3; // rax
  __int64 *i; // rcx

  v2 = *a1;
  if ( !*(_BYTE *)(v2 + 25) )
  {
    v3 = *(__int64 ***)(v2 + 16);
    if ( *((_BYTE *)v3 + 25) )
    {
      while ( 1 )
      {
        v2 = *(_QWORD *)(v2 + 8);
        if ( *(_BYTE *)(v2 + 25) || *a1 != *(_QWORD *)(v2 + 16) )
          break;
        *a1 = v2;
      }
      *a1 = v2;
    }
    else
    {
      for ( i = *v3; !*((_BYTE *)i + 25); i = (__int64 *)*i )
        v3 = (__int64 **)i;
      *a1 = (__int64)v3;
    }
  }
  return a1;
}
