/*
 * XREFs of PiSwFindSwDevice @ 0x140570D30
 * Callers:
 *     PiSwIrpCleanup @ 0x140570744 (PiSwIrpCleanup.c)
 *     PiSwProcessParentRemoveIrp @ 0x140570C2C (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14004C420 (RtlLookupElementGenericTableAvl.c)
 *     RtlStringCbCopyW @ 0x14004C84C (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 *     wcschr @ 0x14016BB40 (wcschr.c)
 */

__int64 __fastcall PiSwFindSwDevice(NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v2; // rbx
  wchar_t *v4; // rax
  PVOID v5; // rax
  char *Buffer; // [rsp+20h] [rbp-288h] BYREF
  char v7; // [rsp+30h] [rbp-278h] BYREF
  wchar_t *v8; // [rsp+38h] [rbp-270h]
  wchar_t *v9; // [rsp+40h] [rbp-268h]
  wchar_t pszDest[5]; // [rsp+100h] [rbp-1A8h] BYREF
  wchar_t Str[195]; // [rsp+10Ah] [rbp-19Eh] BYREF

  Buffer = &v7;
  v2 = 0LL;
  if ( !wcsnicmp(pszSrc, L"SWD\\", 4uLL) && RtlStringCbCopyW(pszDest, 0x190uLL, pszSrc) >= 0 )
  {
    v8 = pszDest;
    v4 = wcschr(Str, 0x5Cu);
    if ( v4 )
    {
      *v4 = 0;
      v9 = v4 + 1;
      v5 = RtlLookupElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
      if ( v5 )
        return *(_QWORD *)v5;
    }
  }
  return v2;
}
