/*
 * XREFs of sub_1800CCA84 @ 0x1800CCA84
 * Callers:
 *     sub_18007AE58 @ 0x18007AE58 (sub_18007AE58.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     sub_18003B7AC @ 0x18003B7AC (sub_18003B7AC.c)
 *     sub_18003BE00 @ 0x18003BE00 (sub_18003BE00.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 *     sub_180055D80 @ 0x180055D80 (sub_180055D80.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall sub_1800CCA84(_QWORD *a1)
{
  unsigned int v1; // edi
  __int64 v3; // r8
  int v4; // ebx
  char v5; // al
  __int64 v6; // rdx
  _DWORD *v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v10; // [rsp+50h] [rbp-B0h]
  int v11; // [rsp+60h] [rbp-A0h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [rsp+68h] [rbp-98h]
  _WORD v13[128]; // [rsp+70h] [rbp-90h] BYREF
  PWSTR Path[15]; // [rsp+170h] [rbp+70h] BYREF
  char v15; // [rsp+1ECh] [rbp+ECh]

  v1 = 0;
  v10 = L"apphelp.dll";
  v9 = 1572886;
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v13;
  v11 = 0x1000000;
  v13[0] = 0;
  if ( qword_18016F208 )
  {
    v3 = MEMORY[0x7FFE0330] ^ __ROR8__(qword_18016F208, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    *a1 = v3;
    if ( !v3 )
      return (unsigned int)-1073741823;
    return v1;
  }
  v4 = sub_18003BE00(&v11, (__int64)&v9);
  if ( v4 >= 0 )
  {
    sub_180042054(0LL, (const WCHAR *)0x4001, (const WCHAR **)Path);
    v4 = sub_18003B7AC((__int64)&v11, (__int64)Path, 0, 1, (PVOID *)&v8);
    if ( v15 )
      RtlReleasePath(Path[0]);
    if ( v4 >= 0 )
    {
      v8[26] |= 0x100u;
      DllHandle = (PVOID)*((_QWORD *)v8 + 6);
      v4 = sub_180055D80();
      if ( v4 >= 0 )
      {
        v4 = 0;
        v6 = MEMORY[0x7FFE0330] ^ __ROR8__(qword_18016F208, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
        *a1 = v6;
        if ( !v6 )
          v4 = -1073741823;
        goto LABEL_19;
      }
      v5 = dword_180156A70;
      if ( (dword_180156A70 & 3) == 0 )
        goto LABEL_12;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2811,
        (unsigned int)"LdrpGetProcApphelpCheckModule",
        0,
        "Getting the shim engine exports failed with status 0x%08lx\n",
        v4);
    }
    else
    {
      v5 = dword_180156A70;
      if ( (dword_180156A70 & 3) == 0 )
        goto LABEL_12;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2800,
        (unsigned int)"LdrpGetProcApphelpCheckModule",
        0,
        "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
        &v11,
        v4);
    }
    v5 = dword_180156A70;
LABEL_12:
    if ( (v5 & 0x10) != 0 )
      __debugbreak();
  }
LABEL_19:
  if ( v13 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
  return (unsigned int)v4;
}
