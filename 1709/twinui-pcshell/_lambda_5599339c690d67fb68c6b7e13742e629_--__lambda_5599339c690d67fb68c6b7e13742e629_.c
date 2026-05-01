/*
 * XREFs of _lambda_5599339c690d67fb68c6b7e13742e629_::__lambda_5599339c690d67fb68c6b7e13742e629_ @ 0x1800E477C
 * Callers:
 *     _PenWorkspaceDiscoverBroker::ActivateApp_::_1_::dtor$2 @ 0x1801EC366 (_PenWorkspaceDiscoverBroker--ActivateApp_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall lambda_5599339c690d67fb68c6b7e13742e629_::__lambda_5599339c690d67fb68c6b7e13742e629_(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
}
