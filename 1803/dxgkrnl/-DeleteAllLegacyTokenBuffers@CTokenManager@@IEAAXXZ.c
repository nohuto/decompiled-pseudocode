/*
 * XREFs of ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C004A534
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C004A100 (--1CTokenManager@@AEAA@XZ.c)
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x1C004A610 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 * Callees:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C004A1B4 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 */

void __fastcall CTokenManager::DeleteAllLegacyTokenBuffers(CTokenManager *this)
{
  CLegacyTokenBuffer *v2; // rcx
  CTokenManager **v3; // rbx
  CTokenManager **v4; // rax
  CTokenManager *v5; // rcx

  v2 = (CLegacyTokenBuffer *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    CLegacyTokenBuffer::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 23) = 0LL;
  }
  v3 = (CTokenManager **)((char *)this + 160);
  v4 = (CTokenManager **)*((_QWORD *)this + 20);
  if ( v4[1] != (CTokenManager *)((char *)this + 160) || (v5 = *v4, *((CTokenManager ***)*v4 + 1) != v4) )
    __fastfail(3u);
  while ( 1 )
  {
    *v3 = v5;
    *((_QWORD *)v5 + 1) = v3;
    if ( v4 == v3 )
      break;
    if ( v4 )
      CLegacyTokenBuffer::`scalar deleting destructor'((CLegacyTokenBuffer *)v4);
    v4 = (CTokenManager **)*v3;
    if ( *((CTokenManager ***)*v3 + 1) == v3 )
    {
      v5 = *v4;
      if ( *((CTokenManager ***)*v4 + 1) == v4 )
        continue;
    }
    __fastfail(3u);
  }
  *((_DWORD *)this + 44) = 0;
}
