/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x1800EA8B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     wcscpy_s @ 0x18009C430 (wcscpy_s.c)
 *     NtWriteFile @ 0x1800A01C0 (NtWriteFile.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwCreateFile @ 0x1800A0B60 (ZwCreateFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EABE0 (RtlRestoreBootStatusDefaults.c)
 */

__int64 __fastcall RtlCreateBootStatusDataFile(wchar_t *a1)
{
  wchar_t *v1; // rdx
  __int64 result; // rax
  int v3; // ebx
  HANDLE Handle; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  int v6; // [rsp+98h] [rbp-68h]
  __int64 v7; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING *p_DestinationString; // [rsp+A8h] [rbp-58h]
  int v9; // [rsp+B0h] [rbp-50h]
  __int128 v10; // [rsp+B8h] [rbp-48h]
  wchar_t Destination[264]; // [rsp+D0h] [rbp-30h] BYREF

  if ( a1 )
  {
    v1 = a1;
  }
  else
  {
    wcscpy_s(Destination, 0x101uLL, L"\\SystemRoot\\bootstat.dat");
    v1 = Destination;
  }
  RtlInitUnicodeString(&DestinationString, v1);
  v7 = 0LL;
  p_DestinationString = &DestinationString;
  v6 = 48;
  v9 = 64;
  v10 = 0LL;
  result = ZwCreateFile();
  if ( (int)result >= 0 )
  {
    v3 = NtWriteFile();
    if ( v3 >= 0 )
      v3 = ((__int64 (__fastcall *)())RtlRestoreBootStatusDefaults)();
    NtClose(Handle);
    return (unsigned int)v3;
  }
  return result;
}
