/*
 * XREFs of _PnpDeletePropertyWorker @ 0x1405757E8
 * Callers:
 *     _PnpSetGenericStoreProperty @ 0x1404DB4EC (_PnpSetGenericStoreProperty.c)
 *     DrvDbDeleteObjectSubKey @ 0x140742778 (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14004BF9C (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchPrintfExW @ 0x14004C0E0 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14017F900 (ZwDeleteValueKey.c)
 *     _PnpOpenPropertiesKey @ 0x140487174 (_PnpOpenPropertiesKey.c)
 */

__int64 __fastcall PnpDeletePropertyWorker(
        __int64 *a1,
        __int64 a2,
        const WCHAR *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  int v10; // eax
  NTSTATUS v11; // ebx
  NTSTATUS inited; // edi
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-140h]
  HANDLE KeyHandle; // [rsp+90h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-D0h] BYREF
  wchar_t pszDest[48]; // [rsp+B0h] [rbp-B8h] BYREF

  KeyHandle = 0LL;
  if ( a5 || a7 )
    return (unsigned int)-1073741811;
  if ( !a3 || (v11 = RtlUnalignedStringCchLengthW(a3, 0x55uLL, (size_t *)&DestinationString.Length), v11 >= 0) )
  {
    if ( RtlStringCchPrintfExW(
           pszDest,
           0x30uLL,
           0LL,
           0LL,
           0x800u,
           L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX") < 0 )
      return (unsigned int)-1073741595;
    v10 = PnpOpenPropertiesKey(a1, a2, pszDest, 6u, 0, (__int64)pszFormat, &KeyHandle);
    v11 = v10;
    if ( v10 == -1073741772 )
      return (unsigned int)-1073741275;
    if ( v10 < 0 )
      return (unsigned int)v11;
    inited = RtlInitUnicodeStringEx(&DestinationString, a3);
    if ( inited >= 0 )
      inited = ZwDeleteValueKey(KeyHandle, &DestinationString);
    ZwClose(KeyHandle);
    if ( inited == -1073741772 || inited == -1073741444 )
      return (unsigned int)-1073741275;
    if ( inited < 0 )
      return (unsigned int)inited;
  }
  return (unsigned int)v11;
}
