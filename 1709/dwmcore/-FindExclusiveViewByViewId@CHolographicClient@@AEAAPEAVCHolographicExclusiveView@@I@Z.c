/*
 * XREFs of ?FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z @ 0x1801C2C54
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJII@Z @ 0x1801C2C90 (-FrameUpdate@CHolographicClient@@UEAAJII@Z.c)
 *     ?OnExclusiveViewActivate@CHolographicClient@@QEAA_NIPEAPEAX@Z @ 0x1801C2E2C (-OnExclusiveViewActivate@CHolographicClient@@QEAA_NIPEAPEAX@Z.c)
 *     ?ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z @ 0x1801C37E4 (-ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z.c)
 * Callees:
 *     <none>
 */

struct CHolographicExclusiveView *__fastcall CHolographicClient::FindExclusiveViewByViewId(
        CHolographicClient *this,
        int a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // r11

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
