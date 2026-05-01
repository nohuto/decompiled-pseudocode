/*
 * XREFs of _lambda_ba5b494aa1ea5bb446f113b05775e90a_::operator() @ 0x180300598
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAI0@Z @ 0x180300D10 (-GetMany@-$SimpleVectorIterator@IV-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@F.c)
 * Callees:
 *     <none>
 */

_DWORD **__fastcall lambda_ba5b494aa1ea5bb446f113b05775e90a_::operator()(_QWORD **a1)
{
  _DWORD **result; // rax
  __int64 v2; // r9
  _DWORD *v3; // rdx

  result = (_DWORD **)*a1;
  v2 = 0LL;
  v3 = (_DWORD *)**a1;
  if ( *v3 )
  {
    do
    {
      *(_DWORD *)(*a1[1] + 4 * v2) = 0;
      v2 = (unsigned int)(v2 + 1);
      result = (_DWORD **)*a1;
      v3 = (_DWORD *)**a1;
    }
    while ( (unsigned int)v2 < *v3 );
  }
  *v3 = 0;
  return result;
}
