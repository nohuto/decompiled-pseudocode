/*
 * XREFs of ?GetNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x1801E3424
 * Callers:
 *     ?HandleDebounceTimeout@NavigationLevelHelper@LegacyViewWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x1801E34F0 (-HandleDebounceTimeout@NavigationLevelHelper@LegacyViewWrapper@@AEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801E3620 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewM.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
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
