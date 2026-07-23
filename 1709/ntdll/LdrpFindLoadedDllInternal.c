/*
 * XREFs of LdrpFindLoadedDllInternal @ 0x180035624
 * Callers:
 *     LdrpFindLoadedDll @ 0x180035548 (LdrpFindLoadedDll.c)
 * Callees:
 *     LdrpFindLoadedDllByName @ 0x18002E330 (LdrpFindLoadedDllByName.c)
 *     LdrpSearchPath @ 0x18004D43C (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x18004DA64 (LdrpResolveDllName.c)
 *     LdrpFreeUnicodeString @ 0x18004F9BC (LdrpFreeUnicodeString.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007A228 (LdrpFindLoadedDllByMappingFile.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpFindLoadedDllInternal(_UNICODE_STRING *a1, int a2, _QWORD *a3, _DWORD *a4, int a5)
{
  unsigned int LoadedDllByName; // ebx
  int v9; // eax
  _UNICODE_STRING v10; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING String1; // [rsp+60h] [rbp-A0h] BYREF
  int v12; // [rsp+70h] [rbp-90h] BYREF
  _WORD *v13; // [rsp+78h] [rbp-88h]
  _WORD v14[128]; // [rsp+80h] [rbp-80h] BYREF

  *a3 = 0LL;
  if ( (a5 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(a1, 0LL, a5, (__int64)a3, a4);
  }
  else
  {
    v12 = 0x1000000;
    v13 = v14;
    v14[0] = 0;
    *(_QWORD *)&v10.Length = 0LL;
    v10.Buffer = 0LL;
    if ( (a5 & 0x200) != 0 )
      v9 = LdrpResolveDllName(a1, &v12, &String1, &v10, a5);
    else
      v9 = LdrpSearchPath((_DWORD)a1, a2, 0, 0, (__int64)&v12, (__int64)&String1, (__int64)&v10, 0LL, 0LL);
    LoadedDllByName = v9;
    if ( v9 >= 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName(&String1, &v10, a5, (__int64)a3, a4);
      if ( LoadedDllByName == -1073741515 )
        LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v12, a3, a4);
    }
    LdrpFreeUnicodeString(&v10);
    if ( v14 != v13 )
      NtdllpFreeStringRoutine(v13);
    v12 = 0x1000000;
    v13 = v14;
    v14[0] = 0;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      456,
      (unsigned int)"LdrpFindLoadedDllInternal",
      4,
      "Status: 0x%08lx\n",
      LoadedDllByName);
  return LoadedDllByName;
}
