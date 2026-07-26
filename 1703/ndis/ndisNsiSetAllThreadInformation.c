/*
 * XREFs of ndisNsiSetAllThreadInformation @ 0x1C00E4920
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C0011878 (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 */

__int64 __fastcall ndisNsiSetAllThreadInformation(__int64 a1)
{
  unsigned int *v2; // rdx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v3 = 0;
  if ( *(_DWORD *)(a1 + 52) )
    return 3221225474LL;
  if ( *(_DWORD *)(a1 + 48) )
    return 3221225485LL;
  v2 = *(unsigned int **)(a1 + 32);
  if ( v2 )
  {
    v4 = *v2;
    v3 = v2[1];
  }
  return ndisCmSetThreadState(KeGetCurrentThread(), &v4, &v3);
}
