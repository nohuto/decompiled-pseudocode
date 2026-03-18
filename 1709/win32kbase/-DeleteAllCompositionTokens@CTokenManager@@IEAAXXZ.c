/*
 * XREFs of ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C0035628
 * Callers:
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C0035F20 (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C003648C (--1CTokenManager@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::DeleteAllCompositionTokens(CTokenManager *this)
{
  CTokenManager **v1; // rbx
  CTokenManager **v2; // rax
  CTokenManager *v3; // rcx

  v1 = (CTokenManager **)((char *)this + 208);
  v2 = (CTokenManager **)*((_QWORD *)this + 26);
  if ( v2[1] != (CTokenManager *)((char *)this + 208) || (v3 = *v2, *((CTokenManager ***)*v2 + 1) != v2) )
    __fastfail(3u);
  while ( 1 )
  {
    *v1 = v3;
    *((_QWORD *)v3 + 1) = v1;
    if ( v2 == v1 )
      break;
    ObfDereferenceObject(v2 - 5);
    v2 = (CTokenManager **)*v1;
    if ( *((CTokenManager ***)*v1 + 1) == v1 )
    {
      v3 = *v2;
      if ( *((CTokenManager ***)*v2 + 1) == v2 )
        continue;
    }
    __fastfail(3u);
  }
}
