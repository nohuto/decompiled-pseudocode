/*
 * XREFs of _CmGetDeviceContainerIdFromBase @ 0x1405D5544
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x14051FDD4 (PiDcHandleCustomDeviceEvent.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140584DD4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1405D5280 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmDeleteDeviceWorker @ 0x1407E8498 (_CmDeleteDeviceWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140146E14 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     wcscmp @ 0x14018A5F0 (wcscmp.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140506374 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmValidateDeviceContainerName @ 0x140586F0C (_CmValidateDeviceContainerName.c)
 *     _CmIsDeviceInContainer @ 0x1405D56CC (_CmIsDeviceInContainer.c)
 *     _RegRtlEnumKey @ 0x1405E0774 (_RegRtlEnumKey.c)
 */

__int64 __fastcall CmGetDeviceContainerIdFromBase(__int64 a1, __int64 a2, const wchar_t *a3, wchar_t *a4)
{
  unsigned int v4; // edi
  int CachedContextBaseKey; // ebx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  char v14; // [rsp+40h] [rbp-61h] BYREF
  _BYTE v15[7]; // [rsp+41h] [rbp-60h] BYREF
  __int64 v16; // [rsp+48h] [rbp-59h] BYREF
  int v17[4]; // [rsp+50h] [rbp-51h] BYREF
  wchar_t pszSrc[40]; // [rsp+60h] [rbp-41h] BYREF

  v4 = 0;
  v16 = 0LL;
  v15[0] = 0;
  v14 = 0;
  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, a3);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
    {
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 10, (__int64)&v16);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = CmIsDeviceInContainer(a1, v16, (_DWORD)a3, (_DWORD)a3, a2, (__int64)v15, (__int64)&v14);
        if ( CachedContextBaseKey >= 0 && !v14 )
        {
          while ( 1 )
          {
            v17[0] = 39;
            v11 = RegRtlEnumKey(v16, v4, pszSrc, v17);
            CachedContextBaseKey = v11;
            if ( v11 == -2147483622 )
              break;
            if ( v11 != -1073741789 )
            {
              if ( v11 < 0 )
                return (unsigned int)CachedContextBaseKey;
              v13 = CmValidateDeviceContainerName(v12, pszSrc);
              CachedContextBaseKey = v13;
              if ( v13 != -1073741773 )
              {
                if ( v13 < 0 )
                  return (unsigned int)CachedContextBaseKey;
                CachedContextBaseKey = CmIsDeviceInContainer(
                                         a1,
                                         v16,
                                         (unsigned int)pszSrc,
                                         (_DWORD)a3,
                                         a2,
                                         (__int64)v15,
                                         (__int64)&v14);
                if ( CachedContextBaseKey < 0 )
                  return (unsigned int)CachedContextBaseKey;
                if ( v15[0] )
                  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, pszSrc);
                if ( CachedContextBaseKey < 0 || v14 )
                  return (unsigned int)CachedContextBaseKey;
              }
            }
            ++v4;
          }
          return 0;
        }
      }
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
