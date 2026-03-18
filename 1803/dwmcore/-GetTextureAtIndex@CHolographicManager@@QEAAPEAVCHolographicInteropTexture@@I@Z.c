/*
 * XREFs of ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1801F8A8C
 * Callers:
 *     ?PreCompute@CHolographicInteropTarget@@AEAAJXZ @ 0x1801FDD24 (-PreCompute@CHolographicInteropTarget@@AEAAJXZ.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x1801FDE00 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
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
  AcquireSRWLockShared(this + 10);
  v4 = 0LL;
  if ( (unsigned int)v3 < LODWORD(this[18].Ptr) )
    v4 = *((_QWORD *)this[15].Ptr + v3);
  ReleaseSRWLockShared(this + 10);
  return (struct CHolographicInteropTexture *)v4;
}
