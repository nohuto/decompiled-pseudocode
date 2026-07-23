/*
 * XREFs of LdrGetDllHandleByName @ 0x1800772B0
 * Callers:
 *     sub_18003F7F8 @ 0x18003F7F8 (sub_18003F7F8.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_1800385D0 @ 0x1800385D0 (sub_1800385D0.c)
 *     sub_1800389D0 @ 0x1800389D0 (sub_1800389D0.c)
 *     sub_1800D0A98 @ 0x1800D0A98 (sub_1800D0A98.c)
 */

NTSTATUS __cdecl LdrGetDllHandleByName(PUNICODE_STRING BaseDllName, PUNICODE_STRING FullDllName, PVOID *DllHandle)
{
  NTSTATUS v4; // ebx
  PVOID v5; // rdi
  PVOID BaseAddress[2]; // [rsp+38h] [rbp-10h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = sub_1800385D0(BaseDllName, FullDllName, 0, (__int64)BaseAddress, &v8);
  if ( v4 >= 0 )
  {
    if ( v8 < 7 )
    {
      v4 = -1073741515;
      v5 = BaseAddress[0];
    }
    else
    {
      v5 = BaseAddress[0];
      v4 = sub_1800389D0((__int64)BaseAddress[0]);
      if ( v4 >= 0 )
        *DllHandle = (PVOID)*((_QWORD *)v5 + 6);
    }
    sub_18001F5FC((char *)v5);
  }
  return v4;
}
