/*
 * XREFs of LdrGetDllHandleEx @ 0x180041D20
 * Callers:
 *     LdrGetDllHandle @ 0x180041CF0 (LdrGetDllHandle.c)
 *     CsrClientConnectToServer @ 0x1800597A0 (CsrClientConnectToServer.c)
 *     sub_180109668 @ 0x180109668 (sub_180109668.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     sub_1800389D0 @ 0x1800389D0 (sub_1800389D0.c)
 *     sub_180041E34 @ 0x180041E34 (sub_180041E34.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 *     sub_180059158 @ 0x180059158 (sub_180059158.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

NTSTATUS __cdecl LdrGetDllHandleEx(
        ULONG Flags,
        PWSTR DllPath,
        PULONG DllCharacteristics,
        PUNICODE_STRING DllName,
        PVOID *DllHandle)
{
  NTSTATUS v8; // ebx
  PVOID v10; // rsi
  NTSTATUS v11; // eax
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-B8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v14; // [rsp+BCh] [rbp-2Ch]

  BaseAddress[0] = 0LL;
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      856,
      (unsigned int)"LdrGetDllHandleEx",
      3,
      "DLL name: %wZ\n",
      DllName);
  sub_180042054(DllName->Buffer, DllPath, Path);
  if ( (Flags & 0xFFFFFFF8) != 0 || (Flags & 3) == 3 || !DllHandle && (Flags & 2) == 0 )
  {
    v8 = -1073741811;
    goto LABEL_6;
  }
  v8 = sub_180041E34(DllName, Path, BaseAddress);
  if ( v8 >= 0 )
  {
    v10 = BaseAddress[0];
    if ( (Flags & 2) != 0 )
    {
      v11 = sub_180059158(BaseAddress[0]);
    }
    else
    {
      if ( (Flags & 1) != 0 )
        goto LABEL_15;
      v11 = sub_1800389D0((__int64)BaseAddress[0]);
    }
    v8 = v11;
LABEL_15:
    if ( v8 >= 0 && DllHandle )
      *DllHandle = (PVOID)*((_QWORD *)v10 + 6);
    sub_18001F5FC((char *)v10);
  }
LABEL_6:
  if ( v14 )
    RtlReleasePath(Path[0]);
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      906,
      (unsigned int)"LdrGetDllHandleEx",
      4,
      "Status: 0x%08lx\n",
      v8);
  return v8;
}
