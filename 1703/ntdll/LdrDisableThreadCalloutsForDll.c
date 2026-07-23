/*
 * XREFs of LdrDisableThreadCalloutsForDll @ 0x18007E0D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030264 @ 0x180030264 (sub_180030264.c)
 */

NTSTATUS __cdecl LdrDisableThreadCalloutsForDll(PVOID DllImageBase)
{
  NTSTATUS v1; // ebx
  char *v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  if ( !byte_18015B388 )
  {
    v1 = sub_180030264((ULONG_PTR)DllImageBase, (__int64 *)&BaseAddress, &v4);
    if ( v1 >= 0 )
    {
      v2 = (char *)BaseAddress;
      if ( !*((_WORD *)BaseAddress + 55) )
        *((_BYTE *)BaseAddress + 106) |= 4u;
      sub_18003015C(v2);
    }
  }
  return v1;
}
