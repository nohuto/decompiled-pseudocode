/*
 * XREFs of ?ReclaimAtlasEntries@CAtlasManager@@QEAAXXZ @ 0x18011CC9C
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18002BF40 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasManager::ReclaimAtlasEntries(__int64 **this)
{
  __int64 *v1; // rax
  __int64 *v2; // r10
  __int64 v3; // rdx
  unsigned int i; // ecx
  __int64 v5; // r9

  v1 = *this;
  v2 = this[1];
  while ( v1 != v2 )
  {
    v3 = *v1;
    if ( *(_DWORD *)(*v1 + 32) )
    {
      for ( i = 0; i < *(_DWORD *)(v3 + 24); ++i )
      {
        v5 = *(_QWORD *)(v3 + 16);
        if ( *(_QWORD *)(v5 + 8LL * i) == -1LL )
          *(_QWORD *)(v5 + 8LL * i) = 0LL;
      }
      *(_DWORD *)(v3 + 28) += *(_DWORD *)(v3 + 32);
      *(_DWORD *)(v3 + 32) = 0;
    }
    ++v1;
  }
}
