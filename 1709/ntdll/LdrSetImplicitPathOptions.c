/*
 * XREFs of LdrSetImplicitPathOptions @ 0x1800D1590
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x1800292AC (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl LdrSetImplicitPathOptions(ULONG ImplicitPathOptions)
{
  int v1; // edx
  int v2; // ebx
  NTSTATUS LoadedDllByHandle; // edi
  char *v4; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v2 = v1;
  if ( (~((LdrpPolicyBits & 4 | 0x7B) << 8) & v1) != 0 || !v1 )
    return -1073741811;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(*(__int64 *)&ImplicitPathOptions, (__int64 *)&BaseAddress, &v6);
  if ( LoadedDllByHandle >= 0 )
  {
    v4 = (char *)BaseAddress;
    *((_DWORD *)BaseAddress + 68) = v2;
    LdrpDereferenceModule(v4);
  }
  return LoadedDllByHandle;
}
