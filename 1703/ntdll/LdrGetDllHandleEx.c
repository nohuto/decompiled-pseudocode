/*
 * XREFs of LdrGetDllHandleEx @ 0x18003BF00
 * Callers:
 *     CsrClientConnectToServer @ 0x18000B620 (CsrClientConnectToServer.c)
 *     LdrGetDllHandle @ 0x18003BD20 (LdrGetDllHandle.c)
 *     sub_180106674 @ 0x180106674 (sub_180106674.c)
 * Callees:
 *     sub_18001A084 @ 0x18001A084 (sub_18001A084.c)
 *     sub_18001BDBC @ 0x18001BDBC (sub_18001BDBC.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_18003BE90 @ 0x18003BE90 (sub_18003BE90.c)
 *     sub_18003C014 @ 0x18003C014 (sub_18003C014.c)
 *     RtlReleasePath @ 0x18006F830 (RtlReleasePath.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

NTSTATUS __cdecl LdrGetDllHandleEx(
        ULONG Flags,
        PWSTR DllPath,
        PULONG DllCharacteristics,
        PUNICODE_STRING DllName,
        PVOID *DllHandle)
{
  NTSTATUS v8; // ebx
  PVOID v10; // rdi
  NTSTATUS v11; // eax
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-B8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v14; // [rsp+BCh] [rbp-2Ch]

  BaseAddress[0] = 0LL;
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      844,
      (unsigned int)"LdrGetDllHandleEx",
      3,
      "DLL name: %wZ\n",
      DllName);
  sub_18003BE90((__int64)DllName->Buffer, (__int64)DllPath, (__int64 *)Path);
  if ( (Flags & 0xFFFFFFF8) != 0 || (Flags & 3) == 3 || !DllHandle && (Flags & 2) == 0 )
  {
    v8 = -1073741811;
    goto LABEL_6;
  }
  v8 = sub_18003C014(DllName, Path, BaseAddress);
  if ( v8 >= 0 )
  {
    v10 = BaseAddress[0];
    if ( (Flags & 2) != 0 )
    {
      v11 = sub_18001A084((__int64)BaseAddress[0]);
    }
    else
    {
      if ( (Flags & 1) != 0 )
        goto LABEL_15;
      v11 = sub_18001BDBC((__int64)BaseAddress[0]);
    }
    v8 = v11;
LABEL_15:
    if ( v8 >= 0 && DllHandle )
      *DllHandle = (PVOID)*((_QWORD *)v10 + 6);
    sub_18003015C((char *)v10);
  }
LABEL_6:
  if ( v14 )
    RtlReleasePath(Path[0]);
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      894,
      (unsigned int)"LdrGetDllHandleEx",
      4,
      "Status: 0x%08lx\n",
      v8);
  return v8;
}
