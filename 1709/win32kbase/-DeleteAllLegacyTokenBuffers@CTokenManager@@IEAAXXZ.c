/*
 * XREFs of ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C003566C
 * Callers:
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C0035F20 (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C003648C (--1CTokenManager@@AEAA@XZ.c)
 * Callees:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C00394BC (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 */

void __fastcall CTokenManager::DeleteAllLegacyTokenBuffers(CTokenManager *this, unsigned int a2)
{
  CLegacyTokenBuffer *v3; // rcx
  CTokenManager **v4; // rbx
  CTokenManager **v5; // rax
  CTokenManager *v6; // rcx

  v3 = (CLegacyTokenBuffer *)*((_QWORD *)this + 16);
  if ( v3 )
  {
    CLegacyTokenBuffer::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 16) = 0LL;
  }
  v4 = (CTokenManager **)((char *)this + 104);
  v5 = (CTokenManager **)*((_QWORD *)this + 13);
  if ( v5[1] != (CTokenManager *)((char *)this + 104) || (v6 = *v5, *((CTokenManager ***)*v5 + 1) != v5) )
    __fastfail(3u);
  while ( 1 )
  {
    *v4 = v6;
    *((_QWORD *)v6 + 1) = v4;
    if ( v5 == v4 )
      break;
    if ( v5 )
      CLegacyTokenBuffer::`scalar deleting destructor'((CLegacyTokenBuffer *)v5, a2);
    v5 = (CTokenManager **)*v4;
    if ( *((CTokenManager ***)*v4 + 1) == v4 )
    {
      v6 = *v5;
      if ( *((CTokenManager ***)*v5 + 1) == v5 )
        continue;
    }
    __fastfail(3u);
  }
  *((_DWORD *)this + 30) = 0;
}
