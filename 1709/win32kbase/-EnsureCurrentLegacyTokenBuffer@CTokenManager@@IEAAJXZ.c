/*
 * XREFs of ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x1C0035DF4
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C00358DC (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C0035B50 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C009A8C8 (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CTokenManager::EnsureCurrentLegacyTokenBuffer(struct CLegacyTokenBuffer **this)
{
  unsigned int v1; // edx
  char *v3; // rax
  struct CLegacyTokenBuffer *v4; // r8
  __int64 v5; // r10

  v1 = 0;
  if ( !this[16] )
  {
    v3 = (char *)(this + 13);
    if ( *(char **)v3 == v3 )
    {
      return (unsigned int)CLegacyTokenBuffer::Create(this + 16);
    }
    else
    {
      v4 = *(struct CLegacyTokenBuffer **)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3
        || (v5 = *(_QWORD *)v4, *(struct CLegacyTokenBuffer **)(*(_QWORD *)v4 + 8LL) != v4) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v3 = v5;
      *(_QWORD *)(v5 + 8) = v3;
      --*((_DWORD *)this + 30);
      this[16] = v4;
    }
  }
  return v1;
}
