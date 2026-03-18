/*
 * XREFs of ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1801F89D8
 * Callers:
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1801F7F90 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z @ 0x1801F8A0C (-GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

struct CHolographicInteropTexture *__fastcall CHolographicManager::FindInteropTextureByBindId(
        CHolographicManager *this,
        int a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // r11

  v2 = *((_DWORD *)this + 36);
  v3 = 0LL;
  v4 = 0;
  if ( v2 )
  {
    v5 = *((_QWORD *)this + 15);
    while ( *(_DWORD *)(*(_QWORD *)(v5 + 8LL * v4) + 120LL) != a2 )
    {
      if ( ++v4 >= v2 )
        return (struct CHolographicInteropTexture *)v3;
    }
    return *(struct CHolographicInteropTexture **)(v5 + 8LL * v4);
  }
  return (struct CHolographicInteropTexture *)v3;
}
