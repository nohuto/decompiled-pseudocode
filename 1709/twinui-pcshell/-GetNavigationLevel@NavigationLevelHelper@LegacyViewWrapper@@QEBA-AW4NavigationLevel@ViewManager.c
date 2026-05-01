/*
 * XREFs of ?GetNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x18013BEDC
 * Callers:
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013BF4C (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewM.c)
 *     _lambda_0d87a18e5f704446e4cb6a14906b73a9_::_lambda_invoker_cdecl_ @ 0x18013C160 (_lambda_0d87a18e5f704446e4cb6a14906b73a9_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall LegacyViewWrapper::NavigationLevelHelper::GetNavigationLevel(unsigned int *a1)
{
  __int64 result; // rax
  signed int v2; // edx
  int v3; // edx
  _OWORD v4[3]; // [rsp+0h] [rbp-48h]

  result = *a1;
  v2 = a1[1];
  v4[0] = _mm_load_si128((const __m128i *)&_xmm);
  v4[2] = _mm_load_si128((const __m128i *)&_xmm);
  v4[1] = _mm_load_si128((const __m128i *)&_xmm);
  if ( v2 > *((_DWORD *)v4 + 2 * result + 1) )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        return 4LL;
    }
    else
    {
      return 3LL;
    }
  }
  return result;
}
