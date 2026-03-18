/*
 * XREFs of ?DeleteAllIndependentFlipTokens@CTokenManager@@IEAAXXZ @ 0x1C004A4AC
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C004A100 (--1CTokenManager@@AEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::DeleteAllIndependentFlipTokens(CTokenManager *this)
{
  CTokenManager **v1; // rdi
  CTokenManager **v2; // rax
  CTokenManager *v3; // rcx
  CTokenManager **v4; // rbx

  v1 = (CTokenManager **)((char *)this + 288);
  v2 = (CTokenManager **)*((_QWORD *)this + 36);
  if ( v2[1] != (CTokenManager *)((char *)this + 288) || (v3 = *v2, *((CTokenManager ***)*v2 + 1) != v2) )
    __fastfail(3u);
  while ( 1 )
  {
    *v1 = v3;
    *((_QWORD *)v3 + 1) = v1;
    if ( v2 == v1 )
      break;
    v4 = v2 - 1;
    (*((void (__fastcall **)(CTokenManager **))*(v2 - 1) + 7))(v2 - 1);
    (*(void (__fastcall **)(CTokenManager **, __int64))*v4)(v4, 1LL);
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
