/*
 * XREFs of _CmGetDeviceContainerIdFromBase @ 0x1404DF81C
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x140457A84 (PiDcHandleCustomDeviceEvent.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1404DA754 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404E6E2C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmDeleteDeviceWorker @ 0x14073B0CC (_CmDeleteDeviceWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1400815D0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     wcscmp @ 0x14016BB70 (wcscmp.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmIsDeviceInContainer @ 0x1404DF9A4 (_CmIsDeviceInContainer.c)
 *     _CmValidateDeviceContainerName @ 0x1404E0500 (_CmValidateDeviceContainerName.c)
 *     _RegRtlEnumKey @ 0x1405AA7F4 (_RegRtlEnumKey.c)
 */

__int64 __fastcall CmGetDeviceContainerIdFromBase(_QWORD *a1, __int64 a2, const wchar_t *a3, wchar_t *a4)
{
  unsigned int v4; // edi
  int CachedContextBaseKey; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  char v15; // [rsp+40h] [rbp-61h] BYREF
  _BYTE v16[7]; // [rsp+41h] [rbp-60h] BYREF
  __int64 v17; // [rsp+48h] [rbp-59h] BYREF
  int v18[4]; // [rsp+50h] [rbp-51h] BYREF
  wchar_t pszSrc[40]; // [rsp+60h] [rbp-41h] BYREF

  v4 = 0;
  v17 = 0LL;
  v16[0] = 0;
  v15 = 0;
  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, a3);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
    {
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, &v17);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = CmIsDeviceInContainer(
                                 (_DWORD)a1,
                                 v17,
                                 (_DWORD)a3,
                                 (_DWORD)a3,
                                 a2,
                                 (__int64)v16,
                                 (__int64)&v15);
        if ( CachedContextBaseKey >= 0 && !v15 )
        {
          while ( 1 )
          {
            v18[0] = 39;
            v11 = RegRtlEnumKey(v17, v4, pszSrc, v18);
            CachedContextBaseKey = v11;
            if ( v11 == -2147483622 )
              break;
            if ( v11 != -1073741789 )
            {
              if ( v11 < 0 )
                return (unsigned int)CachedContextBaseKey;
              v14 = CmValidateDeviceContainerName(v12, pszSrc, v13);
              CachedContextBaseKey = v14;
              if ( v14 != -1073741773 )
              {
                if ( v14 < 0 )
                  return (unsigned int)CachedContextBaseKey;
                CachedContextBaseKey = CmIsDeviceInContainer(
                                         (_DWORD)a1,
                                         v17,
                                         (unsigned int)pszSrc,
                                         (_DWORD)a3,
                                         a2,
                                         (__int64)v16,
                                         (__int64)&v15);
                if ( CachedContextBaseKey < 0 )
                  return (unsigned int)CachedContextBaseKey;
                if ( v16[0] )
                  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, pszSrc);
                if ( CachedContextBaseKey < 0 || v15 )
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
