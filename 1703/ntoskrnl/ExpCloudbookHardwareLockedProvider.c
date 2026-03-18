/*
 * XREFs of ExpCloudbookHardwareLockedProvider @ 0x140717EE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExpOsProductCacheProviderHelper @ 0x140459A5C (ExpOsProductCacheProviderHelper.c)
 */

__int64 __fastcall ExpCloudbookHardwareLockedProvider(_DWORD *a1, void *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  __int64 result; // rax
  _DWORD Src[6]; // [rsp+30h] [rbp-18h] BYREF

  Src[0] = 0;
  result = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_14074AB88, a1, a2, a3, a4, a5);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
  {
    *a4 = 4;
    if ( a3 < 4 )
    {
      result = 3221225507LL;
    }
    else
    {
      *a1 = 4;
      memmove(a2, Src, (unsigned int)*a4);
      result = 0LL;
    }
    *a5 = 1;
  }
  return result;
}
