/*
 * XREFs of LdrLoadDll @ 0x180041BB0
 * Callers:
 *     sub_18007BD78 @ 0x18007BD78 (sub_18007BD78.c)
 *     sub_180081A8C @ 0x180081A8C (sub_180081A8C.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D1D00 (RtlWow64LogMessageInEventLogger.c)
 *     sub_180109668 @ 0x180109668 (sub_180109668.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     sub_18003B7AC @ 0x18003B7AC (sub_18003B7AC.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

NTSTATUS __cdecl LdrLoadDll(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  NTSTATUS v8; // ebx
  char *v9; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp-C8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-B8h] BYREF
  char v13; // [rsp+BCh] [rbp-3Ch]

  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      145,
      (unsigned int)"LdrLoadDll",
      3,
      "DLL name: %wZ\n",
      DllName);
  if ( (dword_1801596D4 & 4) == 0 && ((unsigned __int16)DllPath & 0x401) == 0x401LL )
    return -1073741811;
  if ( DllCharacteristics
    && (LODWORD(DllCharacteristics) = *DllCharacteristics, ((unsigned __int8)DllCharacteristics & 4) != 0)
    && (dword_1801596D4 & 8) == 0 )
  {
    if ( (dword_180156A70 & 3) != 0 )
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrapi.c",
        169,
        (unsigned int)"LdrLoadDll",
        0,
        "Nonpackaged process attempted to load a packaged DLL.\n");
    if ( (dword_180156A70 & 0x10) != 0 )
      __debugbreak();
    v8 = -1073741398;
  }
  else if ( (NtCurrentTeb()->SameTebFlags & 0x2000) != 0 )
  {
    v8 = -1073740004;
  }
  else
  {
    sub_180042054(DllName->Buffer, DllPath, Path);
    v8 = sub_18003B7AC((__int64)DllName, (__int64)Path, (int)DllCharacteristics, 1, &BaseAddress);
    if ( v13 )
      RtlReleasePath(Path[0]);
    if ( v8 >= 0 )
    {
      v9 = (char *)BaseAddress;
      *DllHandle = (PVOID)*((_QWORD *)BaseAddress + 6);
      sub_18001F5FC(v9);
    }
  }
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      206,
      (unsigned int)"LdrLoadDll",
      4,
      "Status: 0x%08lx\n",
      v8);
  return v8;
}
