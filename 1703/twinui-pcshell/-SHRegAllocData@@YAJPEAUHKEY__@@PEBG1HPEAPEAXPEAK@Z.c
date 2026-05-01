/*
 * XREFs of ?SHRegAllocData@@YAJPEAUHKEY__@@PEBG1HPEAPEAXPEAK@Z @ 0x1800B527C
 * Callers:
 *     ?RuntimeClassInitialize@CWelcomeScreenExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B2A9C (-RuntimeClassInitialize@CWelcomeScreenExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1801976BE (memcpy_0.c)
 */

__int64 __fastcall SHRegAllocData(
        HKEY a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        void **a5)
{
  LSTATUS v5; // ebx
  LSTATUS ValueW; // eax
  void *pvData; // rax
  __int64 result; // rax
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  HKEY hkey; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE Src[256]; // [rsp+50h] [rbp-B0h] BYREF

  hkey = HKEY_CURRENT_USER;
  v5 = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Welcome Screen", 0, 1u, &hkey);
  if ( v5 )
    goto LABEL_12;
  pcbData = 256;
  ValueW = RegGetValueW(hkey, 0LL, L"WelcomeScreenAumId", 2u, 0LL, Src, &pcbData);
  v5 = ValueW;
  if ( !ValueW || ValueW == 234 )
  {
    pvData = CoTaskMemAlloc(pcbData);
    *a5 = pvData;
    if ( pvData )
    {
      if ( v5 )
      {
        if ( RegGetValueW(hkey, 0LL, L"WelcomeScreenAumId", 2u, 0LL, pvData, &pcbData) )
        {
          v5 = 1003;
          CoTaskMemFree(*a5);
        }
        else
        {
          v5 = 0;
        }
      }
      else
      {
        memcpy_0(pvData, Src, pcbData);
      }
    }
    else
    {
      v5 = 14;
    }
  }
  RegCloseKey(hkey);
  if ( v5 )
LABEL_12:
    *a5 = 0LL;
  result = (unsigned __int16)v5 | 0x80070000;
  if ( v5 <= 0 )
    return (unsigned int)v5;
  return result;
}
