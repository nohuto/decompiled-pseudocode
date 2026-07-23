/*
 * XREFs of LdrAddRefDll @ 0x1800590F0
 * Callers:
 *     sub_1800254A0 @ 0x1800254A0 (sub_1800254A0.c)
 *     sub_180025ACC @ 0x180025ACC (sub_180025ACC.c)
 *     sub_180027A70 @ 0x180027A70 (sub_180027A70.c)
 *     sub_18002C774 @ 0x18002C774 (sub_18002C774.c)
 *     sub_180054B20 @ 0x180054B20 (sub_180054B20.c)
 *     RtlQueueWorkItem @ 0x180057A90 (RtlQueueWorkItem.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 *     sub_1800389D0 @ 0x1800389D0 (sub_1800389D0.c)
 *     sub_180059158 @ 0x180059158 (sub_180059158.c)
 */

NTSTATUS __cdecl LdrAddRefDll(ULONG Flags, PVOID DllHandle)
{
  char v2; // di
  NTSTATUS v3; // ebx
  bool v4; // zf
  char *v5; // rdi
  NTSTATUS v6; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v2 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  v3 = sub_18001FA3C((unsigned __int64)DllHandle, (__int64 *)&BaseAddress, &v8);
  if ( v3 >= 0 )
  {
    v4 = (v2 & 1) == 0;
    v5 = (char *)BaseAddress;
    if ( v4 )
      v6 = sub_1800389D0((__int64)BaseAddress);
    else
      v6 = sub_180059158(BaseAddress);
    v3 = v6;
    sub_18001F5FC(v5);
  }
  return v3;
}
