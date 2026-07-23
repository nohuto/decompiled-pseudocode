/*
 * XREFs of LdrSetImplicitPathOptions @ 0x1800D59F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030264 @ 0x180030264 (sub_180030264.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl LdrSetImplicitPathOptions(ULONG ImplicitPathOptions)
{
  int v1; // edx
  int v2; // ebx
  int v3; // eax
  NTSTATUS v4; // edi
  char *v5; // rcx
  int v7; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v2 = v1;
  v3 = 32512;
  if ( (dword_180158674 & 4) == 0 )
    v3 = 31488;
  if ( (~v3 & v1) != 0 || !v1 )
    return -1073741811;
  v4 = sub_180030264(*(ULONG_PTR *)&ImplicitPathOptions, (__int64 *)&BaseAddress, &v7);
  if ( v4 >= 0 )
  {
    v5 = (char *)BaseAddress;
    *((_DWORD *)BaseAddress + 68) = v2;
    sub_18003015C(v5);
  }
  return v4;
}
