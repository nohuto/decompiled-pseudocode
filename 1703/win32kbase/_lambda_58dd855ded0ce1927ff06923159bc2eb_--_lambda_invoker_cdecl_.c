/*
 * XREFs of _lambda_58dd855ded0ce1927ff06923159bc2eb_::_lambda_invoker_cdecl_ @ 0x1C011A2E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall lambda_58dd855ded0ce1927ff06923159bc2eb_::_lambda_invoker_cdecl_(_QWORD **a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    for ( *a1 = (_QWORD *)*v1; ; *a1 = (_QWORD *)*v1 )
    {
      result = Win32FreePool((__int64)(v1 - 1));
      v1 = *a1;
      if ( !*a1 )
        break;
    }
  }
  return result;
}
