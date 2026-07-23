/*
 * XREFs of LdrGetDllHandleByName @ 0x18007B930
 * Callers:
 *     sub_18003C49C @ 0x18003C49C (sub_18003C49C.c)
 * Callees:
 *     sub_18001BDBC @ 0x18001BDBC (sub_18001BDBC.c)
 *     sub_180021AE0 @ 0x180021AE0 (sub_180021AE0.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_1800D7C98 @ 0x1800D7C98 (sub_1800D7C98.c)
 */

NTSTATUS __cdecl LdrGetDllHandleByName(PUNICODE_STRING BaseDllName, PUNICODE_STRING FullDllName, PVOID *DllHandle)
{
  NTSTATUS v4; // ebx
  PVOID v5; // rdi
  PVOID BaseAddress[2]; // [rsp+38h] [rbp-10h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = sub_180021AE0(BaseDllName, FullDllName, 0, (__int64)BaseAddress, &v8);
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
      v4 = sub_18001BDBC((__int64)BaseAddress[0]);
      if ( v4 >= 0 )
        *DllHandle = (PVOID)*((_QWORD *)v5 + 6);
    }
    sub_18003015C((char *)v5);
  }
  return v4;
}
