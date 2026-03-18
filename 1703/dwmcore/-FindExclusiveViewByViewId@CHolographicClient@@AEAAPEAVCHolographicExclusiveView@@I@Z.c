/*
 * XREFs of ?FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z @ 0x1801A7A78
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJI@Z @ 0x1801A7AB0 (-FrameUpdate@CHolographicClient@@UEAAJI@Z.c)
 *     ?ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z @ 0x1801A8700 (-ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z.c)
 * Callees:
 *     <none>
 */

struct CHolographicExclusiveView *__fastcall CHolographicClient::FindExclusiveViewByViewId(
        CHolographicClient *this,
        int a2)
{
  unsigned int v2; // r11d
  __int64 v3; // r9
  unsigned int v4; // r8d
  __int64 v5; // r10

  v2 = *((_DWORD *)this + 24);
  v3 = 0LL;
  v4 = 0;
  if ( v2 )
  {
    v5 = *((_QWORD *)this + 9);
    while ( *(_DWORD *)(*(_QWORD *)(v5 + 8LL * v4) + 64LL) != a2 )
    {
      if ( ++v4 >= v2 )
        return (struct CHolographicExclusiveView *)v3;
    }
    return *(struct CHolographicExclusiveView **)(v5 + 8LL * v4);
  }
  return (struct CHolographicExclusiveView *)v3;
}
