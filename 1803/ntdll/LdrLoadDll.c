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

__int64 __fastcall LdrLoadDll(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4)
{
  int v8; // ebx
  unsigned __int64 v9; // rcx
  unsigned __int64 v11; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v12[15]; // [rsp+40h] [rbp-B8h] BYREF
  char v13; // [rsp+BCh] [rbp-3Ch]

  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554((unsigned int)"minkernel\\ntdll\\ldrapi.c", 145, (unsigned int)"LdrLoadDll", 3, "DLL name: %wZ\n", a3);
  if ( (dword_1801596D4 & 4) == 0 && (a1 & 0x401) == 0x401 )
    return 3221225485LL;
  if ( a2 && (LODWORD(a2) = *a2, ((unsigned __int8)a2 & 4) != 0) && (dword_1801596D4 & 8) == 0 )
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
    sub_180042054(*(_QWORD *)(a3 + 8), a1, v12);
    v8 = sub_18003B7AC(a3, (int)v12, (int)a2, 1, (__int64 *)&v11);
    if ( v13 )
      RtlReleasePath(v12[0]);
    if ( v8 >= 0 )
    {
      v9 = v11;
      *a4 = *(_QWORD *)(v11 + 48);
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
  return (unsigned int)v8;
}
