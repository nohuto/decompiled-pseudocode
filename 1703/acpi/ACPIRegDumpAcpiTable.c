/*
 * XREFs of ACPIRegDumpAcpiTable @ 0x1C00AB3D0
 * Callers:
 *     ACPIRegDumpAcpiTables @ 0x1C00AB270 (ACPIRegDumpAcpiTables.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0005198 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIRegLocalCopyString @ 0x1C00838A8 (ACPIRegLocalCopyString.c)
 *     OSCloseHandle @ 0x1C0089BD0 (OSCloseHandle.c)
 *     OSCreateHandle @ 0x1C0089BE0 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C0089CBC (OSWriteRegValue.c)
 */

NTSTATUS __fastcall ACPIRegDumpAcpiTable(PCSZ SourceString, PVOID Data, ULONG DataSize, __int64 a4)
{
  NTSTATUS result; // eax
  HANDLE v9; // rbx
  HANDLE v10; // rbx
  int v11; // r9d
  HANDLE Handle; // [rsp+20h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+28h] [rbp-31h] BYREF
  char pszDest[80]; // [rsp+30h] [rbp-29h] BYREF

  strcpy(pszDest, "\\Registry\\Machine\\Hardware\\ACPI");
  memset(&pszDest[32], 0, 0x30uLL);
  KeyHandle = 0LL;
  Handle = 0LL;
  result = OSCreateHandle(pszDest, 0LL, &Handle);
  if ( result >= 0 )
  {
    if ( (int)OSCreateHandle(SourceString, Handle, &KeyHandle) >= 0 )
    {
      if ( !a4 )
        goto LABEL_7;
      OSCloseHandle(Handle);
      v9 = KeyHandle;
      Handle = KeyHandle;
      ACPIRegLocalCopyString((__int64)pszDest, (char *)(a4 + 10), 6u);
      if ( (int)OSCreateHandle(pszDest, v9, &KeyHandle) >= 0 )
      {
        OSCloseHandle(Handle);
        v10 = KeyHandle;
        Handle = KeyHandle;
        ACPIRegLocalCopyString((__int64)pszDest, (char *)(a4 + 16), 8u);
        if ( (int)OSCreateHandle(pszDest, v10, &KeyHandle) >= 0 )
        {
          OSCloseHandle(Handle);
          v11 = *(_DWORD *)(a4 + 24);
          Handle = KeyHandle;
          RtlStringCchPrintfA(pszDest, 0x50uLL, "%.8x", v11);
          if ( (int)OSCreateHandle(pszDest, Handle, &KeyHandle) >= 0 )
          {
LABEL_7:
            OSWriteRegValue("00000000", KeyHandle, Data, DataSize);
            OSCloseHandle(KeyHandle);
          }
        }
      }
    }
    return OSCloseHandle(Handle);
  }
  return result;
}
