/*
 * XREFs of ExpCloudbookHardwareIDProvider @ 0x14059B570
 * Callers:
 *     <none>
 * Callees:
 *     ExpOsProductCacheProviderHelper @ 0x140459A5C (ExpOsProductCacheProviderHelper.c)
 */

__int64 __fastcall ExpCloudbookHardwareIDProvider(_DWORD *a1, void *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  __int64 result; // rax

  result = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_14074AB78, a1, a2, a3, a4, a5);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
  {
    result = 3221225524LL;
    *a5 = 1;
  }
  return result;
}
