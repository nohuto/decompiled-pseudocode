/*
 * XREFs of ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x1C0029C04
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0029724 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C0029990 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C00918CC (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CTokenManager::EnsureCurrentLegacyTokenBuffer(struct CLegacyTokenBuffer **this)
{
  unsigned int v1; // edx
  struct CLegacyTokenBuffer **v3; // rax
  struct CLegacyTokenBuffer *v4; // r8
  struct CLegacyTokenBuffer **v5; // r10

  v1 = 0;
  if ( !this[15] )
  {
    v3 = this + 12;
    if ( *v3 == (struct CLegacyTokenBuffer *)v3 )
    {
      return (unsigned int)CLegacyTokenBuffer::Create(this + 15);
    }
    else
    {
      v4 = *v3;
      v5 = *(struct CLegacyTokenBuffer ***)*v3;
      if ( *((struct CLegacyTokenBuffer ***)*v3 + 1) != v3 || v5[1] != v4 )
        __fastfail(3u);
      *v3 = (struct CLegacyTokenBuffer *)v5;
      v5[1] = (struct CLegacyTokenBuffer *)v3;
      --*((_DWORD *)this + 28);
      this[15] = v4;
    }
  }
  return v1;
}
