/*
 * XREFs of ?ReclaimAtlasEntries@CAtlasManager@@QEAAXXZ @ 0x18013F9C8
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z @ 0x180046970 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasManager::ReclaimAtlasEntries(CAtlasManager *this)
{
  __int64 *v1; // r8
  __int64 *i; // rdx
  __int64 v3; // rcx
  unsigned int j; // eax
  __int64 v5; // r10

  v1 = (__int64 *)*((_QWORD *)this + 1);
  for ( i = *(__int64 **)this; i != v1; ++i )
  {
    v3 = *i;
    if ( *(_DWORD *)(*i + 32) )
    {
      for ( j = 0; j < *(_DWORD *)(v3 + 24); ++j )
      {
        v5 = *(_QWORD *)(v3 + 16);
        if ( *(_QWORD *)(v5 + 8LL * j) == -1LL )
          *(_QWORD *)(v5 + 8LL * j) = 0LL;
      }
      *(_DWORD *)(v3 + 28) += *(_DWORD *)(v3 + 32);
      *(_DWORD *)(v3 + 32) = 0;
    }
  }
}
