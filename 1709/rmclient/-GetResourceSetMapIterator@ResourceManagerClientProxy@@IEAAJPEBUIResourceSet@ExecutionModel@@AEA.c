/*
 * XREFs of ?GetResourceSetMapIterator@ResourceManagerClientProxy@@IEAAJPEBUIResourceSet@ExecutionModel@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@@Z @ 0x18000EC9C
 * Callers:
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000E128 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PE.c)
 *     ?ReleaseResourceSet@ResourceManagerClientProxy@@UEAAJPEAUIResourceSet@ExecutionModel@@@Z @ 0x18000F0A0 (-ReleaseResourceSet@ResourceManagerClientProxy@@UEAAJPEAUIResourceSet@ExecutionModel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceManagerClientProxy::GetResourceSetMapIterator(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r9
  _QWORD *i; // rax
  _QWORD *v5; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)(a1 + 22504);
  for ( i = *(_QWORD **)(a1 + 22504); ; i = (_QWORD *)*i )
  {
    *a3 = i;
    v5 = i;
    if ( i == v3 || i[4] == a2 )
      break;
  }
  result = 2147942487LL;
  if ( v5 != v3 )
    return 0LL;
  return result;
}
