/*
 * XREFs of ?ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z @ 0x1C00F7C7C
 * Callers:
 *     ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x1C00F6D30 (-NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0012CF4 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisPcwGetECInstanceName(char *a1, int a2, struct _UNICODE_STRING *a3)
{
  char *v4; // r9
  __int64 result; // rax
  unsigned int v6; // ebx
  WCHAR SourceString[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( *a1 == 3 )
  {
    v4 = a1 + 904;
  }
  else if ( *a1 == 4 )
  {
    v4 = a1 + 488;
  }
  else
  {
    v4 = 0LL;
  }
  result = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, L"%wZ: EC %u", v4, a2);
  v6 = result;
  if ( (int)result >= 0 )
  {
    if ( !RtlCreateUnicodeString(a3, SourceString) )
      return (unsigned int)-1073741670;
    return v6;
  }
  return result;
}
