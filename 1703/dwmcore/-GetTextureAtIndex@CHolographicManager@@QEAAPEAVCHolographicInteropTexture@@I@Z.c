/*
 * XREFs of ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1801A61A0
 * Callers:
 *     ?PreCompute@CHolographicInteropTarget@@AEAAJXZ @ 0x1801A69E8 (-PreCompute@CHolographicInteropTarget@@AEAAJXZ.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJ_NPEA_N@Z @ 0x1801A6AB0 (-Render@CHolographicInteropTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CHolographicInteropTexture *__fastcall CHolographicManager::GetTextureAtIndex(
        RTL_SRWLOCK *this,
        unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rsi

  v3 = a2;
  AcquireSRWLockShared(this + 9);
  v4 = 0LL;
  if ( (unsigned int)v3 < LODWORD(this[13].Ptr) )
    v4 = *((_QWORD *)this[10].Ptr + v3);
  ReleaseSRWLockShared(this + 9);
  return (struct CHolographicInteropTexture *)v4;
}
