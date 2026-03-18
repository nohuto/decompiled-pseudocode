/*
 * XREFs of ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1801A60EC
 * Callers:
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1801A5D10 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z @ 0x1801A6120 (-GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

struct CHolographicInteropTexture *__fastcall CHolographicManager::FindInteropTextureByBindId(
        CHolographicManager *this,
        int a2)
{
  unsigned int v2; // r11d
  __int64 v3; // r9
  unsigned int v4; // r8d
  __int64 v5; // r10

  v2 = *((_DWORD *)this + 26);
  v3 = 0LL;
  v4 = 0;
  if ( v2 )
  {
    v5 = *((_QWORD *)this + 10);
    while ( *(_DWORD *)(*(_QWORD *)(v5 + 8LL * v4) + 104LL) != a2 )
    {
      if ( ++v4 >= v2 )
        return (struct CHolographicInteropTexture *)v3;
    }
    return *(struct CHolographicInteropTexture **)(v5 + 8LL * v4);
  }
  return (struct CHolographicInteropTexture *)v3;
}
