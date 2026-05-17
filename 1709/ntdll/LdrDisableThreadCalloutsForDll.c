/*
 * XREFs of LdrDisableThreadCalloutsForDll @ 0x18007C930
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x1800292AC (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrDisableThreadCalloutsForDll(__int64 a1)
{
  int LoadedDllByHandle; // ebx
  __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_18015F3E8 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v5, &v4);
    if ( LoadedDllByHandle >= 0 )
    {
      v2 = v5;
      if ( !*(_WORD *)(v5 + 110) )
        *(_BYTE *)(v5 + 106) |= 4u;
      LdrpDereferenceModule(v2);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
