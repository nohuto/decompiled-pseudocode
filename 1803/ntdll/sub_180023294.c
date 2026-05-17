/*
 * XREFs of sub_180023294 @ 0x180023294
 * Callers:
 *     sub_18003F7F8 @ 0x18003F7F8 (sub_18003F7F8.c)
 *     LdrResolveDelayLoadsFromDll @ 0x1800CB220 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x180022CD0 (LdrResolveDelayLoadedAPI.c)
 */

__int64 __fastcall sub_180023294(char *a1, __int64 a2)
{
  unsigned int v2; // ebx
  char *v3; // rdi
  __int64 v4; // r14
  __int64 *v7; // rax

  v2 = 0;
  v3 = &a1[*(unsigned int *)(a2 + 12)];
  LODWORD(v4) = 0;
  if ( *(_QWORD *)v3 )
  {
    v7 = (__int64 *)&a1[*(unsigned int *)(a2 + 12)];
    do
    {
      if ( !LdrResolveDelayLoadedAPI(a1, (_BYTE *)a2, 0LL, 0LL, v7, 0) )
        v2 = -1073740782;
      v4 = (unsigned int)(v4 + 1);
      v7 = (__int64 *)&v3[8 * v4];
    }
    while ( *v7 );
  }
  return v2;
}
