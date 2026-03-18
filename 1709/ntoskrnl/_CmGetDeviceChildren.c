/*
 * XREFs of _CmGetDeviceChildren @ 0x140449874
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14054F964 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceSiblings @ 0x1407840B4 (_CmGetDeviceSiblings.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x1400DF820 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1401E00DC (__report_rangecheckfailure.c)
 *     _PnpMultiSzAppend @ 0x140449A9C (_PnpMultiSzAppend.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x140551C20 (_NtPlugPlayGetDeviceRelatedDevice.c)
 */

int __fastcall CmGetDeviceChildren(int a1, const WCHAR *a2, wchar_t *a3, unsigned int *a4)
{
  wchar_t *v5; // rdi
  unsigned int v7; // ebx
  int result; // eax
  unsigned int v9; // r14d
  unsigned int v10; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t pszSrc[200]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t pszDest[200]; // [rsp+1F0h] [rbp+F0h] BYREF

  v5 = a3;
  if ( a3 )
  {
    if ( *a4 )
      *a3 = 0;
    else
      v5 = 0LL;
  }
  else
  {
    *a4 = 0;
  }
  v7 = *a4;
  *a4 = 0;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    result = NtPlugPlayGetDeviceRelatedDevice(a1, (unsigned int)&DestinationString, 2, (unsigned int)pszSrc);
    if ( result >= 0 )
    {
      if ( v10 )
      {
        v9 = v10 + 1;
        if ( v7 && !(unsigned __int8)PnpMultiSzAppend(v5) )
        {
          v5 = 0LL;
          v7 = 0;
        }
        result = RtlStringCchCopyExW(pszDest, 0xC8uLL, pszSrc, 0LL, 0LL, 0x800u);
        if ( result >= 0 )
        {
          result = RtlInitUnicodeStringEx(&DestinationString, pszDest);
          if ( result >= 0 )
          {
            while ( 1 )
            {
              result = NtPlugPlayGetDeviceRelatedDevice(a1, (unsigned int)&DestinationString, 3, (unsigned int)pszSrc);
              if ( result == -1073741810 )
                break;
              if ( result < 0 )
                return result;
              if ( v10 > 0xC8 )
                return -1073741811;
              if ( 2 * (unsigned __int64)(v10 - 1) >= 0x190 )
                _report_rangecheckfailure();
              v9 += v10;
              pszSrc[v10 - 1] = 0;
              if ( v7 && !(unsigned __int8)PnpMultiSzAppend(v5) )
              {
                v5 = 0LL;
                v7 = 0;
              }
              result = RtlStringCchCopyExW(pszDest, 0xC8uLL, pszSrc, 0LL, 0LL, 0x800u);
              if ( result < 0 )
                return result;
              result = RtlInitUnicodeStringEx(&DestinationString, pszDest);
              if ( result < 0 )
                goto LABEL_23;
            }
            result = 0;
LABEL_23:
            if ( result >= 0 )
            {
              *a4 = v9;
              if ( v7 < v9 )
                return -1073741789;
            }
          }
        }
      }
      else
      {
        return -1073741275;
      }
    }
  }
  return result;
}
