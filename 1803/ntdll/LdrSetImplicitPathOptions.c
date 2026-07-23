/*
 * XREFs of LdrSetImplicitPathOptions @ 0x1800CAE20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl LdrSetImplicitPathOptions(ULONG ImplicitPathOptions)
{
  int v1; // edx
  int v2; // ebx
  NTSTATUS v3; // edi
  char *v4; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v2 = v1;
  if ( (~((dword_1801596D4 & 4 | 0x7B) << 8) & v1) != 0 || !v1 )
    return -1073741811;
  v3 = sub_18001FA3C(*(unsigned __int64 *)&ImplicitPathOptions, (__int64 *)&BaseAddress, &v6);
  if ( v3 >= 0 )
  {
    v4 = (char *)BaseAddress;
    *((_DWORD *)BaseAddress + 68) = v2;
    sub_18001F5FC(v4);
  }
  return v3;
}
