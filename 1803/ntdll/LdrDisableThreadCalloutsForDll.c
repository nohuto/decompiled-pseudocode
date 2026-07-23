/*
 * XREFs of LdrDisableThreadCalloutsForDll @ 0x180079BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 */

NTSTATUS __cdecl LdrDisableThreadCalloutsForDll(PVOID DllImageBase)
{
  NTSTATUS v1; // ebx
  char *v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  if ( !byte_18015C3A8 )
  {
    v1 = sub_18001FA3C((unsigned __int64)DllImageBase, (__int64 *)&BaseAddress, &v4);
    if ( v1 >= 0 )
    {
      v2 = (char *)BaseAddress;
      if ( !*((_WORD *)BaseAddress + 55) )
        *((_BYTE *)BaseAddress + 106) |= 4u;
      sub_18001F5FC(v2);
    }
  }
  return v1;
}
