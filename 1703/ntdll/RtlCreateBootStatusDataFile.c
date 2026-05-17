/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x1800EB2F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     wcscpy_s @ 0x1800A16D0 (wcscpy_s.c)
 *     ZwWriteFile @ 0x1800A5400 (ZwWriteFile.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateFile @ 0x1800A5DA0 (ZwCreateFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EB450 (RtlRestoreBootStatusDefaults.c)
 */

__int64 __fastcall RtlCreateBootStatusDataFile(wchar_t *a1)
{
  wchar_t *v1; // rdx
  __int64 result; // rax
  int v3; // ebx
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  int v5; // [rsp+98h] [rbp-68h]
  __int64 v6; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING *p_DestinationString; // [rsp+A8h] [rbp-58h]
  int v8; // [rsp+B0h] [rbp-50h]
  __int128 v9; // [rsp+B8h] [rbp-48h]
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
  v6 = 0LL;
  p_DestinationString = &DestinationString;
  v5 = 48;
  v8 = 64;
  v9 = 0LL;
  result = ZwCreateFile();
  if ( (int)result >= 0 )
  {
    v3 = ZwWriteFile();
    if ( v3 >= 0 )
      v3 = ((__int64 (__fastcall *)())RtlRestoreBootStatusDefaults)();
    ZwClose();
    return (unsigned int)v3;
  }
  return result;
}
