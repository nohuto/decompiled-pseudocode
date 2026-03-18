/*
 * XREFs of ACPIRegDumpAcpiTable @ 0x1C00AE1C8
 * Callers:
 *     ACPIRegDumpAcpiTables @ 0x1C00AE068 (ACPIRegDumpAcpiTables.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000E0C0 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIRegLocalCopyString @ 0x1C0087B1C (ACPIRegLocalCopyString.c)
 *     OSCloseHandle @ 0x1C008F8C8 (OSCloseHandle.c)
 *     OSCreateHandle @ 0x1C008F8E0 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C008F9BC (OSWriteRegValue.c)
 */

NTSTATUS __fastcall ACPIRegDumpAcpiTable(PCSZ SourceString, PVOID Data, ULONG DataSize, __int64 a4)
{
  NTSTATUS result; // eax
  HANDLE v9; // rbx
  HANDLE v10; // rbx
  int v11; // r9d
  HANDLE v12; // [rsp+20h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+28h] [rbp-31h] BYREF
  char pszDest[80]; // [rsp+30h] [rbp-29h] BYREF

  strcpy(pszDest, "\\Registry\\Machine\\Hardware\\ACPI");
  memset(&pszDest[32], 0, 0x30uLL);
  KeyHandle = 0LL;
  v12 = 0LL;
  result = OSCreateHandle(pszDest, 0LL, &v12);
  if ( result >= 0 )
  {
    if ( (int)OSCreateHandle(SourceString, v12, &KeyHandle) >= 0 )
    {
      if ( !a4 )
        goto LABEL_7;
      OSCloseHandle(v12);
      v9 = KeyHandle;
      v12 = KeyHandle;
      ACPIRegLocalCopyString(pszDest, a4 + 10, 6u);
      if ( (int)OSCreateHandle(pszDest, v9, &KeyHandle) >= 0 )
      {
        OSCloseHandle(v12);
        v10 = KeyHandle;
        v12 = KeyHandle;
        ACPIRegLocalCopyString(pszDest, a4 + 16, 8u);
        if ( (int)OSCreateHandle(pszDest, v10, &KeyHandle) >= 0 )
        {
          OSCloseHandle(v12);
          v11 = *(_DWORD *)(a4 + 24);
          v12 = KeyHandle;
          RtlStringCchPrintfA(pszDest, 0x50uLL, "%.8x", v11);
          if ( (int)OSCreateHandle(pszDest, v12, &KeyHandle) >= 0 )
          {
LABEL_7:
            OSWriteRegValue("00000000", KeyHandle, Data, DataSize);
            OSCloseHandle(KeyHandle);
          }
        }
      }
    }
    return OSCloseHandle(v12);
  }
  return result;
}
